/*
 * XREFs of MiFreeLargePageMemory @ 0x1403C52E8
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1402A7A6C (MiFreeSlabEntry.c)
 *     MiDecommitLargePoolVa @ 0x1403C3720 (MiDecommitLargePoolVa.c)
 *     MiFreeContiguousPages @ 0x1403C3858 (MiFreeContiguousPages.c)
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1403C4140 (MiFreeMdlPageRun.c)
 *     MiFreeLargePages @ 0x1403C700C (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiUpdateLargePageBitMap @ 0x1403C5418 (MiUpdateLargePageBitMap.c)
 *     MiReadyLargePageToFree @ 0x1403C5920 (MiReadyLargePageToFree.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403C5A90 (MiConvertSmallPageRangeToLarge.c)
 *     MiFinishLargePageFree @ 0x1403C5FB0 (MiFinishLargePageFree.c)
 *     MiColdPageSizeSupported @ 0x1404919C0 (MiColdPageSizeSupported.c)
 *     MiChangePageHeatImmediate @ 0x140529498 (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiFreeLargePageMemory(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r13
  unsigned int v7; // r14d
  __int64 v8; // r12
  __int64 v9; // r8
  ULONG_PTR v10; // rdx
  unsigned int v12; // eax

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(BugCheckParameter2, a2);
  v6 = MiPageSizes[v3];
  v7 = 1;
  v8 = *(_QWORD *)(stru_140E2EB88.ThreadLock
                 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  if ( (a3 & 1) != 0 )
  {
    v12 = MiPageToNode(BugCheckParameter2);
    if ( (unsigned int)MiColdPageSizeSupported((unsigned int)v3, *(_QWORD *)(v8 + 16) + 56320LL * v12) )
    {
      v7 = 0;
      MiChangePageHeatImmediate(BugCheckParameter2, (unsigned int)v3, 0LL);
    }
  }
  v9 = 512LL;
  v10 = BugCheckParameter2;
  if ( (unsigned int)v3 > 1 )
    v10 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
  else
    v9 = v6;
  MiUpdateLargePageBitMap(v8, v10, v9, (a3 >> 2) & 4);
  if ( (unsigned int)MiReadyLargePageToFree(BugCheckParameter2, (unsigned int)v3, a3) )
    return MiFinishLargePageFree(48 * BugCheckParameter2 - 0x220000000000LL, (a3 & 1) == 0, v7, a3);
  else
    return 0LL;
}
