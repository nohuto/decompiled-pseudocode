/*
 * XREFs of HalpPciIsAddressWithinMcfg @ 0x14045DC70
 * Callers:
 *     HalpPciGetDeviceLocationFromPhysicalAddress @ 0x14045DC20 (HalpPciGetDeviceLocationFromPhysicalAddress.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpPciIsAddressWithinMcfg(unsigned __int64 a1, _WORD *a2, _BYTE *a3, int *a4)
{
  unsigned int i; // eax
  __int64 v6; // r11
  unsigned __int64 v7; // r9
  __int64 v8; // rcx

  for ( i = 0; i < HalpPciMcfgTableCount; ++i )
  {
    v6 = HalpPciMcfgTable + 16LL * i;
    v7 = *(_QWORD *)(v6 + 44);
    if ( a1 >= v7
      && a1 < v7 + ((*(unsigned __int8 *)(v6 + 55) - (unsigned int)*(unsigned __int8 *)(v6 + 54) + 1) << 20)
      && (!HalpPciUseNvidiaAlternateAddress || (a1 & 0xF00) == 0) )
    {
      v8 = a1 - v7;
      *a2 = *(_WORD *)(v6 + 52);
      *a3 = v8 >> 20;
      *a4 = ((unsigned __int8)*a4 ^ ((unsigned __int8)*a4 ^ (unsigned __int8)(v8 >> 15)) & 0x1F) & 0x1F ^ (unsigned __int8)(32 * (v8 >> 12));
      return 1;
    }
  }
  return 0;
}
