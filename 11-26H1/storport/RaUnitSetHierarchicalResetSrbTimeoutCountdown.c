/*
 * XREFs of RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1400A0118
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1400A8384 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     <none>
 */

void __fastcall RaUnitSetHierarchicalResetSrbTimeoutCountdown(__int64 a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1920), &LockHandle);
  *(_DWORD *)(a1 + 1908) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
