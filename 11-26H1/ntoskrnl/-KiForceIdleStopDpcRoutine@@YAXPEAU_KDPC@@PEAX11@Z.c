/*
 * XREFs of ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404BE710
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiSetForceIdleState @ 0x1404BEDD8 (KiSetForceIdleState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiForceIdleStopDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v7; // eax
  __int64 v8; // rdx
  unsigned __int32 v9; // ett
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  KiForceIdleUpdateSchedulerParkState(0);
  _disable();
  v10[0] = 0;
  while ( _interlockedbittestandset64(&KiSupervisorXStateFeaturesLock.Timer.Header.LockNV, 0LL) )
  {
    do
      KeYieldProcessorEx(v10);
    while ( *(_QWORD *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock );
  }
  KiForceIdleWatchdogResetCount = 0;
  KiForceIdleActiveLastStartTime = 0LL;
  KiSetForceIdleState(KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Blink != 0LL ? 2 : 0);
  _InterlockedAnd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v7 = *SchedulerAssist;
    do
    {
      v8 = v7;
      LODWORD(v8) = v7 & 0xFFDFFFFF;
      v9 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v7 & 0xFFDFFFFF, v7);
    }
    while ( v9 != v7 );
    if ( (v7 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8, SchedulerAssist, v4);
  }
  _enable();
}
