/*
 * XREFs of XmGroup2ByByte @ 0x140469BD0
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x14046A7D4 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x14046AA70 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x14046AA9C (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x14046AC28 (XmGetCodeByte.c)
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
