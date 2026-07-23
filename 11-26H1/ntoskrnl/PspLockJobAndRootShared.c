/*
 * XREFs of PspLockJobAndRootShared @ 0x140B6D224
 * Callers:
 *     PspCheckAllocateAndQueryNotificationChannel @ 0x140779E14 (PspCheckAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     PspLockRootJobShared @ 0x140777B38 (PspLockRootJobShared.c)
 *     PspLockJobShared @ 0x140A87E58 (PspLockJobShared.c)
 */

char __fastcall PspLockJobAndRootShared(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v7; // rax

  PspLockRootJobShared(a1, a2, a4);
  v7 = *(_QWORD *)(a1 + 1312);
  if ( a1 != v7 )
    LOBYTE(v7) = PspLockJobShared(a1, a2, a3);
  return v7;
}
