/*
 * XREFs of EtwpCovSampCaptureBufferProcess @ 0x14093E770
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x140830C70 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 *     EtwpCovSampContextAddSamples @ 0x14093E870 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampStackHashCheck @ 0x14093ECA8 (EtwpCovSampStackHashCheck.c)
 *     EtwpCovSampContextAddAddresses @ 0x14093F0AC (EtwpCovSampContextAddAddresses.c)
 */

void __fastcall EtwpCovSampCaptureBufferProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rtt
  _KSCB *QueuedScb; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw((const void *)&ExpSysDbgLock.ThreadTimerDelay);
  v5 = *(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ExpSysDbgLock.ThreadTimerDelay,
               (*(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               *(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&ExpSysDbgLock.ThreadTimerDelay) )
  {
    QueuedScb = ExpSysDbgLock.QueuedScb;
    if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
    {
      EtwpCovSampContextAddSamples((struct _KTHREAD *)ExpSysDbgLock.QueuedScb);
    }
    else if ( !(unsigned int)EtwpCovSampStackHashCheck(a1, a2, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
    {
      EtwpCovSampContextAddAddresses((struct _KTHREAD *)QueuedScb);
    }
    if ( QueuedScb )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&ExpSysDbgLock.ThreadTimerDelay);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8);
    }
  }
  else
  {
    KeLeaveCriticalRegion();
  }
}
