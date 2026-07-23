/*
 * XREFs of ViGetRealDmaAdapter @ 0x140C2D1F4
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140644B20 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140644C30 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x140644C80 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x140644CB0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x140644CF0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140C29100 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C292E0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140C294F0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140C295B0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140C29670 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140C29700 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140C297E0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140C298C0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C29D50 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140C29F20 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140C29F90 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140C2A060 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140C2A0A0 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140C2A0F0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140C2A1E0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140C2A390 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140C2A440 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140C2A4F0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140C2A610 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140C2A6E0 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140C2A730 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140C2A790 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140C2A890 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140C2AA90 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140C2AAD0 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140C2AB20 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C2AF10 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140C2B0B0 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140C2B240 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140C2B300 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C2B4C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C2B6A0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140C2B990 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140C2BB10 (VfReadDmaCounter.c)
 *     VfRegisterFaultCallback @ 0x140C2BB60 (VfRegisterFaultCallback.c)
 *     VfUnregisterFaultCallback @ 0x140C2BBD0 (VfUnregisterFaultCallback.c)
 *     ViReleaseDmaAdapter @ 0x140C2DB4C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140C2D0A0 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140E0EAD8,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140E0EAD8);
  }
  return *(_QWORD *)(a1 + 24);
}
