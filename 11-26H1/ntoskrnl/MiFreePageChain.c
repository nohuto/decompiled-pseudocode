/*
 * XREFs of MiFreePageChain @ 0x140292AA4
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402D60A8 (MiDetermineThreadFaultCluster.c)
 *     MiGetPageTablePages @ 0x140339E00 (MiGetPageTablePages.c)
 *     MiReleaseUnusedPageFileReadResources @ 0x1403722AC (MiReleaseUnusedPageFileReadResources.c)
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140505F80 (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140292190 (MiReleaseFreshPage.c)
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
