/*
 * XREFs of VfFreeCommonBufferVector @ 0x140B767A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFreeCommonBufferVector(__int64 a1)
{
  ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(a1);
}
