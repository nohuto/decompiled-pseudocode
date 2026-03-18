/*
 * XREFs of ExSaDecodeHandle @ 0x1402C15D0
 * Callers:
 *     EtwTracePageFault @ 0x140215FC0 (EtwTracePageFault.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1402BFCD0 (EtwpCovSampCaptureBufferQueue.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x1402C1350 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402C1430 (FsRtlLookupPerFileObjectContext.c)
 *     RtlpHpEnvTlsSetValue @ 0x140346E80 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14035402C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1404AB474 (ExpTryAcquireFannedOutPushLockShared.c)
 *     EtwpCovSampCaptureBufferGet @ 0x140501780 (EtwpCovSampCaptureBufferGet.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x14051C628 (RtlpHpLfhSubsegmentCreate.c)
 *     EtwpCoverageSamplerReadyThread @ 0x140531710 (EtwpCoverageSamplerReadyThread.c)
 *     EtwpCoverageSamplerContextSwap @ 0x1405325B4 (EtwpCoverageSamplerContextSwap.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F416C (KiCpuPartitionCheckAffinitization.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140639B24 (RtlpHpLfhPrivateSlotListCompact.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406C8740 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureSample @ 0x1406C8944 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampProfileInterrupt @ 0x1406C8BF0 (EtwpCovSampProfileInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSaDecodeHandle(unsigned int a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // r10
  unsigned int v3; // ecx

  v1 = (a1 >> 13) & 0x3FFFF;
  v2 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v3, v1);
  return *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2) + 8 * (v1 ^ (unsigned int)(1 << v3)) + 8)
       + 8 * (v2 & 0x1FF);
}
