/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140C22F1C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140C241D0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140C24380 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140C24600 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140C24F00 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140C252F0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C254B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C25690 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140C25B00 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140E0EA48, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140E0EA48);
  }
}
