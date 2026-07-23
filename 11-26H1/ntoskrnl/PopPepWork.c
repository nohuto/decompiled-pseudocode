/*
 * XREFs of PopPepWork @ 0x1403B84E0
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x1403B80D4 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14025727C (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1403B7FD8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14040B640 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     PopPepGetReadyActivityType @ 0x140457288 (PopPepGetReadyActivityType.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepWork(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  unsigned int j; // esi
  int v7; // r15d
  __int64 v8; // rbp
  LegacyAutoBoost *v9; // rdi
  _QWORD *v10; // r12
  unsigned __int8 CurrentIrql; // di
  int v12; // r13d
  unsigned int v13; // r14d
  int v14; // ecx
  signed __int32 v15; // eax
  signed __int32 i; // ecx
  signed __int32 v17; // ett
  int v18; // eax
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rbp
  __int64 v22; // rcx
  int **v23; // rdx
  int v24; // r8d
  _DWORD *v25; // rax
  int v27; // r9d
  int **v28; // r8
  __int64 k; // rdx
  int v30; // ecx
  __int64 v31; // rdi
  int ReadyActivityType; // eax
  __int64 v33; // rdi
  int v34; // eax
  int v35; // [rsp+34h] [rbp-64h]
  unsigned int v36; // [rsp+38h] [rbp-60h]
  __int64 v37; // [rsp+40h] [rbp-58h]
  unsigned __int8 v38; // [rsp+48h] [rbp-50h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 v42; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v43 = 0;
  LOBYTE(j) = 0;
  v42 = 0;
  v7 = 0;
  v35 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
      0,
      v9,
      (struct _KTHREAD *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  }
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v9 + 33) |= 2u;
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == (_UNKNOWN *)&PopDirectedDripsDiagLock.ForegroundLossTime )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *(_QWORD *)PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v10 = PopPepLastCheckedDevice;
  }
  PopDiagTraceFxDefaultPepWorkerStart(v10[4]);
  CurrentIrql = KeGetCurrentIrql();
  v38 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v12 = 1;
  v13 = 0;
  v36 = 0;
LABEL_13:
  if ( v13 >= 3 )
  {
LABEL_46:
    v12 = v35;
    goto LABEL_47;
  }
  v5 = (__int64)v10;
  v14 = a1 & 1;
  while ( 1 )
  {
    v8 = 0LL;
    v37 = 0LL;
    if ( v14 )
    {
      if ( (*(_DWORD *)(v5 + 24) & 0x20) == 0 )
        goto LABEL_35;
    }
    else if ( (*(_DWORD *)(v5 + 24) & 0x20) != 0 )
    {
      goto LABEL_35;
    }
    if ( v13 )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v15 = 0;
      for ( i = 0x80000000; ; i |= 0x40000000u )
      {
        while ( 1 )
        {
          v17 = v15;
          v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 64), i, v15);
          if ( v17 == v15 )
          {
            v18 = 1;
            goto LABEL_22;
          }
          if ( v15 )
            break;
          i &= ~0x40000000u;
        }
        if ( v15 != 0x40000000 )
          break;
      }
      v18 = 0;
    }
    else
    {
      v18 = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5 + 64);
    }
LABEL_22:
    if ( v18 )
      goto LABEL_23;
LABEL_34:
    v14 = a1 & 1;
    v7 = v43;
LABEL_35:
    v5 = *(_QWORD *)v5;
    if ( (unsigned int *)v5 == &PopDirectedDripsDiagLock.ForegroundLossTime )
      v5 = *(_QWORD *)v5;
    if ( (_QWORD *)v5 == v10 )
    {
      v36 = ++v13;
      goto LABEL_13;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
  v34 = v7 + 1;
  if ( v13 != 2 )
    v34 = v7;
  v43 = v34;
LABEL_23:
  v19 = *(_QWORD *)(v5 + 32);
  if ( v19 )
  {
    v8 = *(_QWORD *)(v19 + 48);
    v37 = v8;
  }
  v20 = *(_DWORD *)(v5 + 120);
  if ( v20 )
  {
    ReadyActivityType = PopPepGetReadyActivityType(v5 + 72, 0LL, 0LL);
    if ( ReadyActivityType == 6 )
    {
      v13 = v36;
      goto LABEL_26;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 120));
    v33 = ReadyActivityType;
    v42 = guard_dispatch_icall_no_overrides(v5, 0LL, a2);
    **(_DWORD **)(v5 + 8 * v33 + 72) &= ~2u;
    **(_DWORD **)(v5 + 8 * v33 + 72) &= ~8u;
    **(_DWORD **)(v5 + 8 * v33 + 72) |= 4u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
    v7 = v43;
  }
  else
  {
LABEL_26:
    for ( j = 0; j < *(_DWORD *)(v5 + 180); ++j )
    {
      v21 = v5 + 208LL * j + 192;
      if ( *(_DWORD *)(v21 + 104) )
      {
        v22 = 1LL;
        v23 = (int **)(v21 + 64);
        while ( v22 <= 3 )
        {
          v24 = **v23;
          if ( (v24 & 2) != 0 || (v24 & 8) != 0 )
            goto LABEL_45;
          ++v12;
          ++v22;
          ++v23;
        }
        v12 = 6;
LABEL_45:
        _InterlockedDecrement((volatile signed __int32 *)(v21 + 104));
        v42 = guard_dispatch_icall_no_overrides(v5, v5 + 208LL * j + 192, a2);
        **(_DWORD **)(v21 + 8LL * v12 + 56) &= ~2u;
        **(_DWORD **)(v21 + 8LL * v12 + 56) &= ~8u;
        v25 = *(_DWORD **)(v21 + 8LL * v12 + 56);
        *v25 |= 4u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
        v8 = v37;
        v7 = v43;
        v35 = 2;
        goto LABEL_46;
      }
    }
    if ( !v20 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v5 + 64) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v5 + 64), retaddr);
      v8 = v37;
      goto LABEL_34;
    }
    v27 = 4;
    v28 = (int **)(v5 + 104);
    for ( k = 4LL; k <= 5; ++k )
    {
      v30 = **v28;
      if ( (v30 & 2) != 0 || (v30 & 8) != 0 )
        goto LABEL_65;
      ++v27;
      ++v28;
    }
    v27 = 6;
LABEL_65:
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 120));
    v31 = v27;
    v42 = guard_dispatch_icall_no_overrides(v5, 0LL, a2);
    **(_DWORD **)(v5 + 8 * v31 + 72) &= ~2u;
    **(_DWORD **)(v5 + 8 * v31 + 72) &= ~8u;
    **(_DWORD **)(v5 + 8 * v31 + 72) |= 4u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
    v8 = v37;
    v12 = 3;
    v7 = v43;
  }
LABEL_47:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
  __writecr8(v38);
  if ( (_QWORD *)v5 != v10 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v5);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
         0LL,
         17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PopDiagTraceFxDefaultPepWorkerEnd(v8, v12, j, v36, v7);
  return v42;
}
