/*
 * XREFs of RtlpWakeConditionVariable @ 0x18002B160
 * Callers:
 *     RtlpWakeSingle @ 0x18002A440 (RtlpWakeSingle.c)
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x18004BCD0 (RtlSleepConditionVariableCS.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x18002AA00 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 */

char __fastcall RtlpWakeConditionVariable(volatile __int64 *a1, signed __int64 a2, int a3)
{
  unsigned __int64 *v3; // r14
  unsigned int v4; // ebx
  signed __int64 i; // r9
  unsigned __int64 v8; // r9
  signed __int64 v9; // rax
  _QWORD *v10; // r8
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  unsigned __int64 *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  volatile signed __int64 *v16; // rdx
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v3 = (unsigned __int64 *)&v18;
  v18 = 0LL;
  v4 = 0;
  for ( i = a2; ; a2 = i )
  {
    v8 = i & 0xFFFFFFFFFFFFFFF0uLL;
    LOBYTE(v9) = a2 & 7;
    v10 = (_QWORD *)v8;
    if ( (a2 & 7) == 7 )
    {
      *v3 = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
      goto LABEL_12;
    }
    v11 = a3 + (a2 & 7);
    if ( !*(_QWORD *)(v8 + 8) )
    {
      do
      {
        v12 = v10;
        v10 = (_QWORD *)*v10;
        v10[2] = v12;
      }
      while ( !v10[1] );
    }
    v13 = (unsigned __int64 *)v10[1];
    if ( v11 > v4 )
      break;
LABEL_6:
    v9 = _InterlockedCompareExchange64(a1, v8, a2);
    i = v9;
    if ( a2 == v9 )
      goto LABEL_12;
LABEL_7:
    ;
  }
  while ( 1 )
  {
    v10 = (_QWORD *)v13[2];
    if ( !v10 )
      break;
    *v3 = (unsigned __int64)v13;
    ++v4;
    *v13 = 0LL;
    v3 = v13;
    v13 = v10;
    *(_QWORD *)(v8 + 8) = v10;
    *v10 = 0LL;
    if ( v11 <= v4 )
      goto LABEL_6;
  }
  v9 = _InterlockedCompareExchange64(a1, 0LL, a2);
  i = v9;
  if ( a2 != v9 )
    goto LABEL_7;
  *v3 = (unsigned __int64)v13;
  *v13 = 0LL;
LABEL_12:
  v14 = v18;
  if ( v18 )
  {
    do
    {
      v15 = *(_QWORD *)v14;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v14 + 36), 1u) )
      {
        v16 = *(volatile signed __int64 **)(v14 + 40);
        if ( !v16 || (LOBYTE(v9) = RtlpQueueWaitBlockToSRWLock(v14, v16), !(_BYTE)v9) )
        {
          _InterlockedOr((volatile signed __int32 *)(v14 + 36), 4u);
          LOBYTE(v9) = ZwAlertThreadByThreadId(*(_QWORD *)(v14 + 24), v16, v10);
        }
      }
      v14 = v15;
    }
    while ( v15 );
  }
  return v9;
}
