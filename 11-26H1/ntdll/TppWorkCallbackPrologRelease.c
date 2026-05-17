/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x180053AB0
 * Callers:
 *     TppSimplepExecuteCallback @ 0x1800298E0 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18002BEA0 (TppExecuteWaitCallback.c)
 *     TppWorkpExecuteCallback @ 0x180053210 (TppWorkpExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180053660 (TppTimerpExecuteCallback.c)
 * Callees:
 *     LdrUnlockLoaderLock @ 0x18002B040 (LdrUnlockLoaderLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     TppWorkCancelPendingCallbacks @ 0x180054160 (TppWorkCancelPendingCallbacks.c)
 *     RtlSetThreadSubProcessTag @ 0x180054220 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x180054AA0 (TpCallbackMayRunLong.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrLockLoaderLock @ 0x1800E67E0 (LdrLockLoaderLock.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180161F10 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r13d
  int v10; // r12d
  unsigned __int32 v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 v16; // rcx
  _DWORD *SharedData; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // rbp
  int v21; // ecx
  __int64 v22; // r8
  signed __int32 v23; // eax
  __int64 *v24; // rbx
  __int64 v25; // r15
  __int64 **v26; // rax
  signed __int32 v27; // edx
  signed __int32 v28; // ett
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v35; // rax
  signed __int64 v36; // rax
  int v37; // ecx
  signed __int64 v38; // rdx
  signed __int64 v39; // rtt
  volatile signed __int32 **v40; // rdx
  char v41; // bp
  signed __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  volatile signed __int32 *v44; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  bool v47; // zf
  signed __int64 v48; // rax
  _QWORD *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  _QWORD *v52; // rdi
  int Count; // edi
  signed __int64 v54; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+28h] [rbp-C0h] BYREF
  int v56; // [rsp+30h] [rbp-B8h]
  __int64 v57; // [rsp+38h] [rbp-B0h]
  __int128 v58; // [rsp+40h] [rbp-A8h]
  _DWORD v59[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v60; // [rsp+58h] [rbp-90h]
  __int128 v61; // [rsp+60h] [rbp-88h]
  __int64 v62; // [rsp+70h] [rbp-78h]
  __int64 v63; // [rsp+78h] [rbp-70h]
  __int64 v64; // [rsp+80h] [rbp-68h]
  __int64 v65; // [rsp+88h] [rbp-60h]
  __int64 v66; // [rsp+90h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h]

  v3 = *(_QWORD *)(a2 + 136);
  v56 = a3;
  v57 = a1;
  v5 = a1;
  v54 = 0LL;
  v6 = 0LL;
  if ( v3 )
  {
    LdrLockLoaderLock(0LL, 0LL, &v54);
    v6 = v54;
  }
  _m_prefetchw((const void *)(a2 + 232));
  v7 = *(_DWORD *)(a2 + 232);
  do
  {
    v8 = v7;
    if ( v7 >> 1 )
    {
      v9 = 1;
      v10 = 1;
      v11 = v7 & 1 | (2 * (v7 >> 1) - 2);
      if ( v11 >= 2 )
        goto LABEL_8;
      v11 |= 1u;
    }
    else
    {
      v9 = 0;
      v11 = v7 | 1;
    }
    v10 = 0;
LABEL_8:
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v11, v8);
  }
  while ( v8 != v7 );
  if ( !v3 )
    goto LABEL_10;
  if ( v9 )
  {
    v55 = 0LL;
    if ( (int)LdrpFindLoadedDllByHandle(v3, &v55, &v54) >= 0 )
    {
      Count = LdrpIncrementModuleLoadCount(v55);
      LdrpDereferenceModule(v55);
      if ( Count >= 0 )
      {
        *(_DWORD *)(v5 + 144) |= 0x100u;
        *(_QWORD *)(v5 + 168) = v3;
        goto LABEL_98;
      }
    }
    LODWORD(v55) = 0;
    LdrUnlockLoaderLock(0, v6);
    v41 = 0;
    v58 = 0LL;
    _m_prefetchw((const void *)(a2 + 56));
    v42 = *(_QWORD *)(a2 + 56);
    do
    {
      if ( v41 )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 64));
        v41 = 0;
      }
      v43 = (v42 - 1) ^ (v42 ^ (v42 - 1)) & 0xF000000000000000uLL;
      if ( v42 < 0 && (((v42 - 1) ^ (v42 ^ (v42 - 1)) & 0xF000000000000000uLL) & 0xFFFFFFFFFFFFFFFLL) == 0 )
      {
        v44 = (volatile signed __int32 *)(a2 + 64);
        v43 &= ~0x8000000000000000uLL;
        v41 = 1;
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          for ( i = 0; i < 8; ++i )
          {
            v40 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
            if ( !*v40 )
            {
              *v40 = v44;
              break;
            }
          }
        }
        if ( _interlockedbittestandset64(v44, 0LL) )
          RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a2 + 64), (__int64)v40);
      }
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 56), v43, v42);
      v47 = v42 == v48;
      v42 = v48;
    }
    while ( !v47 );
    v10 = v55;
    v9 = v55;
    v5 = v57;
    if ( v41 )
    {
      v49 = *(_QWORD **)(a2 + 72);
      *(_QWORD *)(a2 + 72) = 0LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 64));
      if ( v49 )
      {
        do
        {
          v52 = (_QWORD *)*v49;
          ZwAlertThreadByThreadId(v49[1], v50, v51);
          v49 = v52;
        }
        while ( v52 );
      }
    }
    TppWorkCancelPendingCallbacks(a2);
  }
  else
  {
LABEL_98:
    LdrUnlockLoaderLock(0, v6);
  }
