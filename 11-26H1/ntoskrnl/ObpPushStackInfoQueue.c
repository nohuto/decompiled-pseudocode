/*
 * XREFs of ObpPushStackInfoQueue @ 0x1407C5020
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ObpProcessPushStackInfoList @ 0x1407C4F58 (ObpProcessPushStackInfoList.c)
 */

void __fastcall ObpPushStackInfoQueue(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi

  _InterlockedExchange((volatile __int32 *)&stru_140E66B30.WaitBlockFill11[32], 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F132C8, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&stru_140F132C8.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F132C8, v5, (__int64)&stru_140F132C8);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  ObpProcessPushStackInfoList();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F132C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F132C8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F132C8);
  KeLeaveGuardedRegion();
}
