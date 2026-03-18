/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140B855F0
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140B855D0 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
