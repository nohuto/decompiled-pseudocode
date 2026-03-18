/*
 * XREFs of IaLpssReadPmcsr @ 0x1407218D8
 * Callers:
 *     IaLpssPciSetPower @ 0x1407216F8 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadPmcsr(_DWORD *a1, __int64 a2)
{
  if ( !WheapPfaLock.Padding[3] || !a1 )
    return 2LL;
  *a1 = guard_dispatch_icall_no_overrides(WheapPfaLock.Padding[3], a2);
  return 0LL;
}
