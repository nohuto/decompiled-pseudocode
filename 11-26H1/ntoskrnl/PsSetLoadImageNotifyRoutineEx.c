/*
 * XREFs of PsSetLoadImageNotifyRoutineEx @ 0x140B32DB0
 * Callers:
 *     PsSetLoadImageNotifyRoutine @ 0x1408027E0 (PsSetLoadImageNotifyRoutine.c)
 *     EtwpCoverageSamplerStart @ 0x14083773C (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     PspLogAuditSetLoadImageNotifyRoutineEvent @ 0x140B32E64 (PspLogAuditSetLoadImageNotifyRoutineEvent.c)
 *     ExAllocateCallBack @ 0x140B32EE4 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsSetLoadImageNotifyRoutineEx(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v4; // rsi
  unsigned int i; // edi

  if ( (a2 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225712LL;
  v3 = 0;
  v4 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( v4 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x40 )
      {
        ExFreePoolWithTag(v4, 0);
        goto LABEL_12;
      }
      if ( ExCompareExchangeCallBack((signed __int64 *)&NormalizationListLock.PropagateBoostsEntry.Next + i, v4, 0LL) )
        break;
    }
    _InterlockedIncrement((volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[60]);
    if ( (PspNotifyEnableMask & 1) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 0);
  }
  else
  {
LABEL_12:
    v3 = -1073741670;
  }
  PspLogAuditSetLoadImageNotifyRoutineEvent(a1, v3);
  return v3;
}
