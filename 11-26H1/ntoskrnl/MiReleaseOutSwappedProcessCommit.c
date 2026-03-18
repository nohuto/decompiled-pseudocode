/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x1406E502C
 * Callers:
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027F670 (MiUnlockVad.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403155B4 (LOCK_ADDRESS_SPACE.c)
 *     MiGetNextVad @ 0x140326018 (MiGetNextVad.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     KeForceAttachProcess @ 0x14045D2E0 (KeForceAttachProcess.c)
 *     MiGetFirstVad @ 0x1404B80E0 (MiGetFirstVad.c)
 *     SmStoreExistsForProcess @ 0x140513B48 (SmStoreExistsForProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405327D4 (MiIsVadEligibleForCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x14063E784 (SmQueryStoreCommitUsage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406E4664 (MiLogOutswappedProcessCommitRelease.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(struct _EPROCESS *a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *PoolMm; // r14
  KIRQL v7; // al
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  BOOL v11; // r15d
  unsigned __int64 v12; // r12
  __int64 i; // rax
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned __int64 v16; // rbx
  KIRQL v17; // al
  unsigned int EntireFlags; // ecx
  void **p_CommitReleaseContext; // [rsp+30h] [rbp-48h]
  unsigned __int8 v20; // [rsp+83h] [rbp+Bh]
  __int64 v21; // [rsp+88h] [rbp+10h]
  unsigned __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  volatile unsigned __int64 *p_ReleasedCommitDebt; // [rsp+98h] [rbp+20h]

  v22 = 0LL;
  KeForceAttachProcess(&a1->Pcb, 0LL, 0);
  v2 = 1LL;
  if ( (a1->Vm.Instance.Flags.EntireFlags & 0xF) == 1 )
  {
    p_ReleasedCommitDebt = (volatile unsigned __int64 *)&unk_140E37808;
    p_CommitReleaseContext = (void **)&unk_140E37820;
  }
  else
  {
    p_ReleasedCommitDebt = &a1->Vm.Shared.ReleasedCommitDebt;
    p_CommitReleaseContext = &a1->Vm.Shared.CommitReleaseContext;
  }
  CurrentThread = KeGetCurrentThread();
  v21 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * a1->Vm.Instance.PartitionId);
  PoolMm = (_QWORD *)ExAllocatePoolMm(
                       64LL,
                       0x38uLL,
                       1917020493,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !PoolMm )
    goto LABEL_26;
  v7 = MiLockWorkingSetExclusive((__int64)&a1->Vm, v4, v5);
  a1->Vm.Instance.Flags.u2 = HIBYTE(a1->Vm.Instance.Flags.EntireFlags) | 0x30;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v7);
  if ( dword_140FBE260 != 1 )
  {
    v11 = 0;
    v12 = 0LL;
    if ( *(_DWORD *)(v21 + 1300) != -1 )
      v11 = SmStoreExistsForProcess((unsigned __int64)a1);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)a1, v9, v10);
    for ( i = (__int64)MiGetFirstVad((__int64)a1); ; i = MiGetNextVad(v16) )
    {
      v16 = i;
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, i, v14, v15);
      if ( MiIsVadEligibleForCommitRelease(v16) )
        v12 += MiCheckCommitReleaseFromVad(v21, (__int64)a1, (__int64)&a1->Vm, v16, v11, PoolMm + 4);
      MiUnlockVad((__int64)CurrentThread, v16);
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)a1);
    v2 = v12;
    _InterlockedExchange64((volatile __int64 *)&a1->Vm.Shared.ResetPagesRepurposedCount, 0LL);
    if ( !v11 )
      goto LABEL_16;
    SmQueryStoreCommitUsage(a1, &v22);
    v8 = ((v22 & 0xFFF) != 0) + (v22 >> 12);
    if ( v12 > v8 )
    {
      v2 = v12 - v8;
LABEL_16:
      if ( v2 )
        MiReturnCommit(v21, v2, 0);
      goto LABEL_18;
    }
    v2 = 0LL;
  }
LABEL_18:
  v17 = MiLockWorkingSetExclusive((__int64)&a1->Vm, v8, v9);
  EntireFlags = a1->Vm.Instance.Flags.EntireFlags;
  if ( v2 )
  {
    v20 = HIBYTE(EntireFlags) & 0xCF | 0x20;
    *p_ReleasedCommitDebt = v2;
    *p_CommitReleaseContext = PoolMm;
    PoolMm = 0LL;
  }
  else
  {
    v20 = HIBYTE(EntireFlags) & 0xCF;
  }
  a1->Vm.Instance.Flags.u2 = v20;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v17);
  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 4LL) )
  {
    MiLogOutswappedProcessCommitRelease();
  }
LABEL_26:
  KeForceDetachProcess(0LL, 0);
  if ( PoolMm )
    ExFreePoolWithTag(PoolMm, 0);
}
