/*
 * XREFs of VfGetScatterGatherListEx @ 0x140C2AF10
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140C28BAC (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140C28E20 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C28F2C (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckMdlLength @ 0x140C2C528 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfGetScatterGatherListEx(int a1, __int64 a2, __int64 a3, ULONG_PTR a4, __int64 a5, unsigned int a6)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rdi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 196));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 200));
    VERIFY_BUFFER_LOCKED(a4);
    v11 = ViCheckMdlLength(a4, a5, a6);
    if ( v11 )
    {
      v12 = v11;
      ViHalPreprocessOptions(
        byte_140E0EACC,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v11,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140E0EACC);
    }
  }
  v13 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  v14 = v13;
  if ( AdapterInformationInternal && v13 < 0 )
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  return v14;
}
