/*
 * XREFs of VfAllocateCrashDumpRegisters @ 0x140B75890
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x140604C58 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ADD_MAP_REGISTERS @ 0x140B74A38 (ADD_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B74F60 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
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
  v6 = guard_dispatch_icall_no_overrides(RealDmaAdapter);
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
