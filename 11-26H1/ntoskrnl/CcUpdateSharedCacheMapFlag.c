/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x1404B3B68
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140385788 (CcApplyLowIoPriorityToThread.c)
 *     CcPurgeAndClearCacheSection @ 0x1404B3978 (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404F13AC (CcBoostLowPriorityWorkerThread.c)
 *     CcMapAndCopyFromCache @ 0x140A64900 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140AED790 (CcMdlRead.c)
 *     CcUnmapVacb @ 0x140AFAAD0 (CcUnmapVacb.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
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
