/*
 * XREFs of RtlWakeAllConditionVariable @ 0x1800784D0
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x180078240 (EtwpFlushActiveBuffers.c)
 *     EtwpStopLoggerInstance @ 0x18007840C (EtwpStopLoggerInstance.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 */

void __fastcall RtlWakeAllConditionVariable(signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 *v2; // r8
  signed __int64 i; // rcx
  signed __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbx

  v2 = a1;
  for ( i = *a1; i && (i & 7) != 7; i = v4 )
  {
    if ( (i & 8) != 0 )
    {
      a2 = i | 7;
      v4 = _InterlockedCompareExchange64(v2, i | 7, i);
      if ( i == v4 )
        return;
    }
    else
    {
      v4 = _InterlockedCompareExchange64(v2, 0LL, i);
      if ( i == v4 )
      {
        v5 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v5 )
        {
          do
          {
            v6 = *(_QWORD *)v5;
            _interlockedbittestandset((volatile signed __int32 *)(v5 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 36), 1u) )
              ZwAlertThreadByThreadId(*(_QWORD *)(v5 + 24), a2, v2);
            v5 = v6;
          }
          while ( v6 );
        }
        return;
      }
    }
  }
}
