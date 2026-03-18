/*
 * XREFs of VfGetDmaAlignment @ 0x140C24AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_IRQL @ 0x140C22E9C (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfGetDmaAlignment(int a1)
{
  __int64 RealDmaAdapter; // rax

  if ( ViGetAdapterInformationInternal(a1) )
    VF_ASSERT_IRQL(0);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter, RealDmaAdapter);
}
