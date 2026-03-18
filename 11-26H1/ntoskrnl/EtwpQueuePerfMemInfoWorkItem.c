/*
 * XREFs of EtwpQueuePerfMemInfoWorkItem @ 0x1404C3FF0
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1404C3F60 (EtwpLogMemInfoTimerCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall EtwpQueuePerfMemInfoWorkItem(struct _LIST_ENTRY *a1)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    Pool2[1].List.Flink = a1;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))EtwpPerfMemInfoWork;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, CriticalWorkQueue);
  }
}
