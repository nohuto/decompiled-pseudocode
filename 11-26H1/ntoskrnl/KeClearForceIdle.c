/*
 * XREFs of KeClearForceIdle @ 0x1404C533C
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiResetForceIdle @ 0x140336934 (KiResetForceIdle.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     KiSetForceIdleState @ 0x1404C5428 (KiSetForceIdleState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
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
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleDisabled )
    goto LABEL_6;
  switch ( KiForceIdleState )
  {
    case 1:
      KiSetForceIdleState(0LL);
      KeRemoveQueueDpcEx((int *)&KiForceIdleStartDpc, 0);
      goto LABEL_14;
    case 2:
      KiSetForceIdleState(0LL);
LABEL_14:
      KiForceIdleStartTime = 0LL;
      break;
    case 3:
      if ( !KiForceIdleStartTime )
        break;
      goto LABEL_14;
    case 4:
      KiResetForceIdle(3u, 1);
      break;
  }
LABEL_6:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
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
