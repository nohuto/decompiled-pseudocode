/*
 * XREFs of WdipSemInitialize @ 0x140824DA8
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     WdipSemCleanStart @ 0x140825700 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14082576C (WdipSemInitializeGlobalState.c)
 */

void WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v1; // r9
  AutoBoost *v2; // rax
  void *v3; // rdx
  signed __int8 v4; // cf
  AutoBoost *v5; // rbx
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *Blink; // rtt

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F06A28.Header.WaitListHead.Blink, 0LL, 0LL, v1);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F06A28.Header.WaitListHead.Blink, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
      v2,
      (__int64)&stru_140F06A28.Header.WaitListHead.Blink);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, v3);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  WdipSemCleanStart();
  _m_prefetchw(&stru_140F06A28.Header.WaitListHead.Blink);
  v6 = stru_140F06A28.Header.WaitListHead.Blink - 1;
  if ( ((unsigned __int64)stru_140F06A28.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( ((__int64)stru_140F06A28.Header.WaitListHead.Blink & 2) != 0
    || (Blink = stru_140F06A28.Header.WaitListHead.Blink,
        Blink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
                                         (signed __int64)v6,
                                         (signed __int64)stru_140F06A28.Header.WaitListHead.Blink)) )
  {
    ExfReleasePushLock(&stru_140F06A28.Header.WaitListHead.Blink);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F06A28.Header.WaitListHead.Blink);
  KeLeaveCriticalRegion();
}
