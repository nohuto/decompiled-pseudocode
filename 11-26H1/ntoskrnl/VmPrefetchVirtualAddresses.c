/*
 * XREFs of VmPrefetchVirtualAddresses @ 0x14077A3E8
 * Callers:
 *     MmInSwapWorkingSet @ 0x1404CF090 (MmInSwapWorkingSet.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     VmpPrefetchVirtualAddresses @ 0x140494D38 (VmpPrefetchVirtualAddresses.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall VmPrefetchVirtualAddresses(_QWORD *Src, unsigned __int64 a2, int a3)
{
  unsigned int v4; // ebx
  _KPROCESS *Process; // r14
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
