/*
 * XREFs of MiChargeSegmentCommit @ 0x1409C9BB0
 * Callers:
 *     MiInitializeDataVad @ 0x1409C5B30 (MiInitializeDataVad.c)
 *     MiCommitPagefileBackedSection @ 0x1409C9560 (MiCommitPagefileBackedSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x140AD5170 (MmCommitSessionMappedView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiGetControlAreaPartition @ 0x140457F60 (MiGetControlAreaPartition.c)
 *     MiUpdateControlAreaCommitCount @ 0x1404853D8 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1404986C0 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiGetSubsectionCharges @ 0x1404B69E0 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1409C9EE8 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r8
  unsigned __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 *v9; // r15
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbp
  unsigned __int64 v14; // rbp
  unsigned __int64 *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int SubsectionCrossPartitionReferences; // r13d
  unsigned __int64 v19; // rdx
  unsigned __int64 DemandZeroPte; // rax
  __int64 *v21; // r10
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 updated; // rax
  __int64 v25; // rdx
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v26; // rcx
  bool v27; // zf
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-78h]
  unsigned int *v32; // [rsp+28h] [rbp-70h]
  _QWORD *v33; // [rsp+30h] [rbp-68h]
  _QWORD *v35; // [rsp+40h] [rbp-58h]
  unsigned __int64 *v36; // [rsp+A0h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+10h]
  ULONG *ControlAreaPartition; // [rsp+B8h] [rbp+20h]

  v3 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v35 = (_QWORD *)*a1;
  v31 = *(_QWORD *)*a1;
  ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(*a1);
  v6 = (unsigned __int64 *)(v5 + 40);
  v7 = *(unsigned int *)(v3 + 44);
  v33 = (_QWORD *)(v3 + 8);
  v8 = *(_QWORD *)(v3 + 8);
  v9 = a2;
  --CurrentThread->SpecialApcDisable;
  v32 = (unsigned int *)(v3 + 44);
  v36 = (unsigned __int64 *)(v8 + 8 * v7);
  v11 = (AutoBoost *)KeAbPreAcquire(v5 + 40, 0LL, 0LL, v10);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v11, (__int64)v6);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = 0LL;
  v15 = v36;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences((_DWORD *)v3);
  while ( 1 )
  {
    v19 = v14 + 1;
    if ( *v9 )
      v19 = v14;
    v16 += v17;
    ++v9;
    v14 = v19;
    if ( v16 == a3 )
      break;
    if ( v9 == v15 )
    {
      v3 = *(_QWORD *)(v3 + 16);
      v9 = *(unsigned __int64 **)(v3 + 8);
      v15 = &v9[*(unsigned int *)(v3 + 44)];
    }
  }
  if ( !v19 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
    v27 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v27 )
      return 1LL;
    v27 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
    goto LABEL_22;
  }
  if ( (unsigned int)MiChargeCommit(ControlAreaPartition, v19, 0) )
  {
    if ( SubsectionCrossPartitionReferences && (int)MiGetSubsectionCharges(v3, v14) < 0 )
    {
      MiReturnCommit((__int64)ControlAreaPartition, v14, 0);
      goto LABEL_30;
    }
    DemandZeroPte = MiMakeDemandZeroPte(*(_BYTE *)(v31 + 14) & 0x1F);
    v21 = a1;
    v22 = *v33 + 8LL * *v32;
    v23 = 0LL;
    while ( 1 )
    {
      if ( !*a2 )
        *a2 = DemandZeroPte;
      ++v23;
      ++a2;
      if ( v23 == a3 )
        break;
      if ( a2 == (unsigned __int64 *)v22 )
      {
        v21 = (__int64 *)v21[2];
        a2 = (unsigned __int64 *)v21[1];
        v22 = (__int64)&a2[*((unsigned int *)v21 + 11)];
      }
    }
    MiUpdateProcessSharedCommit(v35, v14, v22);
    updated = MiUpdateControlAreaCommitCount((__int64)v35, v14);
    if ( SubsectionCrossPartitionReferences && !updated )
      MiReturnCrossPartitionSectionCharges((__int64)ControlAreaPartition, 0, v14);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
    v27 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v27 )
      return 1LL;
    v26 = &CurrentThread->152;
    v27 = v26->ApcState.ApcListHead[0].Flink == (struct _LIST_ENTRY *)v26;
LABEL_22:
    if ( !v27 )
      KiCheckForKernelApcDelivery((__int64)v26, v25);
    return 1LL;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((unsigned __int64)v6);
  v27 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v27 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v30, v29);
  return 0LL;
}
