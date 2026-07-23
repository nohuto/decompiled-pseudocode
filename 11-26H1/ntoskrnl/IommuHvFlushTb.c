/*
 * XREFs of IommuHvFlushTb @ 0x14059FD60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvFlushTb(__int64 a1)
{
  if ( qword_140FBB4D8 )
    guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL));
  return 0LL;
}
