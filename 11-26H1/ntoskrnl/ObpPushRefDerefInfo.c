/*
 * XREFs of ObpPushRefDerefInfo @ 0x1407701CC
 * Callers:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ObpPushRefDerefInfoNoLock @ 0x1407702BC (ObpPushRefDerefInfoNoLock.c)
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
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F132C8, 0LL, 0LL, a4);
  v12 = _interlockedbittestandset64(&stru_140F132C8.Header.Lock, 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F132C8, v10, (__int64)&stru_140F132C8);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v11);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  ObpPushRefDerefInfoNoLock(a1, a2, a3, v9, a5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F132C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F132C8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F132C8);
  KeLeaveGuardedRegion();
}
