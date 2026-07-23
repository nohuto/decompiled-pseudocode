/*
 * XREFs of CcReferenceSharedCacheMapByVacb @ 0x140409614
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

char __fastcall CcReferenceSharedCacheMapByVacb(__int64 a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v2 + 536) + 768LL), &LockHandle);
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v4 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) == v4 )
  {
    v3 = 1;
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(v4 + 544);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v3;
}
