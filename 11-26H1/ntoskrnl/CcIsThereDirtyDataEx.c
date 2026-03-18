/*
 * XREFs of CcIsThereDirtyDataEx @ 0x1405B1BE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v4; // bl
  struct _KTHREAD *Blink; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  unsigned __int64 *v7; // rdi
  _DWORD *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-20h] BYREF

  memset(&v11, 0, sizeof(v11));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v11);
  Blink = (struct _KTHREAD *)EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  if ( (unsigned __int64 *)EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink != &EmpParseLock.InGlobalUpdateVpThreadPriorityList )
  {
    DeviceObject = Vpb->DeviceObject;
    do
    {
      v7 = &Blink[-1].Padding[2];
      if ( (struct _DEVICE_OBJECT *)Blink[-1].Padding[4] == DeviceObject )
        break;
      Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
      v7 = 0LL;
    }
    while ( Blink != (struct _KTHREAD *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList );
    if ( v7 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)PspSystemPartition + 1) + 768LL), &LockHandle);
      v8 = (_DWORD *)v7 + 51;
      if ( v7[5] || *v8 )
      {
        if ( NumberOfDirtyPages )
          *NumberOfDirtyPages = *v8 + *((_DWORD *)v7 + 10);
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLock(&v11);
  return v4;
}
