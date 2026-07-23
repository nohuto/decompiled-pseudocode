/*
 * XREFs of HalpHvCounterQueryCounter @ 0x140441E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvCounterQueryCounter(__int64 a1, __int64 a2)
{
  if ( HalpHvTimerApi )
    return guard_dispatch_icall_no_overrides(0LL, a2);
  else
    return __readmsr(0x40000020u);
}
