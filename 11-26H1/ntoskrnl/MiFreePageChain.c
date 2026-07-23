/*
 * XREFs of MiFreePageChain @ 0x140292004
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiReleaseUnusedPageFileReadResources @ 0x14037405C (MiReleaseUnusedPageFileReadResources.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1404FF830 (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreePageChain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  bool v6; // zf
  __int64 result; // rax

  while ( 1 )
  {
    v4 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      break;
    v5 = *v4;
    v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)a1 = v5;
    if ( v6 )
      *(_QWORD *)(a1 + 8) = 0LL;
    result = MiReleaseFreshPage((__int64)v4, a2, a3);
  }
  return result;
}
