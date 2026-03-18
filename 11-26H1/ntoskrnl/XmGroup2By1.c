/*
 * XREFs of XmGroup2By1 @ 0x1405AC170
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1404A8920 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1404A8950 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGroup2By1(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  XmSetDataType(a1);
  result = XmEvaluateAddressSpecifier(a1, &v4);
  if ( result )
  {
    *(_DWORD *)(a1 + 108) = 1;
    XmSetDestinationValue(a1, (unsigned __int16 *)result);
    result = v3;
    *(_DWORD *)(a1 + 124) += v4;
  }
  return result;
}
