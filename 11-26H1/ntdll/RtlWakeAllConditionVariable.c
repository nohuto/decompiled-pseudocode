/*
 * XREFs of RtlWakeAllConditionVariable @ 0x180066CF0
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x180066A60 (EtwpFlushActiveBuffers.c)
 *     EtwpStopLoggerInstance @ 0x180066C2C (EtwpStopLoggerInstance.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 */

void __cdecl RtlWakeAllConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  unsigned __int64 i; // rcx
  signed __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx

  for ( i = ConditionVariable->Value; i && (i & 7) != 7; i = v3 )
  {
    if ( (i & 8) != 0 )
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, i | 7, i);
      if ( i == v3 )
        return;
    }
    else
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, 0LL, i);
      if ( i == v3 )
      {
        v4 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v4 )
        {
          do
          {
            v5 = *(_QWORD *)v4;
            _interlockedbittestandset((volatile signed __int32 *)(v4 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 36), 1u) )
              ZwAlertThreadByThreadId(*(HANDLE *)(v4 + 24));
            v4 = v5;
          }
          while ( v5 );
        }
        return;
      }
    }
  }
}
