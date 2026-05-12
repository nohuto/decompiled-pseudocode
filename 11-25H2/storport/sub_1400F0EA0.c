/*
 * XREFs of sub_1400F0EA0 @ 0x1400F0EA0
 * Callers:
 *     sub_1400DCCE0 @ 0x1400DCCE0 (sub_1400DCCE0.c)
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400F0EA0(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 88) + 720LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  --*(_WORD *)(a1 + 146);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
