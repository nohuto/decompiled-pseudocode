/*
 * XREFs of KeInitializeTimer @ 0x14047D670
 * Callers:
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x1407F18AC (TtmiInitTerminals.c)
 *     CmpCmdInit @ 0x14085AB84 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x140862FD4 (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 *     PfSnPowerBoostInitialize @ 0x1409CFE18 (PfSnPowerBoostInitialize.c)
 *     PfSnBeginTrace @ 0x1409D002C (PfSnBeginTrace.c)
 *     IopErrorLogQueueRequest @ 0x140AD97D8 (IopErrorLogQueueRequest.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ExpInitializeTimeChangeWorker @ 0x140B147B8 (ExpInitializeTimeChangeWorker.c)
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140C129A8 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140C13090 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     ViShutdownScheduleWatchdog @ 0x140C39218 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140C3FFC0 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140C553F8 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140C571F4 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
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
