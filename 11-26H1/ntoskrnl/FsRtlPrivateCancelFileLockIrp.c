/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x140505750
 * Callers:
 *     FsRtlPrivateLock @ 0x1402C0190 (FsRtlPrivateLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403FD938 (FsRtlCompleteLockIrpReal.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, IRP *a2)
{
  KSPIN_LOCK *v2; // r14
  KIRQL CancelIrql; // r15
  KSPIN_LOCK *v4; // rbx
  char v5; // si
  __int64 *v7; // rcx
  __int64 *v8; // rdi
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = &FsRtlFileLockCancelCollideLock;
  CancelIrql = a2->CancelIrql;
  v4 = (KSPIN_LOCK *)(a2->IoStatus.Information + 24);
  v5 = 0;
  if ( !a1 )
    goto LABEL_3;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CancelIrql = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
  v7 = &FsRtlFileLockCancelCollideList;
  v5 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = (__int64 *)*v7;
      if ( !*v7 )
        break;
      if ( (IRP *)v8[3] == a2 )
      {
        *v7 = *v8;
        if ( v5 || v8 != (__int64 *)v4[4] )
        {
          a2->IoStatus.Information = 0LL;
          if ( v5 )
          {
LABEL_14:
            KeReleaseSpinLock(v2, CancelIrql);
            FsRtlCompleteLockIrpReal(v8[1], v8[2], a2, -1073741536, &v9, 0LL);
            ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v8);
            return;
          }
        }
        else
        {
          v4[4] = (KSPIN_LOCK)v7;
          a2->IoStatus.Information = 0LL;
        }
        v2 = v4;
        goto LABEL_14;
      }
      v7 = (__int64 *)*v7;
    }
    if ( !v5 )
      break;
    v5 = 0;
    KxAcquireSpinLock(v4);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
LABEL_3:
    v7 = (__int64 *)(v4 + 3);
  }
  KeReleaseSpinLock(v4, CancelIrql);
}
