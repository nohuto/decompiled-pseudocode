/*
 * XREFs of PsLockThreadNameShared @ 0x140617DC4
 * Callers:
 *     EtwTraceThread @ 0x140A7C440 (EtwTraceThread.c)
 * Callees:
 *     PspLockThreadSecurityShared @ 0x140442F10 (PspLockThreadSecurityShared.c)
 */

signed __int64 __fastcall PsLockThreadNameShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  return PspLockThreadSecurityShared(a1, a2, a3, a4);
}
