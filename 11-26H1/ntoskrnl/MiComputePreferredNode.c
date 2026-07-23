/*
 * XREFs of MiComputePreferredNode @ 0x1402F0B60
 * Callers:
 *     MiHandleForkValidPteCopy @ 0x1402EFB58 (MiHandleForkValidPteCopy.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 * Callees:
 *     MiThreadIdealNode @ 0x1402F0BA4 (MiThreadIdealNode.c)
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
