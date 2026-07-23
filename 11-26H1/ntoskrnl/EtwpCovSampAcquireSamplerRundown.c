/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x140A340F8
 * Callers:
 *     EtwpCoverageSamplerUnloadImage @ 0x140A32B38 (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampImageNotify @ 0x140A33F80 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140A35F88 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&ExpSysDbgLock.1008);
  v3 = (unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
               ((unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               (unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&ExpSysDbgLock.1008) )
  {
    *a1 = ExpSysDbgLock.UserWaitTime;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
