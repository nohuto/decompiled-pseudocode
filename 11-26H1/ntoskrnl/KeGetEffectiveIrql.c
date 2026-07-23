/*
 * XREFs of KeGetEffectiveIrql @ 0x140263820
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpCCSwapFlush @ 0x140217830 (EtwpCCSwapFlush.c)
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140218514 (EtwpOpenLogger.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402191F4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x140219A50 (EtwpRequestFlushTimer.c)
 *     MiLogNoStealNonPagedPool @ 0x140250E98 (MiLogNoStealNonPagedPool.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140310364 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140310680 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140358C78 (CmFcManagerNotifyFeatureUsage.c)
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     WheaIsCriticalState @ 0x1403E2EB0 (WheaIsCriticalState.c)
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 *     KeTryToInsertQueueApc @ 0x1403F0DB8 (KeTryToInsertQueueApc.c)
 *     IopCopyCompleteReadIrp @ 0x14040F120 (IopCopyCompleteReadIrp.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140473EA4 (EtwpGetStackExtendedHeaderItem.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14047C3A0 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     RtlQueryFeatureConfiguration @ 0x1404C5BC0 (RtlQueryFeatureConfiguration.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140500B80 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x140501688 (EtwpContextRegisterTracingDispatcher.c)
 *     KdPowerTransitionEx @ 0x140503C90 (KdPowerTransitionEx.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     EtwpReenableCompression @ 0x1405348E8 (EtwpReenableCompression.c)
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     KeResumeClockTimerSafe @ 0x1405F0A60 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405F0AC4 (KeSuspendClockTimerSafe.c)
 *     KiGetRecoveryInformation @ 0x1405FCBF0 (KiGetRecoveryInformation.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x14061A9F0 (RtlQueryInternalFeatureConfiguration.c)
 *     EtwSendTraceBuffer @ 0x1406CA270 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x1406CC118 (EtwpDisableCompression.c)
 *     EtwInitialize @ 0x14082A958 (EtwInitialize.c)
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
