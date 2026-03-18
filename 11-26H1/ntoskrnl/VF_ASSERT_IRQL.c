/*
 * XREFs of VF_ASSERT_IRQL @ 0x140C22E9C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140C234E0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140C237D0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140C23A10 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C23D40 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140C24430 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140C24780 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140C248E0 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140C24AC0 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140C24B80 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140C25980 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_140E0EA40, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140E0EA40);
  }
}
