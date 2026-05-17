/*
 * XREFs of TpPostTask @ 0x180066A90
 * Callers:
 *     TppDirectExecuteCallback @ 0x180065EA0 (TppDirectExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180161F10 (NtReleaseWorkerFactoryWorker.c)
 */

signed __int64 __fastcall TpPostTask(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  __int64 v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rbp
  void *SchedulerSharedDataSlot; // r8
  __int64 i; // rcx
  __int64 **v14; // rax
  signed __int32 v15; // edx
  signed __int32 v16; // ett
  __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v21; // rax
  signed __int64 result; // rax
  int v23; // edx
  signed __int64 v24; // rtt
  signed __int64 v25; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = TppPoolpSerializedPool;
      goto LABEL_3;
    }
    v4 = TppPoolpGlobalPool;
  }
  if ( v4 == TppPoolpSerializedPool )
LABEL_3:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw((const void *)(v4 + 428));
  v7 = *(_DWORD *)(v4 + 428);
  do
  {
    if ( v7 == -2 )
    {
      v15 = v6;
      goto LABEL_18;
    }
    if ( v7 == (_DWORD)v6 || v7 == -1 )
      break;
    v15 = -1;
LABEL_18:
    v16 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 428), v15, v7);
  }
  while ( v16 != v7 );
  v8 = a3;
  v9 = (__int64 *)(a1 + 16);
  v10 = *(_QWORD *)(v4 + 8LL * a3 + 16) + 24 * v6;
  v11 = (volatile signed __int32 *)(v10 + 16);
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v8 = (__int64)SchedulerSharedDataSlot + 8 * i;
      if ( !*(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = v11;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v11, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(v10 + 16), v8);
  v14 = *(__int64 ***)(v10 + 8);
  if ( *v14 != (__int64 *)v10 )
    __fastfail(3u);
  *v9 = v10;
  v9[1] = (__int64)v14;
  *v14 = v9;
  *(_QWORD *)(v10 + 8) = v9;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 16));
  v18 = *(_DWORD *)(v4 + 440);
  if ( !v18 )
    v18 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v4 + 424) != v18 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v4 + 72), v17);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
  }
  v19 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v21 = *ThreadPoolData;
    if ( *(_QWORD *)(v21 + 48) == v4 && *(_DWORD *)(v21 + 128) == 3 )
    {
      *(_DWORD *)(v21 + 128) = 4;
      v19 = 1;
    }
  }
  _m_prefetchw((const void *)(v4 + 8));
  result = *(_QWORD *)(v4 + 8);
  LODWORD(v25) = result;
  do
  {
    if ( (v25 & 0xFFFF0000) != 0 || v19 )
    {
      v23 = 0;
    }
    else
    {
      LODWORD(v25) = (unsigned __int16)v25 | ((v25 & 0xFFFF0000) + 0x10000);
      v23 = 1;
    }
    v24 = result;
    HIDWORD(v25) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v25, result);
    LODWORD(v25) = result;
  }
  while ( v24 != result );
  if ( v23 )
    return NtReleaseWorkerFactoryWorker(*(_QWORD *)(v4 + 56));
  return result;
}
