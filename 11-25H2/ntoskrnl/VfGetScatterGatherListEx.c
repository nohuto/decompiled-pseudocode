/*
 * XREFs of VfGetScatterGatherListEx @ 0x140B76F50
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B74C74 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B74ED4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B74FE0 (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckMdlLength @ 0x140B7844C (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfGetScatterGatherListEx(int a1, __int64 a2, __int64 a3, ULONG_PTR a4, __int64 a5, unsigned int a6)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rdi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 196));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 200));
    VERIFY_BUFFER_LOCKED(a4);
    v10 = ViCheckMdlLength(a4, a5, a6);
    if ( v10 )
    {
      v11 = v10;
      ViHalPreprocessOptions(
        byte_140E0E6F8,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v10,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_140E0E6F8);
    }
  }
  v12 = guard_dispatch_icall_no_overrides(RealDmaAdapter);
  v13 = v12;
  if ( AdapterInformationInternal && v12 < 0 )
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  return v13;
}
