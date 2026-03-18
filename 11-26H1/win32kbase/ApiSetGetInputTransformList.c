/*
 * XREFs of ApiSetGetInputTransformList @ 0x1400535C0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     GetInputTransformList @ 0x14016460C (GetInputTransformList.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetInputTransformList(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  int v7; // ebp
  unsigned int v8; // ebx
  int (*v9)(void); // rax
  int v10; // r9d

  v7 = a1;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5776LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)GetInputTransformList(v7, a2, a3, v10, a5);
  return v8;
}
