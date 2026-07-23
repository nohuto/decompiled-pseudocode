/*
 * XREFs of VF_ASSERT_IRQL @ 0x140C28EAC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140C29100 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C292E0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140C294F0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140C297E0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C29D50 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140C2A440 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140C2A790 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140C2A8F0 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140C2AAD0 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140C2B990 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_140E0EA98, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140E0EA98);
  }
}
