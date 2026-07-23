/*
 * XREFs of EtwpCovSampCaptureBufferProcess @ 0x140A31888
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x140836EB0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampContextAddSamples @ 0x140A31980 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampStackHashCheck @ 0x140A31DB8 (EtwpCovSampStackHashCheck.c)
 *     EtwpCovSampContextAddAddresses @ 0x140A321BC (EtwpCovSampContextAddAddresses.c)
 */

void __fastcall EtwpCovSampCaptureBufferProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rtt
  struct _KTHREAD *UserWaitTime; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&ExpSysDbgLock.1008);
  v5 = (unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
               ((unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               (unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&ExpSysDbgLock.1008) )
  {
    UserWaitTime = (struct _KTHREAD *)ExpSysDbgLock.UserWaitTime;
    if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
    {
      EtwpCovSampContextAddSamples((struct _KTHREAD *)ExpSysDbgLock.UserWaitTime);
    }
    else if ( !(unsigned int)EtwpCovSampStackHashCheck(a1, a2, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
    {
      EtwpCovSampContextAddAddresses(UserWaitTime);
    }
    if ( UserWaitTime )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&ExpSysDbgLock.1008);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    KeLeaveCriticalRegion();
  }
}
