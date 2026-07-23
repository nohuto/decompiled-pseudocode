/*
 * XREFs of CcAsyncLazywriteWorkerThread @ 0x1404B4CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 */

char __fastcall CcAsyncLazywriteWorkerThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char result; // al
  bool v6; // zf
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v10; // r14
  __int64 *v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  result = 0;
  v6 = *(_DWORD *)(a1 + 32) == 7;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = v4 + 288;
  memset(&v13, 0, sizeof(v13));
  if ( v6 )
  {
    *(_DWORD *)(*(_QWORD *)(v4 + 352) + 4LL * *(unsigned int *)(a1 + 40)) = 0;
    if ( (*(_DWORD *)(v8 + 1616) & 2) != 0 )
      CcAsyncLazywriteWorkerMulti(a1, a2, a3, a4, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
    else
      CcAsyncLazywriteWorker(a1, a2, a3);
    *(_DWORD *)(*(_QWORD *)(v4 + 352) + 4LL * *(unsigned int *)(a1 + 40)) = -1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 832), &LockHandle);
    v11 = *(__int64 **)(v4 + 296);
    if ( *v11 != v10 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = v10;
    *v11 = a1;
    *(_QWORD *)(v4 + 296) = a1;
    --*(_DWORD *)(v4 + 304);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_DWORD *)(v4 + 304) <= 1u
      && *(_QWORD *)(v8 + 992) >= (unsigned __int64)*(unsigned int *)(v8 + 1040)
      && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v8 + 1600) + 5000000LL )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 768), &v13);
      CcNotifyWriteBehindVolume(v8, 32);
      KeReleaseInStackQueuedSpinLock(&v13);
    }
    return CcDereferencePartitionAndPrivateVolumeCacheMap(v7, v8);
  }
  return result;
}
