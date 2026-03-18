/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x140B56724
 * Callers:
 *     WdipSemDisableScenario @ 0x140AD9550 (WdipSemDisableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140ADB08C (WdipSemQueryEnabledInstanceTable.c)
 */

struct _KTHREAD *__fastcall WdipSemMarkInstanceForDeletion(
        struct _LIST_ENTRY **a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rbx
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  struct _KTHREAD *EnabledInstanceTable; // rax
  unsigned __int64 *v12; // rdx
  struct _KTHREAD *Thread; // rtt

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.WaitBlock[0].Thread, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03F40.WaitBlockFill11[24], 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F03F40.WaitBlock[0].Thread,
      v7,
      (__int64)&stru_140F03F40.WaitBlock[0].Thread);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( a1 )
  {
    EnabledInstanceTable = WdipSemQueryEnabledInstanceTable(a1);
    v6 = EnabledInstanceTable;
    if ( EnabledInstanceTable )
    {
      if ( HIDWORD(EnabledInstanceTable->InitialStack) )
        v6 = 0LL;
      else
        HIDWORD(EnabledInstanceTable->InitialStack) = 1;
    }
  }
  _m_prefetchw(&stru_140F03F40.WaitBlockFill11[24]);
  v12 = &stru_140F03F40.WaitBlock[0].Thread[-1].Padding[3];
  if ( ((unsigned __int64)stru_140F03F40.WaitBlock[0].Thread & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (stru_140F03F40.WaitBlockFill5[24] & 2) != 0
    || (Thread = stru_140F03F40.WaitBlock[0].Thread,
        Thread != (struct _KTHREAD *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&stru_140F03F40.WaitBlock[0].Thread,
                                       (signed __int64)v12,
                                       (signed __int64)stru_140F03F40.WaitBlock[0].Thread)) )
  {
    ExfReleasePushLock(&stru_140F03F40.WaitBlock[0].Thread);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F03F40.WaitBlock[0].Thread);
  KeLeaveCriticalRegion();
  return v6;
}
