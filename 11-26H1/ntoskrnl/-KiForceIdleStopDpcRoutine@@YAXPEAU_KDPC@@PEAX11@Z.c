/*
 * XREFs of ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404C4D60
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404C4E10 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiSetForceIdleState @ 0x1404C5428 (KiSetForceIdleState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
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
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v10);
    while ( KiForceIdleLock );
  }
  KiForceIdleWatchdogResetCount = 0;
  KiForceIdleActiveLastStartTime = 0LL;
  KiSetForceIdleState(KiForceIdleStartTime != 0 ? 2 : 0);
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
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
