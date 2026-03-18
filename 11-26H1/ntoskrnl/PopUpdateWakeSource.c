/*
 * XREFs of PopUpdateWakeSource @ 0x1404DD37C
 * Callers:
 *     PopRequestCompletion @ 0x1403B45B0 (PopRequestCompletion.c)
 *     PoSetSystemWakeDevice @ 0x1404DD340 (PoSetSystemWakeDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopUpdateWakeSource(struct _LIST_ENTRY *Object)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *Pool2; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F11D08.Teb, &LockHandle);
    if ( stru_140F11D08.Timer.Header.WaitListHead.Flink && *(_DWORD *)&stru_140F11D08.WaitBlockFill11[16] <= 1u )
    {
      ObfReferenceObjectWithTag(Object, 0x67446F50u);
      Pool2[1].Flink = Object;
      Flink = stru_140F11D08.Timer.TimerListEntry.Flink;
      if ( stru_140F11D08.Timer.TimerListEntry.Flink->Flink != (struct _LIST_ENTRY *)&stru_140F11D08.Timer.DueTime )
        __fastfail(3u);
      Pool2->Flink = (struct _LIST_ENTRY *)&stru_140F11D08.Timer.DueTime;
      Pool2->Blink = Flink;
      Flink->Flink = Pool2;
      stru_140F11D08.Timer.TimerListEntry.Flink = Pool2;
      Pool2 = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x206D654Du);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
