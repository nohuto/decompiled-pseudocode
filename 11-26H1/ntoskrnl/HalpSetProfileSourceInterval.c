/*
 * XREFs of HalpSetProfileSourceInterval @ 0x140530C2C
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x1405844A8 (HalpTimerInitializeProfiling.c)
 *     HalpSetSystemInformation @ 0x140B10D50 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetProfileSourceInterval(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
