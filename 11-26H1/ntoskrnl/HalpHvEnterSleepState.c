/*
 * XREFs of HalpHvEnterSleepState @ 0x1405881B0
 * Callers:
 *     HalpShutdown @ 0x140581FB0 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvEnterSleepState(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FBB3F8 )
    return guard_dispatch_icall_no_overrides(a1, qword_140FBB3F8);
  return result;
}
