/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140C398C0
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140C398A0 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
