/*
 * XREFs of XmMoveImmediate @ 0x1405721F0
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x14046A7D4 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x14046A9BC (XmGetImmediateSourceValue.c)
 *     XmSetDataType @ 0x14046AA70 (XmSetDataType.c)
 */

__int64 __fastcall XmMoveImmediate(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  XmSetDataType(a1);
  *(_QWORD *)(a1 + 88) = XmEvaluateAddressSpecifier(a1, &v3);
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, 0);
  return 1LL;
}
