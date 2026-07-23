/*
 * XREFs of XmGroup3General @ 0x1405AEA40
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1404A1EFC (XmGetImmediateSourceValue.c)
 *     XmSetDataType @ 0x1404A1FB0 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 */

__int64 __fastcall XmGroup3General(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  char v3; // al
  int v4; // r8d
  unsigned __int16 *v5; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  XmSetDataType(a1);
  v2 = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, &v7);
  v3 = v7;
  *(_DWORD *)(a1 + 124) += v7;
  if ( *(_DWORD *)(a1 + 124) == 22 )
  {
    XmGetImmediateSourceValue(a1, 0);
    XmSetDestinationValue(a1, v2);
    *(_DWORD *)(a1 + 108) = v4;
  }
  else if ( (v3 & 4) != 0 )
  {
    v5 = (unsigned __int16 *)(a1 + 24);
    if ( (v3 & 2) != 0 )
      *(_QWORD *)(a1 + 88) = v5;
    else
      XmSetDestinationValue(a1, v5);
    XmSetSourceValue(a1, v2);
  }
  else
  {
    XmSetDestinationValue(a1, v2);
  }
  return 1LL;
}
