/*
 * XREFs of PopDirectedDripsNotify @ 0x140B08694
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140A3CEBC (PopDirectedDripsUmMarkTestDevices.c)
 *     PopAcquireTransitionLock @ 0x140B39914 (PopAcquireTransitionLock.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B3FB6C (PopDripsWatchdogCallbackHandler.c)
 *     PopReleaseTransitionLock @ 0x140B4C040 (PopReleaseTransitionLock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140483348 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1404833B0 (PopDirectedDripsSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x140483414 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsEngage @ 0x1404C7D1C (PopDirectedDripsEngage.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsSendSessionData @ 0x140B089C0 (PopDirectedDripsSendSessionData.c)
 *     PopDirectedDripsDiagNotifySessionStart @ 0x140B094F4 (PopDirectedDripsDiagNotifySessionStart.c)
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
  __int64 v18; // rsi
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

  _m_prefetchw(dword_140F12AC0);
  v5 = dword_140F12AC0[0];
  do
  {
    v6 = v5;
    v7 = v5;
    v5 = _InterlockedCompareExchange(dword_140F12AC0, v5, v5);
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
        v29 = (AutoBoost *)KeAbPreAcquire((__int64)&unk_140F12B60, 0LL, 0LL, a4);
        v15 = _interlockedbittestandset64(&unk_140F12B60.Header.Lock, 0LL);
        v31 = v29;
        if ( v15 )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&unk_140F12B60, v29, (__int64)&unk_140F12B60);
        if ( v31 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v31, v30);
          else
            *((_BYTE *)v31 + 10) = 1;
        }
        if ( !--unk_140F12BA0 )
          PopDirectedDripsClearDisengageReason(1);
      }
      else
      {
        v32 = (AutoBoost *)KeAbPreAcquire((__int64)&unk_140F12B60, 0LL, 0LL, a4);
        v15 = _interlockedbittestandset64(&unk_140F12B60.Header.Lock, 0LL);
        v34 = v32;
        if ( v15 )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&unk_140F12B60, v32, (__int64)&unk_140F12B60);
        if ( v34 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v34, v33);
          else
            *((_BYTE *)v34 + 10) = 1;
        }
        if ( ++unk_140F12BA0 == 1 )
          PopDirectedDripsSetDisengageReason(1);
      }
      goto LABEL_16;
    }
    _m_prefetchw(dword_140F12AC0);
    v35 = dword_140F12AC0[0];
    do
    {
      v36 = v35;
      v35 = _InterlockedCompareExchange(dword_140F12AC0, v35, v35);
    }
    while ( v36 != v35 );
    if ( (v35 & 0x800) != 0 )
      PopDirectedDripsNotifyAppsAndServices((__int64)dword_140F12AC0, dword_140F12AF8, 0);
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
            v13 = (AutoBoost *)KeAbPreAcquire((__int64)&unk_140F12B60, 0LL, 0LL, a4);
            v15 = _interlockedbittestandset64(&unk_140F12B60.Header.Lock, 0LL);
            v16 = v13;
            if ( v15 )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&unk_140F12B60, v13, (__int64)&unk_140F12B60);
            if ( v16 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v16, v14);
              else
                *((_BYTE *)v16 + 10) = 1;
            }
            if ( qword_140F12CE8 == *(_QWORD *)a2 )
            {
              if ( dword_140F12CF0 )
              {
                _m_prefetchw(dword_140F12AC0);
                v22 = _InterlockedOr(dword_140F12AC0, v12) & v12;
                if ( (_DWORD)v22 != v12 || unk_140F12AF4 )
                  PopQueueDirectedDripsWork(v22, 0x800uLL);
              }
            }
LABEL_16:
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&unk_140F12B60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&unk_140F12B60.Header.Lock);
            KeAbPostRelease((unsigned __int64)&unk_140F12B60);
            return;
          }
          if ( v11 != 1 )
            return;
        }
        unk_140F12AF4 = 0;
        return;
      }
      v18 = *(_QWORD *)a2;
      v19 = (AutoBoost *)KeAbPreAcquire((__int64)&unk_140F12B60, 0LL, 0LL, a4);
      v15 = _interlockedbittestandset64(&unk_140F12B60.Header.Lock, 0LL);
      v21 = v19;
      if ( v15 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&unk_140F12B60, v19, (__int64)&unk_140F12B60);
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v21, v20);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
      *(_DWORD *)(v18 + 220) = unk_140F12B50;
      qword_140F12CE8 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&unk_140F12B60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&unk_140F12B60.Header.Lock);
      KeAbPostRelease((unsigned __int64)&unk_140F12B60);
      PopDirectedDripsSendSessionData();
    }
    else
    {
      unk_140F12B50 = 0;
      v23 = (AutoBoost *)KeAbPreAcquire((__int64)&unk_140F12B60, 0LL, 0LL, a4);
      v15 = _interlockedbittestandset64(&unk_140F12B60.Header.Lock, 0LL);
      v25 = v23;
      if ( v15 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&unk_140F12B60, v23, (__int64)&unk_140F12B60);
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v25, v24);
        else
          *((_BYTE *)v25 + 10) = 1;
      }
      qword_140F12CE8 = *(_QWORD *)a2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&unk_140F12B60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&unk_140F12B60.Header.Lock);
      KeAbPostRelease((unsigned __int64)&unk_140F12B60);
      _InterlockedOr(dword_140F12AC0, 0);
      v26 = dword_140F12AF0 & 1 | 2;
      if ( (dword_140F12AF0 & 2) == 0 )
        v26 = dword_140F12AF0 & 1;
      PopDirectedDripsDiagNotifySessionStart(*(_QWORD *)a2, v26);
    }
  }
}
