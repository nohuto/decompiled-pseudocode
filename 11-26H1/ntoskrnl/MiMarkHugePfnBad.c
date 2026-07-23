/*
 * XREFs of MiMarkHugePfnBad @ 0x1406F144C
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140487E90 (MiLockHugeRangeColorHeadAtDpc.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnBad(unsigned __int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rsi
  unsigned int v6; // r12d
  PVOID *v7; // rbp
  __int64 v8; // r14
  _BYTE *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int64 v18; // rdx
  bool v19; // zf
  __int64 *v21; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v23; // rdi
  void *PoolMm; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  volatile signed __int32 *v27; // rax
  _QWORD *v28; // rdx
  bool v29; // r8
  _QWORD *v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int8 v36; // al
  __int64 v37; // rdi
  __int64 v38; // rdi
  volatile signed __int32 *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  volatile signed __int64 *v42; // [rsp+20h] [rbp-58h]
  PVOID *v43; // [rsp+28h] [rbp-50h]
  __int64 v46; // [rsp+90h] [rbp+18h]
  unsigned __int64 v47; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1 >> 18;
  v43 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = (_BYTE *)KeAbPreAcquire((__int64)&stru_140E2ED08, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2ED08.Header.Lock, 0, (LegacyAutoBoost *)v9, &stru_140E2ED08);
  v10 = 1LL;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v10) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v9 + 33), (volatile unsigned __int8 *)v10, 1);
    }
    else
    {
      v9[10] = 1;
    }
  }
  v11 = v5 & 0x3FFFFF;
  v47 = v11;
  v12 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v11);
  while ( 1 )
  {
    v15 = MiHugePfnPartition(v12);
    v46 = v15;
    if ( !v15 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&stru_140E2ED08.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(1LL, v18);
      }
      return 3221226548LL;
    }
    MiLockDynamicMemoryShared(v15, (__int64)CurrentThread, v16, v17);
    v13 = MiHugePfnPartition(v12);
    v14 = v46;
    if ( v46 == v13 )
      break;
    MiUnlockDynamicMemoryShared(v46, (__int64)CurrentThread);
  }
  if ( (*(_DWORD *)(v46 + 4) & 1) != 0 )
  {
    v6 = -1073740748;
  }
  else
  {
    v42 = 0LL;
    while ( 1 )
    {
      v21 = (__int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v11);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
      }
      MiLockHugePfnAtDpc((__int64)v21);
      if ( !MiIsPageInHugePfn(a1) )
        break;
      v23 = *v21;
      if ( (*v21 & 8) != 0 )
      {
        if ( v8 )
          v7 = (PVOID *)v8;
        v43 = v7;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
        v8 = qword_140E2ECE0;
        if ( qword_140E2ECE0 )
        {
          v31 = v5 & 0x3FFFFF;
          do
          {
            v32 = *(_QWORD *)(v8 + 24) & 0x3FFFFFLL;
            if ( v31 <= v32 )
            {
              if ( v31 >= v32 )
                goto LABEL_56;
              v8 = *(_QWORD *)v8;
            }
            else
            {
              v8 = *(_QWORD *)(v8 + 8);
            }
          }
          while ( v8 );
        }
        goto LABEL_56;
      }
      if ( v8 )
      {
        v26 = *v21 & 7;
        if ( v26 == 1 || v26 == 2 )
        {
          v27 = MiLockHugeRangeColorHeadAtDpc();
          v23 = *v21;
          v42 = (volatile signed __int64 *)v27;
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
        v28 = (_QWORD *)qword_140E2ECE0;
        v29 = 0;
        if ( qword_140E2ECE0 )
        {
          while ( 1 )
          {
            if ( v47 >= (v28[3] & 0x3FFFFFuLL) )
            {
              v30 = (_QWORD *)v28[1];
              if ( !v30 )
              {
                v29 = 1;
                break;
              }
            }
            else
            {
              v30 = (_QWORD *)*v28;
              if ( !*v28 )
                break;
            }
            v28 = v30;
          }
        }
        RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2ECE0, (unsigned __int64)v28, v29, (_QWORD *)v8);
        v23 |= 8uLL;
        *v21 = v23;
LABEL_56:
        v33 = a1 & 0x3FFFF;
        v34 = v33 >> 3;
        if ( !_bittest64(*(const signed __int64 **)(v8 + 32), v33) )
        {
          *(_BYTE *)(v34 + *(_QWORD *)(v8 + 32)) |= 1 << (v33 & 7);
          ++qword_140E2ECE8;
        }
        v35 = *(_QWORD *)(v8 + 32);
        v36 = _bittest64((const signed __int64 *)(v35 + 0x8000), v33);
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( !v36 )
            *(_BYTE *)(v34 + v35 + 0x8000) |= 1 << (v33 & 7);
        }
        else if ( v36 )
        {
          *(_BYTE *)(v35 + v34 + 0x8000) &= ~(1 << (v33 & 7));
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
        if ( v42 )
          _InterlockedAnd64(v42, 0xFFFFFFFFFFFFFFF7uLL);
        v37 = v23 & 7;
        if ( v37 == 1 || v37 == 2 )
        {
          v38 = MiHugePfnPartition(v21);
          v39 = MiLockHugeRangeColorHeadAtDpc();
          MiUnlinkHugeRangeEx(v38, v5, 0);
          _InterlockedAnd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFF7uLL);
          MiInsertHugeRangeInList(0LL, v5, 4);
          v7 = v43;
        }
        else if ( v37 != 4 )
        {
          v6 = 259;
        }
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                    + 4
                                    * (((((__int64)v21 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((__int64)v21 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
        if ( CurrentIrql != 17 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        goto LABEL_74;
      }
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * (((((__int64)v21 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)v21 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      PoolMm = (void *)ExAllocatePoolMm(
                         64LL,
                         0x10000uLL,
                         1883793741,
                         KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
      if ( !PoolMm )
      {
        v6 = -1073741670;
        goto LABEL_74;
      }
      v25 = ExAllocatePoolMm(
              64LL,
              0x28uLL,
              1883793741,
              KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
      v8 = v25;
      if ( !v25 )
      {
        ExFreePoolWithTag(PoolMm, 0);
        v6 = -1073741670;
        goto LABEL_74;
      }
      v11 = v47;
      *(_QWORD *)(v25 + 24) = v5;
      *(_QWORD *)(v25 + 32) = PoolMm;
    }
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4
                                * (((((__int64)v21 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((__int64)v21 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v6 = -1073740748;
    if ( v8 )
      v7 = (PVOID *)v8;
  }
LABEL_74:
  MiUnlockDynamicMemoryShared(v46, (__int64)CurrentThread);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2ED08.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v41, v40);
  if ( v7 )
  {
    ExFreePoolWithTag(v7[4], 0);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v6 == -1073740748 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  return v6;
}
