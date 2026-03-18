/*
 * XREFs of HalpHvEnterSleepState @ 0x140585C90
 * Callers:
 *     HalpShutdown @ 0x14057FA90 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvEnterSleepState(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FBB058 )
    return guard_dispatch_icall_no_overrides(a1, qword_140FBB058);
  return result;
}
