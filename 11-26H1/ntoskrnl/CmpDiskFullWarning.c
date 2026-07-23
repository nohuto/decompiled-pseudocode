/*
 * XREFs of CmpDiskFullWarning @ 0x14085ADF8
 * Callers:
 *     CmpLazyWriteWorker @ 0x1406E6AF0 (CmpLazyWriteWorker.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void CmpDiskFullWarning()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  if ( !CmpDiskFullWorkerPopupDisplayed && CmpCannotWriteConfiguration && ExReadyForErrors && CmpProfileLoaded )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      CmpDiskFullWorkerPopupDisplayed = 1;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpDiskFullWarningWorker;
      Pool2->Parameter = Pool2;
      Pool2->List.Flink = 0LL;
      ExQueueWorkItem(Pool2, DelayedWorkQueue);
    }
  }
}
