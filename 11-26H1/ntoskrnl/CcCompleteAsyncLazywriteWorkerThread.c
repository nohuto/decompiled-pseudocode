/*
 * XREFs of CcCompleteAsyncLazywriteWorkerThread @ 0x1405B5F40
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcCompleteAsyncLazywriteWorker @ 0x1405B5E78 (CcCompleteAsyncLazywriteWorker.c)
 */

char __fastcall CcCompleteAsyncLazywriteWorkerThread(__int64 a1)
{
  __int64 v1; // rsi
  char result; // al
  bool v3; // zf
  __int64 v4; // rbp
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 72);
  result = 0;
  v3 = *(_DWORD *)(a1 + 32) == 8;
  v4 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = v1 + 360;
  if ( v3 )
  {
    CcCompleteAsyncLazywriteWorker(a1);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
    v8 = *(__int64 **)(v1 + 368);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = a1;
    *(_QWORD *)(v1 + 368) = a1;
    --*(_DWORD *)(v1 + 376);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return CcDereferencePartitionAndPrivateVolumeCacheMap(v4, v6);
  }
  return result;
}
