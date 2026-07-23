/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x14094BA20
 * Callers:
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     NtGetNextThread @ 0x140949FE0 (NtGetNextThread.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v5 = (struct _KTHREAD *)(a1 + 1424);
  _InterlockedOr(v7, 0);
  if ( (*(_QWORD *)&v5->Header.Lock & 1) != 0 )
    ExfAcquireReleasePushLockExclusive(v5, a2, a3, a4);
  return KiLeaveCriticalRegionUnsafe(a2, a2);
}
