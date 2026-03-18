/*
 * XREFs of XmGeneralBitOffset @ 0x1405AC040
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmSetDestinationValue @ 0x1404A8950 (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x1404A8BDC (XmSetSourceValue.c)
 *     XmGetOffsetAddress @ 0x1405AE960 (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmGeneralBitOffset(__int64 a1)
{
  bool v2; // cf
  __int64 v3; // rcx
  unsigned __int16 *OffsetAddress; // r8
  int v5; // edx
  int v6; // ecx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 138) != 0;
  v8 = 0;
  *(_DWORD *)(a1 + 120) = v2 ? 3 : 1;
  XmEvaluateAddressSpecifier(a1, (int *)&v8);
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * (v8 + 6LL)));
  if ( !*(_BYTE *)(a1 + 142) )
  {
    v5 = 536870908;
    if ( *(_DWORD *)(a1 + 120) != 3 )
      v5 = 536870910;
    OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(
                                          v3,
                                          *(_DWORD *)(a1 + 128) + ((*(_DWORD *)(a1 + 108) >> 3) & (unsigned int)v5));
  }
  v6 = 31;
  if ( *(_DWORD *)(a1 + 120) != 3 )
    v6 = 15;
  *(_DWORD *)(a1 + 108) &= v6;
  XmSetDestinationValue(a1, OffsetAddress);
  return 1LL;
}
