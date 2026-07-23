/*
 * XREFs of PspSetCreateThreadNotifyRoutine @ 0x1408027F8
 * Callers:
 *     PsSetCreateThreadNotifyRoutine @ 0x140802760 (PsSetCreateThreadNotifyRoutine.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140802780 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     ExAllocateCallBack @ 0x140B32EE4 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspSetCreateThreadNotifyRoutine(__int64 a1, unsigned int a2)
{
  char v2; // si
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 i; // rbx

  v2 = a2;
  v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v3 )
    return 3221225626LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x40 )
    {
      ExFreePoolWithTag(v3, 0);
      return 3221225626LL;
    }
    if ( ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + i, v3, 0LL) )
      break;
  }
  if ( (v2 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[52]);
    if ( (PspNotifyEnableMask & 0x10) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 4u);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[56]);
    if ( (PspNotifyEnableMask & 8) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 3u);
  }
  return 0LL;
}
