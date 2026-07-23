/*
 * XREFs of EtwpCovSampReleaseSamplerRundown @ 0x140A34084
 * Callers:
 *     EtwpCoverageSamplerUnloadImage @ 0x140A32B38 (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampImageNotify @ 0x140A33F80 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140A35F88 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall EtwpCovSampReleaseSamplerRundown(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&ExpSysDbgLock.1008);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
