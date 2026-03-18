/*
 * XREFs of KeSetForceIdle @ 0x1404C5268
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiSetForceIdleState @ 0x1404C5428 (KiSetForceIdleState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeSetForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  int v6; // edi
  __int64 v7; // rbx
  unsigned __int32 v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // ett
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  _disable();
  LODWORD(v11) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    v6 = KiForceIdleState;
    v7 = RtlGetInterruptTimePrecise(&v11) + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( v6 )
    {
      if ( v6 != 3 )
        goto LABEL_6;
    }
    else
    {
      KiSetForceIdleState(2LL);
    }
    KiForceIdleStartTime = v7;
  }
LABEL_6:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v8 = *SchedulerAssist;
    do
    {
      v9 = v8;
      LODWORD(v9) = v8 & 0xFFDFFFFF;
      v10 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v8 & 0xFFDFFFFF, v8);
    }
    while ( v10 != v8 );
    if ( (v8 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, a4);
  }
  _enable();
}
