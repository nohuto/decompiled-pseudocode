/*
 * XREFs of ObpPushRefDerefInfo @ 0x1407731CC
 * Callers:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObpPushRefDerefInfoNoLock @ 0x1407732BC (ObpPushRefDerefInfoNoLock.c)
 */

void __fastcall ObpPushRefDerefInfo(int a1, unsigned __int16 a2, int a3, struct _KLOCK_ENTRIES *a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // esi
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (int)a4;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL, 0LL, a4);
  v12 = _interlockedbittestandset64(&ObpStackTraceLock.Header.Lock, 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ObpStackTraceLock, v10, (__int64)&ObpStackTraceLock);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v11);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  ObpPushRefDerefInfoNoLock(a1, a2, a3, v9, a5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ObpStackTraceLock);
  KeLeaveGuardedRegion();
}
