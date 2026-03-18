/*
 * XREFs of HvTrimHive @ 0x1408B8958
 * Callers:
 *     CmpTrimHive @ 0x1408B781C (CmpTrimHive.c)
 * Callees:
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     HvpMapEntryMarkTrimmed @ 0x1408B89FC (HvpMapEntryMarkTrimmed.c)
 *     HvpMapEntryIsPoolBacked @ 0x1408B9254 (HvpMapEntryIsPoolBacked.c)
 *     HvpMapEntryIsDiscardable @ 0x1408D9350 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryIsNewAlloc @ 0x1408DB6C0 (HvpMapEntryIsNewAlloc.c)
 *     HvpGetCellMap @ 0x140C58690 (HvpGetCellMap.c)
 */

void __fastcall HvTrimHive(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 CellMap; // rax
  __int64 v7; // rcx
  char *AnyMultiplexedVm; // rax
  __int64 v9; // r10

  v4 = a2;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) == 0 && a2 < a3 )
  {
    do
    {
      CellMap = HvpGetCellMap(a1, v4);
      if ( !(unsigned __int8)HvpMapEntryIsDiscardable(CellMap) )
      {
        HvpMapEntryMarkTrimmed();
        if ( (unsigned __int8)HvpMapEntryIsNewAlloc() )
        {
          if ( (unsigned __int8)HvpMapEntryIsPoolBacked(v7) )
          {
            AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
            MiDeprioritizeVirtualAddresses(
              *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0uLL,
              (unsigned __int64)*(unsigned int *)(v9 + 16) >> 12,
              (__int64)AnyMultiplexedVm,
              24);
          }
        }
      }
      v4 += 4096;
    }
    while ( v4 < a3 );
  }
}
