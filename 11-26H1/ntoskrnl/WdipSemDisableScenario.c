/*
 * XREFs of WdipSemDisableScenario @ 0x140AD9550
 * Callers:
 *     WdipStartEndScenario @ 0x140AD9258 (WdipStartEndScenario.c)
 *     EtwWriteEndScenario @ 0x140ADB480 (EtwWriteEndScenario.c)
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
 *     WdipSemValidateEndEvent @ 0x140820D24 (WdipSemValidateEndEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14082147C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemDisableContextProviders @ 0x140AD9718 (WdipSemDisableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140AD9E28 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemActivateInstance @ 0x140AD9F30 (WdipSemActivateInstance.c)
 *     WdipSemGetLoggerIds @ 0x140ADADBC (WdipSemGetLoggerIds.c)
 *     WdipSemWriteSemActionsEvent @ 0x140ADB0D8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140B56724 (WdipSemMarkInstanceForDeletion.c)
 */

__int64 __fastcall WdipSemDisableScenario(_QWORD *a1, __int16 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  char v9; // si
  void *v10; // rdx
  LegacyAutoBoost *v11; // rbx
  int LoggerIds; // ebx
  signed __int64 v13; // rdx
  _ULARGE_INTEGER DueTime; // rtt
  struct _KLOCK_ENTRIES *v15; // r9
  struct _KTHREAD *v17; // rax
  AutoBoost *v18; // rax
  void *v19; // rdx
  signed __int8 v20; // cf
  AutoBoost *v21; // rdi
  __int64 v22; // rax
  signed __int64 v23; // rdx
  _ULARGE_INTEGER v24; // rtt

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
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_28;
  }
  if ( !LOBYTE(stru_140F066E8.Header.WaitListHead.Flink) )
    goto LABEL_25;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds < 0 )
  {
    v9 = 1;
LABEL_28:
    if ( EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
      WdipSemWriteSemFailureEvent((__int64)&WDI_SEM_EVENT_SCENARIO_END_FAILED, (__int64)a1, a2, a3, LoggerIds);
    if ( v8 )
      WdipSemActivateInstance(v8);
    goto LABEL_15;
  }
  v22 = WdipSemMarkInstanceForDeletion(a3);
  v8 = v22;
  if ( !v22 )
  {
LABEL_25:
    LoggerIds = -1073741823;
    goto LABEL_28;
  }
  LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v22 + 32));
  if ( LoggerIds < 0 )
    goto LABEL_28;
  WdipSemDisableContextProviders(v8, 0LL);
  if ( EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, &WDI_SEM_EVENT_SCENARIO_END) )
    WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_END, v8);
  WdipSemDeleteTransitionalInstance(v8);
LABEL_15:
  _m_prefetchw(&stru_140F03F40.Timer.DueTime);
  v13 = stru_140F03F40.Timer.DueTime.QuadPart - 16;
  if ( (stru_140F03F40.Timer.DueTime.QuadPart & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (stru_140F03F40.Timer.DueTime.LowPart & 2) != 0
    || (DueTime = stru_140F03F40.Timer.DueTime,
        DueTime.QuadPart != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart,
                              v13,
                              stru_140F03F40.Timer.DueTime.QuadPart)) )
  {
    ExfReleasePushLock((_ULARGE_INTEGER *)&stru_140F03F40.Timer.DueTime.QuadPart);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F03F40.Timer.DueTime);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.Timer.DueTime, 0LL, 0LL, v15);
    v20 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03F40.Timer.DueTime, 0LL);
    v21 = v18;
    if ( v20 )
      ExfAcquirePushLockExclusiveEx(&stru_140F03F40.Timer.DueTime.QuadPart, v18, (__int64)&stru_140F03F40.Timer.DueTime);
    if ( v21 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v21, v19);
      else
        *((_BYTE *)v21 + 10) = 1;
    }
    if ( LOBYTE(stru_140F066E8.Header.WaitListHead.Flink) )
      WdipSemShutdown();
    _m_prefetchw(&stru_140F03F40.Timer.DueTime);
    v23 = stru_140F03F40.Timer.DueTime.QuadPart - 16;
    if ( (stru_140F03F40.Timer.DueTime.QuadPart & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v23 = 0LL;
    if ( (stru_140F03F40.Timer.DueTime.LowPart & 2) != 0
      || (v24 = stru_140F03F40.Timer.DueTime,
          v24.QuadPart != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart,
                            v23,
                            stru_140F03F40.Timer.DueTime.QuadPart)) )
    {
      ExfReleasePushLock((_ULARGE_INTEGER *)&stru_140F03F40.Timer.DueTime.QuadPart);
    }
    KeAbPostRelease((unsigned __int64)&stru_140F03F40.Timer.DueTime);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
