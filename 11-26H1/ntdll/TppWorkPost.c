/*
 * XREFs of TppWorkPost @ 0x180041770
 * Callers:
 *     TpPostWork @ 0x180067FB0 (TpPostWork.c)
 *     TppSingleTimerExpiration @ 0x180068DF0 (TppSingleTimerExpiration.c)
 *     TpSimpleTryPost @ 0x1800DAE30 (TpSimpleTryPost.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180161F10 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkPost(__int64 a1)
{
  char v2; // bp
  signed __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  volatile signed __int32 *v5; // rdx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  bool v8; // zf
  signed __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rdi
  __int64 result; // rax
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // rcx
  _DWORD *SharedData; // rdx
  __int64 v19; // rdx
  _DWORD *v20; // rdx
  __int64 v21; // rdi
  int v22; // ecx
  __int64 v23; // r8
  signed __int32 v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // r14
  __int64 v27; // rbx
  volatile signed __int32 *v28; // r15
  void *v29; // r8
  unsigned int j; // ecx
  __int64 **v31; // rax
  signed __int32 v32; // edx
  signed __int32 v33; // ett
  __int64 v34; // rdx
  int v35; // eax
  int v36; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rtt
  _DWORD v41[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v42; // [rsp+28h] [rbp-90h]
  __int128 v43; // [rsp+30h] [rbp-88h]
  __int64 v44; // [rsp+40h] [rbp-78h]
  __int64 v45; // [rsp+48h] [rbp-70h]
  __int64 v46; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+58h] [rbp-60h]
  __int64 v48; // [rsp+60h] [rbp-58h]
  __int128 v49; // [rsp+70h] [rbp-48h]

  v49 = 0LL;
  v2 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v2 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
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
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a1 + 64), (__int64)v5);
    }
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v4, v3);
    v8 = v3 == v9;
    v3 = v9;
  }
  while ( !v8 );
  if ( v2 )
  {
    v10 = *(_QWORD **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    if ( v10 )
    {
      do
      {
        v13 = (_QWORD *)*v10;
        ZwAlertThreadByThreadId(v10[1], v11, v12);
        v10 = v13;
      }
      while ( v13 );
    }
  }
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(result) = *(_DWORD *)(a1 + 232);
  do
  {
    v15 = result & 1;
    v16 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 232),
                             (result + 2) & 0xFFFFFFFE,
                             result);
  }
  while ( (_DWORD)result != v16 );
  if ( !v15 )
    return result;
  _InterlockedAdd((volatile signed __int32 *)a1, 2u);
  v49 = 0LL;
  *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
  v17 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v19 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v19 = 2147353478LL;
  if ( *(_BYTE *)v19 )
  {
    v44 = *(_QWORD *)(a1 + 144);
    v45 = a1 + 200;
    v46 = *(_QWORD *)(a1 + 80);
    v47 = *(_QWORD *)(a1 + 88);
    v48 = *(_QWORD *)(a1 + 104);
    v41[0] = 0;
    v41[1] = 471859200;
    v42 = 0LL;
    v43 = 0LL;
    v20 = NtCurrentPeb()->SharedData;
    if ( v20 && *v20 )
      v17 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v17, 132098LL, 40LL, v41);
  }
  v21 = *(_QWORD *)(a1 + 144);
  v22 = *(_DWORD *)(a1 + 192);
  if ( !v21 )
    v21 = TppPoolpGlobalPool;
  if ( v21 == TppPoolpSerializedPool )
    v22 = 1;
  v23 = *(unsigned int *)(a1 + 208);
  _m_prefetchw((const void *)(v21 + 428));
  v24 = *(_DWORD *)(v21 + 428);
  do
  {
    if ( v24 == -2 )
    {
      v32 = v23;
      goto LABEL_46;
    }
    if ( v24 == (_DWORD)v23 || v24 == -1 )
      break;
    v32 = -1;
LABEL_46:
    v33 = v24;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 428), v32, v24);
  }
  while ( v33 != v24 );
  v25 = v22;
  v26 = (__int64 *)(a1 + 216);
  v27 = *(_QWORD *)(v21 + 8LL * v22 + 16) + 24 * v23;
  v28 = (volatile signed __int32 *)(v27 + 16);
  v29 = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v29 )
  {
    for ( j = 0; j < 8; ++j )
    {
      v25 = (__int64)v29 + 8 * j;
      if ( !*(_QWORD *)v25 )
      {
        *(_QWORD *)v25 = v28;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v28, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(v27 + 16), v25);
  v31 = *(__int64 ***)(v27 + 8);
  if ( *v31 != (__int64 *)v27 )
    __fastfail(3u);
  *v26 = v27;
  *(_QWORD *)(a1 + 224) = v31;
  *v31 = v26;
  *(_QWORD *)(v27 + 8) = v26;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v27 + 16));
  v35 = *(_DWORD *)(v21 + 440);
  if ( !v35 )
    v35 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v21 + 424) != v35 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v21 + 72), v34);
    TppAdjustRunningThreadGoalWithLock(v21);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v21 + 72));
  }
  v36 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v38 = *ThreadPoolData;
    if ( *(_QWORD *)(v38 + 48) == v21 && *(_DWORD *)(v38 + 128) == 3 )
    {
      *(_DWORD *)(v38 + 128) = 4;
      v36 = 1;
    }
  }
  _m_prefetchw((const void *)(v21 + 8));
  result = *(_QWORD *)(v21 + 8);
  *(_QWORD *)&v49 = result;
  do
  {
    DWORD1(v49) = HIDWORD(result) + 1;
    if ( (v49 & 0xFFFF0000) != 0 || v36 )
    {
      v39 = 0;
    }
    else
    {
      LODWORD(v49) = (unsigned __int16)v49 | ((v49 & 0xFFFF0000) + 0x10000);
      v39 = 1;
    }
    v40 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), v49, result);
    *(_QWORD *)&v49 = result;
  }
  while ( v40 != result );
  if ( v39 )
    result = NtReleaseWorkerFactoryWorker(*(_QWORD *)(v21 + 56));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
