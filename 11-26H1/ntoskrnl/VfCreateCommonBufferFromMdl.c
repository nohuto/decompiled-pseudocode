/*
 * XREFs of VfCreateCommonBufferFromMdl @ 0x140C2A0F0
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfCreateCommonBufferFromMdl(int a1, ULONG_PTR a2, ULONG_PTR a3, unsigned int a4)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rbx
  int v10; // edi

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v10 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  if ( v10 == -1073741811 )
  {
    if ( AdapterInformationInternal )
    {
      ViHalPreprocessOptions(
        byte_140E0EAD4,
        "MDL-backed common buffer creation failed due to invalid extended configurations (%p, count 0x%x) or an incompatible MDL (%p)",
        (const void *)0x26,
        a3,
        (const void *)a4);
      VfReportIssueWithOptions(0xE6u, 0x26uLL, a3, a4, a2, byte_140E0EAD4);
    }
  }
  else if ( v10 >= 0 && AdapterInformationInternal )
  {
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 204));
  }
  return (unsigned int)v10;
}
