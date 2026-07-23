/*
 * XREFs of PpmCheckPeriodicStart @ 0x140258280
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckStart @ 0x14025832C (PpmCheckStart.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1404EF04C (PpmEventTraceFailedPerfCheckStart.c)
 */

void __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, void *a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject((PVOID)&PpmIdlePolicyLock.CycleTime, Executive, 0, 0, &Timeout) )
  {
    PpmEventTraceFailedPerfCheckStart(PpmCheckLastEffectiveExecutionTime);
    _m_prefetchw(&PpmCheckDelayedStartWorkerQueued);
    if ( !_InterlockedOr8(&PpmCheckDelayedStartWorkerQueued, 1u) )
    {
      PpmCheckDelayedStartWorkItem.Parameter = a3;
      PpmCheckDelayedStartWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmCheckDelayedPeriodicStart;
      PpmCheckDelayedStartWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&PpmCheckDelayedStartWorkItem, CriticalWorkQueue);
    }
  }
  else
  {
    PpmCheckMakeupCount = (int)a3;
    PpmCheckStart(0LL);
  }
}
