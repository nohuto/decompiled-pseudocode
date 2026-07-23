/*
 * XREFs of CcQuickLazyWriteScanForVolume @ 0x14038BAD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 */

__int64 __fastcall CcQuickLazyWriteScanForVolume(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v5; // rdx
  int v6; // r9d
  _QWORD *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[6];
  v2 = a1[8];
  v3 = a1[7];
  v5 = a1[9];
  LockHandle.LockQueue = 0LL;
  a1[6] = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v6 = *(_DWORD *)(v1 + 16);
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)v1 = 0LL;
  CcLazyWriteScanVolume(v2, v5, v1, v6);
  CcFreeWorkQueueEntry((PSLIST_ENTRY)v1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 832), &LockHandle);
  v7 = *(_QWORD **)(v2 + 1568);
  if ( *v7 != v2 + 1560 )
    __fastfail(3u);
  a1[1] = v7;
  *a1 = v2 + 1560;
  *v7 = a1;
  *(_QWORD *)(v2 + 1568) = a1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcDereferencePartitionAndPrivateVolumeCacheMap(v3, v2);
}
