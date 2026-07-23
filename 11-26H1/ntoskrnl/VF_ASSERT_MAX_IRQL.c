/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140C28F2C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140C2A1E0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140C2A390 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140C2A610 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140C2AF10 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140C2B300 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C2B4C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C2B6A0 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140C2BB10 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140E0EA9C, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140E0EA9C);
  }
}
