/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x1407E73AC
 * Callers:
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1407CF28C (PopDirectedDripsNotifyTransitionFailed.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x140B47AD4 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

void __fastcall PopDirectedDripsDiagTraceBroadcastFailureDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  __int64 v9; // rdi
  void **i; // rbx

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&PopDirectedDripsDiagLock.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PopDirectedDripsDiagLock, v5, (__int64)&PopDirectedDripsDiagLock);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *(_QWORD *)(a1 + 776);
  if ( v9 )
    *(_DWORD *)(v9 + 152) |= 0x20u;
  for ( i = (void **)PopDirectedDripsDiagLock.SListFaultAddress;
        i != &PopDirectedDripsDiagLock.SListFaultAddress;
        i = (void **)*i )
  {
    if ( *((_DWORD *)i + 9) == *(_DWORD *)&PopDirectedDripsDiagLock.SavedApcStateFill[8] )
    {
      ++*((_DWORD *)i + 53);
      if ( v9 )
        PopDirectedDripsDiagInsertErrorRecord(i, v9, 5LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock);
}
