/*
 * XREFs of ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x180004438
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180003B34 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
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
  __int64 v5; // r8
  _QWORD *v6; // r10
  __int64 v7; // r11
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  v4 = a3 + 92LL;
  v5 = 2LL;
  v6 = (_QWORD *)((char *)a2 + 16 * v4);
  v7 = a1 - a2;
  do
  {
    v8 = 2LL;
    v10[0] = *(_QWORD *)((char *)v6 + v7);
    v10[1] = *v6;
    v9 = v10;
    do
    {
      if ( *v9 )
        *(struct _MARGINS *)(*v9 + 136LL) = *a4;
      ++v9;
      --v8;
    }
    while ( v8 );
    ++v6;
    --v5;
  }
  while ( v5 );
}
