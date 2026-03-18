/*
 * XREFs of VF_ASSERT_IRQL @ 0x140B74F60
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B75390 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140B755A0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B75890 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140B75AD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B75DD0 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140B764B0 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140B76800 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140B76960 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140B76B40 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140B76C00 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B779A0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_140E0E744, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140E0E744);
  }
}
