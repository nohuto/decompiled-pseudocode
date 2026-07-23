/*
 * XREFs of XmBitScanGeneral @ 0x1405AE740
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 */

__int64 __fastcall XmBitScanGeneral(__int64 a1)
{
  bool v2; // cf
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 138) != 0;
  v4 = 0;
  *(_DWORD *)(a1 + 120) = v2 ? 3 : 1;
  result = XmEvaluateAddressSpecifier(a1, (int *)&v4);
  if ( result )
  {
    *(_QWORD *)(a1 + 88) = a1 + 4 * (v4 + 6LL);
    XmSetSourceValue(a1, (unsigned __int16 *)result);
    return 1LL;
  }
  return result;
}
