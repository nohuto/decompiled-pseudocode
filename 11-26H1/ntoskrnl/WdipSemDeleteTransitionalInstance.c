/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140AD68D8
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140AD5830 (WdipTimeoutCheckRoutine.c)
 *     WdipSemEnableScenario @ 0x140AD5DB4 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140AD6000 (WdipSemDisableScenario.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     WdipSemFastFree @ 0x140AD7F00 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  char *v12; // rdx
  void *volatile StackLimit; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F049E8.StackLimit, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F049E8.StackLimit, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F049E8.StackLimit,
      v6,
      (__int64)&stru_140F049E8.StackLimit);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v11 = (_QWORD *)a1[1], (_QWORD *)*v11 != a1) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  --LODWORD(stru_140F049E8.InitialStack);
  _m_prefetchw((const void *)&stru_140F049E8.StackLimit);
  v12 = (char *)stru_140F049E8.StackLimit - 16;
  if ( ((unsigned __int64)stru_140F049E8.StackLimit & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( ((__int64)stru_140F049E8.StackLimit & 2) != 0
    || (StackLimit = stru_140F049E8.StackLimit,
        StackLimit != (void *volatile)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)&stru_140F049E8.StackLimit,
                                        (signed __int64)v12,
                                        (signed __int64)stru_140F049E8.StackLimit)) )
  {
    ExfReleasePushLock(&stru_140F049E8.StackLimit);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F049E8.StackLimit);
  KeLeaveCriticalRegion();
  return WdipSemFastFree(3LL, a1);
}
