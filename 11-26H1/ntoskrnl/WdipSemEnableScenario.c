/*
 * XREFs of WdipSemEnableScenario @ 0x140AD5DB4
 * Callers:
 *     WdipStartEndScenario @ 0x140AD5D08 (WdipStartEndScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     WdipSemShutdown @ 0x140826AD4 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14082768C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemEnableContextProviders @ 0x140AD63E0 (WdipSemEnableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140AD68D8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemActivateInstance @ 0x140AD69E0 (WdipSemActivateInstance.c)
 *     WdipSemQueryScenarioTable @ 0x140AD7814 (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x140AD786C (WdipSemGetLoggerIds.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140AD79E0 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AD7B88 (WdipSemWriteSemActionsEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  char v9; // si
  void *v10; // rdx
  LegacyAutoBoost *v11; // rbx
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  __int64 v14; // rax
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *Blink; // rtt
  struct _KLOCK_ENTRIES *v17; // r9
  struct _KTHREAD *v19; // rax
  AutoBoost *v20; // rax
  void *v21; // rdx
  signed __int8 v22; // cf
  AutoBoost *v23; // rdi
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  v9 = 0;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F06A28.Header.WaitListHead.Blink, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
      0,
      v11,
      (struct _KTHREAD *)&stru_140F06A28.Header.WaitListHead.Blink);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a1 && a3 )
  {
    if ( LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) )
    {
      LoggerIds = WdipSemGetLoggerIds();
      if ( LoggerIds < 0 )
      {
        v9 = 1;
        goto LABEL_23;
      }
      ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
      if ( ScenarioTable )
      {
        v14 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
        v8 = v14;
        if ( v14 )
        {
          WdipSemEnableContextProviders(v14);
          if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_SCENARIO_START) )
            WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_START, v8);
          WdipSemActivateInstance(v8);
          goto LABEL_15;
        }
      }
    }
    LoggerIds = -1073741823;
  }
  else
  {
    LoggerIds = -1073741811;
  }
LABEL_23:
  if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((__int64)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v8 )
    WdipSemDeleteTransitionalInstance(v8);
LABEL_15:
  _m_prefetchw(&stru_140F06A28.Header.WaitListHead.Blink);
  v15 = stru_140F06A28.Header.WaitListHead.Blink - 1;
  if ( ((unsigned __int64)stru_140F06A28.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( ((__int64)stru_140F06A28.Header.WaitListHead.Blink & 2) != 0
    || (Blink = stru_140F06A28.Header.WaitListHead.Blink,
        Blink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
                                         (signed __int64)v15,
                                         (signed __int64)stru_140F06A28.Header.WaitListHead.Blink)) )
  {
    ExfReleasePushLock(&stru_140F06A28.Header.WaitListHead.Blink);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F06A28.Header.WaitListHead.Blink);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F06A28.Header.WaitListHead.Blink, 0LL, 0LL, v17);
    v22 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F06A28.Header.WaitListHead.Blink, 0LL);
    v23 = v20;
    if ( v22 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
        v20,
        (__int64)&stru_140F06A28.Header.WaitListHead.Blink);
    if ( v23 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v23, v21);
      else
        *((_BYTE *)v23 + 10) = 1;
    }
    if ( LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) )
      WdipSemShutdown();
    _m_prefetchw(&stru_140F06A28.Header.WaitListHead.Blink);
    v24 = stru_140F06A28.Header.WaitListHead.Blink - 1;
    if ( ((unsigned __int64)stru_140F06A28.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v24 = 0LL;
    if ( ((__int64)stru_140F06A28.Header.WaitListHead.Blink & 2) != 0
      || (v25 = stru_140F06A28.Header.WaitListHead.Blink,
          v25 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
                                         (signed __int64)v24,
                                         (signed __int64)stru_140F06A28.Header.WaitListHead.Blink)) )
    {
      ExfReleasePushLock(&stru_140F06A28.Header.WaitListHead.Blink);
    }
    KeAbPostRelease((unsigned __int64)&stru_140F06A28.Header.WaitListHead.Blink);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
