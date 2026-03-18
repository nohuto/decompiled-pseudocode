/*
 * XREFs of KeInitializeDpc @ 0x140481A50
 * Callers:
 *     HalpInitializeSecondaryInterruptServices @ 0x140783FDC (HalpInitializeSecondaryInterruptServices.c)
 *     PiDrvDbCreateNode @ 0x1407B502C (PiDrvDbCreateNode.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1407BA590 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 *     PpmInitializePepWpsSupport @ 0x1407E3250 (PpmInitializePepWpsSupport.c)
 *     TtmiCreateTerminal @ 0x1407EBA48 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x1407EBD48 (TtmiInitTerminals.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     CmpCmdInit @ 0x140854874 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x14085CCE4 (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x140869360 (MiInitializePartition.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A59D90 (ObpProcessRemoveObjectQueue.c)
 *     EtwpInitLoggerContext @ 0x140A6DD54 (EtwpInitLoggerContext.c)
 *     IopConnectInterrupt @ 0x140A98890 (IopConnectInterrupt.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140A99270 (IopAllocatePassiveInterruptBlock.c)
 *     PspThreadDelete @ 0x140AA21E0 (PspThreadDelete.c)
 *     PfSnBeginTrace @ 0x140AA32C0 (PfSnBeginTrace.c)
 *     IopErrorLogQueueRequest @ 0x140ADC288 (IopErrorLogQueueRequest.c)
 *     PfSnPowerBoostInitialize @ 0x140AE082C (PfSnPowerBoostInitialize.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ExpInitializeTimeChangeWorker @ 0x140B12A38 (ExpInitializeTimeChangeWorker.c)
 *     KeInitializeTimerTable @ 0x140B24A18 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140B24B54 (KiInitializeForceIdle.c)
 *     NtCreateTimer @ 0x140B574F0 (NtCreateTimer.c)
 *     HalpMcaInitializePcrContext @ 0x140BEA068 (HalpMcaInitializePcrContext.c)
 *     HalpIommuInitSystem @ 0x140BEB6E0 (HalpIommuInitSystem.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140BEC328 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PnprQuiesceProcessors @ 0x140BF26B4 (PnprQuiesceProcessors.c)
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 *     KiInitPrcb @ 0x140BF3C24 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140BF3FD4 (KiInitializeProcessor.c)
 *     PoInitializePrcb @ 0x140BFDDE8 (PoInitializePrcb.c)
 *     PopEndMirroring @ 0x140C03D50 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     PopBuildDeviceNotifyList @ 0x140C04CC8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140C0C798 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140C0CE80 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140C30308 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140C33208 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140C39FB0 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140C4F3F8 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C511F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
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
