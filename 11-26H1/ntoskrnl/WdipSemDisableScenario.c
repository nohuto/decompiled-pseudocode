/*
 * XREFs of WdipSemDisableScenario @ 0x140AD6000
 * Callers:
 *     WdipStartEndScenario @ 0x140AD5D08 (WdipStartEndScenario.c)
 *     EtwWriteEndScenario @ 0x140AD7F30 (EtwWriteEndScenario.c)
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
 *     WdipSemValidateEndEvent @ 0x140826F34 (WdipSemValidateEndEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14082768C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemDisableContextProviders @ 0x140AD61C8 (WdipSemDisableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140AD68D8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemActivateInstance @ 0x140AD69E0 (WdipSemActivateInstance.c)
 *     WdipSemGetLoggerIds @ 0x140AD786C (WdipSemGetLoggerIds.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AD7B88 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140B59424 (WdipSemMarkInstanceForDeletion.c)
 */

__int64 __fastcall WdipSemDisableScenario(_QWORD *a1, __int16 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  char v9; // si
  void *v10; // rdx
  LegacyAutoBoost *v11; // rbx
  int LoggerIds; // ebx
  struct _LIST_ENTRY *v13; // rdx
  struct _LIST_ENTRY *Blink; // rtt
  struct _KLOCK_ENTRIES *v15; // r9
  struct _KTHREAD *v17; // rax
  AutoBoost *v18; // rax
  void *v19; // rdx
  signed __int8 v20; // cf
  AutoBoost *v21; // rdi
  __int64 v22; // rax
  struct _LIST_ENTRY *v23; // rdx
  struct _LIST_ENTRY *v24; // rtt

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
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_28;
  }
  if ( !LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) )
    goto LABEL_25;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds < 0 )
  {
    v9 = 1;
LABEL_28:
    if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
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
  if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_SCENARIO_END) )
    WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_END, v8);
  WdipSemDeleteTransitionalInstance(v8);
LABEL_15:
  _m_prefetchw(&stru_140F06A28.Header.WaitListHead.Blink);
  v13 = stru_140F06A28.Header.WaitListHead.Blink - 1;
  if ( ((unsigned __int64)stru_140F06A28.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( ((__int64)stru_140F06A28.Header.WaitListHead.Blink & 2) != 0
    || (Blink = stru_140F06A28.Header.WaitListHead.Blink,
        Blink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
                                         (signed __int64)v13,
                                         (signed __int64)stru_140F06A28.Header.WaitListHead.Blink)) )
  {
    ExfReleasePushLock(&stru_140F06A28.Header.WaitListHead.Blink);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F06A28.Header.WaitListHead.Blink);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F06A28.Header.WaitListHead.Blink, 0LL, 0LL, v15);
    v20 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F06A28.Header.WaitListHead.Blink, 0LL);
    v21 = v18;
    if ( v20 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
        v18,
        (__int64)&stru_140F06A28.Header.WaitListHead.Blink);
    if ( v21 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v21, v19);
      else
        *((_BYTE *)v21 + 10) = 1;
    }
    if ( LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) )
      WdipSemShutdown();
    _m_prefetchw(&stru_140F06A28.Header.WaitListHead.Blink);
    v23 = stru_140F06A28.Header.WaitListHead.Blink - 1;
    if ( ((unsigned __int64)stru_140F06A28.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v23 = 0LL;
    if ( ((__int64)stru_140F06A28.Header.WaitListHead.Blink & 2) != 0
      || (v24 = stru_140F06A28.Header.WaitListHead.Blink,
          v24 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
                                         (signed __int64)v23,
                                         (signed __int64)stru_140F06A28.Header.WaitListHead.Blink)) )
    {
      ExfReleasePushLock(&stru_140F06A28.Header.WaitListHead.Blink);
    }
    KeAbPostRelease((unsigned __int64)&stru_140F06A28.Header.WaitListHead.Blink);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
