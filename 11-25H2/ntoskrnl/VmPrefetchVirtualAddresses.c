/*
 * XREFs of VmPrefetchVirtualAddresses @ 0x14078F308
 * Callers:
 *     MmInSwapWorkingSet @ 0x140454FFC (MmInSwapWorkingSet.c)
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     VmpPrefetchVirtualAddresses @ 0x14042AA98 (VmpPrefetchVirtualAddresses.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VmPrefetchVirtualAddresses(_QWORD *Src, unsigned __int64 a2, int a3)
{
  unsigned int v4; // ebx
  _KPROCESS *Process; // rbp
  volatile LONG *Blink; // rcx
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  struct _WORK_QUEUE_ITEM *v9; // rdi
  struct _LIST_ENTRY *v10; // rcx

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Blink = (volatile LONG *)Process[3].ProcessListEntry.Blink;
  if ( Blink )
  {
    if ( a3 )
    {
      return (unsigned int)VmpPrefetchVirtualAddresses(Blink, Src, a2);
    }
    else
    {
      Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
      v9 = Pool2;
      if ( Pool2 )
      {
        Pool2->List.Blink = 0LL;
        Pool2[1].List.Flink = 0LL;
        Pool2[1].List.Blink = 0LL;
        Pool2[1].WorkerRoutine = 0LL;
        Pool2->WorkerRoutine = (void (__fastcall *)(void *))VmpPrefetchWorker;
        Pool2->Parameter = Pool2;
        Pool2->List.Flink = 0LL;
        PsReferenceSiloContext(Process);
        v9[1].WorkerRoutine = (void (__fastcall *)(void *))a2;
        v10 = (struct _LIST_ENTRY *)(((unsigned __int64)&v9[1].Parameter + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v9[1].List.Blink = v10;
        v9[1].List.Flink = (struct _LIST_ENTRY *)Process;
        memmove(v10, Src, 16 * a2);
        ExQueueWorkItem(v9, DelayedWorkQueue);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741667;
  }
  return v4;
}
