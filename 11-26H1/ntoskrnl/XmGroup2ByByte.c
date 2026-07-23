/*
 * XREFs of XmGroup2ByByte @ 0x1404A10C0
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1404A1FB0 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
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
