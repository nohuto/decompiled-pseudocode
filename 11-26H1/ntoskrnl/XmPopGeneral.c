/*
 * XREFs of XmPopGeneral @ 0x1405AEF50
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmPopGeneral(__int64 a1)
{
  bool v2; // cf
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 138) != 0;
  v4 = 0;
  *(_DWORD *)(a1 + 120) = v2 ? 3 : 1;
  result = XmEvaluateAddressSpecifier(a1, &v4);
  if ( result )
  {
    XmSetDestinationValue(a1, (unsigned __int16 *)result);
    return 1LL;
  }
  return result;
}
