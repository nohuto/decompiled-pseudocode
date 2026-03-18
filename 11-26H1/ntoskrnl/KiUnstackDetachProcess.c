/*
 * XREFs of KiUnstackDetachProcess @ 0x1402307C0
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     SepAdtLogAuditRecord @ 0x1402153F8 (SepAdtLogAuditRecord.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021BA80 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     IoRemoveIoCompletion @ 0x1402207D0 (IoRemoveIoCompletion.c)
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402C5110 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140390E54 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140391AB4 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403B9E10 (MiPeriodicTrimWorkingSet.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403BC228 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403BC32C (CmSiReleaseProcessLockedPagesCharge.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403F0B90 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1403F460C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     MiGetWorkingSetInfoEx @ 0x14040F3EC (MiGetWorkingSetInfoEx.c)
 *     MiQueryPteCleanup @ 0x1404101DC (MiQueryPteCleanup.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1404B3DE0 (PspIsProcessReadyForRemoteThread.c)
 *     PsQueryProcessCommandLine @ 0x1404B54B0 (PsQueryProcessCommandLine.c)
 *     PspDetachSession @ 0x1404B6D7C (PspDetachSession.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404CA524 (MmUpdateOldWorkingSetPages.c)
 *     MiDeleteFinalPageTables @ 0x1404CE05C (MiDeleteFinalPageTables.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     KeCopyXfdMaskToTeb @ 0x1404EA0C8 (KeCopyXfdMaskToTeb.c)
 *     MiEmptyAccessLogs @ 0x140501AF0 (MiEmptyAccessLogs.c)
 *     MiFlushAllPages @ 0x140504838 (MiFlushAllPages.c)
 *     MiLockProcessParentPage @ 0x14050E464 (MiLockProcessParentPage.c)
 *     SmQuerySystemInformation @ 0x140526D44 (SmQuerySystemInformation.c)
 *     IoRaiseHardError @ 0x1405CB060 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1405E5930 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x1405FC774 (KiTpWriteMemory.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14063CDAC (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     ExpSvmServicePageFault @ 0x1406D23E0 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406E2EA4 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E2FDC (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x1406E56EC (MmSetCommitReleaseEligibility.c)
 *     MiLogHotPatchRundownForProcess @ 0x1406FC34C (MiLogHotPatchRundownForProcess.c)
 *     MiDeleteAwePageTables @ 0x1407011B0 (MiDeleteAwePageTables.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 *     PspApplyWorkingSetLimits @ 0x140771F6C (PspApplyWorkingSetLimits.c)
 *     DbgkpMarkProcessPeb @ 0x140775AB4 (DbgkpMarkProcessPeb.c)
 *     DbgkQueueUserExceptionReport @ 0x14078AA1C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x140794E8C (IopIsNotNativeDriverImage.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1407BB690 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x1407BC570 (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1407C0E28 (AlpcpForceUnlinkSecureView.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407C72C0 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1407F0350 (PsQueryProcessExceptionFlags.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1407F14B0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PsTerminateMinimalProcess @ 0x1407FA5A8 (PsTerminateMinimalProcess.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PsStartSiloMonitor @ 0x1407FBC40 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407FBE80 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x1407FDBD8 (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14081AA98 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14081B83C (SmHwAcceleratorPartitionMgrCleanup.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14081B974 (SmHwAcceleratorPartitionMgrStart.c)
 *     VmpPrefetchWorker @ 0x14081D000 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x14082853C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140828630 (EtwpUpdateProcessTracingCallback.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140862B64 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140863388 (CmpStartCLFSLog.c)
 *     MiHotPatchAllProcesses @ 0x140870190 (MiHotPatchAllProcesses.c)
 *     MiQueryProcessActivePatches @ 0x140874330 (MiQueryProcessActivePatches.c)
 *     MmCreateShadowMapping @ 0x140875970 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140875BF4 (MmDeleteShadowMapping.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140876584 (MiLoadDataIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x140876D00 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140877100 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPagesCleanup @ 0x140877BB0 (MiAllocateUserPhysicalPagesCleanup.c)
 *     MiAllocateUserPhysicalPagesReturnResults @ 0x14087844C (MiAllocateUserPhysicalPagesReturnResults.c)
 *     MiCreateUserPhysicalView @ 0x140878ADC (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14087A710 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubActiveLargePage @ 0x14087DD8C (MiScrubActiveLargePage.c)
 *     MiCopyLargeVad @ 0x14087FE1C (MiCopyLargeVad.c)
 *     ObpDecrementHandleCount2 @ 0x1408F0360 (ObpDecrementHandleCount2.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     MiQueryDetach @ 0x140920308 (MiQueryDetach.c)
 *     PspWriteTebImpersonationInfo @ 0x140928FB0 (PspWriteTebImpersonationInfo.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093C018 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x140940AF0 (EtwpCovSampEnumerateProcess.c)
 *     ExpWnfWriteStateData @ 0x14094BAC4 (ExpWnfWriteStateData.c)
 *     PoEnergyContextStart @ 0x14094EFDC (PoEnergyContextStart.c)
 *     EtwTraceAppStateChange @ 0x1409540B8 (EtwTraceAppStateChange.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140954D20 (EtwpPsProvProcessEnumCallback.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409556F0 (DbgkpPostFakeThreadMessages.c)
 *     PspFindFirstThreadByTebValue @ 0x140955E54 (PspFindFirstThreadByTebValue.c)
 *     ExSweepHandleTable @ 0x140958F4C (ExSweepHandleTable.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14095D738 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateProcessVads @ 0x14095E044 (MiAllocateProcessVads.c)
 *     NtProtectVirtualMemory @ 0x14095E180 (NtProtectVirtualMemory.c)
 *     PspDeleteUserStack @ 0x14095EE54 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x14095F004 (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x14095F3F0 (MmFreeVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x14096022C (MmAssignProcessToJob.c)
 *     MiLockUnlockVmCleanup @ 0x140960AFC (MiLockUnlockVmCleanup.c)
 *     MiCloneProcessAddressSpace @ 0x140961614 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140961AD0 (MiAllocateChildVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 *     MiCloneNoChange @ 0x140961FAC (MiCloneNoChange.c)
 *     MiReturnCloneResources @ 0x1409620A4 (MiReturnCloneResources.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x140962ADC (PsMapSystemDlls.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140964050 (MmInitializeHandBuiltProcess2.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     SmpKeyedStoreCreate @ 0x140966FB8 (SmpKeyedStoreCreate.c)
 *     EtwpWriteProcessEvent @ 0x14096E304 (EtwpWriteProcessEvent.c)
 *     EtwpProcessEnumCallback @ 0x14096EA90 (EtwpProcessEnumCallback.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     ObSetHandleAttributes @ 0x140970980 (ObSetHandleAttributes.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140985F5C (DbgkpPostFakeProcessCreateMessages.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409B77C0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x1409B9120 (PfSnPopulateReadList.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1409C0C80 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1409C1BF0 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x1409C38B0 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1409C3E60 (NtUnmapViewOfSection.c)
 *     MmCreateTeb @ 0x1409C8D18 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1409EA234 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409EA95C (PspWow64InitThread.c)
 *     PspSetupUserShadowStack @ 0x1409F1C84 (PspSetupUserShadowStack.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A14FC8 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwTiLogReadWriteVm @ 0x140A22020 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x140A22370 (MiCopyVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     MmPrefetchVirtualMemory @ 0x140A4EAA4 (MmPrefetchVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x140A6B5B0 (PspQueryQuotaLimits.c)
 *     EtwTiLogProtectExecVm @ 0x140A79D30 (EtwTiLogProtectExecVm.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpTiQueryVad @ 0x140A82DC0 (EtwpTiQueryVad.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A87C38 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpRestoreWriteAccess @ 0x140A88A00 (AlpcpRestoreWriteAccess.c)
 *     MiGetWriteWatchFinish @ 0x140A8DBB8 (MiGetWriteWatchFinish.c)
 *     MmProbeAndLockProcessPages @ 0x140A9A0D0 (MmProbeAndLockProcessPages.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x140A9AA04 (PspUpdatePebForAffinityChange.c)
 *     NtResetWriteWatch @ 0x140AB72D0 (NtResetWriteWatch.c)
 *     PspWow64SetupUserStack @ 0x140AB848C (PspWow64SetupUserStack.c)
 *     MmCreatePeb @ 0x140ACA4F0 (MmCreatePeb.c)
 *     PspIumResolveVirtualFault @ 0x140AD66A8 (PspIumResolveVirtualFault.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     PspSetupReservedUserMappings @ 0x140ADE30C (PspSetupReservedUserMappings.c)
 *     PspChangeProcessExecutionState @ 0x140ADE6AC (PspChangeProcessExecutionState.c)
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 *     MiInSwapStoreWorker @ 0x140AE9FA0 (MiInSwapStoreWorker.c)
 *     NtLoadEnclaveData @ 0x140AEE740 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B003D8 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x140B00674 (MmEnforceWorkingSetLimit.c)
 *     IopRaiseHardError @ 0x140B06A30 (IopRaiseHardError.c)
 *     VmpTracingEnabledCallback @ 0x140B1FF10 (VmpTracingEnabledCallback.c)
 *     MiInsertChildVads @ 0x140B2090C (MiInsertChildVads.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspCreateSecureThread @ 0x140B342F8 (PspCreateSecureThread.c)
 *     MiUnmapImageForEnclaveUse @ 0x140B46178 (MiUnmapImageForEnclaveUse.c)
 *     MiCombineIdenticalPages @ 0x140B49E94 (MiCombineIdenticalPages.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B522A4 (SmProcessStoreMemoryPriorityRequest.c)
 *     MiMapImageForEnclaveUse @ 0x140B5ED58 (MiMapImageForEnclaveUse.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140B65804 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140B66514 (PspProcessDynamicEHContinuationTargets.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B792F0 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C01874 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 *     CmSaveKeyToBuffer @ 0x140C58010 (CmSaveKeyToBuffer.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     EmpMapPhysicalAddress @ 0x140CB7B1C (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140CD85C4 (PspInitPhase3.c)
 *     EmpCacheBiosDate @ 0x140D080CC (EmpCacheBiosDate.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140247450 (KiSetAddressPolicy.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiReleaseThreadLockLowerIrql @ 0x1402C45E0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402C4710 (KiAcquireThreadLockRaiseToDpc.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402C79B0 (HvlSwitchVirtualAddressSpace.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall KiUnstackDetachProcess(__int64 a1, char a2)
{
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // esi
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v8; // rcx
  struct _KTHREAD *Flink; // r8
  struct _KTHREAD *v10; // r9
  _LIST_ENTRY *v11; // r8
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 p_ThreadListHead; // rcx
  __int64 Group; // r15
  unsigned __int64 GroupIndex; // r12
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v20; // rax
  unsigned int i; // ecx
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned __int8 v24; // di
  unsigned __int32 Value; // eax
  unsigned __int32 v26; // ett
  _SINGLE_LIST_ENTRY *p_SwapListEntry; // r14
  struct _SINGLE_LIST_ENTRY *SListFaultAddress; // rax
  char v29; // al
  __int64 v30; // r8
  int v31; // edx
  char v32; // r9
  unsigned __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-48h] BYREF
  __int128 v35; // [rsp+24h] [rbp-44h]
  char v36; // [rsp+70h] [rbp+8h] BYREF

  result = *($7A85BAF4F1FA08634C1C4A3E45B775B3 **)(a1 + 32);
  if ( result != ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)1 )
  {
    if ( result )
    {
      return ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)KiDetachProcess();
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      if ( (a2 & 2) != 0 )
      {
        CurrentIrql = 15;
        v36 = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        v36 = CurrentIrql;
        v7 = 0;
LABEL_9:
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          while ( 1 )
          {
            if ( (++v7 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
              {
LABEL_57:
                HvlNotifyLongSpinWait(v7);
                goto LABEL_12;
              }
              for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
              {
                v22 = KiProcessorBlock[i];
                if ( (*(_BYTE *)(v22 + 35) & 1) != 0 )
                {
                  v23 = *(_QWORD *)(v22 + 36600);
                  if ( !v23 || !*(_BYTE *)(v23 + 65) || !*(_BYTE *)(v23 + 64) )
                    goto LABEL_57;
                }
              }
            }
            _mm_pause();
LABEL_12:
            if ( !CurrentThread->ThreadLock )
              goto LABEL_9;
          }
        }
      }
      for ( ; CurrentThread->ApcState.KernelApcPending; CurrentIrql = v36 )
      {
        if ( CurrentIrql )
          break;
        if ( CurrentThread->SpecialApcDisable )
          break;
        KiReleaseThreadLockLowerIrql(CurrentThread, 0LL);
        KiAcquireThreadLockRaiseToDpc(CurrentThread, &v36);
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v8 = &CurrentThread->152, ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v8->ApcState.ApcListHead[0].Flink != v8)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
      CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
      CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
      CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
      Flink = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[0].Flink;
      if ( Flink == (struct _KTHREAD *)&CurrentThread->600 )
      {
        CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
        v8->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v8;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v8->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v8;
        Blink->Flink = (struct _LIST_ENTRY *)v8;
      }
      v10 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v11 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v10 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v11->Flink = v11;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v20 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v11->Flink = (struct _LIST_ENTRY *)v10;
        CurrentThread->ApcState.ApcListHead[1].Blink = v20;
        v10->Header.WaitListHead.Flink = v11;
        v20->Flink = v11;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( (a2 & 2) == 0 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      p_ThreadListHead = (unsigned __int64)CurrentThread->ApcState.Process;
      Group = CurrentPrcb->Group;
      GroupIndex = CurrentPrcb->GroupIndex;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(p_ThreadListHead + 128) + 8 * Group + 8),
        GroupIndex);
      v16 = *(_QWORD *)(p_ThreadListHead + 40);
      if ( KiKvaShadow )
      {
        v17 = v16 | 0x8000000000000000uLL;
        if ( (v16 & 2) == 0 )
          v17 = *(_QWORD *)(p_ThreadListHead + 40);
        __writegsqword(0xB000u, v17);
        KiSetAddressPolicy(*(unsigned __int8 *)(p_ThreadListHead + 352));
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(v16);
      else
        __writecr3(v16);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        p_ThreadListHead = __readcr4();
        if ( (p_ThreadListHead & 0x20080) != 0 )
        {
          __writecr4(p_ThreadListHead ^ 0x80);
          __writecr4(p_ThreadListHead);
        }
        else
        {
          v33 = __readcr3();
          __writecr3(v33);
        }
      }
      v18 = GroupIndex;
      _interlockedbittestandreset64((volatile signed __int32 *)&Process->ActiveProcessors->Bitmap[Group], GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( (a2 & 2) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8) == 8 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = 2;
          KiRaiseIrqlProcessIrqlFlags(v24, v18);
        }
        KiAcquireKobjectLockSafe(Process);
        Value = Process->StackCount.Value;
        if ( (Value & 7) == 0 )
        {
          p_ThreadListHead = (unsigned __int64)&Process->ThreadListHead;
          if ( *(_QWORD *)p_ThreadListHead != p_ThreadListHead )
          {
            while ( Value < 8 )
            {
              p_ThreadListHead = Value & 0xFFFFFFF8 | 3;
              v26 = Value;
              Value = _InterlockedCompareExchange(&Process->StackCount.Value, p_ThreadListHead, Value);
              if ( v26 == Value )
              {
                _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
                p_SwapListEntry = &Process->SwapListEntry;
                _m_prefetchw(&KiSupervisorXStateFeaturesLock.SListFaultAddress);
                SListFaultAddress = (struct _SINGLE_LIST_ENTRY *)KiSupervisorXStateFeaturesLock.SListFaultAddress;
                do
                {
                  p_SwapListEntry->Next = SListFaultAddress;
                  p_ThreadListHead = (unsigned __int64)SListFaultAddress;
                  SListFaultAddress = (struct _SINGLE_LIST_ENTRY *)_InterlockedCompareExchange64(
                                                                     (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.SListFaultAddress,
                                                                     (signed __int64)p_SwapListEntry,
                                                                     (signed __int64)SListFaultAddress);
                }
                while ( SListFaultAddress != (struct _SINGLE_LIST_ENTRY *)p_ThreadListHead );
                if ( !SListFaultAddress )
                  KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 10, 0);
                goto LABEL_71;
              }
            }
          }
        }
        _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
LABEL_71:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
        __writecr8(v24);
      }
      result = &CurrentThread->152;
      if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)result->ApcState.ApcListHead[0].Flink != result )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v35 = 0LL;
        if ( (KiTrapFeatures & 0x10) != 0 )
        {
          v29 = HalpDisableInterrupts(p_ThreadListHead, v18, KeGetCurrentPrcb());
          v31 = *(_DWORD *)(v30 + 168);
          v32 = v29;
          *(_DWORD *)(v30 + 168) = v31 | 2;
          if ( !v31 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v32 )
            _enable();
        }
        v34 = 5;
        return ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)HalpInterruptSendIpi(&v34, 31LL);
      }
    }
  }
  return result;
}
