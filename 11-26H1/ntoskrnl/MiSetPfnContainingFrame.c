/*
 * XREFs of MiSetPfnContainingFrame @ 0x14033DC90
 * Callers:
 *     MiReplaceTransitionPageInitializeTargetPfn @ 0x140293340 (MiReplaceTransitionPageInitializeTargetPfn.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402AE1C8 (MiExclusiveInsertPfnChainInList.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiSwitchValidPteToTransition @ 0x1402F0DC0 (MiSwitchValidPteToTransition.c)
 *     MiSetPfnOwnedAndActive @ 0x14033D0DC (MiSetPfnOwnedAndActive.c)
 *     MiCopyPageTablePageTransitionPtes @ 0x14033D6F0 (MiCopyPageTablePageTransitionPtes.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiInitializeMdlSinglePage @ 0x14033DBB8 (MiInitializeMdlSinglePage.c)
 *     MiInitializeMdlPfn @ 0x14033DCE0 (MiInitializeMdlPfn.c)
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MmInSwapProcess @ 0x140485F04 (MmInSwapProcess.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404D2D08 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiInitializeAwePfn @ 0x14050A044 (MiInitializeAwePfn.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 *     MiMakeLargePageTable @ 0x14052D62C (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x1406EBD98 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F4F60 (MiUpdateLargePageSectionPfns.c)
 *     MiQuarantineBadPage @ 0x1406F6228 (MiQuarantineBadPage.c)
 *     MiReturnBadPagesToBadList @ 0x1406F6894 (MiReturnBadPagesToBadList.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiChangePagingFileMaximum @ 0x1406FD580 (MiChangePagingFileMaximum.c)
 *     MiClearAweLargePageMetadata @ 0x140705C64 (MiClearAweLargePageMetadata.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 *     MiAllocateDummyPage @ 0x140CF89FC (MiAllocateDummyPage.c)
 *     MxSwitchToPfns @ 0x140CFE6E0 (MxSwitchToPfns.c)
 *     MxInsertEnclaveBootPages @ 0x140D0350C (MxInsertEnclaveBootPages.c)
 *     MiInitializeDecayPfns @ 0x140D07C7C (MiInitializeDecayPfns.c)
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
