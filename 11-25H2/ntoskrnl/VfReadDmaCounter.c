/*
 * XREFs of VfReadDmaCounter @ 0x140B77B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B74FE0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfReadDmaCounter(int a1)
{
  __int64 RealDmaAdapter; // rax

  if ( ViGetAdapterInformationInternal(a1) )
    VF_ASSERT_MAX_IRQL();
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter);
}
