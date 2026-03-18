/*
 * XREFs of WdipSemEnableScenario @ 0x140AD9304
 * Callers:
 *     WdipStartEndScenario @ 0x140AD9258 (WdipStartEndScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     WdipSemShutdown @ 0x1408208C4 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14082147C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemEnableContextProviders @ 0x140AD9930 (WdipSemEnableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140AD9E28 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemActivateInstance @ 0x140AD9F30 (WdipSemActivateInstance.c)
 *     WdipSemQueryScenarioTable @ 0x140ADAD64 (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x140ADADBC (WdipSemGetLoggerIds.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140ADAF30 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemWriteSemActionsEvent @ 0x140ADB0D8 (WdipSemWriteSemActionsEvent.c)
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
  signed __int64 v15; // rdx
  _ULARGE_INTEGER DueTime; // rtt
  struct _KLOCK_ENTRIES *v17; // r9
  struct _KTHREAD *v19; // rax
  AutoBoost *v20; // rax
  void *v21; // rdx
  signed __int8 v22; // cf
  AutoBoost *v23; // rdi
  signed __int64 v24; // rdx
  _ULARGE_INTEGER v25; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  v9 = 0;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.Timer.DueTime, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&stru_140F03F40.Timer.DueTime,
      0,
      v11,
      (struct _KTHREAD *)&stru_140F03F40.Timer.DueTime);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a1 && a3 )
  {
    if ( LOBYTE(stru_140F066E8.Header.WaitListHead.Flink) )
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
          if ( EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, &WDI_SEM_EVENT_SCENARIO_START) )
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
  if ( EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((__int64)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v8 )
    WdipSemDeleteTransitionalInstance(v8);
LABEL_15:
  _m_prefetchw(&stru_140F03F40.Timer.DueTime);
  v15 = stru_140F03F40.Timer.DueTime.QuadPart - 16;
  if ( (stru_140F03F40.Timer.DueTime.QuadPart & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (stru_140F03F40.Timer.DueTime.LowPart & 2) != 0
    || (DueTime = stru_140F03F40.Timer.DueTime,
        DueTime.QuadPart != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart,
                              v15,
                              stru_140F03F40.Timer.DueTime.QuadPart)) )
  {
    ExfReleasePushLock((_ULARGE_INTEGER *)&stru_140F03F40.Timer.DueTime.QuadPart);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F03F40.Timer.DueTime);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.Timer.DueTime, 0LL, 0LL, v17);
    v22 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03F40.Timer.DueTime, 0LL);
    v23 = v20;
    if ( v22 )
      ExfAcquirePushLockExclusiveEx(&stru_140F03F40.Timer.DueTime.QuadPart, v20, (__int64)&stru_140F03F40.Timer.DueTime);
    if ( v23 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v23, v21);
      else
        *((_BYTE *)v23 + 10) = 1;
    }
    if ( LOBYTE(stru_140F066E8.Header.WaitListHead.Flink) )
      WdipSemShutdown();
    _m_prefetchw(&stru_140F03F40.Timer.DueTime);
    v24 = stru_140F03F40.Timer.DueTime.QuadPart - 16;
    if ( (stru_140F03F40.Timer.DueTime.QuadPart & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v24 = 0LL;
    if ( (stru_140F03F40.Timer.DueTime.LowPart & 2) != 0
      || (v25 = stru_140F03F40.Timer.DueTime,
          v25.QuadPart != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart,
                            v24,
                            stru_140F03F40.Timer.DueTime.QuadPart)) )
    {
      ExfReleasePushLock((_ULARGE_INTEGER *)&stru_140F03F40.Timer.DueTime.QuadPart);
    }
    KeAbPostRelease((unsigned __int64)&stru_140F03F40.Timer.DueTime);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
