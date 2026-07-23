/*
 * XREFs of TppWorkPost @ 0x18002BCE0
 * Callers:
 *     TpPostWork @ 0x180088400 (TpPostWork.c)
 *     TppSingleTimerExpiration @ 0x180089240 (TppSingleTimerExpiration.c)
 *     TpSimpleTryPost @ 0x1800D7DF0 (TpSimpleTryPost.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180161E10 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall TppWorkPost(__int64 a1)
{
  char v2; // bp
  signed __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  volatile signed __int32 *v5; // rdx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  bool v8; // zf
  signed __int64 v9; // rax
  __int64 **v10; // rbx
  __int64 *v11; // rdi
  signed __int64 v12; // rax
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // rcx
  _DWORD *SharedData; // rdx
  __int64 v17; // rdx
  _DWORD *v18; // rdx
  __int64 v19; // rdi
  int v20; // ecx
  __int64 v21; // r8
  signed __int32 v22; // eax
  unsigned __int64 v23; // rdx
  _RTL_SRWLOCK **v24; // r14
  _RTL_SRWLOCK *v25; // rbx
  volatile signed __int32 *v26; // r15
  void *v27; // r8
  unsigned int j; // ecx
  _RTL_SRWLOCK **Value; // rax
  signed __int32 v30; // edx
  signed __int32 v31; // ett
  int v32; // eax
  int v33; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v35; // rax
  int v36; // edx
  signed __int64 v37; // rtt
  _DWORD Fields[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v40; // [rsp+28h] [rbp-90h]
  __int128 v41; // [rsp+30h] [rbp-88h]
  __int64 v42; // [rsp+40h] [rbp-78h]
  __int64 v43; // [rsp+48h] [rbp-70h]
  __int64 v44; // [rsp+50h] [rbp-68h]
  __int64 v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-58h]
  __int128 v47; // [rsp+70h] [rbp-48h]

  v47 = 0LL;
  v2 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v2 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      v2 = 0;
    }
    v4 = (v3 + 1) ^ (v3 ^ (v3 + 1)) & 0xF000000000000000uLL;
    if ( v3 < 0 && (((v3 + 1) ^ (v3 ^ (v3 + 1)) & 0xF000000000000000uLL) & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v5 = (volatile signed __int32 *)(a1 + 64);
      v4 &= ~0x8000000000000000uLL;
      v2 = 1;
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          if ( !SchedulerSharedDataSlot[i] )
          {
            SchedulerSharedDataSlot[i] = v5;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v5, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a1 + 64), (unsigned __int64)v5);
    }
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v4, v3);
    v8 = v3 == v9;
    v3 = v9;
  }
  while ( !v8 );
  if ( v2 )
  {
    v10 = *(__int64 ***)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    if ( v10 )
    {
      do
      {
        v11 = *v10;
        ZwAlertThreadByThreadId(v10[1]);
        v10 = (__int64 **)v11;
      }
      while ( v11 );
    }
  }
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(v12) = *(_DWORD *)(a1 + 232);
  do
  {
    v13 = v12 & 1;
    v14 = v12;
    LODWORD(v12) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), (v12 + 2) & 0xFFFFFFFE, v12);
  }
  while ( (_DWORD)v12 != v14 );
  if ( !v13 )
    return v12;
  _InterlockedAdd((volatile signed __int32 *)a1, 2u);
  v47 = 0LL;
  *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
  v15 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v17 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v17 = 2147353478LL;
  if ( *(_BYTE *)v17 )
  {
    v42 = *(_QWORD *)(a1 + 144);
    v43 = a1 + 200;
    v44 = *(_QWORD *)(a1 + 80);
    v45 = *(_QWORD *)(a1 + 88);
    v46 = *(_QWORD *)(a1 + 104);
    Fields[0] = 0;
    Fields[1] = 471859200;
    v40 = 0LL;
    v41 = 0LL;
    v18 = NtCurrentPeb()->SharedData;
    if ( v18 && *v18 )
      v15 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v15, 0x20402u, 0x28u, Fields);
  }
  v19 = *(_QWORD *)(a1 + 144);
  v20 = *(_DWORD *)(a1 + 192);
  if ( !v19 )
    v19 = TppPoolpGlobalPool;
  if ( (PVOID)v19 == TppPoolpSerializedPool )
    v20 = 1;
  v21 = *(unsigned int *)(a1 + 208);
  _m_prefetchw((const void *)(v19 + 428));
  v22 = *(_DWORD *)(v19 + 428);
  do
  {
    if ( v22 == -2 )
    {
      v30 = v21;
      goto LABEL_46;
    }
    if ( v22 == (_DWORD)v21 || v22 == -1 )
      break;
    v30 = -1;
LABEL_46:
    v31 = v22;
    v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 428), v30, v22);
  }
  while ( v31 != v22 );
  v23 = v20;
  v24 = (_RTL_SRWLOCK **)(a1 + 216);
  v25 = (_RTL_SRWLOCK *)(*(_QWORD *)(v19 + 8LL * v20 + 16) + 24 * v21);
  v26 = (volatile signed __int32 *)&v25[2];
  v27 = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v27 )
  {
    for ( j = 0; j < 8; ++j )
    {
      v23 = (unsigned __int64)v27 + 8 * j;
      if ( !*(_QWORD *)v23 )
      {
        *(_QWORD *)v23 = v26;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v26, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&v25[2], v23);
  Value = (_RTL_SRWLOCK **)v25[1].Value;
  if ( *Value != v25 )
    __fastfail(3u);
  *v24 = v25;
  *(_QWORD *)(a1 + 224) = Value;
  *Value = (_RTL_SRWLOCK *)v24;
  v25[1].Value = (unsigned __int64)v24;
  RtlReleaseSRWLockExclusive(v25 + 2);
  v32 = *(_DWORD *)(v19 + 440);
  if ( !v32 )
    v32 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v19 + 424) != v32 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v19 + 72));
    TppAdjustRunningThreadGoalWithLock(v19);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v19 + 72));
  }
  v33 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v35 = *ThreadPoolData;
    if ( *(_QWORD *)(v35 + 48) == v19 && *(_DWORD *)(v35 + 128) == 3 )
    {
      *(_DWORD *)(v35 + 128) = 4;
      v33 = 1;
    }
  }
  _m_prefetchw((const void *)(v19 + 8));
  v12 = *(_QWORD *)(v19 + 8);
  *(_QWORD *)&v47 = v12;
  do
  {
    DWORD1(v47) = HIDWORD(v12) + 1;
    if ( (v47 & 0xFFFF0000) != 0 || v33 )
    {
      v36 = 0;
    }
    else
    {
      LODWORD(v47) = (unsigned __int16)v47 | ((v47 & 0xFFFF0000) + 0x10000);
      v36 = 1;
    }
    v37 = v12;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 8), v47, v12);
    *(_QWORD *)&v47 = v12;
  }
  while ( v37 != v12 );
  if ( v36 )
    LODWORD(v12) = NtReleaseWorkerFactoryWorker(*(HANDLE *)(v19 + 56));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    LODWORD(v12) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v12;
}
