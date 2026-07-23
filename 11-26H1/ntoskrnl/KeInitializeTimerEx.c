/*
 * XREFs of KeInitializeTimerEx @ 0x14049F620
 * Callers:
 *     PiDrvDbCreateNode @ 0x1407B808C (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1408464F8 (ExpWorkQueueManagerInitialize.c)
 *     MiInitializeSections @ 0x14086B0B8 (MiInitializeSections.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 *     NtCreateTimer @ 0x140B5A440 (NtCreateTimer.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140BF2328 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     ViPendingDelayCompletion @ 0x140C36318 (ViPendingDelayCompletion.c)
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
