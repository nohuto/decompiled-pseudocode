/*
 * XREFs of EtwWriteEx @ 0x140213050
 * Callers:
 *     EtwpPsProvTracePriority @ 0x140202A0C (EtwpPsProvTracePriority.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     PpmPerfRecordUtility @ 0x1402120E0 (PpmPerfRecordUtility.c)
 *     EtwpTraceFileIo @ 0x1402128E0 (EtwpTraceFileIo.c)
 *     PoDeviceReleaseIrp @ 0x140212D70 (PoDeviceReleaseIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     EtwpTraceFileName @ 0x140215DC0 (EtwpTraceFileName.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x14021B810 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceIrpFinish @ 0x14021BC90 (PopDiagTraceIrpFinish.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140254FC0 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerLogProc @ 0x140256278 (KiIntSteerLogProc.c)
 *     KiIntSteerLogStatus @ 0x140256580 (KiIntSteerLogStatus.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14025727C (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PpmEventProcessorPerfStateChange @ 0x1402575A0 (PpmEventProcessorPerfStateChange.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1402577FC (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x140257938 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmEventComputeEnergy @ 0x140257C6C (PpmEventComputeEnergy.c)
 *     SshpTracingWriteBlockerStateChange @ 0x140258144 (SshpTracingWriteBlockerStateChange.c)
 *     PpmEventTracePerfCheckStart @ 0x140258428 (PpmEventTracePerfCheckStart.c)
 *     PpmEventTracePerfCheckStop @ 0x140258628 (PpmEventTracePerfCheckStop.c)
 *     EtwpTraceLostEvent @ 0x140258AC8 (EtwpTraceLostEvent.c)
 *     EtwpLogMemNodeInfo @ 0x140259734 (EtwpLogMemNodeInfo.c)
 *     EtwpTiVadQueryEventWrite @ 0x14025A2AC (EtwpTiVadQueryEventWrite.c)
 *     PpmEventSoftParkRankListChanged @ 0x14025CFA0 (PpmEventSoftParkRankListChanged.c)
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     SeLogAccessFailure @ 0x1403006A0 (SeLogAccessFailure.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140331C90 (PpmPerfArbitratorApplyProcessorState.c)
 *     EtwTraceContFreeEvent @ 0x14034741C (EtwTraceContFreeEvent.c)
 *     EtwpLogMemInfo @ 0x14034A4BC (EtwpLogMemInfo.c)
 *     EtwTraceContAllocationEvent @ 0x14034C990 (EtwTraceContAllocationEvent.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403960E8 (PoFxSendSystemLatencyUpdate.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1403979F4 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PpmEventMediaBufferingNotify @ 0x140397CF8 (PpmEventMediaBufferingNotify.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403B7B74 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1403B7FD8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PoFxSetComponentLatency @ 0x1403BB2A0 (PoFxSetComponentLatency.c)
 *     PopDiagTraceFxDevicePowered @ 0x1403BCD0C (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceIrpStart @ 0x1403BD9D4 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1403BE0CC (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1403BE410 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1403C309C (PopDiagTraceFxDeviceDirectedTransition.c)
 *     WheapGenerateETWErrorRecord @ 0x1403E3030 (WheapGenerateETWErrorRecord.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14040D2D0 (PoTraceSystemTimerResolutionKernel.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140415324 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventHgsContainmentThresholdCheck @ 0x140415DCC (PpmEventHgsContainmentThresholdCheck.c)
 *     PpmEventTraceHeteroResponse @ 0x140416490 (PpmEventTraceHeteroResponse.c)
 *     PpmEventParkNodeRecordedStats @ 0x140416D6C (PpmEventParkNodeRecordedStats.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x14041708C (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventParkingCountSelection @ 0x140417E4C (PpmEventParkingCountSelection.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x140417FAC (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x140418130 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140418C30 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventParkNodeRestriction @ 0x140419160 (PpmEventParkNodeRestriction.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x1404217BC (PopDiagTraceNonAttributedCpuReferences.c)
 *     PpmEventPlatformVetoRequest @ 0x14042185C (PpmEventPlatformVetoRequest.c)
 *     PpmEventCoreParkingForceParkedStateChange @ 0x140421A0C (PpmEventCoreParkingForceParkedStateChange.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140421B1C (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140422BBC (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140423E94 (PopDiagTraceThermalZoneRundown.c)
 *     PopDiagTraceRegisterSystemState @ 0x1404268C0 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceSetSystemState @ 0x140427310 (PopDiagTraceSetSystemState.c)
 *     KiIntSteerLogState @ 0x140430D30 (KiIntSteerLogState.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140445FF8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140446470 (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x14044656C (PpmEventThermalCapChange.c)
 *     PpmPerfSelectProcessorState @ 0x140448420 (PpmPerfSelectProcessorState.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     MiLogBadMapper @ 0x140451340 (MiLogBadMapper.c)
 *     PpmEventDomainPerfStateChange @ 0x140462364 (PpmEventDomainPerfStateChange.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x140473B50 (EtwTraceDpcProfilingStackBegin.c)
 *     EtwTraceDpcProfilingStack @ 0x140473CC8 (EtwTraceDpcProfilingStack.c)
 *     EtwpNetProvTraceNetwork @ 0x14047711C (EtwpNetProvTraceNetwork.c)
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 *     EtwTraceMemoryAcg @ 0x14047F4E4 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140480728 (PopDiagTraceDeviceAcquireIrp.c)
 *     EtwpTiFillVadEventWrite @ 0x14048BBC8 (EtwpTiFillVadEventWrite.c)
 *     PnpDiagnosticTraceObject @ 0x14048D5DC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTrace @ 0x14048D948 (PnpDiagnosticTrace.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14049F3EC (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTracePowerRequestChange @ 0x1404A00F8 (PopDiagTracePowerRequestChange.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1404A0498 (PpmEventTraceMakeupPerfCheck.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x1404A2608 (SshpTracingWriteBlockerStateRundown.c)
 *     PpmEventTraceExpectedUtility @ 0x1404A34B8 (PpmEventTraceExpectedUtility.c)
 *     PpmEventQosClassPerfSelection @ 0x1404AEB64 (PpmEventQosClassPerfSelection.c)
 *     PpmEventTraceHeteroSets @ 0x1404B7270 (PpmEventTraceHeteroSets.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1404BE634 (PopDiagTraceFxDevicePowerState.c)
 *     PoTraceForceIdleStateChange @ 0x1404BEE04 (PoTraceForceIdleStateChange.c)
 *     PpmEventPlatformVetoRundown @ 0x1404BF58C (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404BF6D8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTracePreVetoAccounting @ 0x1404BF8CC (PpmEventTracePreVetoAccounting.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1404C0370 (PopDiagTraceDeviceIdleCheck.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1404C0554 (PpmEventCoreParkingStateChangeEx.c)
 *     SshpWriteBlocker @ 0x1404C2C40 (SshpWriteBlocker.c)
 *     EtwTraceMdlAllocationEvent @ 0x1404C4A08 (EtwTraceMdlAllocationEvent.c)
 *     PpmEventCoreParkingStateChange @ 0x1404C4C28 (PpmEventCoreParkingStateChange.c)
 *     PpmEventTraceLatencySensitivityHint @ 0x1404C5994 (PpmEventTraceLatencySensitivityHint.c)
 *     KsepLogEtwMessage @ 0x1404C6394 (KsepLogEtwMessage.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1404CEF44 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1404CFC70 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     EtwpTraceLostSystemEvent @ 0x1404D19C4 (EtwpTraceLostSystemEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1404D2440 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1404D37C0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1404D3880 (PopDiagTraceIdleResiliencyEnd.c)
 *     SSHSupportEtwWrite @ 0x1404D54FC (SSHSupportEtwWrite.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404D9FFC (PnpDiagnosticTraceObjectWithStatus.c)
 *     PopSqmAddToStream @ 0x1404DBF74 (PopSqmAddToStream.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     EtwpTraceLostWppEvent @ 0x1404E038C (EtwpTraceLostWppEvent.c)
 *     PpmEventHgsHardwareTable @ 0x1404E42EC (PpmEventHgsHardwareTable.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404E4520 (PopDiagTraceSessionDisplayStateChange.c)
 *     PpmEventVetoReasonRundown @ 0x1404E4FA4 (PpmEventVetoReasonRundown.c)
 *     IoTransferActivityId @ 0x1404E50A0 (IoTransferActivityId.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1404E5250 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1404E6850 (PpmEventSoftParkLatencyUpdate.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1404E9624 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1404EC07C (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PoFxSetComponentWake @ 0x1404EE720 (PoFxSetComponentWake.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1404EF04C (PpmEventTraceFailedPerfCheckStart.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1404EFCF0 (PopDiagTraceDiskIdleCheck.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1404F1B14 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1404F2CD4 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404F2FFC (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceFxPerfRequest @ 0x1404F3164 (PopDiagTraceFxPerfRequest.c)
 *     PpmEventTraceLPIState @ 0x1404F5448 (PpmEventTraceLPIState.c)
 *     KsepDsEventPnpStartDevice @ 0x1404F6170 (KsepDsEventPnpStartDevice.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404F8FBC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404FA31C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404FBFE4 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsNormalizedTable @ 0x1404FC674 (PpmEventHgsNormalizedTable.c)
 *     HalpIommuTraceFault @ 0x1404FC840 (HalpIommuTraceFault.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x1404FD154 (PpmEventHgsHardwareTableResonMapTable.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1404FD328 (PnpDiagnosticTraceElamDecision.c)
 *     PpmEventHgsContainmentUnparkedCount @ 0x140504764 (PpmEventHgsContainmentUnparkedCount.c)
 *     PopDiagTraceFxVetoMaskUpdate @ 0x140504994 (PopDiagTraceFxVetoMaskUpdate.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140504F48 (PopDiagTraceRtcWakeInfo.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1405076E4 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     PopDiagTraceIrpPended @ 0x140509520 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14050DD08 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     KsepEvntLogFlagsApplied @ 0x14050E58C (KsepEvntLogFlagsApplied.c)
 *     PpmEventParkNodeParkHintChanged @ 0x14050E938 (PpmEventParkNodeParkHintChanged.c)
 *     PopDiagTraceEsState @ 0x140516A18 (PopDiagTraceEsState.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x140527460 (EtwTraceProcessSetInPrivateMode.c)
 *     SmEtwLogStoreOp @ 0x140527D08 (SmEtwLogStoreOp.c)
 *     SmEtwLogCompactionOp @ 0x140529FD0 (SmEtwLogCompactionOp.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x14052A27C (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventVpQosChange @ 0x14052BCA4 (PpmEventVpQosChange.c)
 *     PoTraceForceIdleReset @ 0x140531818 (PoTraceForceIdleReset.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x1405319F0 (PoTraceSystemTimerResolutionIgnore.c)
 *     EtwTraceCpuPartitionDpcSchedulingViolation @ 0x1405333FC (EtwTraceCpuPartitionDpcSchedulingViolation.c)
 *     KsepDsEventPnpIrp @ 0x140535604 (KsepDsEventPnpIrp.c)
 *     HalpTscTraceProcessorDelta @ 0x140586654 (HalpTscTraceProcessorDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x140586730 (HalpTscTraceProcessorSynchronization.c)
 *     HalpTscTraceStatus @ 0x14058682C (HalpTscTraceStatus.c)
 *     HalpTscTraceSynchronizationSummary @ 0x1405868CC (HalpTscTraceSynchronizationSummary.c)
 *     HalpIommuLogEarlyFault @ 0x1405A28DC (HalpIommuLogEarlyFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1405B69D8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1405C3F84 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x1405CB798 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x1405CB87C (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x1405CB988 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x1405CBA94 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x1405CBBA0 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x1405CBCAC (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x1405CBDB8 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1405DB888 (PnpDiagnosticTraceElamStatus.c)
 *     KasaniSendTelemetryDriver @ 0x1405E0400 (KasaniSendTelemetryDriver.c)
 *     KsepEvntLogShimsApplied @ 0x140600ACC (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x14060154C (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x14060167C (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140601778 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x14060185C (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x140601978 (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x140601A84 (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140601B50 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x140601C0C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x140601D1C (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x140601E00 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x140601EFC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x140601FC8 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1406020D4 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14060236C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140602478 (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PopIrpWatchdogBugcheck @ 0x140603508 (PopIrpWatchdogBugcheck.c)
 *     PoTraceDynamicTickDisabled @ 0x14060AB40 (PoTraceDynamicTickDisabled.c)
 *     PopDiagTraceAbnormalReset @ 0x14060ABE4 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x14060AD28 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14060AE4C (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14060AF34 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14060B124 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14060B278 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14060B33C (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x14060B41C (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x14060B4E0 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentResidency @ 0x14060B5D0 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x14060B6B4 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxDeviceInvalidTransition @ 0x14060B798 (PopDiagTraceFxDeviceInvalidTransition.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14060B948 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14060BA84 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14060BC30 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14060BCD4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceShutdownAction @ 0x14060BE2C (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceThermalStateChange @ 0x14060BF5C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14060C084 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14060C420 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14060C554 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventAffinityMask @ 0x140610F10 (PpmEventAffinityMask.c)
 *     PpmEventAutonomousModeChange @ 0x140611010 (PpmEventAutonomousModeChange.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1406110DC (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x140611290 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140611418 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140611514 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventLPICoreParking @ 0x140611610 (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1406116D0 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodePreference @ 0x1406118C0 (PpmEventParkNodePreference.c)
 *     PpmEventParkTopologyDetected @ 0x140611AF0 (PpmEventParkTopologyDetected.c)
 *     PpmEventProcessorVetoRequest @ 0x140611CF0 (PpmEventProcessorVetoRequest.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140611DFC (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventWpsContainmentMaskDetection @ 0x140611F30 (PpmEventWpsContainmentMaskDetection.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x140612074 (PpmEventWpsParkingTableUpdateReason.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x140614CA4 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1406420B0 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     SmEtwLogRegionOp @ 0x140642F34 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14064300C (SmEtwLogStoreCorruption.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x1406C825C (EtwTraceCpuPartitionAffinityViolation.c)
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x1406C83F4 (EtwTraceCpuPartitionGenericDpcViolation.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x1406C8494 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1406C8698 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x1406C8BA4 (EtwTraceSingleDpcSoftTimeout.c)
 *     EtwTraceWorkQueueHealthMetrics @ 0x1406C8DE0 (EtwTraceWorkQueueHealthMetrics.c)
 *     EtwTraceWorkQueueHealthMetricsBucketUpperBounds @ 0x1406C8F08 (EtwTraceWorkQueueHealthMetricsBucketUpperBounds.c)
 *     SeEtwWriteKMCveEvent @ 0x1406C9D80 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1406CA7F4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     BapdWriteEtwEvents @ 0x1406CDFBC (BapdWriteEtwEvents.c)
 *     KitLogFeatureUsage @ 0x1406D6580 (KitLogFeatureUsage.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x1406DB370 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x1406DB58C (WheapLogProcessTerminateEvent.c)
 *     SmKmEtwLogStoreChange @ 0x140820888 (SmKmEtwLogStoreChange.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x140830640 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x140831238 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpPsProvTraceImage @ 0x140A8B330 (EtwpPsProvTraceImage.c)
 *     EtwpTimLogMitigationForProcess @ 0x140B1E7FC (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140B27C0C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140C038EC (PopDiagTraceFirmwareS3Stats.c)
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140CD7DC0 (PopDiagTraceAdaptiveBootOverride.c)
 *     PopDiagTraceDirtyTransition @ 0x140CD7F2C (PopDiagTraceDirtyTransition.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140CD8D04 (PopTriggerDiagTraceAoAcCapability.c)
 *     EtwpTraceBootSystemTime @ 0x140CE7588 (EtwpTraceBootSystemTime.c)
 *     EtwpTraceSystemInitialization @ 0x140CE77E0 (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140CE9478 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
