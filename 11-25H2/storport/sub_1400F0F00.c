/*
 * XREFs of sub_1400F0F00 @ 0x1400F0F00
 * Callers:
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 *     sub_1400E3180 @ 0x1400E3180 (sub_1400E3180.c)
 *     sub_1400F4DB8 @ 0x1400F4DB8 (sub_1400F4DB8.c)
 *     sub_1400F5264 @ 0x1400F5264 (sub_1400F5264.c)
 *     sub_1400F56B4 @ 0x1400F56B4 (sub_1400F56B4.c)
 *     sub_1400F58E8 @ 0x1400F58E8 (sub_1400F58E8.c)
 *     sub_1400F5B44 @ 0x1400F5B44 (sub_1400F5B44.c)
 *     sub_1400F5DCC @ 0x1400F5DCC (sub_1400F5DCC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400F0F00(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 88) + 720LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  ++*(_WORD *)(a1 + 146);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
