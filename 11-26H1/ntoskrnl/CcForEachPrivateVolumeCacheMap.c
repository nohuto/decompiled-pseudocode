/*
 * XREFs of CcForEachPrivateVolumeCacheMap @ 0x1403E3B28
 * Callers:
 *     CcForEachPartition @ 0x140259934 (CcForEachPartition.c)
 *     CcCoalescingCallBack @ 0x140259D70 (CcCoalescingCallBack.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcExitPartition @ 0x1405B4ED4 (CcExitPartition.c)
 *     CcPartitionTelemetryCallback @ 0x140B1EA80 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostPVCMForDeleteToPartition @ 0x14039EC94 (CcPostPVCMForDeleteToPartition.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x14039EF10 (CcDecrementPrivateVolumeUseCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall CcForEachPrivateVolumeCacheMap(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  char v3; // si
  _QWORD *i; // rbx
  _QWORD *v5; // rdi
  int v6; // eax
  _QWORD *v7; // r12
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 768);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = v7 )
  {
    v5 = i - 72;
    ++*((_DWORD *)i - 143);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 = guard_dispatch_icall_no_overrides(a1, i - 72);
    KeAcquireInStackQueuedSpinLock(v1, &LockHandle);
    v6 = CcDecrementPrivateVolumeUseCount((__int64)(i - 72));
    v7 = (_QWORD *)*i;
    if ( !v6 )
    {
      v9 = v5[74];
      if ( *(_QWORD **)(v9 + 8) != v5 + 74
        || (v10 = (_QWORD *)v5[75], (_QWORD *)*v10 != v5 + 74)
        || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = *i, *(_QWORD **)(*i + 8LL) != i)
        || (v12 = (_QWORD *)i[1], (_QWORD *)*v12 != i) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      CcPostPVCMForDeleteToPartition((__int64)(i - 72), 1, 0LL);
    }
    if ( !v3 )
      break;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
