/*
 * XREFs of CcIsThereDirtyDataEx @ 0x1405B43F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v4; // bl
  struct _KTHREAD *KernelWaitTime; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  unsigned __int64 *v7; // rdi
  _DWORD *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-20h] BYREF

  memset(&v11, 0, sizeof(v11));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v11);
  KernelWaitTime = (struct _KTHREAD *)EmpParseLock.KernelWaitTime;
  if ( (unsigned __int64 *)EmpParseLock.KernelWaitTime != &EmpParseLock.KernelWaitTime )
  {
    DeviceObject = Vpb->DeviceObject;
    do
    {
      v7 = &KernelWaitTime[-1].Padding[2];
      if ( (struct _DEVICE_OBJECT *)KernelWaitTime[-1].Padding[4] == DeviceObject )
        break;
      KernelWaitTime = *(struct _KTHREAD **)&KernelWaitTime->Header.Lock;
      v7 = 0LL;
    }
    while ( KernelWaitTime != (struct _KTHREAD *)&EmpParseLock.KernelWaitTime );
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
