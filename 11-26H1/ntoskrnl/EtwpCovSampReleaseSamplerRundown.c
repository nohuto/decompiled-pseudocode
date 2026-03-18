/*
 * XREFs of EtwpCovSampReleaseSamplerRundown @ 0x140940F74
 * Callers:
 *     EtwpCoverageSamplerUnloadImage @ 0x14093FA28 (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampImageNotify @ 0x140940E70 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140942E78 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall EtwpCovSampReleaseSamplerRundown(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  if ( a1 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&ExpSysDbgLock.ThreadTimerDelay);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2);
  }
  return result;
}
