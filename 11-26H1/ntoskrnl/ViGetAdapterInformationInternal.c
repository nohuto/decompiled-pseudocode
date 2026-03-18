/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140C26F80
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140C234E0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140C235A0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140C236F0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140C237D0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140C238B0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140C23A10 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C23D40 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140C23F80 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140C240E0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140C241D0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140C24380 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140C24430 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140C244E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140C24600 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140C24780 (VfFreeMapRegisters.c)
 *     VfGetDmaAlignment @ 0x140C24AC0 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140C24B80 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C24F00 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140C250A0 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140C252F0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C254B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C25690 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140C25980 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140C25B00 (VfReadDmaCounter.c)
 *     ViGetAdapterInformation @ 0x140C26F68 (ViGetAdapterInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C22F1C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterSignature @ 0x140C27090 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
 */

struct _LIST_ENTRY *__fastcall ViGetAdapterInformationInternal(ULONG_PTR a1, char a2)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *i; // rbx

  if ( !a1 || !ViVerifyDma || (unsigned int)ViGetAdapterSignature() != 1634550870 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F08290);
  for ( i = ViAdapterList.Flink; ; i = i->Flink )
  {
    if ( &ViAdapterList == i )
    {
      KeReleaseSpinLock(&qword_140F08290, v4);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == &i[1] )
      break;
  }
  KeReleaseSpinLock(&qword_140F08290, v4);
  if ( a2 )
  {
    if ( SHIDWORD(i[4].Blink) <= 0 )
    {
      ViHalPreprocessOptions(
        byte_140E0EA84,
        "Driver has attempted to access an adapter (%p) that has already been released",
        (const void *)0x18);
      VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)i, 0LL, byte_140E0EA84);
    }
  }
  return i;
}
