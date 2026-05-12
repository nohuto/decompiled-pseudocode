/*
 * XREFs of sub_1400973B0 @ 0x1400973B0
 * Callers:
 *     sub_14009F5C4 @ 0x14009F5C4 (sub_14009F5C4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400973B0(__int64 a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1920), &LockHandle);
  *(_DWORD *)(a1 + 1908) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
