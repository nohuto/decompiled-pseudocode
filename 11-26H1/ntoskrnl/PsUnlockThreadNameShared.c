/*
 * XREFs of PsUnlockThreadNameShared @ 0x140618100
 * Callers:
 *     EtwTraceThread @ 0x140A7C440 (EtwTraceThread.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 */

__int64 __fastcall PsUnlockThreadNameShared(__int64 a1, void *a2)
{
  return PspUnlockThreadSecurityShared(a1, a2);
}
