/*
 * XREFs of PpmCheckPeriodicStart @ 0x1402568F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckStart @ 0x14025699C (PpmCheckStart.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1404F5A8C (PpmEventTraceFailedPerfCheckStart.c)
 */

void __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(stru_140F10070.Padding, Executive, 0, 0, &Timeout) )
  {
    PpmEventTraceFailedPerfCheckStart(PopSleepstudySessionLock.TrapFrame);
    _m_prefetchw(&PopSleepstudySessionLock.Timer);
    if ( !_InterlockedOr8((volatile signed __int8 *)&PopSleepstudySessionLock.Timer, 1u) )
    {
      *(_QWORD *)&PopSleepstudySessionLock.Timer.Processor = a3;
      PopSleepstudySessionLock.Timer.Dpc = (_KDPC *)PpmCheckDelayedPeriodicStart;
      PopSleepstudySessionLock.Timer.TimerListEntry.Flink = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopSleepstudySessionLock.Timer.TimerListEntry, CriticalWorkQueue);
    }
  }
  else
  {
    *(_DWORD *)&PopSleepstudySessionLock.ApcStateFill[4] = a3;
    PpmCheckStart(0LL);
  }
}
