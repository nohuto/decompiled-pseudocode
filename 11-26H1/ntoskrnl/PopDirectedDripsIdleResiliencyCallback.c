/*
 * XREFs of PopDirectedDripsIdleResiliencyCallback @ 0x1409F8CA4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 *     PopQueueDirectedDripsWork @ 0x14047CD84 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1409F88DC (PopDirectedDripsUmMarkTestDevices.c)
 */

__int64 __fastcall PopDirectedDripsIdleResiliencyCallback(int a1, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  struct _KLOCK_ENTRIES *v6; // r9
  AutoBoost *v7; // rax
  void *v8; // rdx
  __int64 v9; // rcx
  signed __int8 v10; // cf
  AutoBoost *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned int v16; // ebx

  _m_prefetchw(&PopDirectedDripsState);
  v4 = PopDirectedDripsState;
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange(&PopDirectedDripsState, v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 1) != 0 )
  {
    PopDeepSleepSetDisengageReason(8u);
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12EA0, 0LL, 0LL, v6);
    v10 = _interlockedbittestandset64(&stru_140F12EA0.Header.Lock, 0LL);
    v11 = v7;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12EA0, v7, (__int64)&stru_140F12EA0);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v8);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    BYTE1(stru_140F12EA0.Header.WaitListHead.Flink) = a2;
    HIDWORD(stru_140F12EA0.Header.WaitListHead.Flink) = a1;
    LOBYTE(stru_140F12EA0.Header.WaitListHead.Blink) = 0;
    PopQueueDirectedDripsWork(v9, 0x400uLL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12EA0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12EA0.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140F12EA0);
    v16 = 259;
    if ( a2 )
      PopDirectedDripsUmMarkTestDevices(v13, v12, v14, v15);
  }
  else
  {
    return 0;
  }
  return v16;
}
