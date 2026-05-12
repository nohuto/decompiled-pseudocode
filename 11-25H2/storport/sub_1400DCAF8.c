/*
 * XREFs of sub_1400DCAF8 @ 0x1400DCAF8
 * Callers:
 *     sub_1400DCCE0 @ 0x1400DCCE0 (sub_1400DCCE0.c)
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 * Callees:
 *     sub_1400DF424 @ 0x1400DF424 (sub_1400DF424.c)
 *     sub_1400E4AC4 @ 0x1400E4AC4 (sub_1400E4AC4.c)
 */

void __fastcall sub_1400DCAF8(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 104), &LockHandle);
  sub_1400E4AC4(a1, *(unsigned __int16 *)(a2 + 780));
  sub_1400DF424(a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
