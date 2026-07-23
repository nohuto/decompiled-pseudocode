/*
 * XREFs of RtlpWakeConditionVariable @ 0x180016260
 * Callers:
 *     RtlpWakeSingle @ 0x180015540 (RtlpWakeSingle.c)
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x180036250 (RtlSleepConditionVariableCS.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x180015B00 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
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
  unsigned __int64 *v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rdi
  volatile signed __int64 *v17; // rdx
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  v3 = (unsigned __int64 *)&v19;
  v19 = 0LL;
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
    v14 = (unsigned __int64 *)v13[2];
    if ( !v14 )
      break;
    *v3 = (unsigned __int64)v13;
    ++v4;
    *v13 = 0LL;
    v3 = v13;
    *(_QWORD *)(v8 + 8) = v14;
    v13 = v14;
    *v14 = 0LL;
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
  v15 = v19;
  if ( v19 )
  {
    do
    {
      v16 = *(_QWORD *)v15;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v15 + 36), 1u) )
      {
        v17 = *(volatile signed __int64 **)(v15 + 40);
        if ( !v17 || (LOBYTE(v9) = RtlpQueueWaitBlockToSRWLock(v15, v17), !(_BYTE)v9) )
        {
          _InterlockedOr((volatile signed __int32 *)(v15 + 36), 4u);
          LOBYTE(v9) = ZwAlertThreadByThreadId(*(HANDLE *)(v15 + 24));
        }
      }
      v15 = v16;
    }
    while ( v16 );
  }
  return v9;
}
