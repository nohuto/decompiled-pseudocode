/*
 * XREFs of MiUnlockPageTableInternal @ 0x1402D13E0
 * Callers:
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     MiEvictPageTableLock @ 0x14029E998 (MiEvictPageTableLock.c)
 *     MiDeleteEmptyPageTableWorker @ 0x14029F288 (MiDeleteEmptyPageTableWorker.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiFinishPageTableForLargePage @ 0x1402A254C (MiFinishPageTableForLargePage.c)
 *     MiReleaseLargePdeMappings @ 0x1402A2D84 (MiReleaseLargePdeMappings.c)
 *     MiExpandSystemCache @ 0x1402A36A0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A38D8 (MiReturnSystemCacheRegionsToKva.c)
 *     MiCheckProcessShadow @ 0x1402B2E70 (MiCheckProcessShadow.c)
 *     MiSharePagesCleanup @ 0x1402C65C0 (MiSharePagesCleanup.c)
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiResolvePageTablePage @ 0x1402ECA70 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     MiLockPageLeafPageTable @ 0x1402EEB90 (MiLockPageLeafPageTable.c)
 *     MiClearPteAccessed @ 0x1402FF9B0 (MiClearPteAccessed.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiFaultInPagedPool @ 0x140306688 (MiFaultInPagedPool.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x140306B00 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiLockVirtualMemoryRevert @ 0x140306D38 (MiLockVirtualMemoryRevert.c)
 *     MiSharePagesYield @ 0x1403070E0 (MiSharePagesYield.c)
 *     MiSharePagesLockPageTable @ 0x1403072AC (MiSharePagesLockPageTable.c)
 *     MiCloneVad @ 0x14030A8F8 (MiCloneVad.c)
 *     MiUnlockClonePageTable @ 0x14030B67C (MiUnlockClonePageTable.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
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
 *     MiWorkingSetInfoCheckPageTable @ 0x1403146B0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiFillHyperPtes @ 0x140315640 (MiFillHyperPtes.c)
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
 *     MiDeleteVa @ 0x140322AC0 (MiDeleteVa.c)
 *     MiTerminateWsle @ 0x140324930 (MiTerminateWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140325648 (MiUnlockNestedPageTableWritePte.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiCreateSystemPageTable @ 0x140339800 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
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
 *     MiDecommitLockNewPageTable @ 0x1403615D8 (MiDecommitLockNewPageTable.c)
 *     MiDeleteVaDirect @ 0x140361EF0 (MiDeleteVaDirect.c)
 *     MiYieldPageTableWalk @ 0x140362E50 (MiYieldPageTableWalk.c)
 *     MiClearNonPagedPtes @ 0x1403633B8 (MiClearNonPagedPtes.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1403652A0 (MiFillPoolCommitPageTable.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MiValidWriteFaultProcess @ 0x1403A76E0 (MiValidWriteFaultProcess.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiQueryPteCleanup @ 0x1404101DC (MiQueryPteCleanup.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140441A60 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiDecommitPagesTail @ 0x14044B7AC (MiDecommitPagesTail.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiLockPoolCommitPageTable @ 0x140465970 (MiLockPoolCommitPageTable.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiEncodeProtoFill @ 0x140499E80 (MiEncodeProtoFill.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiUnlockVirtualAddreses @ 0x1404AA608 (MiUnlockVirtualAddreses.c)
 *     MiLockPageTableRange @ 0x1404B0CFC (MiLockPageTableRange.c)
 *     MiDirtyPte @ 0x1404B1254 (MiDirtyPte.c)
 *     MiConvertAndFlushWsleVas @ 0x1404B2C40 (MiConvertAndFlushWsleVas.c)
 *     MiMakeProtoLeafValid @ 0x1404BFB08 (MiMakeProtoLeafValid.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404D3AF0 (MiInitializeWorkingSetList.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404DDD28 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MmUpdateUserShadowStackValue @ 0x1404E0BFC (MmUpdateUserShadowStackValue.c)
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
 *     MiMakeSystemLeavesNonZero @ 0x140518F50 (MiMakeSystemLeavesNonZero.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140523988 (MiReadyReservedView.c)
 *     MiQueryPteFaultLargeVa @ 0x1405264C4 (MiQueryPteFaultLargeVa.c)
 *     MiFinishPteChangesInPageTable @ 0x140527D9C (MiFinishPteChangesInPageTable.c)
 *     MiDecommitRemoveEnclaveReleaseLocks @ 0x14052E654 (MiDecommitRemoveEnclaveReleaseLocks.c)
 *     MiDeleteBootRange @ 0x1406E35D0 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiGetNextNonGapPfnPage @ 0x1406E9108 (MiGetNextNonGapPfnPage.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiAddMappedPtesPadding @ 0x1406F5824 (MiAddMappedPtesPadding.c)
 *     MiCommitHotPatchTable @ 0x1406FBFCC (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     MiMarkBootGuardPage @ 0x1406FF204 (MiMarkBootGuardPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407004D4 (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweUnlock @ 0x140702224 (MiProtectAweUnlock.c)
 *     MiUnmapLegacyAwePage @ 0x140702C2C (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtesNewPageTable @ 0x140702E64 (MiWriteAwePtesNewPageTable.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070AEB0 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140CFC7FC (MiMarkBootKernelStack.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
        (volatile signed __int32 *)&stru_140E2D930.PriorityFloorCounts[4
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v9 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
    }
  }
}
