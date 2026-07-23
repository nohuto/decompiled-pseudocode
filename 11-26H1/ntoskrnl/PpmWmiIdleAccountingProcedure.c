/*
 * XREFs of PpmWmiIdleAccountingProcedure @ 0x14060FB60
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void PpmWmiIdleAccountingProcedure()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    Pool2->Parameter = Pool2;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PpmWmiIdleAccountingWork;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
}
