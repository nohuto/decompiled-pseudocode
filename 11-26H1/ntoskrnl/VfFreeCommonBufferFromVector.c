/*
 * XREFs of VfFreeCommonBufferFromVector @ 0x140C246D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFreeCommonBufferFromVector(int a1, __int64 a2)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
}
