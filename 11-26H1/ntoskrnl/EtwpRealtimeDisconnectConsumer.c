/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x140AB2BB4
 * Callers:
 *     EtwpCloseRealTimeConnectionObject @ 0x1408361B0 (EtwpCloseRealTimeConnectionObject.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140AB2B48 (EtwpRealtimeDisconnectConsumerByHandle.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int *v4; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  unsigned int *v6; // rsi
  unsigned __int64 *v7; // rbp
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rtt

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    v4 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), 1);
    v6 = v4;
    if ( v4 )
    {
      v7 = (unsigned __int64 *)(v4 + 172);
      v8 = (AutoBoost *)KeAbPreAcquire((__int64)(v4 + 172), 0LL, 0LL, v5);
      v10 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
        ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v10, v9);
        else
          *((_BYTE *)v10 + 10) = 1;
      }
      *((_QWORD *)v6 + 44) = a1;
      _m_prefetchw(v6 + 172);
      v11 = *((_QWORD *)v6 + 86);
      v12 = v11 - 16;
      if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v12 = 0LL;
      if ( (v11 & 2) != 0
        || (v13 = *((_QWORD *)v6 + 86),
            v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 86, v12, v11)) )
      {
        ExfReleasePushLock((_QWORD *)v6 + 86);
      }
      KeAbPostRelease((unsigned __int64)(v6 + 172));
      v2 = EtwpSynchronizeWithLogger(v6, 16LL);
      EtwpSynchronizeWithLogger(v6, 4LL);
      KeReleaseMutex((PRKMUTEX)(v6 + 158), 0);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v6 + 170) + 704LL) + 8LL * *v6),
        1u);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v2;
}
