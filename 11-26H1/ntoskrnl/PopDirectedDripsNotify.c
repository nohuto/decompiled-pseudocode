/*
 * XREFs of PopDirectedDripsNotify @ 0x140B0A610
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1409F88DC (PopDirectedDripsUmMarkTestDevices.c)
 *     PopAcquireTransitionLock @ 0x140B3BB24 (PopAcquireTransitionLock.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B41B9C (PopDripsWatchdogCallbackHandler.c)
 *     PopReleaseTransitionLock @ 0x140B4DDD0 (PopReleaseTransitionLock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14047CCB8 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14047CD20 (PopDirectedDripsSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x14047CD84 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsEngage @ 0x1404C1A5C (PopDirectedDripsEngage.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsSendSessionData @ 0x140B0A93C (PopDirectedDripsSendSessionData.c)
 *     PopDirectedDripsDiagNotifySessionStart @ 0x140B0B470 (PopDirectedDripsDiagNotifySessionStart.c)
 */

void __fastcall PopDirectedDripsNotify(int a1, char *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int32 v5; // eax
  __int64 v6; // r8
  unsigned __int32 v7; // ett
  int v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // edi
  AutoBoost *v13; // rax
  void *v14; // rdx
  signed __int8 v15; // cf
  AutoBoost *v16; // rsi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rsi
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rdi
  __int64 v22; // rcx
  AutoBoost *v23; // rax
  void *v24; // rdx
  AutoBoost *v25; // rdi
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // ecx
  AutoBoost *v29; // rax
  void *v30; // rdx
  AutoBoost *v31; // rdi
  AutoBoost *v32; // rax
  void *v33; // rdx
  AutoBoost *v34; // rdi
  signed __int32 v35; // eax
  signed __int32 v36; // ett

  _m_prefetchw(&PopDirectedDripsState);
  v5 = PopDirectedDripsState;
  do
  {
    v6 = v5;
    v7 = v5;
    v5 = _InterlockedCompareExchange(&PopDirectedDripsState, v5, v5);
  }
  while ( v7 != v5 );
  if ( (v5 & 1) == 0 )
    return;
  v8 = 0;
  if ( a1 > 5 )
  {
    v17 = (unsigned int)(a1 - 6);
    if ( !(_DWORD)v17 )
    {
      PopDirectedDripsEngage(v17, *a2, v6);
      return;
    }
    v27 = v17 - 1;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 != 1 )
          return;
        v29 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12EA0, 0LL, 0LL, a4);
        v15 = _interlockedbittestandset64(&stru_140F12EA0.Header.Lock, 0LL);
        v31 = v29;
        if ( v15 )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12EA0, v29, (__int64)&stru_140F12EA0);
        if ( v31 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v31, v30);
          else
            *((_BYTE *)v31 + 10) = 1;
        }
        if ( !--LODWORD(stru_140F12EA0.ThreadLock) )
          PopDirectedDripsClearDisengageReason(1);
      }
      else
      {
        v32 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12EA0, 0LL, 0LL, a4);
        v15 = _interlockedbittestandset64(&stru_140F12EA0.Header.Lock, 0LL);
        v34 = v32;
        if ( v15 )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12EA0, v32, (__int64)&stru_140F12EA0);
        if ( v34 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v34, v33);
          else
            *((_BYTE *)v34 + 10) = 1;
        }
        if ( ++LODWORD(stru_140F12EA0.ThreadLock) == 1 )
          PopDirectedDripsSetDisengageReason(1);
      }
      goto LABEL_16;
    }
    _m_prefetchw(&PopDirectedDripsState);
    v35 = PopDirectedDripsState;
    do
    {
      v36 = v35;
      v35 = _InterlockedCompareExchange(&PopDirectedDripsState, v35, v35);
    }
    while ( v36 != v35 );
    if ( (v35 & 0x800) != 0 )
      PopDirectedDripsNotifyAppsAndServices((__int64)&PopDirectedDripsState, dword_140F12E38, 0);
  }
  else
  {
    if ( a1 == 5 )
    {
      v8 = 0x2000;
      goto LABEL_10;
    }
    if ( a1 )
    {
      v9 = a1 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
          {
LABEL_10:
            v12 = v8 | 0x1000;
            v13 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12EA0, 0LL, 0LL, a4);
            v15 = _interlockedbittestandset64(&stru_140F12EA0.Header.Lock, 0LL);
            v16 = v13;
            if ( v15 )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12EA0, v13, (__int64)&stru_140F12EA0);
            if ( v16 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v16, v14);
              else
                *((_BYTE *)v16 + 10) = 1;
            }
            if ( stru_140F12EA0.WaitBlock[1].Thread == *(struct _KTHREAD **)a2 )
            {
              if ( *(_DWORD *)&stru_140F12EA0.WaitBlockFill11[80] )
              {
                _m_prefetchw(&PopDirectedDripsState);
                v22 = _InterlockedOr(&PopDirectedDripsState, v12) & v12;
                if ( (_DWORD)v22 != v12 || dword_140F12E34 )
                  PopQueueDirectedDripsWork(v22, 0x800uLL);
              }
            }
LABEL_16:
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12EA0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12EA0.Header.Lock);
            KeAbPostRelease((unsigned __int64)&stru_140F12EA0);
            return;
          }
          if ( v11 != 1 )
            return;
        }
        dword_140F12E34 = 0;
        return;
      }
      v18 = *(struct _KTHREAD **)a2;
      v19 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12EA0, 0LL, 0LL, a4);
      v15 = _interlockedbittestandset64(&stru_140F12EA0.Header.Lock, 0LL);
      v21 = v19;
      if ( v15 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12EA0, v19, (__int64)&stru_140F12EA0);
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v21, v20);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
      HIDWORD(v18->SwapListEntry.Next) = dword_140F12E90;
      stru_140F12EA0.WaitBlock[1].Thread = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12EA0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12EA0.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140F12EA0);
      PopDirectedDripsSendSessionData();
    }
    else
    {
      dword_140F12E90 = 0;
      v23 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12EA0, 0LL, 0LL, a4);
      v15 = _interlockedbittestandset64(&stru_140F12EA0.Header.Lock, 0LL);
      v25 = v23;
      if ( v15 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12EA0, v23, (__int64)&stru_140F12EA0);
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v25, v24);
        else
          *((_BYTE *)v25 + 10) = 1;
      }
      stru_140F12EA0.WaitBlock[1].Thread = *(struct _KTHREAD **)a2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12EA0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12EA0.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140F12EA0);
      _InterlockedOr(&PopDirectedDripsState, 0);
      v26 = dword_140F12E30 & 1 | 2u;
      if ( (dword_140F12E30 & 2) == 0 )
        v26 = dword_140F12E30 & 1;
      PopDirectedDripsDiagNotifySessionStart(*(_QWORD *)a2, v26);
    }
  }
}
