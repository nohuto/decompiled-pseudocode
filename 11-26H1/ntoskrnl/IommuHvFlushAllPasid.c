/*
 * XREFs of IommuHvFlushAllPasid @ 0x1404EB040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IommuHvFlushAllPasid()
{
  if ( qword_140FBB138 )
    guard_dispatch_icall_no_overrides(0LL, 0xFFFFFFFFLL);
  return 0LL;
}
