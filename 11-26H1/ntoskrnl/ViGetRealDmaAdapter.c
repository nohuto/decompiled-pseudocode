/*
 * XREFs of ViGetRealDmaAdapter @ 0x140C271E4
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140640F40 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140641050 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1406410A0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1406410D0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x140641110 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140C234E0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140C235A0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140C23660 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140C236F0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140C237D0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140C238B0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140C23A10 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C23D40 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140C23F10 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140C23F80 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140C24050 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140C24090 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140C240E0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140C241D0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140C24380 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140C24430 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140C244E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140C24600 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140C246D0 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140C24720 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140C24780 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140C24880 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140C24A80 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140C24AC0 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140C24B10 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140C24B80 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C24F00 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140C250A0 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140C25230 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140C252F0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C254B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C25690 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140C25980 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140C25B00 (VfReadDmaCounter.c)
 *     VfRegisterFaultCallback @ 0x140C25B50 (VfRegisterFaultCallback.c)
 *     VfUnregisterFaultCallback @ 0x140C25BC0 (VfUnregisterFaultCallback.c)
 *     ViReleaseDmaAdapter @ 0x140C27B3C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140C27090 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140E0EA24,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140E0EA24);
  }
  return *(_QWORD *)(a1 + 24);
}
