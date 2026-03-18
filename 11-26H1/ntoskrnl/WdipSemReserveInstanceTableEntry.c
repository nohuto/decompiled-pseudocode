/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140ADAF30
 * Callers:
 *     WdipSemEnableScenario @ 0x140AD9304 (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x140820978 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140ADB08C (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140ADB28C (WdipSemBuildScenarioInstance.c)
 */

struct _LIST_ENTRY *__fastcall WdipSemReserveInstanceTableEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *v7; // rbx
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  unsigned __int64 *v12; // rdx
  struct _KTHREAD *Thread; // rtt
  struct _LIST_ENTRY *Blink; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.WaitBlock[0].Thread, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03F40.WaitBlockFill11[24], 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F03F40.WaitBlock[0].Thread,
      v8,
      (__int64)&stru_140F03F40.WaitBlock[0].Thread);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a1 && a2 )
  {
    if ( *(_DWORD *)&stru_140F03F40.WaitBlockFill11[16] >= 0x80u )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(_WORD *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v7 = (struct _LIST_ENTRY *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v7 )
      {
        Blink = stru_140F03F40.WaitBlock[0].WaitListEntry.Blink;
        if ( stru_140F03F40.WaitBlock[0].WaitListEntry.Blink->Flink != (struct _LIST_ENTRY *)&stru_140F03F40.320 )
          __fastfail(3u);
        v7->Flink = (struct _LIST_ENTRY *)&stru_140F03F40.320;
        v7->Blink = Blink;
        Blink->Flink = v7;
        ++*(_DWORD *)&stru_140F03F40.WaitBlockFill11[16];
        stru_140F03F40.WaitBlock[0].WaitListEntry.Blink = v7;
      }
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
  return v7;
}
