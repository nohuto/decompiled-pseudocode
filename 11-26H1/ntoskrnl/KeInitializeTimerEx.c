/*
 * XREFs of KeInitializeTimerEx @ 0x1404A5F90
 * Callers:
 *     PiDrvDbCreateNode @ 0x1407B502C (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1408402B8 (ExpWorkQueueManagerInitialize.c)
 *     MiInitializeSections @ 0x140864CD8 (MiInitializeSections.c)
 *     EtwpInitLoggerContext @ 0x140A6DD54 (EtwpInitLoggerContext.c)
 *     MiNodeZeroConductor @ 0x140B27510 (MiNodeZeroConductor.c)
 *     NtCreateTimer @ 0x140B574F0 (NtCreateTimer.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140BEC328 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     ViPendingDelayCompletion @ 0x140C30308 (ViPendingDelayCompletion.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
  Timer->TimerDifObjTracking = 0;
}
