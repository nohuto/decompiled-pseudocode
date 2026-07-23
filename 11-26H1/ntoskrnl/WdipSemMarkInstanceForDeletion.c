/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x140B59424
 * Callers:
 *     WdipSemDisableScenario @ 0x140AD6000 (WdipSemDisableScenario.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140AD7B3C (WdipSemQueryEnabledInstanceTable.c)
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
  char *v12; // rdx
  void *volatile StackLimit; // rtt

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F049E8.StackLimit, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F049E8.StackLimit, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F049E8.StackLimit,
      v7,
      (__int64)&stru_140F049E8.StackLimit);
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
  return v6;
}
