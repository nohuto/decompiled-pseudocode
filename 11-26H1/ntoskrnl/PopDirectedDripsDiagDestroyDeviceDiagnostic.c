/*
 * XREFs of PopDirectedDripsDiagDestroyDeviceDiagnostic @ 0x140B0849C
 * Callers:
 *     PoFxAbandonDevice @ 0x140B083E4 (PoFxAbandonDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopDirectedDripsDiagDestroyDeviceDiagnostic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  __int64 v11; // rax

  _m_prefetchw(&PopDirectedDripsState);
  v5 = PopDirectedDripsState;
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange(&PopDirectedDripsState, v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 1) != 0 )
  {
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64(&PopDirectedDripsDiagLock.Header.Lock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopDirectedDripsDiagLock,
        v7,
        (__int64)&PopDirectedDripsDiagLock);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v8);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    v11 = *(_QWORD *)(a1 + 776);
    if ( v11 )
    {
      *(_QWORD *)(a1 + 776) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock);
  }
}
