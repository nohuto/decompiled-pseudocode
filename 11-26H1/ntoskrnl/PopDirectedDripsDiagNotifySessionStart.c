/*
 * XREFs of PopDirectedDripsDiagNotifySessionStart @ 0x140B0B470
 * Callers:
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopDirectedDripsDiagNotifySessionStart(void *a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rbx

  _m_prefetchw(&PopDirectedDripsState);
  v6 = PopDirectedDripsState;
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange(&PopDirectedDripsState, v6, v6);
  }
  while ( v7 != v6 );
  if ( (v6 & 1) != 0 )
  {
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64(&PopDirectedDripsDiagLock.Header.Lock, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopDirectedDripsDiagLock,
        v8,
        (__int64)&PopDirectedDripsDiagLock);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    PopDirectedDripsDiagLock.StackBase = a1;
    LODWORD(PopDirectedDripsDiagLock.ThreadLock) = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock);
  }
}
