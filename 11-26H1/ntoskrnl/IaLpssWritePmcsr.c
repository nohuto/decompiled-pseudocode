/*
 * XREFs of IaLpssWritePmcsr @ 0x140721AF8
 * Callers:
 *     IaLpssPciSetPower @ 0x1407216F8 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWritePmcsr(unsigned int *a1)
{
  if ( !WheapPfaLock.Padding[3] || !a1 )
    return 2LL;
  guard_dispatch_icall_no_overrides(WheapPfaLock.Padding[3], *a1);
  return 0LL;
}
