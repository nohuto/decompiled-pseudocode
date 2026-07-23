/*
 * XREFs of PiProfileUpdateDeviceTree @ 0x1407AFF7C
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x1407B0358 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1407B0404 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PiProfileUpdateDeviceTree()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->Parameter = Pool2;
  Pool2->WorkerRoutine = (void (__fastcall *)(void *))PiProfileUpdateDeviceTreeWorker;
  Pool2->List.Flink = 0LL;
  ExQueueWorkItem(Pool2, CriticalWorkQueue);
  return 0LL;
}
