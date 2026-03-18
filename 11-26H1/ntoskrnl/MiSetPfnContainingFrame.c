/*
 * XREFs of MiSetPfnContainingFrame @ 0x14033BC10
 * Callers:
 *     MiReplaceTransitionPageInitializeTargetPfn @ 0x140293DE0 (MiReplaceTransitionPageInitializeTargetPfn.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402CC408 (MiExclusiveInsertPfnChainInList.c)
 *     MiReplaceTransitionPageInList @ 0x1402FC830 (MiReplaceTransitionPageInList.c)
 *     MiDemoteCombinedPte @ 0x1402FE120 (MiDemoteCombinedPte.c)
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiSwitchValidPteToTransition @ 0x14030ED40 (MiSwitchValidPteToTransition.c)
 *     MiSetPfnOwnedAndActive @ 0x14033B05C (MiSetPfnOwnedAndActive.c)
 *     MiCopyPageTablePageTransitionPtes @ 0x14033B670 (MiCopyPageTablePageTransitionPtes.c)
 *     MiInitializePfnForOtherProcess @ 0x14033B798 (MiInitializePfnForOtherProcess.c)
 *     MiInitializeMdlSinglePage @ 0x14033BB38 (MiInitializeMdlSinglePage.c)
 *     MiInitializeMdlPfn @ 0x14033BC60 (MiInitializeMdlPfn.c)
 *     MiReplacePageTablePage @ 0x14033C35C (MiReplacePageTablePage.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MmInSwapProcess @ 0x14048C3C4 (MmInSwapProcess.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404D9628 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiInitializeAwePfn @ 0x1405105D4 (MiInitializeAwePfn.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiAddExpansionNonPagedPool @ 0x140520A60 (MiAddExpansionNonPagedPool.c)
 *     MiMakeLargePageTable @ 0x14052B10C (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x1406E70E8 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F02F0 (MiUpdateLargePageSectionPfns.c)
 *     MiQuarantineBadPage @ 0x1406F15B8 (MiQuarantineBadPage.c)
 *     MiReturnBadPagesToBadList @ 0x1406F1C24 (MiReturnBadPagesToBadList.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiChangePagingFileMaximum @ 0x1406F88B0 (MiChangePagingFileMaximum.c)
 *     MiClearAweLargePageMetadata @ 0x140700F94 (MiClearAweLargePageMetadata.c)
 *     MiAllocateTopLevelPage @ 0x140ABD7B0 (MiAllocateTopLevelPage.c)
 *     MiInitializeSharedUserData @ 0x140CF1F60 (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140CF267C (MiAllocateDummyPage.c)
 *     MxSwitchToPfns @ 0x140CF8360 (MxSwitchToPfns.c)
 *     MxInsertEnclaveBootPages @ 0x140CFD18C (MxInsertEnclaveBootPages.c)
 *     MiInitializeDecayPfns @ 0x140D018DC (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnContainingFrame(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r8
  signed __int64 result; // rax
  signed __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             a2 ^ (a2 ^ v2) & 0xFFFFFF0000000000uLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 a2 ^ (a2 ^ result) & 0xFFFFFF0000000000uLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
