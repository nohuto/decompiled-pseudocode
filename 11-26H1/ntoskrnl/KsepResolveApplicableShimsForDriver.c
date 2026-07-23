/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x1407C0E34
 * Callers:
 *     KsepGetShimsForDriver @ 0x140A3865C (KsepGetShimsForDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     KsepLoadShimProvider @ 0x140600A40 (KsepLoadShimProvider.c)
 *     KsepResolveShimHooks @ 0x1407C0644 (KsepResolveShimHooks.c)
 *     KsepGetLoadedModulesList @ 0x1407C16B4 (KsepGetLoadedModulesList.c)
 *     KsepIsShimRegistered @ 0x140B5A3B8 (KsepIsShimRegistered.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  int ShimProvider; // edi
  int v8; // r14d
  int v9; // r12d
  AutoBoost *v10; // rax
  void *v11; // rdx
  __int64 v12; // r8
  signed __int8 v13; // cf
  AutoBoost *v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // r14
  int v18; // eax
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 i; // rbp
  unsigned int *v21; // rsi
  __int64 v22; // rax
  struct _KTHREAD *v23; // rax
  AutoBoost *v24; // rax
  void *v25; // rdx
  __int64 v26; // r8
  AutoBoost *v27; // rsi
  __int64 j; // rsi
  unsigned int *v29; // r14
  __int64 v30; // rax
  void *v31; // rbp
  struct _KLOCK_ENTRIES *v32; // r9
  struct _KTHREAD *v33; // rax
  AutoBoost *v34; // rax
  void *v35; // rdx
  AutoBoost *v36; // rsi
  __int64 k; // rsi
  __int64 v38; // rax
  void *v40; // [rsp+20h] [rbp-48h] BYREF
  int v41; // [rsp+80h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  ShimProvider = 0;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  v41 = 0;
  v40 = 0LL;
  v9 = 0;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E66D40, 0LL, 0LL, a4);
  v13 = _interlockedbittestandset64(&stru_140E66D40.Header.Lock, 0LL);
  v14 = v10;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E66D40, v10, (__int64)&stru_140E66D40);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v11);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  if ( (_DWORD)v5 )
  {
    v15 = a1 + 72;
    v16 = a1;
    v17 = v5;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered(&KseEngine, v16, v12, v16 + 72) == 1 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)v15 + 24LL);
        if ( !v18 )
          ShimProvider = 1;
        *(_DWORD *)(*(_QWORD *)v15 + 24LL) = v18 + 1;
      }
      else
      {
        *(_QWORD *)v15 = 0LL;
        v9 = 1;
        ShimProvider = 1;
      }
      v16 += 80LL;
      v15 += 80LL;
      --v17;
    }
    while ( v17 );
    v41 = ShimProvider;
    v8 = ShimProvider;
    ShimProvider = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E66D40);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
    {
      v21 = (unsigned int *)(a1 + 80 * i);
      if ( !*((_QWORD *)v21 + 9) )
      {
        ShimProvider = KsepLoadShimProvider(a1 + 80 * i);
        if ( ShimProvider < 0 )
        {
          v22 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                    1u)
               + 1) & 0x3F;
          *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v22) = ShimProvider;
          *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v22) = 459209;
          if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
            KsepDebugPrint(
              6LL,
              (int)"KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
              *v21,
              (unsigned int)ShimProvider);
          KsepLogError(
            6LL,
            (__int64)"KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
            *v21,
            ShimProvider);
          goto LABEL_42;
        }
      }
    }
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v24 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E66D40, 0LL, 0LL, v19);
    v13 = _interlockedbittestandset64(&stru_140E66D40.Header.Lock, 0LL);
    v27 = v24;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E66D40, v24, (__int64)&stru_140E66D40);
    if ( v27 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v27, v25);
      else
        *((_BYTE *)v27 + 10) = 1;
    }
    for ( j = 0LL; (unsigned int)j < (unsigned int)v5; j = (unsigned int)(j + 1) )
    {
      v29 = (unsigned int *)(a1 + 80 * j);
      if ( !(unsigned int)KsepIsShimRegistered(&KseEngine, v29, v26, v29 + 18) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
        KeAbPostRelease((unsigned __int64)&stru_140E66D40);
        KeLeaveCriticalRegion();
        ShimProvider = -1073740782;
        v30 = ((unsigned __int8)_InterlockedExchangeAdd(
                                  (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                  1u)
             + 1) & 0x3F;
        *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v30) = -1073740782;
        *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v30) = 459238;
        if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
          KsepDebugPrint(6LL, (int)"KSE: The provider did not register shim [0x%08X] in time\n", *v29);
        KsepLogError(6LL, (__int64)"KSE: The provider did not register shim [0x%08X] in time\n", *v29);
        goto LABEL_42;
      }
      ++*(_DWORD *)(*((_QWORD *)v29 + 9) + 24LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E66D40);
    KeLeaveCriticalRegion();
    v8 = v41;
  }
  if ( v8 )
  {
    ShimProvider = KsepGetLoadedModulesList(&v40);
    if ( ShimProvider < 0 )
    {
LABEL_42:
      v31 = v40;
      goto LABEL_70;
    }
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E66D40, 0LL, 0LL, v32);
    v13 = _interlockedbittestandset64(&stru_140E66D40.Header.Lock, 0LL);
    v36 = v34;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E66D40, v34, (__int64)&stru_140E66D40);
    if ( v36 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v36, v35);
      else
        *((_BYTE *)v36 + 10) = 1;
    }
    v31 = v40;
    for ( k = 0LL; (unsigned int)k < (unsigned int)v5; k = (unsigned int)(k + 1) )
    {
      ShimProvider = KsepResolveShimHooks(
                       (__int64)v31,
                       *(int **)(*(_QWORD *)(*(_QWORD *)(a1 + 80 * k + 72) + 16LL) + 48LL));
      if ( ShimProvider < 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
        KeAbPostRelease((unsigned __int64)&stru_140E66D40);
        KeLeaveCriticalRegion();
        v38 = ((unsigned __int8)_InterlockedExchangeAdd(
                                  (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                  1u)
             + 1) & 0x3F;
        *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v38) = ShimProvider;
        *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v38) = 459286;
        if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
          KsepDebugPrint(
            6LL,
            (int)"KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            *(unsigned int *)(a1 + 80 * k),
            (unsigned int)ShimProvider);
        KsepLogError(
          6LL,
          (__int64)"KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          *(_DWORD *)(a1 + 80 * k),
          ShimProvider);
        goto LABEL_70;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66D40.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E66D40);
    KeLeaveCriticalRegion();
  }
  else
  {
    v31 = v40;
  }
  *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                    * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                           &KsepHistoryMessagesIndex,
                                                                           1u)
                                                      + 1) & 0x3F)] = 459300LL;
  if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
    KsepDebugPrint(6LL, (int)"KSE: Successfully resolved %d shim(s).\n", (unsigned int)v5);
  KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", v5);
LABEL_70:
  KsepPoolFreePaged(v31);
  return (unsigned int)ShimProvider;
}
