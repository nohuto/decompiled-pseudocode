/*
 * XREFs of SmKmStoreAdd @ 0x140B0CD9C
 * Callers:
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     SmKmEtwLogStoreChange @ 0x140820888 (SmKmEtwLogStoreChange.c)
 *     SmKmStoreRefInitialize @ 0x1408209D4 (SmKmStoreRefInitialize.c)
 */

__int64 __fastcall SmKmStoreAdd(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // rdi
  __int64 i; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 *v9; // rsi
  struct _KTHREAD *v10; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // r14
  struct _KTHREAD *v16; // rax
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // r14
  __int16 v20; // cx
  int v21; // ecx
  __int64 v22; // rax
  struct _KLOCK_ENTRIES *v23; // r9
  struct _PRIVILEGE_SET *v24; // rbp
  unsigned __int64 v25; // rsi
  struct _EX_RUNDOWN_REF *v26; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v28; // rax
  void *v29; // rdx
  AutoBoost *v30; // rsi
  unsigned int v31; // [rsp+20h] [rbp-48h]
  _DWORD *v32; // [rsp+28h] [rbp-40h]

  v4 = 0;
  v32 = *(_DWORD **)a3;
  v5 = 0LL;
  v31 = 0;
  for ( i = 0LL; (unsigned int)i < 0x20; i = (unsigned int)(i + 1) )
  {
    if ( !*(_QWORD *)(a1 + 8 * i) )
    {
      v22 = SmAllocEx(1280LL, 0x61536D73u, -1);
      v24 = (struct _PRIVILEGE_SET *)v22;
      if ( !v22 )
        return (unsigned int)-1073741670;
      v25 = v22 + 1280;
      v26 = (struct _EX_RUNDOWN_REF *)v22;
      if ( v22 < (unsigned __int64)(v22 + 1280) )
      {
        do
        {
          SmKmStoreRefInitialize(v26);
          v26 += 5;
        }
        while ( (unsigned __int64)v26 < v25 );
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v28 = (AutoBoost *)KeAbPreAcquire(a1 + 264, 0LL, 0LL, v23);
      v30 = v28;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 264), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 264), v28, a1 + 264);
      if ( v30 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v30, v29);
        else
          *((_BYTE *)v30 + 10) = 1;
      }
      if ( !*(_QWORD *)(a1 + 8 * i) )
      {
        *(_QWORD *)(a1 + 8 * i) = v24;
        v24 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 264));
      KeAbPostRelease(a1 + 264);
      KeLeaveCriticalRegion();
      if ( v24 )
        CmSiFreeMemory(v24);
      v4 = v31;
    }
    v5 = *(_QWORD *)(a1 + 8 * i);
    v8 = v5 + 1280;
    v9 = (unsigned __int64 *)(v5 + 16);
    while ( v5 < v8 )
    {
      if ( !*(_QWORD *)v5 )
      {
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        v11 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, a4);
        v13 = v11;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
          ExfAcquirePushLockExclusiveEx(v9, v11, (__int64)v9);
        if ( v13 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v13, v12);
          else
            *((_BYTE *)v13 + 10) = 1;
        }
        if ( !*(_QWORD *)v5 )
        {
          v4 = v31;
          goto LABEL_15;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v9);
        KeAbPostRelease((unsigned __int64)v9);
        KeLeaveCriticalRegion();
        v4 = v31;
      }
      v5 += 40LL;
      v9 += 5;
      v31 = ++v4;
    }
  }
LABEL_15:
  if ( v4 < 0x400 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (AutoBoost *)KeAbPreAcquire(a1 + 264, 0LL, 0LL, a4);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 264), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 264), v17, a1 + 264);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    *(_BYTE *)(v5 + 34) = 0;
    *(_WORD *)(v5 + 32) ^= ((unsigned __int8)*(_WORD *)(v5 + 32) ^ (unsigned __int8)((unsigned __int8)(*v32 >> 17) << 6)) & 0x40;
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(a3 + 16);
    ++*(_DWORD *)(a1 + 272);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 264));
    KeAbPostRelease(a1 + 264);
    KeLeaveCriticalRegion();
    *(_QWORD *)v5 = a2;
    do
    {
      v20 = *(_WORD *)(v5 + 32) ^ (*(_WORD *)(v5 + 32) ^ (*(_WORD *)(v5 + 32) + 1)) & 0x3F;
      *(_WORD *)(v5 + 32) = v20;
      v21 = v31 | ((v20 & 0x3F) << 10);
      LODWORD(a4->Thread) = v21;
    }
    while ( v21 == 66559 );
    if ( ((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((WORD2(stru_140E27C48.InitialStack) & 0x100) != 0)) != 0 )
      SmKmEtwLogStoreChange(
        (REGHANDLE *)((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((WORD2(stru_140E27C48.InitialStack) & 0x100) != 0)),
        *(_QWORD *)v5,
        SmEventStoreCreate);
    _InterlockedExchange64((volatile __int64 *)(v5 + 8), 0LL);
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 8));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 16));
    KeAbPostRelease(v5 + 16);
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    return (unsigned int)-1073741671;
  }
}
