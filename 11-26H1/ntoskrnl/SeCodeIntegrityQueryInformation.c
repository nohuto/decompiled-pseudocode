/*
 * XREFs of SeCodeIntegrityQueryInformation @ 0x140AB9C30
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCodeIntegrityQueryInformation(__int64 a1, __int64 a2)
{
  if ( SepRmCapTableLock.GlobalForegroundListEntry.Flink )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225473LL;
}
