/*
 * XREFs of IaLpssReadPmcsr @ 0x1407264A8
 * Callers:
 *     IaLpssPciSetPower @ 0x1407262C8 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadPmcsr(_DWORD *a1, __int64 a2)
{
  if ( !qword_140EF00C8 || !a1 )
    return 2LL;
  *a1 = guard_dispatch_icall_no_overrides(qword_140EF00C8, a2);
  return 0LL;
}
