/*
 * XREFs of VfAllocateCrashDumpRegisters @ 0x140C237D0
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x1405332A4 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ADD_MAP_REGISTERS @ 0x140C2293C (ADD_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140C22E9C (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegisters(int a1, unsigned int *a2)
{
  __int64 AdapterInformationInternal; // rsi
  __int64 RealDmaAdapter; // rax
  __int64 v6; // rbx

  if ( KeGetCurrentIrql() > 2u )
    VfDisableHalVerifier();
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  v6 = guard_dispatch_icall_no_overrides(RealDmaAdapter, (__int64)a2);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    _InterlockedAdd((volatile signed __int32 *)(AdapterInformationInternal + 184), *a2);
    ADD_MAP_REGISTERS(AdapterInformationInternal, *a2, 0);
    if ( ViVerifyDma )
    {
      if ( !v6 )
        return -559026163LL;
    }
  }
  return v6;
}
