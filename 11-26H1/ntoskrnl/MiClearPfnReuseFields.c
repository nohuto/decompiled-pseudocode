/*
 * XREFs of MiClearPfnReuseFields @ 0x14031A250
 * Callers:
 *     MiReplaceTransitionPageFinish @ 0x140294918 (MiReplaceTransitionPageFinish.c)
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiRelinkStandbyPage @ 0x140299860 (MiRelinkStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1402AA32C (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiDeleteSectionCluster @ 0x140318360 (MiDeleteSectionCluster.c)
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MiDiscardTransitionPfnEx @ 0x140369FE0 (MiDiscardTransitionPfnEx.c)
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiDeleteClusterPage @ 0x1403C6268 (MiDeleteClusterPage.c)
 *     MiTradeStackPageFast @ 0x140415F18 (MiTradeStackPageFast.c)
 *     MiTradePageReleaseLocks @ 0x14046F85C (MiTradePageReleaseLocks.c)
 *     MiPreInitializeSystemImagePage @ 0x140520188 (MiPreInitializeSystemImagePage.c)
 *     MiAddExpansionNonPagedPool @ 0x140520A60 (MiAddExpansionNonPagedPool.c)
 *     MiWritePteHighLevelIsr @ 0x1406F2D80 (MiWritePteHighLevelIsr.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F3688 (MiTradeIsolatedThreadStackPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiClearPfnReuseFields(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 32) & 0xD7C7FFFF;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_DWORD *)(a1 + 32) = v1;
  result = *(_QWORD *)(a1 + 40);
  if ( (result & 0x10000000000LL) != 0 )
  {
    result = *(_DWORD *)(a1 + 36) & 0x18000000;
    *(_DWORD *)(a1 + 36) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 0;
  }
  return result;
}
