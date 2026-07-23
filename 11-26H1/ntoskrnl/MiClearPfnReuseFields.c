/*
 * XREFs of MiClearPfnReuseFields @ 0x14031C280
 * Callers:
 *     MiReplaceTransitionPageFinish @ 0x140293E78 (MiReplaceTransitionPageFinish.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiRelinkStandbyPage @ 0x140298DC0 (MiRelinkStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1402A973C (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiDeleteSectionCluster @ 0x14031A390 (MiDeleteSectionCluster.c)
 *     MiWsleFree @ 0x14031B9C0 (MiWsleFree.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiDeleteClusterPage @ 0x1403D0168 (MiDeleteClusterPage.c)
 *     MiTradeStackPageFast @ 0x14040A528 (MiTradeStackPageFast.c)
 *     MiTradePageReleaseLocks @ 0x140468FDC (MiTradePageReleaseLocks.c)
 *     MiPreInitializeSystemImagePage @ 0x14052282C (MiPreInitializeSystemImagePage.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 *     MiWritePteHighLevelIsr @ 0x1406F79F0 (MiWritePteHighLevelIsr.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F82F8 (MiTradeIsolatedThreadStackPage.c)
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
