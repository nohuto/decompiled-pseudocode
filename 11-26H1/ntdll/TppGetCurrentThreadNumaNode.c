/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x1800668B0
 * Callers:
 *     TppAllocAlpcCompletion @ 0x180064DE4 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x180065290 (TpAllocIoCompletion.c)
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x180065D70 (TppInitializeTimerSubQueue.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpIoAlloc @ 0x1800B833C (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800FB800 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 */

struct _TEB *__fastcall TppGetCurrentThreadNumaNode(__int64 a1, int *a2, _BYTE *a3, _WORD *a4)
{
  unsigned __int64 Number; // r15
  int v9; // ebp
  int Group; // r12d
  struct _TEB *result; // rax
  unsigned int i; // edx

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v9 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (result = (struct _TEB *)*(unsigned int *)(a1 + 440), !(_DWORD)result) )
    result = (struct _TEB *)MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != (_DWORD)result )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72), (__int64)a2);
    TppAdjustRunningThreadGoalWithLock(a1);
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  }
  for ( i = 0; i < TppNumberNodes; ++i )
  {
    result = *(struct _TEB **)(a1 + 48);
    if ( *((_WORD *)&result->NtTib.StackBase + 8 * Group + 8 * TppMaximumGroups * i) == (_WORD)Group )
    {
      result = (struct _TEB *)(&(&result->NtTib.ExceptionList)[2 * Group])[2 * TppMaximumGroups * i];
      if ( _bittest64((const __int64 *)&result, Number) )
      {
        v9 = i;
        break;
      }
    }
  }
  *a2 = v9;
  if ( a3 )
    *a3 = Number;
  if ( a4 )
    *a4 = Group;
  return result;
}
