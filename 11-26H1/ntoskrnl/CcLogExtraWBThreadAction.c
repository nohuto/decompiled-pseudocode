/*
 * XREFs of CcLogExtraWBThreadAction @ 0x140501E9C
 * Callers:
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPerfLogExtraWBThreadAction @ 0x140501F40 (CcPerfLogExtraWBThreadAction.c)
 */

__int64 __fastcall CcLogExtraWBThreadAction(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v6 = *(_QWORD *)(a1 + 1056);
  v7 = *(_QWORD *)(a1 + 1080);
  LODWORD(a2) = *(_DWORD *)(a2 + 152);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcPerfLogExtraWBThreadAction(a3, a2, v6, v7, *(_QWORD *)(**(_QWORD **)(a1 + 8) + 22464LL));
}
