/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1402CD700
 * Callers:
 *     MiWalkLevelCompleted @ 0x140249800 (MiWalkLevelCompleted.c)
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiReleaseLargePdeMappings @ 0x1402A22D4 (MiReleaseLargePdeMappings.c)
 *     MiExpandSystemCache @ 0x1402A2BF0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A2E28 (MiReturnSystemCacheRegionsToKva.c)
 *     MiDeleteSystemPageTables @ 0x1402A3CCC (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MiUnlockSystemVa @ 0x1402C7240 (MiUnlockSystemVa.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x1402E6FF0 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiFaultInPagedPool @ 0x1402E8708 (MiFaultInPagedPool.c)
 *     MiComparePteProtections @ 0x1402E8A6C (MiComparePteProtections.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiAllowProtectionChange @ 0x1402E8CA4 (MiAllowProtectionChange.c)
 *     MiLockVirtualMemoryRevert @ 0x1402E8DB8 (MiLockVirtualMemoryRevert.c)
 *     MiSharePagesYield @ 0x1402E9160 (MiSharePagesYield.c)
 *     MiCloneVad @ 0x1402EC978 (MiCloneVad.c)
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
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
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
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
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
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
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     MiFinishDeleteNonPagedPtes @ 0x1403650CC (MiFinishDeleteNonPagedPtes.c)
 *     MiUnlockPoolCommitWs @ 0x140366EB0 (MiUnlockPoolCommitWs.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403C3BE8 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     MiEmptyWorkingSetConverge @ 0x1403C4BA8 (MiEmptyWorkingSetConverge.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 *     MiEmptyTargetedWorkingSet @ 0x1403C7C08 (MiEmptyTargetedWorkingSet.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     MiOutSwapWorkingSet @ 0x1403FE6E0 (MiOutSwapWorkingSet.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiGetWorkingSetInfoEx @ 0x14040EB0C (MiGetWorkingSetInfoEx.c)
 *     MiQueryPteCleanup @ 0x14040F8FC (MiQueryPteCleanup.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14043A570 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1404608E0 (MiDeleteEmptyPageTableCommit.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x1404706D0 (MmQueryWorkingSetInformation.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiEncodeProtoFill @ 0x1404939D0 (MiEncodeProtoFill.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MiLockPageTableRange @ 0x1404AA38C (MiLockPageTableRange.c)
 *     MiDirtyPte @ 0x1404AA8E4 (MiDirtyPte.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 *     MmQueryCommitReleaseState @ 0x1404C1D8C (MmQueryCommitReleaseState.c)
 *     MiUnlockFaultWorkingSet @ 0x1404C3324 (MiUnlockFaultWorkingSet.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C38A4 (MmQuerySystemWorkingSetInformation.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404C3F54 (MmUpdateOldWorkingSetPages.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404CD360 (MiInitializeWorkingSetList.c)
 *     MiObtainRotateProtectionRanges @ 0x1404D0AD0 (MiObtainRotateProtectionRanges.c)
 *     MmRemoveExecuteGrants @ 0x1404D543C (MmRemoveExecuteGrants.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MmUpdateUserShadowStackValue @ 0x1404DA2DC (MmUpdateUserShadowStackValue.c)
 *     MmCheckProcessShadow @ 0x1404DF430 (MmCheckProcessShadow.c)
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
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140525FF8 (MiReadyReservedView.c)
 *     MiQueryPteFaultLargeVa @ 0x140528B34 (MiQueryPteFaultLargeVa.c)
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 *     MiDecommitRemoveEnclaveReleaseLocks @ 0x140530B74 (MiDecommitRemoveEnclaveReleaseLocks.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 *     MiCopyWorkingSetFields @ 0x1406E9088 (MiCopyWorkingSetFields.c)
 *     MiWalkResetCommitPages @ 0x1406E9FCC (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiGetFileOnlyRanges @ 0x1406EDB28 (MiGetFileOnlyRanges.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1406EF63C (MmUnlockPhysicalPagesByVa.c)
 *     MiDiscardVirtualMemory @ 0x1406F3E98 (MiDiscardVirtualMemory.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiAddMappedPtesPadding @ 0x1406FA494 (MiAddMappedPtesPadding.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406FB8B8 (MmRemoveSystemCacheFromDump.c)
 *     MiCommitHotPatchTable @ 0x140700C9C (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407051A4 (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweUnlock @ 0x140706EF4 (MiProtectAweUnlock.c)
 *     MiUnmapLegacyAwePage @ 0x1407078FC (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtesNewPageTable @ 0x140707B34 (MiWriteAwePtesNewPageTable.c)
 *     MiCombineWorkingSet @ 0x140709248 (MiCombineWorkingSet.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070FB60 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 *     MiAddLoaderHalIoMappings @ 0x140CF77EC (MiAddLoaderHalIoMappings.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MiMarkLargePageMappings @ 0x140CF9DF4 (MiMarkLargePageMappings.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MiCreateInitialSystemWsles @ 0x140CFECBC (MiCreateInitialSystemWsles.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiCheckProcessShadow @ 0x1402FDB40 (MiCheckProcessShadow.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404F5510 (MiDeleteDeferredCloneDescriptors.c)
 *     MiPreUnlockWorkingSetShared @ 0x140532044 (MiPreUnlockWorkingSetShared.c)
 *     FirstEntrySList @ 0x140735850 (FirstEntrySList.c)
 */

void __fastcall MiUnlockWorkingSetShared(__int64 a1, __int64 a2)
{
  KIRQL v2; // si
  unsigned __int8 v4; // bl
  __int64 *v5; // r14
  _DWORD *MmInternal; // rax
  unsigned int v7; // eax
  volatile LONG *v8; // rcx
  _KPROCESS *Process; // rbx

  v2 = 17;
  if ( (_BYTE)a2 != 2 )
    v2 = a2;
  v4 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v4 < 6u )
  {
    if ( (unsigned __int16)*(_DWORD *)(a1 + 188) )
    {
      LOBYTE(a2) = v2;
      MiPreUnlockWorkingSetShared(a1, a2);
    }
    v5 = &qword_140E37980;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
      v5 = (__int64 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      v7 = MmInternal[81];
    else
      v7 = 0;
    v8 = (volatile LONG *)(*v5 + ((unsigned __int64)v7 << 6));
    if ( v2 == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v8);
    }
    else
    {
      ExReleaseSpinLockShared(v8, v2);
      if ( !v4 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process[2].ActiveProcessors != (volatile _KAFFINITY_EX *)-896LL )
          {
            if ( FirstEntrySList((PSLIST_HEADER)&Process[2].ActiveProcessors[4].StaticBitmap[19]) )
              MiDeleteDeferredCloneDescriptors((ULONG_PTR)Process);
          }
        }
      }
    }
  }
  else if ( v2 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    __writecr8(v2);
  }
}
