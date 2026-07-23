/*
 * XREFs of WdipSemUpdate @ 0x140824E7C
 * Callers:
 *     WdiUpdateSem @ 0x140535024 (WdiUpdateSem.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     WdipSemCleanStart @ 0x140825700 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14082576C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x140826AD4 (WdipSemShutdown.c)
 */

__int64 __fastcall WdipSemUpdate(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  unsigned int v9; // ebx
  struct _LIST_ENTRY *v10; // rdx
  struct _LIST_ENTRY *Blink; // rtt

  if ( !LOBYTE(stru_140F06A28.SListFaultAddress) )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F06A28.Header.WaitListHead.Blink, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F06A28.Header.WaitListHead.Blink, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
      v5,
      (__int64)&stru_140F06A28.Header.WaitListHead.Blink);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) )
    WdipSemShutdown();
  v9 = WdipSemCleanStart();
  _m_prefetchw(&stru_140F06A28.Header.WaitListHead.Blink);
  v10 = stru_140F06A28.Header.WaitListHead.Blink - 1;
  if ( ((unsigned __int64)stru_140F06A28.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( ((__int64)stru_140F06A28.Header.WaitListHead.Blink & 2) != 0
    || (Blink = stru_140F06A28.Header.WaitListHead.Blink,
        Blink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
                                         (signed __int64)v10,
                                         (signed __int64)stru_140F06A28.Header.WaitListHead.Blink)) )
  {
    ExfReleasePushLock(&stru_140F06A28.Header.WaitListHead.Blink);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F06A28.Header.WaitListHead.Blink);
  KeLeaveCriticalRegion();
  return v9;
}
