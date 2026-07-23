/*
 * XREFs of XmGroup1General @ 0x1404A1C20
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmGetRegisterAddress @ 0x1404A1E5C (XmGetRegisterAddress.c)
 *     XmSetDataType @ 0x1404A1FB0 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 */

__int64 __fastcall XmGroup1General(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 RegisterAddress; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  XmSetDataType();
  result = XmEvaluateAddressSpecifier(a1, &v6);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      RegisterAddress = XmGetRegisterAddress(a1, v6);
      XmSetDestinationValue(a1, RegisterAddress);
    }
    else
    {
      XmSetDestinationValue(a1, result);
      v4 = XmGetRegisterAddress(v3, v6);
    }
    XmSetSourceValue(a1, v4);
    return 1LL;
  }
  return result;
}
