/*
 * XREFs of KeInitializeDpc @ 0x14047B3C0
 * Callers:
 *     HalpInitializeSecondaryInterruptServices @ 0x140786B10 (HalpInitializeSecondaryInterruptServices.c)
 *     PiDrvDbCreateNode @ 0x1407B808C (PiDrvDbCreateNode.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1407BD5F0 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1407D4430 (PopSetSystemAwayMode.c)
 *     PpmInitializePepWpsSupport @ 0x1407E82E0 (PpmInitializePepWpsSupport.c)
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x1407F18AC (TtmiInitTerminals.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 *     CmpCmdInit @ 0x14085AB84 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x140862FD4 (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 *     PfSnPowerBoostInitialize @ 0x1409CFE18 (PfSnPowerBoostInitialize.c)
 *     PfSnBeginTrace @ 0x1409D002C (PfSnBeginTrace.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A66D00 (ObpProcessRemoveObjectQueue.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140A9D3F0 (IopAllocatePassiveInterruptBlock.c)
 *     PspThreadDelete @ 0x140AA3CB0 (PspThreadDelete.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 *     IopErrorLogQueueRequest @ 0x140AD97D8 (IopErrorLogQueueRequest.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ExpInitializeTimeChangeWorker @ 0x140B147B8 (ExpInitializeTimeChangeWorker.c)
 *     KeInitializeTimerTable @ 0x140B26EB8 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140B26FF4 (KiInitializeForceIdle.c)
 *     NtCreateTimer @ 0x140B5A440 (NtCreateTimer.c)
 *     HalpMcaInitializePcrContext @ 0x140BF0068 (HalpMcaInitializePcrContext.c)
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140BF2328 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PnprQuiesceProcessors @ 0x140BF86B4 (PnprQuiesceProcessors.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 *     KiInitPrcb @ 0x140BF9C24 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140BF9FD4 (KiInitializeProcessor.c)
 *     PoInitializePrcb @ 0x140C03E34 (PoInitializePrcb.c)
 *     PopEndMirroring @ 0x140C09F60 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140C129A8 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140C13090 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140C36318 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140C39218 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140C3FFC0 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140C553F8 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C571F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
