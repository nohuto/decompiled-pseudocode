/*
 * XREFs of VfReadDmaCounter @ 0x140C25B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C22F1C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfReadDmaCounter(int a1)
{
  __int64 RealDmaAdapter; // rax

  if ( ViGetAdapterInformationInternal(a1) )
    VF_ASSERT_MAX_IRQL();
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter, RealDmaAdapter);
}
