/*
 * XREFs of MiCheckVerifierFunctionsCfgState @ 0x140881EA8
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MiImageContainsVa @ 0x1404B69B8 (MiImageContainsVa.c)
 *     CfgAddressToBitState @ 0x1404EA160 (CfgAddressToBitState.c)
 */

__int64 __fastcall MiCheckVerifierFunctionsCfgState(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *DataTableEntryByAddress; // rsi
  unsigned int i; // edi
  __int64 v7; // r9
  __int64 v8; // r11

  v2 = 0;
  DataTableEntryByAddress = 0LL;
  for ( i = 0; i < a2; ++i )
  {
    v7 = a1 + 24LL * i;
    if ( !DataTableEntryByAddress || !MiImageContainsVa((__int64)DataTableEntryByAddress, *(_QWORD *)(v7 + 8)) )
    {
      DataTableEntryByAddress = MmFindDataTableEntryByAddress(*(_QWORD *)(v7 + 8));
      if ( !DataTableEntryByAddress )
        return (unsigned int)-1073741811;
    }
    if ( ((__int64)DataTableEntryByAddress[6].Blink & 0x2000) != 0
      && (CfgAddressToBitState(v8 + 0x800000000000LL, (const signed __int64 *)stru_140E2D2D0.WaitBlock[0].SparePtr) & 0xFFFFFFFD) == 0 )
    {
      return (unsigned int)-1073741436;
    }
  }
  return v2;
}
