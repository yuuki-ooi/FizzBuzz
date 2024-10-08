#include<stdio.h>

int main(void){

    int a;
    int num;

    printf("数字を入力してください: ");
    scanf("%d",&num);


    for(int i=0;i<num;i++){
        if(i%3){
            printf("Fizz");
        }
        else if(i%5){
            printf("Buzz");
        }
        else if(i%3&&i%5){
            printf("FizzBuzz");
        }
        else 
        printf("%d",i);
    }
}