/*
 * XREFs of SmKmStoreDelete @ 0x140B22710
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1404D9960 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessDeleteRequest @ 0x14081FAE4 (SmProcessDeleteRequest.c)
 *     SmKmCleanup @ 0x1408207FC (SmKmCleanup.c)
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140204C10 (SmKmStoreRefFromStoreIndex.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SmKmEtwLogStoreChange @ 0x140820888 (SmKmEtwLogStoreChange.c)
 */

__int64 __fastcall SmKmStoreDelete(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v4; // r12d
  __int64 v6; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  unsigned int v8; // edi
  __int64 v9; // rsi
  unsigned __int64 *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // r15
  __int16 v15; // cx
  volatile signed __int64 *v16; // rsi
  __int64 v17; // r12
  struct _KTHREAD *v18; // rax
  struct _KLOCK_ENTRIES *v19; // r9
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // r15

  v4 = a2 >> 10;
  v6 = SmKmStoreRefFromStoreIndex(a1, a2 & 0x3FF);
  v8 = 0;
  v9 = v6;
  if ( !v6 )
    return (unsigned int)-1073741735;
  v10 = (unsigned __int64 *)(v6 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, v7);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v12, (__int64)v10);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  v15 = *(_WORD *)(v9 + 32);
  if ( v4 != (v15 & 0x3F) || (v17 = *(_QWORD *)v9) == 0 )
  {
    v8 = -1073741735;
LABEL_9:
    v16 = (volatile signed __int64 *)(v9 + 16);
    if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v16);
    KeAbPostRelease((unsigned __int64)v16);
    KeLeaveCriticalRegion();
    return v8;
  }
  if ( a3 && (v15 & 0x40) != 0 )
  {
    v8 = -1073741790;
    goto LABEL_9;
  }
  guard_dispatch_icall_no_overrides(a1, *(_QWORD *)v9);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v9 + 8));
  if ( ((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((WORD2(stru_140E27C48.InitialStack) & 0x100) != 0)) != 0 )
    SmKmEtwLogStoreChange(
      (REGHANDLE *)((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((WORD2(stru_140E27C48.InitialStack) & 0x100) != 0)),
      *(_QWORD *)v9,
      SmEventStoreDelete);
  guard_dispatch_icall_no_overrides(a1, v17);
  *(_QWORD *)v9 = 0LL;
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v20 = (AutoBoost *)KeAbPreAcquire(a1 + 264, 0LL, 0LL, v19);
  v22 = v20;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 264), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 264), v20, a1 + 264);
  if ( v22 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v22, v21);
    else
      *((_BYTE *)v22 + 10) = 1;
  }
  if ( (*(_DWORD *)(a1 + 272))-- == 1 )
    guard_dispatch_icall_no_overrides(a1, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 264));
  KeAbPostRelease(a1 + 264);
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((unsigned __int64)v10);
  KeLeaveCriticalRegion();
  guard_dispatch_icall_no_overrides(a1, v17);
  return v8;
}
