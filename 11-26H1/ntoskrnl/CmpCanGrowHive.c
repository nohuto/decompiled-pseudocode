/*
 * XREFs of CmpCanGrowHive @ 0x140AE0CAC
 * Callers:
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     MmGetNumberOfPhysicalPages @ 0x1404AF740 (MmGetNumberOfPhysicalPages.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char __fastcall CmpCanGrowHive(struct _KTHREAD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  if ( a2 <= 0x7FFFE000 )
  {
    if ( a1 != stru_140E098B8.WaitBlock[2].Thread )
      return 1;
    v2 = a2 + 4096;
    if ( a2 + 4096 <= LODWORD(WheapPfaLock.FirstArgument) )
    {
      if ( (MmGetNumberOfPhysicalPages(0) & 0xFFFFFFFFFFFFFFFEuLL) < 0xC0000 )
        v3 = (unsigned __int64)MmGetNumberOfPhysicalPages(0) >> 1;
      else
        LODWORD(v3) = 393216;
      if ( v2 > 36864 * (int)v3 / 0xAu && !CmpSystemQuotaWarningPopupDisplayed && ExReadyForErrors )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          CmpSystemQuotaWarningPopupDisplayed = 1;
          Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
          Pool2->Parameter = Pool2;
          Pool2->List.Flink = 0LL;
          ExQueueWorkItem(Pool2, DelayedWorkQueue);
        }
      }
      return 1;
    }
  }
  return 0;
}
