/*
 * XREFs of ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x18003312C
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003230C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::SetSizingMargins(
        struct CTopLevelWindow::WindowFrame *a1,
        struct CTopLevelWindow::WindowFrame *a2,
        unsigned int a3,
        struct _MARGINS *a4)
{
  __int64 v4; // r10
  _QWORD *v5; // r8
  __int64 v6; // r11
  __int64 v7; // rdx
  struct _MARGINS **v8; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v4 = 2LL;
  v5 = (_QWORD *)((char *)a2 + 16 * a3 + 1480);
  v6 = a1 - a2;
  do
  {
    v7 = 2LL;
    v9[0] = *(_QWORD *)((char *)v5 + v6);
    v9[1] = *v5;
    v8 = (struct _MARGINS **)v9;
    do
    {
      if ( *v8 )
        (*v8)[2] = *a4;
      ++v8;
      --v7;
    }
    while ( v7 );
    ++v5;
    --v4;
  }
  while ( v4 );
}
