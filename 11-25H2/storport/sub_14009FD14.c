/*
 * XREFs of sub_14009FD14 @ 0x14009FD14
 * Callers:
 *     sub_140031178 @ 0x140031178 (sub_140031178.c)
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14009FD14(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  unsigned int v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  WorkItem = IoAllocateWorkItem(v2);
  if ( !WorkItem )
    return *(_QWORD *)(a1 + 1896) != 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1920), &LockHandle);
  if ( *(_QWORD *)(a1 + 1896) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoFreeWorkItem(WorkItem);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1032));
    v5 = *(_DWORD *)(a1 + 1392);
    *(_QWORD *)(a1 + 1896) = WorkItem;
    if ( v5 < 0x1E )
      v5 = 30;
    *(_DWORD *)(a1 + 1908) = 0;
    *(_DWORD *)(a1 + 1904) = 4 * v5 + 42;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)sub_14009D9F0, CriticalWorkQueue, WorkItem);
  }
  return 1;
}
