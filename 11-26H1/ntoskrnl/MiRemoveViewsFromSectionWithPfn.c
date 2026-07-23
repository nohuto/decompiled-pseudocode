/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x140458404
 * Callers:
 *     MiPfReferenceDataSubsection @ 0x140398A10 (MiPfReferenceDataSubsection.c)
 *     MiDereferenceDataSubsections @ 0x14070EE8C (MiDereferenceDataSubsections.c)
 *     MiDataVadErrorCleanup @ 0x1409976EC (MiDataVadErrorCleanup.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x140A5B840 (MiReleaseReadListResources.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140370338 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140493854 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140534348 (MiComputeCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // rbx
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ebp
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // rsi
  __int64 v11; // r12
  ULONG *v12; // rax
  int v13; // ebp
  __int64 v14; // rax
  BOOL v15; // edx
  __int64 inserted; // rax
  unsigned __int64 v17; // rax
  volatile LONG *v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-50h]
  BOOL v20; // [rsp+98h] [rbp+10h]
  KIRQL OldIrql; // [rsp+A0h] [rbp+18h]
  BOOL v22; // [rsp+A8h] [rbp+20h]

  v3 = (ULONG_PTR)BugCheckParameter2;
  v19 = *BugCheckParameter2;
  v22 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v6 = a3 | 0x200;
  v7 = 0LL;
  v20 = *(_QWORD *)(*(_QWORD *)v3 + 64LL) != 0LL;
  do
  {
    v8 = *(_QWORD *)v3;
    v9 = v6;
    SubsectionHoldingCrossPartitionReferences = v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 64LL)
      && (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x20) == 0
      && (*(_DWORD *)(v3 + 32) & 0x10000) == 0
      && !*(_QWORD *)(v3 + 80) )
    {
      KeBugCheckEx(0x1Au, 0x42001uLL, v3, 0LL, 0LL);
    }
    v11 = 0LL;
    if ( (v6 & 6) == 4 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*(_QWORD *)v3) )
    {
      if ( (v6 & 8) != 0 )
        v12 = 0LL;
      else
        v12 = (v6 & 0x40) != 0
            ? &MiSystemPartition
            : *(ULONG **)(stru_140E2ED08.ThreadLock
                        + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      if ( v12 != *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v8 + 60) & 0x3FF)) )
      {
        SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v3);
        v13 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
        if ( v13 != 0x3FFFFFFF )
        {
          MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v13 - 1));
          if ( v13 == 1 )
            v11 = MiComputeCrossPartitionSectionCharges(SubsectionHoldingCrossPartitionReferences);
        }
        v9 = v6;
      }
    }
    if ( *(_QWORD *)(v8 + 64)
      && (*(_DWORD *)(v8 + 56) & 0x20) == 0
      && (*(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32) & 0x10000) == 0 )
    {
      v14 = *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80);
      if ( !v14 )
        KeBugCheckEx(0x1Au, 0x42001uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
      *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) = v14 - 1;
    }
    v15 = v20;
    v7 += v11;
    if ( v20 && !*(_QWORD *)(v3 + 80) && (*(_DWORD *)(v3 + 32) & 0x10000) == 0 )
    {
      inserted = MiInsertUnusedSubsectionInternal(v3, 0LL);
      v15 = v20;
      v7 += inserted;
    }
    if ( a2 )
    {
      v17 = *(unsigned int *)(v3 + 44);
      if ( a2 <= v17 )
        break;
      a2 -= v17;
    }
    v3 = *(_QWORD *)(v3 + 16);
    v6 = v9 & 0xFFFFFFFB;
    if ( v15 )
      v6 = v9;
  }
  while ( v3 );
  v18 = (volatile LONG *)(v19 + 72);
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v18);
  else
    ExReleaseSpinLockExclusive(v18, OldIrql);
  if ( v7 )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v19 + 60) & 0x3FF)),
      v22,
      v7);
}
