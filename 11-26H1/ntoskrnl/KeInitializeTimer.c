/*
 * XREFs of KeInitializeTimer @ 0x140483D00
 * Callers:
 *     TtmiCreateTerminal @ 0x1407EBA48 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x1407EBD48 (TtmiInitTerminals.c)
 *     CmpCmdInit @ 0x140854874 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x14085CCE4 (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x140869360 (MiInitializePartition.c)
 *     PfSnBeginTrace @ 0x140AA32C0 (PfSnBeginTrace.c)
 *     IopErrorLogQueueRequest @ 0x140ADC288 (IopErrorLogQueueRequest.c)
 *     PfSnPowerBoostInitialize @ 0x140AE082C (PfSnPowerBoostInitialize.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ExpInitializeTimeChangeWorker @ 0x140B12A38 (ExpInitializeTimeChangeWorker.c)
 *     PopBuildDeviceNotifyList @ 0x140C04CC8 (PopBuildDeviceNotifyList.c)
 *     KeInitThread @ 0x140C07424 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140C0C798 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140C0CE80 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     ViShutdownScheduleWatchdog @ 0x140C33208 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140C39FB0 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140C4F3F8 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C511F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimer(PKTIMER Timer)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
  Timer->TimerDifObjTracking = 0;
}
