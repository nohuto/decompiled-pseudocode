/*
 * XREFs of PopPepWork @ 0x1403AE7D0
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x1403AE3C4 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402558F8 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1403AE2C8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140417030 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     PopPepGetReadyActivityType @ 0x14045D6E8 (PopPepGetReadyActivityType.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  int v29; // r9d
  int **v30; // r8
  __int64 k; // rdx
  int v32; // ecx
  __int64 v33; // rdi
  int ReadyActivityType; // eax
  __int64 v35; // rdi
  int v36; // eax
  int v37; // [rsp+34h] [rbp-64h]
  unsigned int v38; // [rsp+38h] [rbp-60h]
  __int64 v39; // [rsp+40h] [rbp-58h]
  unsigned __int8 v40; // [rsp+48h] [rbp-50h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 v44; // [rsp+B0h] [rbp+18h]
  int v45; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v45 = 0;
  LOBYTE(j) = 0;
  v44 = 0;
  v7 = 0;
  v37 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F0AFD0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F0AFD0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F0AFD0.Header.Lock, 0, v9, &qword_140F0AFD0);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v9 + 33) |= 2u;
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == (_UNKNOWN *)&PopDirectedDripsUmLock.Padding[3] )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *(_QWORD *)PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v10 = PopPepLastCheckedDevice;
  }
  PopDiagTraceFxDefaultPepWorkerStart(v10[4]);
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v12 = 1;
  v13 = 0;
  v38 = 0;
LABEL_13:
  if ( v13 >= 3 )
  {
LABEL_46:
    v12 = v37;
    goto LABEL_47;
  }
  v5 = (__int64)v10;
  v14 = a1 & 1;
  while ( 1 )
  {
    v8 = 0LL;
    v39 = 0LL;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    v7 = v45;
LABEL_35:
    v5 = *(_QWORD *)v5;
    if ( (unsigned __int64 *)v5 == &PopDirectedDripsUmLock.Padding[3] )
      v5 = *(_QWORD *)v5;
    if ( (_QWORD *)v5 == v10 )
    {
      v38 = ++v13;
      goto LABEL_13;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
  v36 = v7 + 1;
  if ( v13 != 2 )
    v36 = v7;
  v45 = v36;
LABEL_23:
  v19 = *(_QWORD *)(v5 + 32);
  if ( v19 )
  {
    v8 = *(_QWORD *)(v19 + 48);
    v39 = v8;
  }
  v20 = *(_DWORD *)(v5 + 120);
  if ( v20 )
  {
    ReadyActivityType = PopPepGetReadyActivityType(v5 + 72, 0LL, 0LL);
    if ( ReadyActivityType == 6 )
    {
      v13 = v38;
      goto LABEL_26;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 120));
    v35 = ReadyActivityType;
    v44 = guard_dispatch_icall_no_overrides(v5, 0LL, a2);
    **(_DWORD **)(v5 + 8 * v35 + 72) &= ~2u;
    **(_DWORD **)(v5 + 8 * v35 + 72) &= ~8u;
    **(_DWORD **)(v5 + 8 * v35 + 72) |= 4u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
    v7 = v45;
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
        v44 = guard_dispatch_icall_no_overrides(v5, v5 + 208LL * j + 192, a2);
        **(_DWORD **)(v21 + 8LL * v12 + 56) &= ~2u;
        **(_DWORD **)(v21 + 8LL * v12 + 56) &= ~8u;
        v25 = *(_DWORD **)(v21 + 8LL * v12 + 56);
        *v25 |= 4u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
        v8 = v39;
        v7 = v45;
        v37 = 2;
        goto LABEL_46;
      }
    }
    if ( !v20 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *(_DWORD *)(v5 + 64) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v5 + 64), retaddr);
      v8 = v39;
      goto LABEL_34;
    }
    v29 = 4;
    v30 = (int **)(v5 + 104);
    for ( k = 4LL; k <= 5; ++k )
    {
      v32 = **v30;
      if ( (v32 & 2) != 0 || (v32 & 8) != 0 )
        goto LABEL_65;
      ++v29;
      ++v30;
    }
    v29 = 6;
LABEL_65:
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 120));
    v33 = v29;
    v44 = guard_dispatch_icall_no_overrides(v5, 0LL, a2);
    **(_DWORD **)(v5 + 8 * v33 + 72) &= ~2u;
    **(_DWORD **)(v5 + 8 * v33 + 72) &= ~8u;
    **(_DWORD **)(v5 + 8 * v33 + 72) |= 4u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
    v8 = v39;
    v12 = 3;
    v7 = v45;
  }
LABEL_47:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
  __writecr8(v40);
  if ( (_QWORD *)v5 != v10 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v5);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F0AFD0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F0AFD0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F0AFD0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27);
  PopDiagTraceFxDefaultPepWorkerEnd(v8, v12, j, v38, v7);
  return v44;
}
