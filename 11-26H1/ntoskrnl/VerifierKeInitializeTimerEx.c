/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140C338B0
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140C33890 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
