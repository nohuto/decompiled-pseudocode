/*
 * XREFs of HalpRestartProfiling @ 0x1404ECC30
 * Callers:
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140BF40F0 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpRestartPmcCounterSet @ 0x1404ECC64 (HalpRestartPmcCounterSet.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpRestartProfiling(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  guard_dispatch_icall_no_overrides(a1, a2);
  HalpRestartPmcCounterSet();
  LOBYTE(v2) = 1;
  return guard_dispatch_icall_no_overrides(v2, v3);
}
