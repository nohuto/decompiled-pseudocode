/*
 * XREFs of DbgkpLkmdIsMemoryBlockPresentFromCallback @ 0x14078B780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpLkmdIsMemoryBlockPresentFromCallback(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1 + 0x4000, a2);
}
