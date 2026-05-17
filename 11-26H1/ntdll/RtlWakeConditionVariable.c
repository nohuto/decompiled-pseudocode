/*
 * XREFs of RtlWakeConditionVariable @ 0x18002A8A0
 * Callers:
 *     TppPoolUpdateTrimmedWorker @ 0x1800E708C (TppPoolUpdateTrimmedWorker.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x18002AA00 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 */

char __fastcall RtlWakeConditionVariable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  signed __int64 v3; // rdx
  signed __int64 v4; // rtt
  unsigned __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned __int64 *v7; // rsi
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r11
  unsigned int v11; // r10d
  _QWORD *v12; // rax
  unsigned __int64 *v13; // r11
  unsigned __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rdx
  signed __int64 v18; // rtt
  volatile signed __int32 *v20; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  do
  {
    while ( 1 )
    {
      if ( !v1 )
        return v1;
      if ( (v1 & 8) == 0 )
        break;
      if ( (v1 & 7) != 7 )
      {
        v18 = v1;
        v1 = _InterlockedCompareExchange64(a1, v1 + 1, v1);
        if ( v18 != v1 )
          continue;
      }
      return v1;
    }
    v3 = v1 + 8;
    v4 = v1;
    v1 = _InterlockedCompareExchange64(a1, v1 + 8, v1);
  }
  while ( v4 != v1 );
  v5 = 0LL;
  v6 = v3;
  v7 = (unsigned __int64 *)&v20;
  v8 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    v9 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    LOBYTE(v1) = v3 & 7;
    v10 = (_QWORD *)v9;
    if ( (v3 & 7) == 7 )
    {
      v5 = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
      *v7 = v5;
      goto LABEL_17;
    }
    v11 = (v3 & 7) + 1;
    if ( !*(_QWORD *)(v9 + 8) )
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
    if ( v11 > v8 )
      break;
LABEL_11:
    v1 = _InterlockedCompareExchange64(a1, v9, v3);
    v6 = v1;
    if ( v3 == v1 )
      goto LABEL_17;
LABEL_12:
    v3 = v6;
  }
  while ( 1 )
  {
    v14 = (unsigned __int64 *)v13[2];
    if ( !v14 )
      break;
    *v7 = (unsigned __int64)v13;
    ++v8;
    *v13 = 0LL;
    v7 = v13;
    *(_QWORD *)(v9 + 8) = v14;
    v13 = v14;
    *v14 = 0LL;
    if ( v11 <= v8 )
      goto LABEL_11;
  }
  v1 = _InterlockedCompareExchange64(a1, 0LL, v3);
  v6 = v1;
  if ( v3 != v1 )
    goto LABEL_12;
  *v7 = (unsigned __int64)v13;
  *v13 = 0LL;
LABEL_17:
  v15 = v20;
  if ( v20 )
  {
    do
    {
      v16 = *(volatile signed __int32 **)v15;
      if ( !_interlockedbittestandreset(v15 + 9, 1u) )
      {
        v17 = *((_QWORD *)v15 + 5);
        if ( !v17 || (LOBYTE(v1) = RtlpQueueWaitBlockToSRWLock(v15, v17, v5), !(_BYTE)v1) )
        {
          _InterlockedOr(v15 + 9, 4u);
          LOBYTE(v1) = ZwAlertThreadByThreadId(*((_QWORD *)v15 + 3), v17, v5);
        }
      }
      v15 = v16;
    }
    while ( v16 );
  }
  return v1;
}
