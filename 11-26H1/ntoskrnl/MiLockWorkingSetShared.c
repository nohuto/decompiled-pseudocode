/*
 * XREFs of MiLockWorkingSetShared @ 0x1402EDD60
 * Callers:
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
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
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MiInitializeProbePacketVm @ 0x1402E578C (MiInitializeProbePacketVm.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402EB0D0 (MiPerformFaultClusterMaintenance.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiSetProtectionOnSection @ 0x140304DE0 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x140304F70 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiFaultInPagedPool @ 0x140306688 (MiFaultInPagedPool.c)
 *     MiComparePteProtections @ 0x1403069EC (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x140306C24 (MiAllowProtectionChange.c)
 *     MiLockVirtualMemoryRevert @ 0x140306D38 (MiLockVirtualMemoryRevert.c)
 *     MiSharePagePrepare @ 0x140307910 (MiSharePagePrepare.c)
 *     MiCloneVad @ 0x14030A8F8 (MiCloneVad.c)
 *     MiBuildForkPte @ 0x14030AB74 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiReplenishCloneLeafPage @ 0x14030E9E0 (MiReplenishCloneLeafPage.c)
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140310ED0 (MiCommitVadFillPageTables.c)
 *     MiProtectGoodCitizen @ 0x140311404 (MiProtectGoodCitizen.c)
 *     MiProtectPrivateMemory @ 0x1403116B4 (MiProtectPrivateMemory.c)
 *     MiProtectValidPte @ 0x140311A38 (MiProtectValidPte.c)
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
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiAddMappedPtes @ 0x14033FE10 (MiAddMappedPtes.c)
 *     MiDeleteShadowStackPtes @ 0x1403407F4 (MiDeleteShadowStackPtes.c)
 *     MiWriteEnclavePte @ 0x140340C78 (MiWriteEnclavePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x140341128 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiCommitEnclavePages @ 0x140341288 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403414DC (MiAddPagesToEnclave.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiDecommitLockNewPageTable @ 0x1403615D8 (MiDecommitLockNewPageTable.c)
 *     MiDeletePagablePteRange @ 0x140361860 (MiDeletePagablePteRange.c)
 *     MiGetPageWalkLocks @ 0x140362E18 (MiGetPageWalkLocks.c)
 *     MiBeginDeleteNonPagedPtes @ 0x140363C8C (MiBeginDeleteNonPagedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MmProbeAndLockSelectedPages @ 0x14039F2E0 (MmProbeAndLockSelectedPages.c)
 *     MiFaultInProbeAddress @ 0x1403A04D0 (MiFaultInProbeAddress.c)
 *     MiEmptyTargetedWorkingSet @ 0x1403B9CE8 (MiEmptyTargetedWorkingSet.c)
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403B9D78 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403B9E10 (MiPeriodicTrimWorkingSet.c)
 *     MiEmptyWorkingSetConverge @ 0x1403BAD38 (MiEmptyWorkingSetConverge.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403BC020 (MiEmptyWorkingSetInitiate.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiOutSwapWorkingSet @ 0x1404055EC (MiOutSwapWorkingSet.c)
 *     MiGetWorkingSetInfoEx @ 0x14040F3EC (MiGetWorkingSetInfoEx.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140441A60 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiRemoveVad @ 0x140455D20 (MiRemoveVad.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140467190 (MiDeleteEmptyPageTableCommit.c)
 *     MiTrimViewLockProcessPte @ 0x14046C720 (MiTrimViewLockProcessPte.c)
 *     MiAgeTargetedWorkingSet @ 0x140476D30 (MiAgeTargetedWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x140476F50 (MmQueryWorkingSetInformation.c)
 *     MiLockProbePacketWorkingSet @ 0x14048AFAC (MiLockProbePacketWorkingSet.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiEncodeProtoFill @ 0x140499E80 (MiEncodeProtoFill.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiUnlockVirtualAddreses @ 0x1404AA608 (MiUnlockVirtualAddreses.c)
 *     MiLockPageTableRange @ 0x1404B0CFC (MiLockPageTableRange.c)
 *     MiDirtyPte @ 0x1404B1254 (MiDirtyPte.c)
 *     MiConvertAndFlushWsleVas @ 0x1404B2C40 (MiConvertAndFlushWsleVas.c)
 *     MiMakeProtoLeafValid @ 0x1404BFB08 (MiMakeProtoLeafValid.c)
 *     MmQueryCommitReleaseState @ 0x1404C804C (MmQueryCommitReleaseState.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C9E74 (MmQuerySystemWorkingSetInformation.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404CA524 (MmUpdateOldWorkingSetPages.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404D3AF0 (MiInitializeWorkingSetList.c)
 *     MiObtainRotateProtectionRanges @ 0x1404D7300 (MiObtainRotateProtectionRanges.c)
 *     MmRemoveExecuteGrants @ 0x1404DBD5C (MmRemoveExecuteGrants.c)
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
 *     MiDecommitGetMetadataSlot @ 0x1406FFEA0 (MiDecommitGetMetadataSlot.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407004D4 (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweRegion @ 0x140701F34 (MiProtectAweRegion.c)
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rcx
  unsigned int v4; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // esi
  unsigned __int8 v7; // di
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _DWORD *MmInternal; // rax
  unsigned __int8 CurrentIrql; // bl

  if ( (*(_DWORD *)(a1 + 184) & 0xFu) > 5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    return CurrentIrql;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v3 = &qword_140E37800;
    else
      v3 = (__int64 *)(a1 + 192);
    v4 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v5 = (_DWORD *)(*v3 + ((unsigned __int64)v4 << 6));
    v6 = v4;
    v7 = KeGetCurrentIrql();
    if ( v7 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v7, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw(v5);
      v8 = *v5 & 0x7FFFFFFF;
      while ( 1 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(v5, v8 + 1, v8);
        if ( v9 == v8 )
          break;
        if ( v8 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v5, v7, a3);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, v7);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v6;
    return v7;
  }
}
