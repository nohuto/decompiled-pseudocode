/*
 * XREFs of MiAddViewsForSection @ 0x1402E31A0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MiReferenceDataSubsections @ 0x14033F1DC (MiReferenceDataSubsections.c)
 *     MiPfReferenceDataSubsection @ 0x140396C90 (MiPfReferenceDataSubsection.c)
 *     MiPrepareDataViewSubsections @ 0x1409C4B70 (MiPrepareDataViewSubsections.c)
 *     MiCommitPagefileBackedSection @ 0x1409C9560 (MiCommitPagefileBackedSection.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14027DB50 (KiLeaveGuardedRegionUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x14036E360 (MiDecrementSubsections.c)
 *     MiReferenceActiveSubsection @ 0x14045AE40 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x14049406C (MiCreatePrototypePtes.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(
        volatile LONG **BugCheckParameter2,
        unsigned __int64 a2,
        __int16 a3,
        struct _KLOCK_ENTRIES *a4)
{
  volatile LONG *v4; // rbp
  __int16 v5; // di
  ULONG_PTR v6; // r14
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // rax
  unsigned __int64 *v9; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbx
  unsigned int v13; // r12d
  volatile LONG *v14; // rsi
  unsigned __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  int PrototypePtes; // eax
  struct _KLOCK_ENTRIES *v20; // r9
  int FileExtents; // edi
  AutoBoost *v22; // rax
  AutoBoost *v23; // rdi
  AutoBoost *v24; // rax
  AutoBoost *v25; // rdi
  unsigned __int64 v26; // rax
  int active; // eax
  __int64 v28; // rdi
  ULONG_PTR v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  KIRQL v36; // bp
  __int64 v37; // rbx
  volatile LONG *v38; // r14
  KIRQL v39; // al
  unsigned int v40; // [rsp+34h] [rbp-74h]
  __int64 v41; // [rsp+40h] [rbp-68h]
  ULONG_PTR v42; // [rsp+48h] [rbp-60h]
  volatile LONG *v43; // [rsp+50h] [rbp-58h]
  ULONG_PTR v44; // [rsp+58h] [rbp-50h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  __int16 v48; // [rsp+C0h] [rbp+18h]

  v48 = a3;
  v4 = *BugCheckParameter2;
  v5 = a3;
  v6 = (ULONG_PTR)BugCheckParameter2;
  v43 = *BugCheckParameter2;
  v42 = 0LL;
  if ( *((_QWORD *)*BugCheckParameter2 + 8) )
  {
    v13 = 1;
    v41 = 0LL;
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v41 = *(_QWORD *)v4;
    v8 = *(_QWORD *)v4;
    --CurrentThread->SpecialApcDisable;
    v9 = (unsigned __int64 *)(v8 + 40);
    v10 = (AutoBoost *)KeAbPreAcquire(v8 + 40, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        AutoBoost::KiAbpPostAcquire(v12, v11);
        v5 = v48;
        v13 = 0;
        goto LABEL_10;
      }
      *((_BYTE *)v12 + 10) = 1;
    }
    v5 = v48;
    v13 = 0;
  }
LABEL_10:
  v40 = v13;
  v14 = v4 + 18;
  v15 = ExAcquireSpinLockExclusive(v4 + 18);
  if ( (v5 & 1) != 0 )
  {
    ++*((_QWORD *)v4 + 5);
    ++*((_DWORD *)v4 + 22);
    v5 |= 2u;
    v48 = v5;
  }
  while ( 1 )
  {
    v44 = v6;
    if ( !*(_QWORD *)(v6 + 8) )
    {
      if ( (_BYTE)v15 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v14 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v14 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        __writecr8(v15);
      }
      if ( !v40 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v41 + 40);
        KeAbPostRelease(v41 + 40);
        v18 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v18
          && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v17, v16);
        }
      }
      PrototypePtes = MiCreatePrototypePtes(v6);
      v13 = v40;
      FileExtents = PrototypePtes;
      if ( PrototypePtes < 0 )
      {
        if ( PrototypePtes != -1073741302 )
          goto LABEL_93;
        if ( !v40 )
        {
          --CurrentThread->SpecialApcDisable;
          v22 = (AutoBoost *)KeAbPreAcquire(v41 + 40, 0LL, 0LL, v20);
          v23 = v22;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 40), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v41 + 40), v22, v41 + 40);
          if ( v23 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              *((_BYTE *)v23 + 33) |= 2u;
            else
              *((_BYTE *)v23 + 10) = 1;
          }
        }
        ExAcquireSpinLockExclusive(v14);
        goto LABEL_41;
      }
      if ( !v40 )
      {
        --CurrentThread->SpecialApcDisable;
        v24 = (AutoBoost *)KeAbPreAcquire(v41 + 40, 0LL, 0LL, v20);
        v25 = v24;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 40), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v41 + 40), v24, v41 + 40);
        if ( v25 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            *((_BYTE *)v25 + 33) |= 2u;
          else
            *((_BYTE *)v25 + 10) = 1;
        }
      }
      ExAcquireSpinLockExclusive(v14);
      goto LABEL_51;
    }
    if ( (v5 & 0x100) != 0 )
      break;
    active = MiReferenceActiveSubsection(v6);
    FileExtents = active;
    if ( active >= 0 )
    {
      if ( v13 && (*(_DWORD *)(v6 + 32) & 0x40000) != 0 )
      {
        if ( (_BYTE)v15 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        else
          ExReleaseSpinLockExclusive(v14, v15);
        FileExtents = MiAllocateFileExtents((struct _KTHREAD *)v6, 0, 0LL);
        if ( (int)(FileExtents + 0x80000000) >= 0 && FileExtents != -1073741302 )
        {
          v29 = v6;
          goto LABEL_94;
        }
        ExAcquireSpinLockExclusive(v14);
        if ( FileExtents < 0 )
        {
          v28 = MiDecrementSubsections(v6);
          if ( v28 )
          {
            if ( (_BYTE)v15 == 17 )
              ExReleaseSpinLockExclusiveFromDpcLevel(v14);
            else
              ExReleaseSpinLockExclusive(v14, v15);
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (v43[15] & 0x3FF)),
              v13,
              v28);
            ExAcquireSpinLockExclusive(v14);
          }
          goto LABEL_41;
        }
      }
LABEL_51:
      if ( a2 )
      {
        v26 = *(unsigned int *)(v6 + 44);
        if ( a2 <= v26 )
        {
LABEL_75:
          if ( (_BYTE)v15 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v14);
          else
            ExReleaseSpinLockExclusive(v14, v15);
          if ( !v13 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v41 + 40);
            KeAbPostRelease(v41 + 40);
            v18 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v18
              && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v31, v30);
            }
          }
          return 0LL;
        }
        a2 -= v26;
      }
      v6 = *(_QWORD *)(v6 + 16);
      v42 = v44;
      if ( !v13 )
        v42 = v44;
      goto LABEL_41;
    }
    if ( active != -1073741302 )
      goto LABEL_86;
LABEL_41:
    if ( !v6 )
      goto LABEL_75;
    v5 = v48;
  }
  FileExtents = -1073741800;
LABEL_86:
  if ( (_BYTE)v15 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  else
    ExReleaseSpinLockExclusive(v14, v15);
  if ( !v13 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v41 + 40);
    KeAbPostRelease(v41 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v33, v34, v35);
  }
LABEL_93:
  v29 = v42;
LABEL_94:
  if ( v29 )
  {
    v36 = ExAcquireSpinLockExclusive(v14);
    v37 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
    if ( v36 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    else
      ExReleaseSpinLockExclusive(v14, v36);
    v38 = v43;
    if ( v37 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (v43[15] & 0x3FF)), v13, v37);
  }
  else
  {
    v38 = v43;
  }
  if ( (v48 & 1) != 0 )
  {
    v39 = ExAcquireSpinLockExclusive(v14);
    --*((_QWORD *)v38 + 5);
    --*((_DWORD *)v38 + 22);
    MiCheckControlArea(v38, v39);
  }
  return (unsigned int)FileExtents;
}
