/*
 * XREFs of HalpIommuSetupMessageInterruptRouting @ 0x140BEBC10
 * Callers:
 *     HalpIommuConfigureInterrupt @ 0x14058BC8C (HalpIommuConfigureInterrupt.c)
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuSetupMessageInterruptRouting(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2);
}
