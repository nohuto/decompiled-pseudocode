/*
 * XREFs of TppQueueRemoveHead @ 0x1800C9060
 * Callers:
 *     TppWorkerFindTask @ 0x1800278E0 (TppWorkerFindTask.c)
 *     TpReleasePool @ 0x1800C8D80 (TpReleasePool.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall TppQueueRemoveHead(_RTL_SRWLOCK *a1, _RTL_SRWLOCK **a2)
{
  _RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rbp
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // eax
  _RTL_SRWLOCK *Value; // rbx
  unsigned __int64 v8; // rax

  v2 = a1 + 2;
  v3 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      a2 = (_RTL_SRWLOCK **)&SchedulerSharedDataSlot[8 * i];
      if ( !*a2 )
      {
        *a2 = v2;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v2, (unsigned __int64)a2);
  Value = (_RTL_SRWLOCK *)a1->Value;
  if ( *(_RTL_SRWLOCK **)(a1->Value + 8) != a1 || (v8 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 8) != Value) )
    __fastfail(3u);
  a1->Value = v8;
  *(_QWORD *)(v8 + 8) = a1;
  RtlReleaseSRWLockExclusive(v2);
  if ( Value != a1 )
    return Value;
  return (_RTL_SRWLOCK *)v3;
}
