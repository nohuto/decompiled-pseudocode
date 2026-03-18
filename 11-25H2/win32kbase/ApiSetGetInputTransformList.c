/*
 * XREFs of ApiSetGetInputTransformList @ 0x1401970FC
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x14018826C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     GetInputTransformList @ 0x14012DF10 (GetInputTransformList.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetInputTransformList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // esi
  unsigned int v8; // ebx
  int (*v9)(void); // rax
  __int64 v10; // r9

  v6 = a2;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6216LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)GetInputTransformList(a1, v6, a3, v10, a5);
  return v8;
}
