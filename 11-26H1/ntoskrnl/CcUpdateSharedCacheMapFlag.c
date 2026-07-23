/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x1404AD134
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140387538 (CcApplyLowIoPriorityToThread.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404EA98C (CcBoostLowPriorityWorkerThread.c)
 *     CcMapAndCopyFromCache @ 0x140A718D0 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140AF04E0 (CcMdlRead.c)
 *     CcUnmapVacb @ 0x140AFCD38 (CcUnmapVacb.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  int v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 536);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
  v7 = *(_DWORD *)(a1 + 152);
  if ( a3 )
    *(_DWORD *)(a1 + 152) = a2 | v7;
  else
    *(_DWORD *)(a1 + 152) = v7 & ~a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
