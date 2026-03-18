/*
 * XREFs of ViGetRealDmaAdapter @ 0x140B7910C
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140604B50 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140604C70 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x140604CC0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x140604CF0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x140604D30 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B75390 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140B755A0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140B75660 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140B75720 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140B757B0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B75890 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140B75970 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140B75AD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B75DD0 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140B75F90 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140B76000 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140B760D0 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140B76110 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B76160 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B76250 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140B76400 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140B764B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B76560 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140B76680 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140B76750 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140B767A0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140B76800 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140B76900 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140B76B00 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140B76B40 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140B76B90 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140B76C00 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B76F50 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140B770E0 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140B77270 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140B77330 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B774E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B776B0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140B779A0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140B77B20 (VfReadDmaCounter.c)
 *     ViReleaseDmaAdapter @ 0x140B79A3C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140B78FC4 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140E0E6E4,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140E0E6E4);
  }
  return *(_QWORD *)(a1 + 24);
}
