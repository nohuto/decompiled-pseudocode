/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x140AC34DC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1, __int64 a2)
{
  if ( SepRmCapTableLock.KernelWaitTime )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225473LL;
}
