/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x140336E2C
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14032D7C0 (KiCallInterruptServiceRoutine.c)
 *     KiTimer2Expiration @ 0x140336A40 (KiTimer2Expiration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     KiSetForceIdleState @ 0x1404C5428 (KiSetForceIdleState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCheckAndRearmForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v6; // eax
  __int64 v7; // rdx
  unsigned __int32 v8; // ett
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( KiForceIdleDisabled )
    return;
  _disable();
  LODWORD(v9) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KeRemoveQueueDpcEx(&KiForceIdleStartDpc, 0LL);
    KiSetForceIdleState(2LL);
  }
  else if ( KiForceIdleState != 2 )
  {
    goto LABEL_8;
  }
  KiForceIdleStartTime = RtlGetInterruptTimePrecise(&v9) + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
LABEL_8:
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
