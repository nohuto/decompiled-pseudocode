/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140B78EB8
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B75390 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140B755A0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140B75660 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140B757B0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B75890 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140B75970 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140B75AD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B75DD0 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140B76000 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B76160 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B76250 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140B76400 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140B764B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B76560 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140B76680 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140B76800 (VfFreeMapRegisters.c)
 *     VfGetDmaAlignment @ 0x140B76B40 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140B76C00 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B76F50 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140B770E0 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140B77330 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B774E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B776B0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140B779A0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140B77B20 (VfReadDmaCounter.c)
 *     ViGetAdapterInformation @ 0x140B78EA0 (ViGetAdapterInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B74FE0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterSignature @ 0x140B78FC4 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F036D0);
  for ( i = ViAdapterList.Flink; ; i = i->Flink )
  {
    if ( &ViAdapterList == i )
    {
      KeReleaseSpinLock(&qword_140F036D0, v4);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == &i[1] )
      break;
  }
  KeReleaseSpinLock(&qword_140F036D0, v4);
  if ( a2 )
  {
    if ( SHIDWORD(i[4].Blink) <= 0 )
    {
      ViHalPreprocessOptions(
        byte_140E0E75C,
        "Driver has attempted to access an adapter (%p) that has already been released",
        (const void *)0x18);
      VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)i, 0LL, byte_140E0E75C);
    }
  }
  return i;
}
