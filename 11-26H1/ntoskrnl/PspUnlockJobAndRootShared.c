/*
 * XREFs of PspUnlockJobAndRootShared @ 0x14077ACBC
 * Callers:
 *     PspCheckAllocateAndQueryNotificationChannel @ 0x140776F6C (PspCheckAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     PspUnlockJobShared @ 0x140AAD180 (PspUnlockJobShared.c)
 */

__int64 __fastcall PspUnlockJobAndRootShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 != *(_QWORD *)(a1 + 1312) )
    PspUnlockJobShared(a1, a2, a3);
  return PspUnlockJobShared(*(_QWORD *)(a1 + 1312), a2, a4);
}
