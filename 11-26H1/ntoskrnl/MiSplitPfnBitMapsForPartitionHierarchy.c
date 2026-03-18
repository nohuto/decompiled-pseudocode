/*
 * XREFs of MiSplitPfnBitMapsForPartitionHierarchy @ 0x140709A18
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140707C4C (MiActOnPartitionNodePages.c)
 *     MiAcquireAddMemoryResources @ 0x140864F54 (MiAcquireAddMemoryResources.c)
 * Callees:
 *     MiSplitPfnBitMaps @ 0x14087A440 (MiSplitPfnBitMaps.c)
 */

__int64 __fastcall MiSplitPfnBitMapsForPartitionHierarchy(__int64 a1, __int64 a2, __int64 a3)
{
  while ( (unsigned int)MiSplitPfnBitMaps(a1, a2, a3) )
  {
    if ( (ULONG *)a1 == &MiSystemPartition )
      return 1LL;
    a1 = **(_QWORD **)(*(_QWORD *)(a1 + 256) + 72LL);
  }
  return 0LL;
}
