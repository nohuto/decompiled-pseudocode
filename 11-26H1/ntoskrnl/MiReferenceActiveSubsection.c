/*
 * XREFs of MiReferenceActiveSubsection @ 0x140454670
 * Callers:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MiUpControlAreaRefs @ 0x1404D7C38 (MiUpControlAreaRefs.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSubsection @ 0x1402EE21C (MiRemoveUnusedSubsection.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140370338 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetCommittedPages @ 0x1404560C0 (MiGetCommittedPages.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140493854 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(__int64 *BugCheckParameter2, unsigned int a2, KIRQL a3)
{
  __int64 v3; // r14
  KIRQL v4; // r15
  __int64 v6; // rbp
  __int64 v7; // r12
  KIRQL v8; // al
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 SubsectionHoldingCrossPartitionReferences; // rdi
  int v12; // r14d
  __int64 v13; // r12
  __int64 v14; // rbx
  char v15; // r8
  ULONG *v16; // rax
  int v17; // edx
  char v18; // r8
  int v19; // ebx
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rax
  _QWORD *v23; // rcx
  int v24; // eax
  int SubsectionCharges; // edi
  volatile LONG *v26; // rcx
  volatile LONG *v28; // rcx
  _DWORD *v29; // rcx
  volatile LONG *v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v34; // [rsp+98h] [rbp+10h]
  int v35; // [rsp+A0h] [rbp+18h]

  v34 = a2;
  v3 = *BugCheckParameter2;
  v35 = 0;
  v4 = a3;
  v31 = *BugCheckParameter2;
  v6 = 0LL;
  v32 = *(_QWORD *)(*BugCheckParameter2 + 64);
  v7 = v32;
  if ( a3 == 17 )
  {
    v35 = 1;
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    a2 = v34;
    v4 = v8;
  }
  v9 = 0xFFFFFFFFFLL;
  while ( 1 )
  {
    if ( !BugCheckParameter2[1] )
      goto LABEL_32;
    v10 = *BugCheckParameter2;
    SubsectionHoldingCrossPartitionReferences = (__int64)BugCheckParameter2;
    v12 = 2;
    v13 = *(_QWORD *)(*BugCheckParameter2 + 64);
    v14 = *BugCheckParameter2;
    if ( (a2 & 6) != 4 || (unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2) )
      goto LABEL_20;
    if ( (v15 & 0x40) != 0 )
      v16 = &MiSystemPartition;
    else
      v16 = (v15 & 8) != 0
          ? 0LL
          : *(ULONG **)(stru_140E2ED08.ThreadLock
                      + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( v16 == *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v14 + 60) & 0x3FF)) )
      goto LABEL_20;
    if ( (*(_DWORD *)(v14 + 56) & 0x100) != 0 && v15 >= 0 )
      break;
    SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(BugCheckParameter2);
    v17 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
    if ( v17 == 0x3FFFFFFF )
      goto LABEL_20;
    if ( v17 )
      goto LABEL_19;
    if ( (v18 & 0x10) != 0 )
    {
      v12 = 3;
LABEL_19:
      MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v17 + 1));
LABEL_20:
      if ( (*(_DWORD *)(v14 + 56) & 0x20) == 0 && *(_QWORD *)(v14 + 64) )
      {
        v19 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
        if ( (v19 & 0x80000) != 0 )
          MiRemoveUnusedSubsection(SubsectionHoldingCrossPartitionReferences);
        if ( (v19 & 0x10000) == 0 )
        {
          v20 = *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80);
          v21 = v20 == -1;
          v22 = v20 + 1;
          *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) = v22;
          if ( v21 || v22 == 0x8000000000000000uLL )
            KeBugCheckEx(0x1Au, 0x42000uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
        }
      }
      if ( v13 && (*(_DWORD *)(v10 + 56) & 0x20) == 0 )
        *((_DWORD *)BugCheckParameter2 + 8) |= 1u;
      if ( v12 == 2 && (v34 & 0x10) != 0 && v6 )
      {
        v28 = (volatile LONG *)(v31 + 72);
        if ( v4 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v28);
        else
          ExReleaseSpinLockExclusive(v28, v4);
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v31 + 60) & 0x3FF)),
          v32 != 0,
          v6);
        if ( !v35 )
        {
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v31 + 72));
          return 0LL;
        }
        return 0LL;
      }
      if ( v35 )
      {
        v29 = (_DWORD *)(v31 + 72);
        if ( v4 == 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            *v29 = 0;
            return 0LL;
          }
          else
          {
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v29, retaddr);
            return 0LL;
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v29 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v29, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
        __writecr8(v4);
      }
      return 0LL;
    }
    v7 = v32;
    v9 = 0xFFFFFFFFFLL;
    a2 = v34;
    v3 = v31;
LABEL_32:
    if ( (a2 & 0x10) != 0 )
    {
      v30 = (volatile LONG *)(v3 + 72);
      if ( v4 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v30);
      else
        ExReleaseSpinLockExclusive(v30, v4);
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v3 + 60) & 0x3FF)),
        v32 != 0,
        v6);
      if ( !v35 )
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    v23 = (_QWORD *)*BugCheckParameter2;
    v24 = *(_DWORD *)(*BugCheckParameter2 + 56);
    if ( (v24 & 0x20) != 0 )
    {
      v6 = v23[15];
    }
    else if ( (v24 & 0x80u) != 0 )
    {
      v6 = (unsigned int)(*((_DWORD *)BugCheckParameter2 + 11) - *((_DWORD *)BugCheckParameter2 + 13));
    }
    else if ( v23[8] )
    {
      v6 = *(_QWORD *)(*v23 + 16LL);
    }
    else
    {
      v6 = v9 & v23[15];
    }
    if ( v6 )
    {
      if ( v4 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)(v3 + 72) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v3 + 72), retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)(v3 + 72) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v3 + 72), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
        __writecr8(v4);
      }
      SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, v6);
      if ( SubsectionCharges < 0 )
      {
        if ( !v35 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        return (unsigned int)SubsectionCharges;
      }
      v34 |= 0x10u;
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      v9 = 0xFFFFFFFFFLL;
      a2 = v34;
      if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
      {
        if ( v7 )
        {
          if ( !BugCheckParameter2[1]
            || v6 != *((_DWORD *)BugCheckParameter2 + 11) - *((_DWORD *)BugCheckParameter2 + 13) )
          {
LABEL_89:
            if ( v4 == 17 )
            {
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                *(_DWORD *)(v3 + 72) = 0;
              else
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v3 + 72), retaddr);
            }
            else
            {
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                *(_DWORD *)(v3 + 72) = 0;
              else
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v3 + 72), retaddr);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
              __writecr8(v4);
            }
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v3 + 60) & 0x3FF)),
              v32 != 0,
              v6);
            if ( !v35 )
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            return 3221225994LL;
          }
          a2 = v34;
        }
        else if ( v6 != MiGetCommittedPages(v3, v34, 0xFFFFFFFFFLL) )
        {
          goto LABEL_89;
        }
      }
    }
    else
    {
      a2 |= 0x10u;
      v34 = a2;
    }
  }
  ++LODWORD(stru_140E2ED08.CycleTime);
  if ( v35 )
  {
    v26 = (volatile LONG *)(v31 + 72);
    if ( v4 == 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v26);
      return 3221227019LL;
    }
    ExReleaseSpinLockExclusive(v26, v4);
  }
  return 3221227019LL;
}
