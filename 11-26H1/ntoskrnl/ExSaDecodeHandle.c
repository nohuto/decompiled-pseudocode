/*
 * XREFs of ExSaDecodeHandle @ 0x14030C290
 * Callers:
 *     EtwTracePageFault @ 0x1402162F0 (EtwTracePageFault.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14030A994 (EtwpCovSampCaptureBufferQueue.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x14030C010 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14030C0F0 (FsRtlLookupPerFileObjectContext.c)
 *     RtlpHpEnvTlsSetValue @ 0x140348F00 (RtlpHpEnvTlsSetValue.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1404A4B04 (ExpTryAcquireFannedOutPushLockShared.c)
 *     EtwpCovSampCaptureBufferGet @ 0x1404FAF70 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCoverageSamplerReadyThread @ 0x140533BB8 (EtwpCoverageSamplerReadyThread.c)
 *     EtwpCoverageSamplerContextSwap @ 0x140534A54 (EtwpCoverageSamplerContextSwap.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406CC720 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampProfileInterrupt @ 0x1406CCBD0 (EtwpCovSampProfileInterrupt.c)
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
