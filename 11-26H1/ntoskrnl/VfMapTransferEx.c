/*
 * XREFs of VfMapTransferEx @ 0x140C2B4C0
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140C28C44 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140C28E20 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C28F2C (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckAdapterBuffers @ 0x140C2C464 (ViCheckAdapterBuffers.c)
 *     ViCheckMdlLength @ 0x140C2C528 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfMapTransferEx(int a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, unsigned int *a6)
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
    VERIFY_BUFFER_LOCKED(a2);
    ViCheckAdapterBuffers(AdapterInformationInternal);
    v11 = ViCheckMdlLength(a2, a4, *a6);
    if ( v11 )
    {
      v12 = v11;
      ViHalPreprocessOptions(
        byte_140E0EAC8,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v11,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140E0EAC8);
    }
  }
  v13 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  v14 = v13;
  if ( AdapterInformationInternal && v13 >= 0 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(AdapterInformationInternal, *a6, 1);
  return v14;
}
