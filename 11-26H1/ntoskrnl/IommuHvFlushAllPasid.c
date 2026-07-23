/*
 * XREFs of IommuHvFlushAllPasid @ 0x1404E4620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IommuHvFlushAllPasid()
{
  if ( qword_140FBB4D8 )
    guard_dispatch_icall_no_overrides(0LL, 0xFFFFFFFFLL);
  return 0LL;
}
