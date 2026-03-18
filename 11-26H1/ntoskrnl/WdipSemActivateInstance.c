/*
 * XREFs of WdipSemActivateInstance @ 0x140AD9F30
 * Callers:
 *     WdipSemEnableScenario @ 0x140AD9304 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140AD9550 (WdipSemDisableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  unsigned __int64 *v10; // rdx
  struct _KTHREAD *Thread; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.WaitBlock[0].Thread, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03F40.WaitBlockFill11[24], 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F03F40.WaitBlock[0].Thread,
      v6,
      (__int64)&stru_140F03F40.WaitBlock[0].Thread);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  *(_DWORD *)(a1 + 44) = 0;
  _m_prefetchw(&stru_140F03F40.WaitBlockFill11[24]);
  v10 = &stru_140F03F40.WaitBlock[0].Thread[-1].Padding[3];
  if ( ((unsigned __int64)stru_140F03F40.WaitBlock[0].Thread & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (stru_140F03F40.WaitBlockFill5[24] & 2) != 0
    || (Thread = stru_140F03F40.WaitBlock[0].Thread,
        Thread != (struct _KTHREAD *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&stru_140F03F40.WaitBlock[0].Thread,
                                       (signed __int64)v10,
                                       (signed __int64)stru_140F03F40.WaitBlock[0].Thread)) )
  {
    ExfReleasePushLock(&stru_140F03F40.WaitBlock[0].Thread);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F03F40.WaitBlock[0].Thread);
  KeLeaveCriticalRegion();
}
