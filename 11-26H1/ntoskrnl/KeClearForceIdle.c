/*
 * XREFs of KeClearForceIdle @ 0x1404BECEC
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     KiSetForceIdleState @ 0x1404BEDD8 (KiSetForceIdleState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeClearForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v6; // eax
  __int64 v7; // rdx
  unsigned __int32 v8; // ett
  int v9; // [rsp+30h] [rbp+8h] BYREF

  _disable();
  v9 = 0;
  while ( _interlockedbittestandset64(&KiSupervisorXStateFeaturesLock.Timer.Header.LockNV, 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock );
  }
  if ( KiForceIdleDisabled )
    goto LABEL_6;
  switch ( KiForceIdleState )
  {
    case 1:
      KiSetForceIdleState(0LL);
      KeRemoveQueueDpcEx((int *)&KiSupervisorXStateFeaturesLock.ApcStateFill[40], 0);
      goto LABEL_14;
    case 2:
      KiSetForceIdleState(0LL);
LABEL_14:
      KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Blink = 0LL;
      break;
    case 3:
      if ( !KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Blink )
        break;
      goto LABEL_14;
    case 4:
      KiResetForceIdle(3u, 1);
      break;
  }
LABEL_6:
  _InterlockedAnd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v6 = *SchedulerAssist;
    do
    {
      v7 = v6;
      LODWORD(v7) = v6 & 0xFFDFFFFF;
      v8 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v6 & 0xFFDFFFFF, v6);
    }
    while ( v8 != v6 );
    if ( (v6 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7, SchedulerAssist, a4);
  }
  _enable();
}
