/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140C2CF90
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140C29100 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C292E0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140C294F0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140C295B0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140C29700 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140C297E0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140C298C0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C29D50 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140C29F90 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140C2A0F0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140C2A1E0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140C2A390 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140C2A440 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140C2A4F0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140C2A610 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140C2A790 (VfFreeMapRegisters.c)
 *     VfGetDmaAlignment @ 0x140C2AAD0 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C2AF10 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140C2B0B0 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140C2B300 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C2B4C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C2B6A0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140C2B990 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140C2BB10 (VfReadDmaCounter.c)
 *     ViGetAdapterInformation @ 0x140C2CF78 (ViGetAdapterInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C28F2C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterSignature @ 0x140C2D0A0 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F085F0);
  for ( i = ViAdapterList.Flink; ; i = i->Flink )
  {
    if ( &ViAdapterList == i )
    {
      KeReleaseSpinLock(&qword_140F085F0, v4);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == &i[1] )
      break;
  }
  KeReleaseSpinLock(&qword_140F085F0, v4);
  if ( a2 )
  {
    if ( SHIDWORD(i[4].Blink) <= 0 )
    {
      ViHalPreprocessOptions(
        byte_140E0EB3C,
        "Driver has attempted to access an adapter (%p) that has already been released",
        (const void *)0x18);
      VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)i, 0LL, byte_140E0EB3C);
    }
  }
  return i;
}
