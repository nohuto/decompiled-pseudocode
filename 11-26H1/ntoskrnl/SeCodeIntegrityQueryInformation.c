/*
 * XREFs of SeCodeIntegrityQueryInformation @ 0x140ABB0F4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCodeIntegrityQueryInformation(__int64 a1, __int64 a2)
{
  if ( SepRmCapTableLock.OtherOperationCount )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225473LL;
}
