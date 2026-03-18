/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140B74FE0
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140B76250 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140B76400 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140B76680 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140B76F50 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140B77330 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B774E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B776B0 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140B77B20 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140E0E740, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140E0E740);
  }
}
