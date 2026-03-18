/*
 * XREFs of IaLpssWriteCmdStatus @ 0x140721ABC
 * Callers:
 *     IaLpssPciSetPower @ 0x1407216F8 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWriteCmdStatus(unsigned int *a1)
{
  if ( !WheapPfaLock.Padding[1] || !a1 )
    return 2LL;
  guard_dispatch_icall_no_overrides(WheapPfaLock.Padding[1], *a1);
  return 0LL;
}
