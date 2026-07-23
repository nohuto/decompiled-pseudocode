/*
 * XREFs of EtwpReferenceLoggerSecurityDescriptor @ 0x14097A538
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall EtwpReferenceLoggerSecurityDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  signed __int64 v5; // rbx
  signed __int64 v6; // rax
  int v7; // eax
  unsigned __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v11; // rbx
  signed __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  _m_prefetchw((const void *)(a1 + 784));
  v5 = *(_QWORD *)(a1 + 784);
  if ( (v5 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v5 - 1, v5);
      if ( v5 == v6 )
        break;
      v5 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  v7 = v5 & 0xF;
  if ( (v5 & 0xF) != 0 )
  {
    v8 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v7 == 1 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0xFuLL) <= 0 )
        __fastfail(0xEu);
      _m_prefetchw((const void *)(a1 + 784));
      v13 = *(_QWORD *)(a1 + 784);
      while ( (unsigned __int64)(v13 & 0xF) + 15 <= 0xF && v8 == (v13 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v13 + 15, v13);
        if ( v14 == v13 )
          return v8;
      }
      ObDereferenceSecurityDescriptor(v8, 0xFu, 15LL, a4);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F03830.UserWaitTime, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F03830.UserWaitTime, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&stru_140F03830.UserWaitTime,
        0,
        v11,
        (struct _KTHREAD *)&stru_140F03830.UserWaitTime);
    v12 = 0LL;
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, 0LL);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v8 = *(_QWORD *)(a1 + 784) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 1uLL) <= 0 )
      __fastfail(0xEu);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F03830.UserWaitTime, v12, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140F03830.UserWaitTime);
    KeAbPostRelease((unsigned __int64)&stru_140F03830.UserWaitTime);
    KeLeaveCriticalRegion();
  }
  return v8;
}
