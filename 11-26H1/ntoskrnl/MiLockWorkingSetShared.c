/*
 * XREFs of MiLockWorkingSetShared @ 0x1402CFDE0
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
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
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MiInitializeProbePacketVm @ 0x1402C77CC (MiInitializeProbePacketVm.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x1402E6FF0 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiFaultInPagedPool @ 0x1402E8708 (MiFaultInPagedPool.c)
 *     MiComparePteProtections @ 0x1402E8A6C (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x1402E8CA4 (MiAllowProtectionChange.c)
 *     MiLockVirtualMemoryRevert @ 0x1402E8DB8 (MiLockVirtualMemoryRevert.c)
 *     MiSharePagePrepare @ 0x1402E9990 (MiSharePagePrepare.c)
 *     MiCloneVad @ 0x1402EC978 (MiCloneVad.c)
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 *     MiProtectGoodCitizen @ 0x140313438 (MiProtectGoodCitizen.c)
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
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
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiAddMappedPtes @ 0x140341E90 (MiAddMappedPtes.c)
 *     MiDeleteShadowStackPtes @ 0x140342874 (MiDeleteShadowStackPtes.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x1403431A8 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiCommitEnclavePages @ 0x140343308 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 *     MiGetPageWalkLocks @ 0x140364BB8 (MiGetPageWalkLocks.c)
 *     MiBeginDeleteNonPagedPtes @ 0x140365A2C (MiBeginDeleteNonPagedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 *     MiFaultInProbeAddress @ 0x1403A2230 (MiFaultInProbeAddress.c)
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403C3BE8 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     MiEmptyWorkingSetConverge @ 0x1403C4BA8 (MiEmptyWorkingSetConverge.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 *     MiEmptyTargetedWorkingSet @ 0x1403C7C08 (MiEmptyTargetedWorkingSet.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiOutSwapWorkingSet @ 0x1403FE6E0 (MiOutSwapWorkingSet.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiGetWorkingSetInfoEx @ 0x14040EB0C (MiGetWorkingSetInfoEx.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14043A570 (MiGetWsAndMakePageTablesNx.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1404608E0 (MiDeleteEmptyPageTableCommit.c)
 *     MiTrimViewLockProcessPte @ 0x140465EA0 (MiTrimViewLockProcessPte.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x1404706D0 (MmQueryWorkingSetInformation.c)
 *     MiLockProbePacketWorkingSet @ 0x140484AEC (MiLockProbePacketWorkingSet.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiEncodeProtoFill @ 0x1404939D0 (MiEncodeProtoFill.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MiLockPageTableRange @ 0x1404AA38C (MiLockPageTableRange.c)
 *     MiDirtyPte @ 0x1404AA8E4 (MiDirtyPte.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 *     MmQueryCommitReleaseState @ 0x1404C1D8C (MmQueryCommitReleaseState.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C38A4 (MmQuerySystemWorkingSetInformation.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404C3F54 (MmUpdateOldWorkingSetPages.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404CD360 (MiInitializeWorkingSetList.c)
 *     MiObtainRotateProtectionRanges @ 0x1404D0AD0 (MiObtainRotateProtectionRanges.c)
 *     MmRemoveExecuteGrants @ 0x1404D543C (MmRemoveExecuteGrants.c)
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
 *     MiDecommitGetMetadataSlot @ 0x140704B70 (MiDecommitGetMetadataSlot.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407051A4 (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweRegion @ 0x140706C04 (MiProtectAweRegion.c)
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
      v3 = &qword_140E37980;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
