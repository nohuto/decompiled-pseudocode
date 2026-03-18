/*
 * XREFs of CcSetLoggedDataThreshold @ 0x1404FA800
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall CcSetLoggedDataThreshold(void *a1, unsigned int a2)
{
  struct _KTHREAD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v6; // [rsp+38h] [rbp-20h] BYREF

  memset(&v6, 0, sizeof(v6));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v6);
  for ( i = (struct _KTHREAD *)EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
        i != (struct _KTHREAD *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( i->SListFaultAddress == a1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)PspSystemPartition + 1) + 768LL), &LockHandle);
      i->ReadyTime = a2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&v6);
}
