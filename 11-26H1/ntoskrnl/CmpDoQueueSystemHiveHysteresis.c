/*
 * XREFs of CmpDoQueueSystemHiveHysteresis @ 0x140851308
 * Callers:
 *     CmRegisterSystemHiveLimitCallback @ 0x1408511F8 (CmRegisterSystemHiveLimitCallback.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140AFAA28 (CmpUpdateSystemHiveHysteresis.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char __fastcall CmpDoQueueSystemHiveHysteresis(int a1)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    HIDWORD(WheapPfaLock.SchedulingGroup) = a1;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpSystemHiveHysteresisWorker;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
    LOBYTE(Pool2) = 1;
  }
  return (char)Pool2;
}
