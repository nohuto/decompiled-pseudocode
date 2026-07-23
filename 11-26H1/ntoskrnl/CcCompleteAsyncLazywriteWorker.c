/*
 * XREFs of CcCompleteAsyncLazywriteWorker @ 0x1405B5E78
 * Callers:
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x1405B5F40 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFindNextWorkQueueEntry @ 0x1403870A0 (CcFindNextWorkQueueEntry.c)
 *     CcCompleteAsyncWriteBehind @ 0x1405B5FF4 (CcCompleteAsyncWriteBehind.c)
 */

void __fastcall CcCompleteAsyncLazywriteWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rcx
  _SLIST_ENTRY *NextWorkQueueEntry; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 72);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(a1 + 40) < *(_DWORD *)(*(_QWORD *)(a1 + 64) + 1612LL) )
    {
      v2 = *(_QWORD *)(a1 + 56);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
      while ( *(_QWORD *)(v1 + 384) != v1 + 384 )
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v3, v1, (_QWORD *)(v1 + 384));
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        CcCompleteAsyncWriteBehind(NextWorkQueueEntry);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
