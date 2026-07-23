/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x18003E030
 * Callers:
 *     TppSimplepExecuteCallback @ 0x1800149B0 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180016FA0 (TppExecuteWaitCallback.c)
 *     TppWorkpExecuteCallback @ 0x18003D790 (TppWorkpExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003DBE0 (TppTimerpExecuteCallback.c)
 * Callees:
 *     LdrUnlockLoaderLock @ 0x180016140 (LdrUnlockLoaderLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     TppWorkCancelPendingCallbacks @ 0x18003E6E0 (TppWorkCancelPendingCallbacks.c)
 *     RtlSetThreadSubProcessTag @ 0x18003E7A0 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x18003F020 (TpCallbackMayRunLong.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrLockLoaderLock @ 0x1800E49F0 (LdrLockLoaderLock.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180161E10 (NtReleaseWorkerFactoryWorker.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(PTP_CALLBACK_INSTANCE Instance, __int64 a2, int a3)
{
  void *v3; // rbp
  PTP_CALLBACK_INSTANCE v5; // r14
  PVOID v6; // r15
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r13d
  int v10; // r12d
  unsigned __int32 v11; // ecx
  __int64 v12; // rax
  void *v13; // rcx
  unsigned __int64 *v14; // rsi
  __int64 v16; // rcx
  _DWORD *SharedData; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // rbp
  int v21; // ecx
  __int64 v22; // r8
  signed __int32 v23; // eax
  _RTL_SRWLOCK **v24; // rbx
  _RTL_SRWLOCK *v25; // r15
  _RTL_SRWLOCK **Value; // rax
  signed __int32 v27; // edx
  signed __int32 v28; // ett
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  int v31; // eax
  __int64 v32; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v34; // rax
  void *v35; // rax
  int v36; // ecx
  PVOID v37; // rdx
  void *v38; // rtt
  volatile signed __int32 **v39; // rdx
  char v40; // bp
  signed __int64 v41; // rdi
  unsigned __int64 v42; // rbx
  volatile signed __int32 *v43; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  bool v46; // zf
  signed __int64 v47; // rax
  __int64 **v48; // rbx
  __int64 *v49; // rdi
  int Count; // edi
  PVOID Cookie; // [rsp+20h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-C0h] BYREF
  int v53; // [rsp+30h] [rbp-B8h]
  PTP_CALLBACK_INSTANCE v54; // [rsp+38h] [rbp-B0h]
  __int128 v55; // [rsp+40h] [rbp-A8h]
  _DWORD Fields[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v57; // [rsp+58h] [rbp-90h]
  __int128 v58; // [rsp+60h] [rbp-88h]
  __int64 v59; // [rsp+70h] [rbp-78h]
  __int64 v60; // [rsp+78h] [rbp-70h]
  __int64 v61; // [rsp+80h] [rbp-68h]
  __int64 v62; // [rsp+88h] [rbp-60h]
  __int64 v63; // [rsp+90h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h]

  v3 = *(void **)(a2 + 136);
  v53 = a3;
  v54 = Instance;
  v5 = Instance;
  Cookie = 0LL;
  v6 = 0LL;
  if ( v3 )
  {
    LdrLockLoaderLock(0, 0LL, &Cookie);
    v6 = Cookie;
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
    BaseAddress = 0LL;
    if ( (int)LdrpFindLoadedDllByHandle(v3, &BaseAddress, &Cookie) >= 0 )
    {
      Count = LdrpIncrementModuleLoadCount(BaseAddress);
      LdrpDereferenceModule(BaseAddress);
      if ( Count >= 0 )
      {
        v5->CallbackEpilogFlags |= 0x100u;
        v5->RaceDll = v3;
        goto LABEL_98;
      }
    }
    LODWORD(BaseAddress) = 0;
    LdrUnlockLoaderLock(0, v6);
    v40 = 0;
    v55 = 0LL;
    _m_prefetchw((const void *)(a2 + 56));
    v41 = *(_QWORD *)(a2 + 56);
    do
    {
      if ( v40 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 64));
        v40 = 0;
      }
      v42 = (v41 - 1) ^ (v41 ^ (v41 - 1)) & 0xF000000000000000uLL;
      if ( v41 < 0 && (((v41 - 1) ^ (v41 ^ (v41 - 1)) & 0xF000000000000000uLL) & 0xFFFFFFFFFFFFFFFLL) == 0 )
      {
        v43 = (volatile signed __int32 *)(a2 + 64);
        v42 &= ~0x8000000000000000uLL;
        v40 = 1;
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          for ( i = 0; i < 8; ++i )
          {
            v39 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
            if ( !*v39 )
            {
              *v39 = v43;
              break;
            }
          }
        }
        if ( _interlockedbittestandset64(v43, 0LL) )
          RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a2 + 64), (unsigned __int64)v39);
      }
      v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 56), v42, v41);
      v46 = v41 == v47;
      v41 = v47;
    }
    while ( !v46 );
    v10 = (int)BaseAddress;
    v9 = (int)BaseAddress;
    v5 = v54;
    if ( v40 )
    {
      v48 = *(__int64 ***)(a2 + 72);
      *(_QWORD *)(a2 + 72) = 0LL;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 64));
      if ( v48 )
      {
        do
        {
          v49 = *v48;
          ZwAlertThreadByThreadId(v48[1]);
          v48 = (__int64 **)v49;
        }
        while ( v49 );
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
    v59 = *(_QWORD *)(a2 + 144);
    v60 = a2 + 200;
    v61 = *(_QWORD *)(a2 + 80);
    v62 = *(_QWORD *)(a2 + 88);
    v63 = *(_QWORD *)(a2 + 104);
    Fields[0] = 0;
    Fields[1] = 471859200;
    v57 = 0LL;
    v58 = 0LL;
    v19 = NtCurrentPeb()->SharedData;
    if ( v19 && *v19 )
      v16 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v16, 0x20402u, 0x28u, Fields);
  }
  v20 = *(_QWORD *)(a2 + 144);
  v21 = *(_DWORD *)(a2 + 192);
  if ( !v20 )
    v20 = TppPoolpGlobalPool;
  if ( (PVOID)v20 == TppPoolpSerializedPool )
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
  v24 = (_RTL_SRWLOCK **)(a2 + 216);
  v25 = (_RTL_SRWLOCK *)(*(_QWORD *)(v20 + 8LL * v21 + 16) + 24 * v22);
  RtlAcquireSRWLockExclusive(v25 + 2);
  Value = (_RTL_SRWLOCK **)v25[1].Value;
  if ( *Value != v25 )
    __fastfail(3u);
  *v24 = v25;
  *(_QWORD *)(a2 + 224) = Value;
  *Value = (_RTL_SRWLOCK *)v24;
  v25[1].Value = (unsigned __int64)v24;
  RtlReleaseSRWLockExclusive(v25 + 2);
  v31 = *(_DWORD *)(v20 + 440);
  if ( !v31 )
    v31 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v20 + 424) != v31 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v20 + 72));
    TppAdjustRunningThreadGoalWithLock(v20);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v20 + 72));
  }
  v32 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v34 = *ThreadPoolData;
    if ( *(_QWORD *)(v34 + 48) == v20 && *(_DWORD *)(v34 + 128) == 3 )
    {
      *(_DWORD *)(v34 + 128) = 4;
      v32 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v20 + 8));
  v35 = *(void **)(v20 + 8);
  Cookie = v35;
  do
  {
    HIDWORD(Cookie) = HIDWORD(v35) + 1;
    if ( ((unsigned int)Cookie & 0xFFFF0000) != 0 || (_DWORD)v32 )
    {
      v36 = 0;
    }
    else
    {
      v36 = 1;
      LODWORD(Cookie) = (unsigned __int16)Cookie | (((unsigned int)Cookie & 0xFFFF0000) + 0x10000);
    }
    v37 = Cookie;
    v38 = v35;
    v35 = (void *)_InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v20 + 8),
                    (signed __int64)Cookie,
                    (signed __int64)v35);
    Cookie = v35;
  }
  while ( v38 != v35 );
  if ( v36 )
    NtReleaseWorkerFactoryWorker(*(HANDLE *)(v20 + 56));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, PVOID, __int64))(a2 + 8))(a2, v37, v32);
LABEL_11:
  if ( v53 )
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
      v5->ActivationFrame.Size = 72LL;
      v5->ActivationFrame.Format = 1;
      RtlActivateActivationContextUnsafeFast((__int64)v5, *(_QWORD *)(a2 + 96));
      *((_BYTE *)v5 + 76) |= 1u;
    }
    v5->CallbackEpilogFlags |= 0x240u;
    v5->CleanupGroupMember = (_TPP_CLEANUP_GROUP_MEMBER *)a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong(v5);
    v13 = *(void **)(a2 + 104);
    if ( v13 )
    {
      v5->SubProcessTag = v13;
      RtlSetThreadSubProcessTag(v13);
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
    v14 = (unsigned __int64 *)(a2 + 128);
    if ( v14 )
    {
      if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *v14 )
        goto LABEL_22;
      if ( NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v14, 8u) >= 0 )
      {
        *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v14;
LABEL_22:
        v5->WorkOnBehalf = *v14;
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
