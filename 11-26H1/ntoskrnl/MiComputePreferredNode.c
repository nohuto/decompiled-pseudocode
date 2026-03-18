/*
 * XREFs of MiComputePreferredNode @ 0x14030EAE0
 * Callers:
 *     MiHandleForkValidPteCopy @ 0x14030DAD8 (MiHandleForkValidPteCopy.c)
 *     MiReplenishCloneLeafPage @ 0x14030E9E0 (MiReplenishCloneLeafPage.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     MiCreateLargePfnList @ 0x14031037C (MiCreateLargePfnList.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14031070C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiCommitVadFillPageTables @ 0x140310ED0 (MiCommitVadFillPageTables.c)
 * Callees:
 *     MiThreadIdealNode @ 0x14030EB24 (MiThreadIdealNode.c)
 */

__int64 __fastcall MiComputePreferredNode(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = (*(_DWORD *)(a2 + 48) >> 10) & 0x7F;
  if ( v2 )
    return (unsigned int)(v2 - 1);
  if ( (*(_DWORD *)(a2 + 48) & 0x80000) == 0 && (v2 = (*(_DWORD *)(**(_QWORD **)(a2 + 80) + 56LL) >> 20) & 0x7F) != 0 )
    return (unsigned int)(v2 - 1);
  else
    return MiThreadIdealNode(a1, 0LL);
}
