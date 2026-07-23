/*
 * XREFs of MiUnlockPageTableInternal @ 0x1402B31A0
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiEvictPageTableLock @ 0x14029DEE8 (MiEvictPageTableLock.c)
 *     MiDeleteEmptyPageTableWorker @ 0x14029E7D8 (MiDeleteEmptyPageTableWorker.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiFinishPageTableForLargePage @ 0x1402A1A9C (MiFinishPageTableForLargePage.c)
 *     MiReleaseLargePdeMappings @ 0x1402A22D4 (MiReleaseLargePdeMappings.c)
 *     MiExpandSystemCache @ 0x1402A2BF0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A2E28 (MiReturnSystemCacheRegionsToKva.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiFaultInPagedPool @ 0x1402E8708 (MiFaultInPagedPool.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiLockVirtualMemoryRevert @ 0x1402E8DB8 (MiLockVirtualMemoryRevert.c)
 *     MiSharePagesYield @ 0x1402E9160 (MiSharePagesYield.c)
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 *     MiCloneVad @ 0x1402EC978 (MiCloneVad.c)
 *     MiUnlockClonePageTable @ 0x1402ED6FC (MiUnlockClonePageTable.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiCheckProcessShadow @ 0x1402FDB40 (MiCheckProcessShadow.c)
 *     MiSharePagesCleanup @ 0x140311260 (MiSharePagesCleanup.c)
 *     MiCommitVadEmptyPacket @ 0x1403133AC (MiCommitVadEmptyPacket.c)
 *     MiProtectGoodCitizen @ 0x140313438 (MiProtectGoodCitizen.c)
 *     MiMakeProtoPrivate @ 0x140313500 (MiMakeProtoPrivate.c)
 *     MiProtectInitialVaAttributes @ 0x140313660 (MiProtectInitialVaAttributes.c)
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031594C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1403166E0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiFillHyperPtes @ 0x140317670 (MiFillHyperPtes.c)
 *     MiInsertViewOfPhysicalSection @ 0x140317984 (MiInsertViewOfPhysicalSection.c)
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockPageTableRange @ 0x140319250 (MiUnlockPageTableRange.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiIsCfgBitMapPageShared @ 0x140319EF0 (MiIsCfgBitMapPageShared.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiTerminateWsle @ 0x140326960 (MiTerminateWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiAddMappedPtes @ 0x140341E90 (MiAddMappedPtes.c)
 *     MiDeleteShadowStackPtes @ 0x140342874 (MiDeleteShadowStackPtes.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x140343308 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiReleaseTrimViewResources @ 0x140361E24 (MiReleaseTrimViewResources.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140363010 (MiDeleteVaTail.c)
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     MiYieldPageTableWalk @ 0x140364BF0 (MiYieldPageTableWalk.c)
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140367040 (MiFillPoolCommitPageTable.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MiValidWriteFaultProcess @ 0x1403A9440 (MiValidWriteFaultProcess.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiQueryPteCleanup @ 0x14040F8FC (MiQueryPteCleanup.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14043A570 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiLockPoolCommitPageTable @ 0x14045E930 (MiLockPoolCommitPageTable.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiEncodeProtoFill @ 0x1404939D0 (MiEncodeProtoFill.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MiLockPageTableRange @ 0x1404AA38C (MiLockPageTableRange.c)
 *     MiDirtyPte @ 0x1404AA8E4 (MiDirtyPte.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404CD360 (MiInitializeWorkingSetList.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MmUpdateUserShadowStackValue @ 0x1404DA2DC (MmUpdateUserShadowStackValue.c)
 *     MiQueryImageExtensionInformation @ 0x1404DF9B0 (MiQueryImageExtensionInformation.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E06A4 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiMapKernelScp @ 0x1404EC740 (MiMapKernelScp.c)
 *     MiVadRangeIsIoSpace @ 0x1404EE0D0 (MiVadRangeIsIoSpace.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiComputeIdealLargePage @ 0x1404F1BFC (MiComputeIdealLargePage.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404F2994 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiLockProcessParentPage @ 0x140507ED4 (MiLockProcessParentPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14050DFD8 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMakeSystemLeavesNonZero @ 0x1405129C0 (MiMakeSystemLeavesNonZero.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140525FF8 (MiReadyReservedView.c)
 *     MiQueryPteFaultLargeVa @ 0x140528B34 (MiQueryPteFaultLargeVa.c)
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 *     MiDecommitRemoveEnclaveReleaseLocks @ 0x140530B74 (MiDecommitRemoveEnclaveReleaseLocks.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiGetNextNonGapPfnPage @ 0x1406EDDA8 (MiGetNextNonGapPfnPage.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiAddMappedPtesPadding @ 0x1406FA494 (MiAddMappedPtesPadding.c)
 *     MiCommitHotPatchTable @ 0x140700C9C (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407051A4 (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweUnlock @ 0x140706EF4 (MiProtectAweUnlock.c)
 *     MiUnmapLegacyAwePage @ 0x1407078FC (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtesNewPageTable @ 0x140707B34 (MiWriteAwePtesNewPageTable.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070FB60 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdx
  char v4; // al
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  volatile signed __int32 *v9; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v4 )
    {
      if ( v4 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        return;
      }
      v5 = 3LL;
      if ( v4 == 5 )
        v5 = 0LL;
    }
    else
    {
      v5 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v5]);
    return;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
    || a2 < 0xFFFFF6FB7DBED000uLL
    || a2 > 0xFFFFF6FB7DBEDFFFuLL
    || (v6 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      _InterlockedAnd(
        (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                                     * ((unsigned __int64)(2
                                                                                         * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5)
                                                                     + 4],
        ~(2 << ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                               * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F)));
    else
      _InterlockedAnd64((volatile signed __int64 *)a2, 0xCFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v7 = (a2 >> 3) & 0x1FF;
    v8 = *(_DWORD *)(v6 + 4 * v7);
    v9 = (volatile signed __int32 *)(v6 + 4 * v7);
    if ( (v8 & 0x3FFFFFFF) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v9, 0xBFFFFFFF);
        _InterlockedDecrement(v9);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
      }
    }
    else
    {
      if ( v8 >= 0 )
        KeBugCheckEx(0x10u, (ULONG_PTR)v9, 0x100uLL, 0LL, 0LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v9 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
    }
  }
}
