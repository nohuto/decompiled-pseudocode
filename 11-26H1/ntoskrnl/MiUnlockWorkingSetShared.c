/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1402EB6C0
 * Callers:
 *     MiWalkLevelCompleted @ 0x140247EA0 (MiWalkLevelCompleted.c)
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiMapWithLargePages @ 0x1402A2694 (MiMapWithLargePages.c)
 *     MiReleaseLargePdeMappings @ 0x1402A2D84 (MiReleaseLargePdeMappings.c)
 *     MiExpandSystemCache @ 0x1402A36A0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A38D8 (MiReturnSystemCacheRegionsToKva.c)
 *     MiDeleteSystemPageTables @ 0x1402A477C (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 *     MiWalkAllWorkingSets @ 0x1402A9370 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A996C (MiWalkAllHardLimitWorkingSets.c)
 *     MiSharePagesCleanup @ 0x1402C65C0 (MiSharePagesCleanup.c)
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MiUnlockSystemVa @ 0x1402E5200 (MiUnlockSystemVa.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402E9F30 (MiReleaseCachedPageLocks.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402EB0D0 (MiPerformFaultClusterMaintenance.c)
 *     MiReacquireWalkLocks @ 0x140301220 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiSetProtectionOnSection @ 0x140304DE0 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x140304F70 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiFaultInPagedPool @ 0x140306688 (MiFaultInPagedPool.c)
 *     MiComparePteProtections @ 0x1403069EC (MiComparePteProtections.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x140306B00 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiAllowProtectionChange @ 0x140306C24 (MiAllowProtectionChange.c)
 *     MiLockVirtualMemoryRevert @ 0x140306D38 (MiLockVirtualMemoryRevert.c)
 *     MiSharePagesYield @ 0x1403070E0 (MiSharePagesYield.c)
 *     MiCloneVad @ 0x14030A8F8 (MiCloneVad.c)
 *     MiBuildForkPte @ 0x14030AB74 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiReplenishCloneLeafPage @ 0x14030E9E0 (MiReplenishCloneLeafPage.c)
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     MiCommitVadEmptyPacket @ 0x140311378 (MiCommitVadEmptyPacket.c)
 *     MiProtectGoodCitizen @ 0x140311404 (MiProtectGoodCitizen.c)
 *     MiMakeProtoPrivate @ 0x1403114CC (MiMakeProtoPrivate.c)
 *     MiProtectInitialVaAttributes @ 0x14031162C (MiProtectInitialVaAttributes.c)
 *     MiProtectPrivateMemory @ 0x1403116B4 (MiProtectPrivateMemory.c)
 *     MiComputePageCommitment @ 0x140311CE0 (MiComputePageCommitment.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140312684 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031391C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiDeleteEmptyPageTables @ 0x140315248 (MiDeleteEmptyPageTables.c)
 *     MiInsertViewOfPhysicalSection @ 0x140315954 (MiInsertViewOfPhysicalSection.c)
 *     MiMakeHyperRangeAccessible @ 0x140316870 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockPageTableRange @ 0x140317220 (MiUnlockPageTableRange.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     MiIsCfgBitMapPageShared @ 0x140317EC0 (MiIsCfgBitMapPageShared.c)
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     MiAddMappedPtes @ 0x14033FE10 (MiAddMappedPtes.c)
 *     MiDeleteShadowStackPtes @ 0x1403407F4 (MiDeleteShadowStackPtes.c)
 *     MiWriteEnclavePte @ 0x140340C78 (MiWriteEnclavePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x140341288 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403414DC (MiAddPagesToEnclave.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiReleaseTrimViewResources @ 0x140360084 (MiReleaseTrimViewResources.c)
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140361270 (MiDeleteVaTail.c)
 *     MiDeletePagablePteRange @ 0x140361860 (MiDeletePagablePteRange.c)
 *     MiReleaseWalkLocks @ 0x140362F00 (MiReleaseWalkLocks.c)
 *     MiFinishDeleteNonPagedPtes @ 0x14036332C (MiFinishDeleteNonPagedPtes.c)
 *     MiUnlockPoolCommitWs @ 0x140365110 (MiUnlockPoolCommitWs.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A0340 (MiUnlockProbePacketWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x1403B9CE8 (MiEmptyTargetedWorkingSet.c)
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403B9D78 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403B9E10 (MiPeriodicTrimWorkingSet.c)
 *     MiEmptyWorkingSetConverge @ 0x1403BAD38 (MiEmptyWorkingSetConverge.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403BC020 (MiEmptyWorkingSetInitiate.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     MiOutSwapWorkingSet @ 0x1404055EC (MiOutSwapWorkingSet.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiGetWorkingSetInfoEx @ 0x14040F3EC (MiGetWorkingSetInfoEx.c)
 *     MiQueryPteCleanup @ 0x1404101DC (MiQueryPteCleanup.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140441A60 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiDecommitPagesTail @ 0x14044B7AC (MiDecommitPagesTail.c)
 *     MiRemoveVad @ 0x140455D20 (MiRemoveVad.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140467190 (MiDeleteEmptyPageTableCommit.c)
 *     MiAgeTargetedWorkingSet @ 0x140476D30 (MiAgeTargetedWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x140476F50 (MmQueryWorkingSetInformation.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiEncodeProtoFill @ 0x140499E80 (MiEncodeProtoFill.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiUnlockVirtualAddreses @ 0x1404AA608 (MiUnlockVirtualAddreses.c)
 *     MiLockPageTableRange @ 0x1404B0CFC (MiLockPageTableRange.c)
 *     MiDirtyPte @ 0x1404B1254 (MiDirtyPte.c)
 *     MiConvertAndFlushWsleVas @ 0x1404B2C40 (MiConvertAndFlushWsleVas.c)
 *     MiMakeProtoLeafValid @ 0x1404BFB08 (MiMakeProtoLeafValid.c)
 *     MmQueryCommitReleaseState @ 0x1404C804C (MmQueryCommitReleaseState.c)
 *     MiUnlockFaultWorkingSet @ 0x1404C9904 (MiUnlockFaultWorkingSet.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C9E74 (MmQuerySystemWorkingSetInformation.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404CA524 (MmUpdateOldWorkingSetPages.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404D3AF0 (MiInitializeWorkingSetList.c)
 *     MiObtainRotateProtectionRanges @ 0x1404D7300 (MiObtainRotateProtectionRanges.c)
 *     MmRemoveExecuteGrants @ 0x1404DBD5C (MmRemoveExecuteGrants.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404DDD28 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MmUpdateUserShadowStackValue @ 0x1404E0BFC (MmUpdateUserShadowStackValue.c)
 *     MmCheckProcessShadow @ 0x1404E5E90 (MmCheckProcessShadow.c)
 *     MiQueryImageExtensionInformation @ 0x1404E6410 (MiQueryImageExtensionInformation.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E72E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     MiMapKernelScp @ 0x1404F3160 (MiMapKernelScp.c)
 *     MiVadRangeIsIoSpace @ 0x1404F4AF0 (MiVadRangeIsIoSpace.c)
 *     MiUnmapKernelScp @ 0x1404F6C64 (MiUnmapKernelScp.c)
 *     MiComputeIdealLargePage @ 0x1404F85EC (MiComputeIdealLargePage.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404F9384 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiLockProcessParentPage @ 0x14050E464 (MiLockProcessParentPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140514568 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140523988 (MiReadyReservedView.c)
 *     MiQueryPteFaultLargeVa @ 0x1405264C4 (MiQueryPteFaultLargeVa.c)
 *     MiFinishPteChangesInPageTable @ 0x140527D9C (MiFinishPteChangesInPageTable.c)
 *     MiDecommitRemoveEnclaveReleaseLocks @ 0x14052E654 (MiDecommitRemoveEnclaveReleaseLocks.c)
 *     MiDeleteBootRange @ 0x1406E35D0 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
 *     MiCopyWorkingSetFields @ 0x1406E43D8 (MiCopyWorkingSetFields.c)
 *     MiWalkResetCommitPages @ 0x1406E531C (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiGetFileOnlyRanges @ 0x1406E8E88 (MiGetFileOnlyRanges.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1406EA99C (MmUnlockPhysicalPagesByVa.c)
 *     MiDiscardVirtualMemory @ 0x1406EF1F8 (MiDiscardVirtualMemory.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiAddMappedPtesPadding @ 0x1406F5824 (MiAddMappedPtesPadding.c)
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406F6C48 (MmRemoveSystemCacheFromDump.c)
 *     MiCommitHotPatchTable @ 0x1406FBFCC (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     MiMarkBootGuardPage @ 0x1406FF204 (MiMarkBootGuardPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407004D4 (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweUnlock @ 0x140702224 (MiProtectAweUnlock.c)
 *     MiUnmapLegacyAwePage @ 0x140702C2C (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtesNewPageTable @ 0x140702E64 (MiWriteAwePtesNewPageTable.c)
 *     MiCombineWorkingSet @ 0x140704578 (MiCombineWorkingSet.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070AEB0 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MiAddLoaderHalIoMappings @ 0x140CF1474 (MiAddLoaderHalIoMappings.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiMarkLargePageMappings @ 0x140CF3A74 (MiMarkLargePageMappings.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MiCreateInitialSystemWsles @ 0x140CF893C (MiCreateInitialSystemWsles.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140CFC7FC (MiMarkBootKernelStack.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     MiCheckProcessShadow @ 0x1402B2E70 (MiCheckProcessShadow.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404FBFC4 (MiDeleteDeferredCloneDescriptors.c)
 *     MiPreUnlockWorkingSetShared @ 0x14052FB44 (MiPreUnlockWorkingSetShared.c)
 *     FirstEntrySList @ 0x140730C80 (FirstEntrySList.c)
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
    v5 = &qword_140E37800;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
      v5 = (__int64 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1u);
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