LABEL_10:
  if ( !v10 )
    goto LABEL_11;
  _InterlockedAdd((volatile signed __int32 *)a2, 2u);
  v16 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v18 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v18 = 2147353478LL;
  if ( *(_BYTE *)v18 )
  {
    v62 = *(_QWORD *)(a2 + 144);
    v63 = a2 + 200;
    v64 = *(_QWORD *)(a2 + 80);
    v65 = *(_QWORD *)(a2 + 88);
    v66 = *(_QWORD *)(a2 + 104);
    v59[0] = 0;
    v59[1] = 471859200;
    v60 = 0LL;
    v61 = 0LL;
    v19 = NtCurrentPeb()->SharedData;
    if ( v19 && *v19 )
      v16 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v16, 132098LL, 40LL, v59);
  }
  v20 = *(_QWORD *)(a2 + 144);
  v21 = *(_DWORD *)(a2 + 192);
  if ( !v20 )
    v20 = TppPoolpGlobalPool;
  if ( v20 == TppPoolpSerializedPool )
    v21 = 1;
  v22 = *(unsigned int *)(a2 + 208);
  _m_prefetchw((const void *)(v20 + 428));
  v23 = *(_DWORD *)(v20 + 428);
  while ( 2 )
  {
    if ( v23 == -2 )
    {
      v27 = v22;
LABEL_46:
      v28 = v23;
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 428), v27, v23);
      if ( v28 == v23 )
        goto LABEL_42;
      continue;
    }
    break;
  }
  if ( v23 != (_DWORD)v22 && v23 != -1 )
  {
    v27 = -1;
    goto LABEL_46;
  }
LABEL_42:
  v24 = (__int64 *)(a2 + 216);
  v25 = *(_QWORD *)(v20 + 8LL * v21 + 16) + 24 * v22;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v25 + 16), v21);
  v26 = *(__int64 ***)(v25 + 8);
  if ( *v26 != (__int64 *)v25 )
    __fastfail(3u);
  *v24 = v25;
  *(_QWORD *)(a2 + 224) = v26;
  *v26 = v24;
  *(_QWORD *)(v25 + 8) = v24;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v25 + 16));
  v32 = *(_DWORD *)(v20 + 440);
  if ( !v32 )
    v32 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v20 + 424) != v32 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v20 + 72), v31);
    TppAdjustRunningThreadGoalWithLock(v20);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v20 + 72));
  }
  v33 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v35 = *ThreadPoolData;
    if ( *(_QWORD *)(v35 + 48) == v20 && *(_DWORD *)(v35 + 128) == 3 )
    {
      *(_DWORD *)(v35 + 128) = 4;
      v33 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v20 + 8));
  v36 = *(_QWORD *)(v20 + 8);
  v54 = v36;
  do
  {
    HIDWORD(v54) = HIDWORD(v36) + 1;
    if ( (v54 & 0xFFFF0000) != 0 || (_DWORD)v33 )
    {
      v37 = 0;
    }
    else
    {
      v37 = 1;
      LODWORD(v54) = (unsigned __int16)v54 | ((v54 & 0xFFFF0000) + 0x10000);
    }
    v38 = v54;
    v39 = v36;
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v54, v36);
    v54 = v36;
  }
  while ( v39 != v36 );
  if ( v37 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(v20 + 56));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, signed __int64, __int64))(a2 + 8))(a2, v38, v33);
LABEL_11:
  if ( v56 )
  {
    _m_prefetchw((const void *)(a2 + 168));
    v29 = *(_DWORD *)(a2 + 168);
    do
    {
      v30 = v29;
      v29 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 168), v29 | 0x10000, v29);
    }
    while ( v30 != v29 );
    if ( (v29 & 0x30000) == 0 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v9 )
  {
    v12 = *(_QWORD *)(a2 + 96);
    if ( v12 && v12 != -1 )
    {
      *(_QWORD *)v5 = 72LL;
      *(_DWORD *)(v5 + 8) = 1;
      RtlActivateActivationContextUnsafeFast(v5, *(_QWORD *)(a2 + 96));
      *(_BYTE *)(v5 + 76) |= 1u;
    }
    *(_DWORD *)(v5 + 144) |= 0x240u;
    *(_QWORD *)(v5 + 184) = a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong(v5);
    v13 = *(_QWORD *)(a2 + 104);
    if ( v13 )
    {
      *(_QWORD *)(v5 + 80) = v13;
      RtlSetThreadSubProcessTag(v13);
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
    v14 = (_QWORD *)(a2 + 128);
    if ( v14 )
    {
      if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *v14 )
        goto LABEL_22;
      if ( (int)NtSetInformationThread(-2LL, 44LL, v14, 8LL) >= 0 )
      {
        *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v14;
LABEL_22:
        *(_QWORD *)(v5 + 248) = *v14;
      }
    }
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    return 0LL;
  }
}
