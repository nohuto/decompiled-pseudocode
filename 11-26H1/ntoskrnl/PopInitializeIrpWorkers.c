/*
 * XREFs of PopInitializeIrpWorkers @ 0x140CD94A0
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopCreatePowerThread @ 0x1403C043C (PopCreatePowerThread.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 */

NTSTATUS PopInitializeIrpWorkers()
{
  NTSTATUS result; // eax
  unsigned int i; // ebx

  PopCreateIrpWorkerAllowed = 1;
  qword_140F0D388 = (__int64)&PopIrpThreadList;
  PopIrpThreadList = (__int64)&PopIrpThreadList;
  qword_140F103C8 = (__int64)&PopIrpWorkerList;
  PopIrpWorkerList = (__int64)&PopIrpWorkerList;
  PopIrpWorkerSemaphore.Header.WaitListHead.Blink = &PopIrpWorkerSemaphore.Header.WaitListHead;
  PopIrpWorkerSemaphore.Header.WaitListHead.Flink = &PopIrpWorkerSemaphore.Header.WaitListHead;
  PopIrpWorkerControlEvent.Header.WaitListHead.Blink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerControlEvent.Header.WaitListHead.Flink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerMutex.Event.Header.WaitListHead.Blink = &PopIrpWorkerMutex.Event.Header.WaitListHead;
  PopIrpWorkerMutex.Event.Header.WaitListHead.Flink = &PopIrpWorkerMutex.Event.Header.WaitListHead;
  PopIrpWorkerCount = 0;
  PopIrpWorkerInFlightCount = 0;
  PopIrpWorkerPendingCount = 0;
  PopIrpWorkerRequested = 0;
  PopIrpWorkerSemaphore.Header.Type = 5;
  PopIrpWorkerSemaphore.Header.Size = 8;
  PopIrpWorkerSemaphore.Header.SignalState = 0;
  PopIrpWorkerSemaphore.Limit = 0x7FFFFFFF;
  LOWORD(PopIrpWorkerControlEvent.Header.Lock) = 1;
  PopIrpWorkerControlEvent.Header.Size = 6;
  PopIrpWorkerControlEvent.Header.SignalState = 0;
  PopIrpWorkerMutex.Count = 1;
  PopIrpWorkerMutex.Owner = 0LL;
  PopIrpWorkerMutex.Contention = 0;
  LOWORD(PopIrpWorkerMutex.Event.Header.Lock) = 1;
  PopIrpWorkerMutex.Event.Header.Size = 6;
  PopIrpWorkerMutex.Event.Header.SignalState = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&PopDynamicIrpWorkerLookaside, 0LL, 0LL, 512, 8, 1917415248, 0, 0);
  result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorkerControl, 0LL);
  if ( result >= 0 )
  {
    PopIrpWorkerPendingCount = 2;
    for ( i = 0; i < 2; ++i )
    {
      result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorker, 0LL);
      if ( result < 0 )
        return result;
    }
    return 0;
  }
  return result;
}
