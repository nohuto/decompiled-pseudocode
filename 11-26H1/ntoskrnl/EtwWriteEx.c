/*
 * XREFs of EtwWriteEx @ 0x140212F70
 * Callers:
 *     EtwpPsProvTracePriority @ 0x140202A0C (EtwpPsProvTracePriority.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211480 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     PpmPerfRecordUtility @ 0x140212000 (PpmPerfRecordUtility.c)
 *     EtwpTraceFileIo @ 0x140212800 (EtwpTraceFileIo.c)
 *     PoDeviceReleaseIrp @ 0x140212C90 (PoDeviceReleaseIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x140212F30 (EtwWriteTransfer.c)
 *     EtwpTraceFileName @ 0x140215A90 (EtwpTraceFileName.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140218B90 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x140218C6C (PopDiagTraceIrpStart.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140219E80 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceIrpFinish @ 0x14021A300 (PopDiagTraceIrpFinish.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140253660 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerLogProc @ 0x140254918 (KiIntSteerLogProc.c)
 *     KiIntSteerLogStatus @ 0x140254C20 (KiIntSteerLogStatus.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402558F8 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PpmEventProcessorPerfStateChange @ 0x140255C1C (PpmEventProcessorPerfStateChange.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x140255E78 (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x140255FA8 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmEventComputeEnergy @ 0x1402562DC (PpmEventComputeEnergy.c)
 *     SshpTracingWriteBlockerStateChange @ 0x1402567B4 (SshpTracingWriteBlockerStateChange.c)
 *     PpmEventTracePerfCheckStart @ 0x140256A98 (PpmEventTracePerfCheckStart.c)
 *     PpmEventTracePerfCheckStop @ 0x140256C98 (PpmEventTracePerfCheckStop.c)
 *     EtwpTraceLostEvent @ 0x140257138 (EtwpTraceLostEvent.c)
 *     EtwpLogMemNodeInfo @ 0x140257F54 (EtwpLogMemNodeInfo.c)
 *     EtwpTiVadQueryEventWrite @ 0x140258ACC (EtwpTiVadQueryEventWrite.c)
 *     PpmEventSoftParkRankListChanged @ 0x14025B7C0 (PpmEventSoftParkRankListChanged.c)
 *     PpmEventHgsHardwareTable @ 0x14025D178 (PpmEventHgsHardwareTable.c)
 *     IoReuseIrp @ 0x140268650 (IoReuseIrp.c)
 *     SeLogAccessFailure @ 0x1402B59D0 (SeLogAccessFailure.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14032FC60 (PpmPerfArbitratorApplyProcessorState.c)
 *     EtwTraceContFreeEvent @ 0x14034539C (EtwTraceContFreeEvent.c)
 *     EtwpLogMemInfo @ 0x14034843C (EtwpLogMemInfo.c)
 *     EtwTraceContAllocationEvent @ 0x14034A910 (EtwTraceContAllocationEvent.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140395C74 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PpmEventMediaBufferingNotify @ 0x140395F78 (PpmEventMediaBufferingNotify.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403ADE64 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1403AE2C8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 *     PoFxSetComponentLatency @ 0x1403B1590 (PoFxSetComponentLatency.c)
 *     PopDiagTraceFxDevicePowered @ 0x1403B2FFC (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1403B41C0 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1403B4504 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1403B919C (PopDiagTraceFxDeviceDirectedTransition.c)
 *     WheapGenerateETWErrorRecord @ 0x1403DFE40 (WheapGenerateETWErrorRecord.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F8A0C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1403FCDAC (FsRtlpOplockCleanup.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140418DA0 (PoTraceSystemTimerResolutionKernel.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x14041DAE0 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventHgsContainmentThresholdCheck @ 0x14041E588 (PpmEventHgsContainmentThresholdCheck.c)
 *     PpmEventTraceHeteroResponse @ 0x14041EC50 (PpmEventTraceHeteroResponse.c)
 *     PpmEventParkNodeRecordedStats @ 0x14041F52C (PpmEventParkNodeRecordedStats.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x14041F84C (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventParkingCountSelection @ 0x14042060C (PpmEventParkingCountSelection.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x14042076C (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x1404208F0 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1404213F0 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventParkNodeRestriction @ 0x140421920 (PpmEventParkNodeRestriction.c)
 *     KiIntSteerLogState @ 0x140423C40 (KiIntSteerLogState.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14042B748 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x14042D0EC (PopDiagTraceNonAttributedCpuReferences.c)
 *     PpmEventPlatformVetoRequest @ 0x14042D18C (PpmEventPlatformVetoRequest.c)
 *     PpmEventCoreParkingForceParkedStateChange @ 0x14042D33C (PpmEventCoreParkingForceParkedStateChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x14042D44C (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140434FBC (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceRegisterSystemState @ 0x140437930 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceSetSystemState @ 0x1404383F0 (PopDiagTraceSetSystemState.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14044DEC8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14044E340 (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x14044E43C (PpmEventThermalCapChange.c)
 *     PpmPerfSelectProcessorState @ 0x1404502F0 (PpmPerfSelectProcessorState.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     MiLogBadMapper @ 0x140459AC0 (MiLogBadMapper.c)
 *     PpmEventDomainPerfStateChange @ 0x140468D90 (PpmEventDomainPerfStateChange.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x14047A1E0 (EtwTraceDpcProfilingStackBegin.c)
 *     EtwTraceDpcProfilingStack @ 0x14047A358 (EtwTraceDpcProfilingStack.c)
 *     EtwpNetProvTraceNetwork @ 0x14047D7AC (EtwpNetProvTraceNetwork.c)
 *     IopInitActivityIdIrp @ 0x140481F80 (IopInitActivityIdIrp.c)
 *     EtwTraceMemoryAcg @ 0x140485B74 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140486D58 (PopDiagTraceDeviceAcquireIrp.c)
 *     EtwpTiFillVadEventWrite @ 0x140492078 (EtwpTiFillVadEventWrite.c)
 *     PnpDiagnosticTraceObject @ 0x140493A8C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTrace @ 0x140493DF8 (PnpDiagnosticTrace.c)
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x14049F320 (McGenEventWrite_EtwWriteTransfer.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1404A5D5C (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTracePowerRequestChange @ 0x1404A6A68 (PopDiagTracePowerRequestChange.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1404A6E08 (PpmEventTraceMakeupPerfCheck.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x1404A8F78 (SshpTracingWriteBlockerStateRundown.c)
 *     PpmEventTraceExpectedUtility @ 0x1404A9E28 (PpmEventTraceExpectedUtility.c)
 *     PpmEventQosClassPerfSelection @ 0x1404B5804 (PpmEventQosClassPerfSelection.c)
 *     PpmEventTraceHeteroSets @ 0x1404BDA24 (PpmEventTraceHeteroSets.c)
 *     PoTraceForceIdleStateChange @ 0x1404C5454 (PoTraceForceIdleStateChange.c)
 *     PpmEventPlatformVetoRundown @ 0x1404C5BDC (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404C5D28 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTracePreVetoAccounting @ 0x1404C5F1C (PpmEventTracePreVetoAccounting.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1404C69C0 (PopDiagTraceDeviceIdleCheck.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1404C6BA4 (PpmEventCoreParkingStateChangeEx.c)
 *     SshpWriteBlocker @ 0x1404C9220 (SshpWriteBlocker.c)
 *     EtwTraceMdlAllocationEvent @ 0x1404CAFD8 (EtwTraceMdlAllocationEvent.c)
 *     PpmEventCoreParkingStateChange @ 0x1404CB1F8 (PpmEventCoreParkingStateChange.c)
 *     PpmEventTraceLatencySensitivityHint @ 0x1404CBF64 (PpmEventTraceLatencySensitivityHint.c)
 *     KsepLogEtwMessage @ 0x1404CCBF4 (KsepLogEtwMessage.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1404D56D4 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1404D64A0 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     EtwpTraceLostSystemEvent @ 0x1404D81F4 (EtwpTraceLostSystemEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1404D8D60 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1404DA0E0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1404DA1A0 (PopDiagTraceIdleResiliencyEnd.c)
 *     SSHSupportEtwWrite @ 0x1404DBE1C (SSHSupportEtwWrite.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404E091C (PnpDiagnosticTraceObjectWithStatus.c)
 *     PopSqmAddToStream @ 0x1404E2894 (PopSqmAddToStream.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404E33C4 (_tlgWriteEx_EtwWriteEx.c)
 *     EtwpTraceLostWppEvent @ 0x1404E6FD0 (EtwpTraceLostWppEvent.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404EAF3C (PopDiagTraceSessionDisplayStateChange.c)
 *     PpmEventVetoReasonRundown @ 0x1404EB9C4 (PpmEventVetoReasonRundown.c)
 *     IoTransferActivityId @ 0x1404EBAC0 (IoTransferActivityId.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1404EBC70 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1404ED270 (PpmEventSoftParkLatencyUpdate.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1404F0044 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1404F2A9C (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PoFxSetComponentWake @ 0x1404F5140 (PoFxSetComponentWake.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1404F5A8C (PpmEventTraceFailedPerfCheckStart.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1404F66E0 (PopDiagTraceDiskIdleCheck.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1404F8504 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1404F96C4 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404F99EC (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceFxPerfRequest @ 0x1404F9B54 (PopDiagTraceFxPerfRequest.c)
 *     PpmEventTraceLPIState @ 0x1404FBEFC (PpmEventTraceLPIState.c)
 *     KsepDsEventPnpStartDevice @ 0x1404FCC30 (KsepDsEventPnpStartDevice.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404FF7CC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x140500B2C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x140502714 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsNormalizedTable @ 0x140502DA4 (PpmEventHgsNormalizedTable.c)
 *     HalpIommuTraceFault @ 0x140502F70 (HalpIommuTraceFault.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x140503884 (PpmEventHgsHardwareTableResonMapTable.c)
 *     PnpDiagnosticTraceElamDecision @ 0x140503A58 (PnpDiagnosticTraceElamDecision.c)
 *     PpmEventHgsContainmentUnparkedCount @ 0x14050ACF4 (PpmEventHgsContainmentUnparkedCount.c)
 *     PopDiagTraceFxVetoMaskUpdate @ 0x14050AF24 (PopDiagTraceFxVetoMaskUpdate.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14050B4D8 (PopDiagTraceRtcWakeInfo.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x14050DC74 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     PopDiagTraceIrpPended @ 0x14050FAB0 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140514298 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     KsepEvntLogFlagsApplied @ 0x140514B1C (KsepEvntLogFlagsApplied.c)
 *     PpmEventParkNodeParkHintChanged @ 0x140514EC8 (PpmEventParkNodeParkHintChanged.c)
 *     PopDiagTraceEsState @ 0x14051C100 (PopDiagTraceEsState.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x140524DF0 (EtwTraceProcessSetInPrivateMode.c)
 *     SmEtwLogStoreOp @ 0x140525698 (SmEtwLogStoreOp.c)
 *     SmEtwLogCompactionOp @ 0x140527960 (SmEtwLogCompactionOp.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140527C0C (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventVpQosChange @ 0x140529810 (PpmEventVpQosChange.c)
 *     PoTraceForceIdleReset @ 0x14052F2F8 (PoTraceForceIdleReset.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x14052F4D0 (PoTraceSystemTimerResolutionIgnore.c)
 *     EtwTraceCpuPartitionDpcSchedulingViolation @ 0x140530EFC (EtwTraceCpuPartitionDpcSchedulingViolation.c)
 *     KsepDsEventPnpIrp @ 0x140533184 (KsepDsEventPnpIrp.c)
 *     HalpTscTraceProcessorDelta @ 0x140584134 (HalpTscTraceProcessorDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x140584210 (HalpTscTraceProcessorSynchronization.c)
 *     HalpTscTraceStatus @ 0x14058430C (HalpTscTraceStatus.c)
 *     HalpTscTraceSynchronizationSummary @ 0x1405843AC (HalpTscTraceSynchronizationSummary.c)
 *     HalpIommuLogEarlyFault @ 0x1405A00EC (HalpIommuLogEarlyFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1405B41C8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1405C1714 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x1405C8EC8 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x1405C8FAC (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x1405C90B8 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x1405C91C4 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x1405C92D0 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x1405C93DC (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x1405C94E8 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1405D9088 (PnpDiagnosticTraceElamStatus.c)
 *     KasaniSendTelemetryDriver @ 0x1405DDA90 (KasaniSendTelemetryDriver.c)
 *     KsepEvntLogShimsApplied @ 0x1405FE07C (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1405FEAFC (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1405FEC2C (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1405FED28 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1405FEE0C (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1405FEF28 (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1405FF034 (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1405FF100 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1405FF1BC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405FF2CC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405FF3B0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405FF4AC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405FF578 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405FF684 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1405FF91C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1405FFA28 (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PopIrpWatchdogBugcheck @ 0x140600A58 (PopIrpWatchdogBugcheck.c)
 *     PoTraceDynamicTickDisabled @ 0x140607F90 (PoTraceDynamicTickDisabled.c)
 *     PopDiagTraceAbnormalReset @ 0x140608034 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x140608168 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14060828C (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x140608374 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140608564 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1406086B8 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14060877C (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x14060885C (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140608920 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentResidency @ 0x140608A10 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140608AF4 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxDeviceInvalidTransition @ 0x140608BD8 (PopDiagTraceFxDeviceInvalidTransition.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x140608D88 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140608EC4 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140609070 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140609114 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceShutdownAction @ 0x14060926C (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceThermalStateChange @ 0x14060939C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1406094C4 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140609860 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140609994 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventAffinityMask @ 0x14060DE10 (PpmEventAffinityMask.c)
 *     PpmEventAutonomousModeChange @ 0x14060DF10 (PpmEventAutonomousModeChange.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x14060DFDC (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x14060E190 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x14060E318 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x14060E414 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventLPICoreParking @ 0x14060E510 (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x14060E5D0 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodePreference @ 0x14060E7C0 (PpmEventParkNodePreference.c)
 *     PpmEventParkTopologyDetected @ 0x14060E9F0 (PpmEventParkTopologyDetected.c)
 *     PpmEventProcessorVetoRequest @ 0x14060EBF0 (PpmEventProcessorVetoRequest.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14060ECFC (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x14060EE30 (PpmEventWpsParkingTableUpdateReason.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x140611E64 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14063E4D0 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     SmEtwLogRegionOp @ 0x14063F354 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14063F42C (SmEtwLogStoreCorruption.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x1406C461C (EtwTraceCpuPartitionAffinityViolation.c)
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x1406C47B4 (EtwTraceCpuPartitionGenericDpcViolation.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x1406C4854 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1406C4A58 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x1406C4F64 (EtwTraceSingleDpcSoftTimeout.c)
 *     EtwTraceWorkQueueHealthMetrics @ 0x1406C51A0 (EtwTraceWorkQueueHealthMetrics.c)
 *     EtwTraceWorkQueueHealthMetricsBucketUpperBounds @ 0x1406C52C8 (EtwTraceWorkQueueHealthMetricsBucketUpperBounds.c)
 *     SeEtwWriteKMCveEvent @ 0x1406C60E0 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1406C6AF4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     BapdWriteEtwEvents @ 0x1406C9F80 (BapdWriteEtwEvents.c)
 *     KitLogFeatureUsage @ 0x1406D2550 (KitLogFeatureUsage.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x1406D71E0 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x1406D73FC (WheapLogProcessTerminateEvent.c)
 *     SmKmEtwLogStoreChange @ 0x14081A678 (SmKmEtwLogStoreChange.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x14082A400 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14082AFF8 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpPsProvTraceImage @ 0x140A798C4 (EtwpPsProvTraceImage.c)
 *     EtwpTimLogMitigationForProcess @ 0x140B1C5EC (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140B259AC (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140BFD8EC (PopDiagTraceFirmwareS3Stats.c)
 *     KasanInitSystem @ 0x140CC7D20 (KasanInitSystem.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140CD1C18 (PopDiagTraceAdaptiveBootOverride.c)
 *     PopDiagTraceDirtyTransition @ 0x140CD1D84 (PopDiagTraceDirtyTransition.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140CD2B5C (PopTriggerDiagTraceAoAcCapability.c)
 *     EtwpTraceBootSystemTime @ 0x140CE11E8 (EtwpTraceBootSystemTime.c)
 *     EtwpTraceSystemInitialization @ 0x140CE1440 (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140CE30D8 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v8; // ebp
  REGHANDLE v9; // rbx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 Keyword; // rdx
  unsigned __int8 v17; // al
  __int64 v18; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // al
  bool v23; // zf
  __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  __int128 v25; // [rsp+98h] [rbp-70h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-60h]

  v8 = Filter;
  v24 = 0LL;
  v9 = 0LL;
  if ( RegHandle )
    v9 = RegHandle;
  v12 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( !v9 )
    return -1073741816;
  v13 = *(_QWORD *)(v9 + 112);
  v14 = v13 + 28;
  if ( !v13 )
    v14 = 0LL;
  if ( *(_WORD *)(v9 + 100) )
  {
    v15 = *(_QWORD *)(v9 + 32);
    Keyword = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v15 + 96) )
    {
      v17 = *(_BYTE *)(v15 + 100);
      if ( (EventDescriptor->Level <= v17 || !v17)
        && ((*(_DWORD *)(v15 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v15 + 112)) != 0 && (Keyword & *(_QWORD *)(v15 + 120)) == *(_QWORD *)(v15 + 120)) )
      {
        v12 = (unsigned int)EtwpEventWriteFull(
                              *(_QWORD *)(v9 + 32),
                              *(unsigned __int16 *)(v9 + 100),
                              Filter,
                              Flags,
                              (__int64)EventDescriptor,
                              0,
                              0,
                              (__int64)ActivityId,
                              (__int64)RelatedActivityId,
                              UserDataCount,
                              (__int64)UserData,
                              0LL,
                              (__int64)&v25,
                              0LL,
                              *(_WORD *)(v9 + 98),
                              v14,
                              (__int64)&v24);
      }
    }
  }
  if ( *(_WORD *)(v9 + 102) )
  {
    v20 = *(_QWORD *)(v9 + 40);
    v21 = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v20 + 96) )
    {
      v22 = *(_BYTE *)(v20 + 100);
      if ( (EventDescriptor->Level <= v22 || !v22)
        && ((*(_DWORD *)(v20 + 104) & 0x40) != 0 && !v21
         || (v21 & *(_QWORD *)(v20 + 112)) != 0 && (v21 & *(_QWORD *)(v20 + 120)) == *(_QWORD *)(v20 + 120)) )
      {
        v12 = (unsigned int)EtwpEventWriteFull(
                              *(_QWORD *)(v9 + 32),
                              *(unsigned __int16 *)(v9 + 102),
                              v8,
                              Flags,
                              (__int64)EventDescriptor,
                              0,
                              0,
                              (__int64)ActivityId,
                              (__int64)RelatedActivityId,
                              UserDataCount,
                              (__int64)UserData,
                              0LL,
                              (__int64)&v25,
                              *(_QWORD *)(v9 + 40),
                              *(_WORD *)(v9 + 98),
                              v14,
                              (__int64)&v24);
      }
    }
  }
  v18 = *(_QWORD *)(v9 + 32);
  if ( *(_QWORD *)(v18 + 656) )
  {
    v23 = *(_WORD *)(v9 + 104) == 0;
    v25 = 0LL;
    v26 = 0LL;
    if ( !v23
      && (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(v18 + 656) + 96LL,
                            EventDescriptor->Level,
                            EventDescriptor->Keyword,
                            v12) )
    {
      v12 = (unsigned int)EtwpEventWriteFull(
                            *(_QWORD *)(*(_QWORD *)(v9 + 32) + 656LL),
                            *(unsigned __int16 *)(v9 + 104),
                            0,
                            Flags,
                            (__int64)EventDescriptor,
                            0,
                            0,
                            (__int64)ActivityId,
                            (__int64)RelatedActivityId,
                            UserDataCount,
                            (__int64)UserData,
                            0LL,
                            (__int64)&v25,
                            0LL,
                            *(_WORD *)(v9 + 98),
                            v14,
                            (__int64)&v24);
    }
    if ( *(_WORD *)(v9 + 106) )
    {
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(*(_QWORD *)(v9 + 40) + 656LL) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword,
                              v12) )
        LODWORD(v12) = EtwpEventWriteFull(
                         *(_QWORD *)(*(_QWORD *)(v9 + 32) + 656LL),
                         *(unsigned __int16 *)(v9 + 106),
                         0,
                         Flags,
                         (__int64)EventDescriptor,
                         0,
                         0,
                         (__int64)ActivityId,
                         (__int64)RelatedActivityId,
                         UserDataCount,
                         (__int64)UserData,
                         0LL,
                         (__int64)&v25,
                         *(_QWORD *)(*(_QWORD *)(v9 + 40) + 656LL),
                         *(_WORD *)(v9 + 98),
                         v14,
                         (__int64)&v24);
    }
  }
  return v12;
}
