/*
 * XREFs of HalpReenableAcpi @ 0x140C0D600
 * Callers:
 *     HalpPowerEarlyRestore @ 0x1404D92A0 (HalpPowerEarlyRestore.c)
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpReenableAcpi(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  LOBYTE(a1) = 1;
  guard_dispatch_icall_no_overrides(a1, a2);
  LOBYTE(v2) = 1;
  return guard_dispatch_icall_no_overrides(v2, v3);
}
