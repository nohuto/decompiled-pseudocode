/*
 * XREFs of HalpCompleteInitializeProfiling @ 0x140BF3700
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140BF09A0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 (__fastcall *__fastcall HalpCompleteInitializeProfiling(__int64 a1, __int64 a2))()
{
  __int64 (__fastcall *result)(); // rax

  result = HalpProfileInterface[16];
  if ( result )
    return (__int64 (__fastcall *)())guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
