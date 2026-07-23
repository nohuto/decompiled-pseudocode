/*
 * XREFs of KiUnstackDetachProcess @ 0x140232120
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14030FDD0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140392C04 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140393844 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C6098 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C619C (CmSiReleaseProcessLockedPagesCharge.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403EA560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1403EDFBC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiGetWorkingSetInfoEx @ 0x14040EB0C (MiGetWorkingSetInfoEx.c)
 *     MiQueryPteCleanup @ 0x14040F8FC (MiQueryPteCleanup.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1404AD3B0 (PspIsProcessReadyForRemoteThread.c)
 *     PsQueryProcessCommandLine @ 0x1404AE810 (PsQueryProcessCommandLine.c)
 *     PspDetachSession @ 0x1404B05B0 (PspDetachSession.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404C3F54 (MmUpdateOldWorkingSetPages.c)
 *     MiDeleteFinalPageTables @ 0x1404C7A8C (MiDeleteFinalPageTables.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     KeCopyXfdMaskToTeb @ 0x1404E3478 (KeCopyXfdMaskToTeb.c)
 *     MiEmptyAccessLogs @ 0x1404FB2E0 (MiEmptyAccessLogs.c)
 *     MiFlushAllPages @ 0x1404FE17C (MiFlushAllPages.c)
 *     MiLockProcessParentPage @ 0x140507ED4 (MiLockProcessParentPage.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     SmQuerySystemInformation @ 0x1405293B4 (SmQuerySystemInformation.c)
 *     IoRaiseHardError @ 0x1405CD930 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1405E82A0 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x1405FF1C4 (KiTpWriteMemory.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     ExpSvmServicePageFault @ 0x1406D6410 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406E7B50 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E7C88 (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x1406EA39C (MmSetCommitReleaseEligibility.c)
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     MiDeleteAwePageTables @ 0x140705E80 (MiDeleteAwePageTables.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     PspApplyWorkingSetLimits @ 0x140774F6C (PspApplyWorkingSetLimits.c)
 *     DbgkpMarkProcessPeb @ 0x14077895C (DbgkpMarkProcessPeb.c)
 *     DbgkQueueUserExceptionReport @ 0x14078D54C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x1407979BC (IopIsNotNativeDriverImage.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1407BE6F0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x1407BF5D0 (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1407C43BC (AlpcpForceUnlinkSecureView.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407CA320 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1407F5EB0 (PsQueryProcessExceptionFlags.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1407F7010 (PspTrySetProcessPebThrottlingFlags.c)
 *     PsTerminateMinimalProcess @ 0x1407FFFD8 (PsTerminateMinimalProcess.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PsStartSiloMonitor @ 0x140801670 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408018B0 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x140820CA8 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x140821A4C (SmHwAcceleratorPartitionMgrCleanup.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x140821B84 (SmHwAcceleratorPartitionMgrStart.c)
 *     VmpPrefetchWorker @ 0x140823210 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x14082E77C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x14082E870 (EtwpUpdateProcessTracingCallback.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140868F44 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140869768 (CmpStartCLFSLog.c)
 *     MiHotPatchAllProcesses @ 0x1408764F0 (MiHotPatchAllProcesses.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14087BFD8 (MmDeleteShadowMapping.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x14087D0E0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14087D4E0 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPagesCleanup @ 0x14087DF90 (MiAllocateUserPhysicalPagesCleanup.c)
 *     MiAllocateUserPhysicalPagesReturnResults @ 0x14087E82C (MiAllocateUserPhysicalPagesReturnResults.c)
 *     MiCreateUserPhysicalView @ 0x14087EEBC (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140880B10 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubActiveLargePage @ 0x14088418C (MiScrubActiveLargePage.c)
 *     MiCopyLargeVad @ 0x14088621C (MiCopyLargeVad.c)
 *     ObpDecrementHandleCount2 @ 0x1408F6920 (ObpDecrementHandleCount2.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     PspWriteTebImpersonationInfo @ 0x140904AC0 (PspWriteTebImpersonationInfo.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140917BB8 (EtwpTrackGuidEntryRegistrations.c)
 *     MiQueryDetach @ 0x140923A4C (MiQueryDetach.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140947C5C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     PspFindFirstThreadByTebValue @ 0x140949C14 (PspFindFirstThreadByTebValue.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x14098A100 (PfSnPopulateReadList.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x140992BD0 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x140994890 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x140994E40 (NtUnmapViewOfSection.c)
 *     MmCreateTeb @ 0x140999CF8 (MmCreateTeb.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     ObSetHandleAttributes @ 0x1409BAAF0 (ObSetHandleAttributes.c)
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 *     MmIsFileMapped @ 0x1409BCA98 (MmIsFileMapped.c)
 *     ExpWnfWriteStateData @ 0x1409C7434 (ExpWnfWriteStateData.c)
 *     PoEnergyContextStart @ 0x1409CA91C (PoEnergyContextStart.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwpWriteProcessEvent @ 0x1409D04C4 (EtwpWriteProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x1409E5A34 (PspUpdatePebForAffinityChange.c)
 *     PspSetupUserStack @ 0x1409E6A04 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 *     PspSetupUserShadowStack @ 0x1409EE454 (PspSetupUserShadowStack.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     ExSweepHandleTable @ 0x1409FE810 (ExSweepHandleTable.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateProcessVads @ 0x140A03904 (MiAllocateProcessVads.c)
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 *     PspDeleteUserStack @ 0x140A04714 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x140A048C4 (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x140A05AEC (MmAssignProcessToJob.c)
 *     MiLockUnlockVmCleanup @ 0x140A063BC (MiLockUnlockVmCleanup.c)
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 *     MiCloneNoChange @ 0x140A07CA0 (MiCloneNoChange.c)
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140A08068 (MmInitializeHandBuiltProcess2.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x140A08964 (PsMapSystemDlls.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A141BC (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwTiLogReadWriteVm @ 0x140A2B640 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x140A2B990 (MiCopyVirtualMemory.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A33C00 (EtwpCovSampEnumerateProcess.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     MmPrefetchVirtualMemory @ 0x140A57D94 (MmPrefetchVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspQueryQuotaLimits @ 0x140A7CBE0 (PspQueryQuotaLimits.c)
 *     EtwTiLogProtectExecVm @ 0x140A81C70 (EtwTiLogProtectExecVm.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpTiQueryVad @ 0x140A88C30 (EtwpTiQueryVad.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A8ED68 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpRestoreWriteAccess @ 0x140A8F764 (AlpcpRestoreWriteAccess.c)
 *     MiGetWriteWatchFinish @ 0x140A92888 (MiGetWriteWatchFinish.c)
 *     MmProbeAndLockProcessPages @ 0x140A9E250 (MmProbeAndLockProcessPages.c)
 *     NtResetWriteWatch @ 0x140AB8910 (NtResetWriteWatch.c)
 *     PspWow64SetupUserStack @ 0x140AB9ACC (PspWow64SetupUserStack.c)
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 *     PspIumResolveVirtualFault @ 0x140AD33B4 (PspIumResolveVirtualFault.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     PspSetupReservedUserMappings @ 0x140ADB07C (PspSetupReservedUserMappings.c)
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 *     SmpKeyedStoreCreate @ 0x140ADC25C (SmpKeyedStoreCreate.c)
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 *     MiInSwapStoreWorker @ 0x140AECA90 (MiInSwapStoreWorker.c)
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B02108 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x140B023A4 (MmEnforceWorkingSetLimit.c)
 *     IopRaiseHardError @ 0x140B08B60 (IopRaiseHardError.c)
 *     VmpTracingEnabledCallback @ 0x140B22330 (VmpTracingEnabledCallback.c)
 *     MiInsertChildVads @ 0x140B22D0C (MiInsertChildVads.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspCreateSecureThread @ 0x140B36748 (PspCreateSecureThread.c)
 *     MiUnmapImageForEnclaveUse @ 0x140B481A8 (MiUnmapImageForEnclaveUse.c)
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B54B44 (SmProcessStoreMemoryPriorityRequest.c)
 *     MiMapImageForEnclaveUse @ 0x140B61ED8 (MiMapImageForEnclaveUse.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140B688A4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140B694A0 (PspProcessDynamicEHContinuationTargets.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C07A84 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 *     CmSaveKeyToBuffer @ 0x140C5E010 (CmSaveKeyToBuffer.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     EmpMapPhysicalAddress @ 0x140CBDB60 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140CDE944 (PspInitPhase3.c)
 *     EmpCacheBiosDate @ 0x140D0E39C (EmpCacheBiosDate.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140248DB0 (KiSetAddressPolicy.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140312650 (HvlSwitchVirtualAddressSpace.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall KiUnstackDetachProcess(__int64 a1, char a2)
{
  $241382875694CED3D471BC5892DE3337 *result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // esi
  $241382875694CED3D471BC5892DE3337 *v8; // rcx
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
  signed __int64 *p_SwapListEntry; // r14
  signed __int64 QuadPart; // rax
  char v29; // al
  __int64 v30; // r8
  int v31; // edx
  char v32; // r9
  unsigned __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-48h] BYREF
  __int128 v35; // [rsp+24h] [rbp-44h]
  char v36; // [rsp+70h] [rbp+8h] BYREF

  result = *($241382875694CED3D471BC5892DE3337 **)(a1 + 32);
  if ( result != ($241382875694CED3D471BC5892DE3337 *)1 )
  {
    if ( result )
    {
      return ($241382875694CED3D471BC5892DE3337 *)KiDetachProcess();
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
        || (v8 = &CurrentThread->152, ($241382875694CED3D471BC5892DE3337 *)v8->ApcState.ApcListHead[0].Flink != v8)
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
                p_SwapListEntry = (signed __int64 *)&Process->SwapListEntry;
                _m_prefetchw(&KiSupervisorXStateFeaturesLock.Timer.DueTime);
                QuadPart = KiSupervisorXStateFeaturesLock.Timer.DueTime.QuadPart;
                do
                {
                  *p_SwapListEntry = QuadPart;
                  p_ThreadListHead = QuadPart;
                  QuadPart = _InterlockedCompareExchange64(
                               (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.DueTime.QuadPart,
                               (signed __int64)p_SwapListEntry,
                               QuadPart);
                }
                while ( QuadPart != p_ThreadListHead );
                if ( !QuadPart )
                  KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry, 10, 0);
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
      if ( ($241382875694CED3D471BC5892DE3337 *)result->ApcState.ApcListHead[0].Flink != result )
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
        return ($241382875694CED3D471BC5892DE3337 *)HalpInterruptSendIpi(&v34, 31LL);
      }
    }
  }
  return result;
}
