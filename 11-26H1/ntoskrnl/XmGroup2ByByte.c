/*
 * XREFs of XmGroup2ByByte @ 0x1404A7A30
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1404A8920 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1404A8950 (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x1404A8AE0 (XmGetCodeByte.c)
 */

__int64 __fastcall XmGroup2ByByte(__int64 a1)
{
  __int64 v2; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  XmSetDataType();
  v2 = XmEvaluateAddressSpecifier(a1, &v4);
  *(_DWORD *)(a1 + 108) = XmGetCodeByte(a1) & 0x1F;
  XmSetDestinationValue(a1, v2);
  *(_DWORD *)(a1 + 124) += v4;
  return 1LL;
}
