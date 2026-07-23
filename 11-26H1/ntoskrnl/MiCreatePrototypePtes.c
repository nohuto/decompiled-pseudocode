/*
 * XREFs of MiCreatePrototypePtes @ 0x14048DBBC
 * Callers:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1402EDF10 (MiIncrementSubsectionViewCount.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiGetCommittedPages @ 0x1404560C0 (MiGetCommittedPages.c)
 *     MiControlAreaRequiresCharge @ 0x1404A3414 (MiControlAreaRequiresCharge.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x140988FE0 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCreatePrototypePtes(ULONG_PTR BugCheckParameter2, __int16 a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r15
  __int64 v8; // rcx
  __int64 CommittedPages; // r12
  __int64 v11; // r14
  __int16 v12; // r13
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // r10
  int v15; // r11d
  int v16; // eax
  int v17; // edi
  int FileExtents; // ebp
  int SubsectionCharges; // eax
  unsigned __int64 *v20; // rbp
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // rdi
  KIRQL v24; // al
  int v25; // r8d
  __int64 v26; // rdx
  KIRQL v27; // bp
  volatile LONG *v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  bool v31; // zf
  char v32; // r14
  volatile LONG *v33; // rcx
  void *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rdx
  volatile LONG *v38; // rcx
  KIRQL v39; // al
  KIRQL v40; // r13
  __int64 v41; // r14
  volatile LONG *v42; // rcx
  volatile LONG *v43; // rcx
  __int64 v44; // [rsp+30h] [rbp-78h]
  PVOID P; // [rsp+38h] [rbp-70h]
  __int64 v46; // [rsp+40h] [rbp-68h]
  unsigned int v47; // [rsp+48h] [rbp-60h]
  __int64 v48; // [rsp+50h] [rbp-58h]
  char v49; // [rsp+B0h] [rbp+8h]
  int v50; // [rsp+B8h] [rbp+10h]
  int v51; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)BugCheckParameter2;
  v8 = 274LL;
  CommittedPages = a3;
  v46 = (__int64)CurrentThread;
  v48 = 8LL * a4;
  if ( (a2 & 0x100) != 0 && (*(_DWORD *)(v6 + 56) & 0x30000000) != 0 )
  {
    if ( (*(_DWORD *)(v6 + 56) & 0x30000000) == 0x20000000 )
      return 3221225485LL;
    v8 = 64LL;
  }
  P = (PVOID)MiAllocateProtoPool(v8, 8LL * a4, 1951624525LL);
  if ( !P )
    return 3221225626LL;
  v11 = *(_QWORD *)(v6 + 64);
  v44 = v11;
  v12 = a2 | 2;
  if ( (*(_DWORD *)(v6 + 56) & 0x30000000) != 0x10000000 )
    v12 = a2;
  MiInitializePrototypePtes((ULONG_PTR)P);
  v14 = 0LL;
  if ( !v11 )
    CommittedPages = MiGetCommittedPages((_QWORD *)v6);
  v15 = 1;
  v49 = v12 & 0x40;
  if ( (v12 & 2) != 0 )
  {
    v16 = 1;
    v51 = 1;
LABEL_14:
    v50 = v14;
    v17 = v14;
    if ( v16 == 2 )
      goto LABEL_18;
    CommittedPages = v14;
    v50 = v14;
    while ( 1 )
    {
      v47 = CommittedPages;
      if ( !v11 )
      {
        --CurrentThread->SpecialApcDisable;
        v50 = v15;
        v20 = (unsigned __int64 *)(*(_QWORD *)v6 + 40LL);
        v21 = (AutoBoost *)KeAbPreAcquire((__int64)v20, 0LL, 0LL, v13);
        v23 = v21;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
          ExfAcquirePushLockExclusiveEx(v20, v21, (__int64)v20);
        if ( v23 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v23, v22);
          else
            *((_BYTE *)v23 + 10) = 1;
        }
      }
      v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      v25 = v51;
      v26 = 0LL;
      v27 = v24;
      if ( v51 != 2 )
        break;
      if ( v11 )
      {
        if ( CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44) - *(_DWORD *)(BugCheckParameter2 + 52) )
        {
          v26 = 0LL;
          break;
        }
        v47 = CommittedPages;
        CommittedPages = (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 44) - *(_DWORD *)(BugCheckParameter2 + 52));
      }
      else
      {
        if ( CommittedPages == MiGetCommittedPages((_QWORD *)v6) )
          break;
        CommittedPages = MiGetCommittedPages((_QWORD *)v6);
      }
      v28 = (volatile LONG *)(v6 + 72);
      if ( v27 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v28);
      else
        ExReleaseSpinLockExclusive(v28, v27);
      if ( v11 )
      {
        CurrentThread = (struct _KTHREAD *)v46;
        v17 = v50;
      }
      else
      {
        v29 = *(_QWORD *)v6;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v6 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v29 + 40));
        KeAbPostRelease(v29 + 40);
        CurrentThread = (struct _KTHREAD *)v46;
        v31 = (*(_WORD *)(v46 + 486))++ == 0xFFFF;
        if ( v31 && *(_QWORD *)(v46 + 152) != v46 + 152 )
          KiCheckForKernelApcDelivery(1LL, v30);
        v17 = 0;
        v50 = 0;
      }
      v15 = 1;
      if ( v47 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v6 + 60) & 0x3FF)),
          v11 != 0,
          v47);
        v15 = 1;
      }
LABEL_18:
      if ( CommittedPages )
      {
        SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
        LODWORD(v14) = 0;
        FileExtents = SubsectionCharges;
        if ( SubsectionCharges < 0 )
        {
          CommittedPages = 0LL;
          goto LABEL_58;
        }
        CurrentThread = (struct _KTHREAD *)v46;
        v15 = 1;
      }
    }
    v32 = v49 | 0x10;
    if ( v25 == 2 )
      v32 = v49 | 0x14;
    if ( *(_QWORD *)(BugCheckParameter2 + 8) != v26 )
    {
      v33 = (volatile LONG *)(v6 + 72);
      if ( v27 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v33);
      else
        ExReleaseSpinLockExclusive(v33, v27);
      FileExtents = -1073741302;
      goto LABEL_56;
    }
    if ( (unsigned int)MiIncrementSubsectionViewCount((__int64 *)BugCheckParameter2, v32) == 3 )
      CommittedPages = 0LL;
    if ( (*(_DWORD *)(v6 + 56) & 0x30000000) != 0 )
    {
      v38 = (volatile LONG *)(v6 + 72);
      if ( v27 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v38);
      else
        ExReleaseSpinLockExclusive(v38, v27);
      FileExtents = MiAllocateFileExtents((struct _KTHREAD *)BugCheckParameter2, (v12 & 0x100 | 0xAu) >> 1, 0LL);
      v39 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      if ( FileExtents < 0 )
      {
        v40 = v39;
        v41 = MiDecrementSubsectionViewCount(BugCheckParameter2, v32 & 0xEF);
        if ( v44
          && !*(_QWORD *)(BugCheckParameter2 + 80)
          && *(_QWORD *)(BugCheckParameter2 + 8)
          && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x10000) == 0 )
        {
          v41 += MiInsertUnusedSubsectionInternal(BugCheckParameter2, 0LL);
        }
        v42 = (volatile LONG *)(v6 + 72);
        if ( v40 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v42);
        else
          ExReleaseSpinLockExclusive(v42, v40);
        LODWORD(v14) = 0;
        if ( !v41 )
          goto LABEL_57;
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v6 + 60) & 0x3FF)),
          v44 != 0,
          v41);
LABEL_56:
        LODWORD(v14) = 0;
LABEL_57:
        v11 = v44;
        v17 = v50;
        goto LABEL_58;
      }
      v11 = v44;
      v27 = v39;
    }
    else
    {
      v11 = v44;
      *(_QWORD *)(BugCheckParameter2 + 8) = P;
      MiUpdateSystemProtoPtesTree((_QWORD *)(BugCheckParameter2 + (v44 != 0 ? 120LL : 56LL)), 3);
    }
    if ( v11 )
      *(_DWORD *)(BugCheckParameter2 + 32) |= 1u;
    v43 = (volatile LONG *)(v6 + 72);
    if ( v27 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v43);
    else
      ExReleaseSpinLockExclusive(v43, v27);
    LODWORD(v14) = 0;
    v34 = 0LL;
    FileExtents = 0;
    v17 = v50;
    goto LABEL_59;
  }
  v16 = MiControlAreaRequiresCharge(v6, (v12 & 0x40) != 0 ? 2 : 0);
  v51 = v16;
  if ( v16 )
    goto LABEL_14;
  CommittedPages = v14;
  FileExtents = -1073740277;
  v17 = v14;
LABEL_58:
  v34 = P;
LABEL_59:
  if ( !v11 && v17 )
  {
    v35 = *(_QWORD *)v6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v6 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v35 + 40));
    KeAbPostRelease(v35 + 40);
    v31 = (*(_WORD *)(v46 + 486))++ == 0xFFFF;
    if ( v31 && *(_QWORD *)(v46 + 152) != v46 + 152 )
      KiCheckForKernelApcDelivery(v46, v36);
    LODWORD(v14) = 0;
  }
  if ( CommittedPages )
  {
    v37 = (unsigned int)v14;
    LOBYTE(v37) = v11 != 0;
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v6 + 60) & 0x3FF)),
      v37,
      CommittedPages);
  }
  if ( v34 )
    MiFreeProtoPool(v34, v48);
  return (unsigned int)FileExtents;
}
