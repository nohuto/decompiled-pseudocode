/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x140940FE8
 * Callers:
 *     EtwpCoverageSamplerUnloadImage @ 0x14093FA28 (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampImageNotify @ 0x140940E70 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140942E78 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_KSCB **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw((const void *)&ExpSysDbgLock.ThreadTimerDelay);
  v3 = *(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ExpSysDbgLock.ThreadTimerDelay,
               (*(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               *(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&ExpSysDbgLock.ThreadTimerDelay) )
  {
    *a1 = ExpSysDbgLock.QueuedScb;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
