/*
 * XREFs of KeGetEffectiveIrql @ 0x1402642B0
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpCCSwapFlush @ 0x140217500 (EtwpCCSwapFlush.c)
 *     EtwpTraceMessageVa @ 0x1402176B0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x1402181E4 (EtwpOpenLogger.c)
 *     EtwpPrepareDirtyBuffer @ 0x140219094 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140219160 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1402198F0 (EtwpRequestFlushTimer.c)
 *     MiLogNoStealNonPagedPool @ 0x14024F538 (MiLogNoStealNonPagedPool.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1402C56C8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1402C59E4 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140356ED8 (CmFcManagerNotifyFeatureUsage.c)
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     WheaIsCriticalState @ 0x1403DFCC0 (WheaIsCriticalState.c)
 *     ExpWorkerThread @ 0x1403F5680 (ExpWorkerThread.c)
 *     KeTryToInsertQueueApc @ 0x1403F7408 (KeTryToInsertQueueApc.c)
 *     IopCopyCompleteReadIrp @ 0x14040FA00 (IopCopyCompleteReadIrp.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14047A534 (EtwpGetStackExtendedHeaderItem.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140482A30 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwTelemetryCoverageReport @ 0x14048CFE0 (EtwTelemetryCoverageReport.c)
 *     EtwpSendTraceEvent @ 0x1404A92C8 (EtwpSendTraceEvent.c)
 *     RtlQueryFeatureConfiguration @ 0x1404CC190 (RtlQueryFeatureConfiguration.c)
 *     KiRcuFlushCompleted @ 0x140503B7C (KiRcuFlushCompleted.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1405071B0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x140507CB4 (EtwpContextRegisterTracingDispatcher.c)
 *     KdPowerTransitionEx @ 0x14050A220 (KdPowerTransitionEx.c)
 *     KiSrcuFlushCompleted @ 0x14052EB44 (KiSrcuFlushCompleted.c)
 *     EtwpReenableCompression @ 0x140532448 (EtwpReenableCompression.c)
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     KeResumeClockTimerSafe @ 0x1405EE0F0 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405EE154 (KeSuspendClockTimerSafe.c)
 *     KiGetRecoveryInformation @ 0x1405FA1D0 (KiGetRecoveryInformation.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1406179A0 (RtlQueryInternalFeatureConfiguration.c)
 *     EtwSendTraceBuffer @ 0x1406C6570 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x1406C8138 (EtwpDisableCompression.c)
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 *     EtwpStopLoggerInstance @ 0x140A15968 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x140A6FD00 (EtwpSynchronizeWithLogger.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
