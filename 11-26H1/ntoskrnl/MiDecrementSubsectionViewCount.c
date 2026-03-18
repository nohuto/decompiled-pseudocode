/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x14036E5D0
 * Callers:
 *     MiFlushRelease @ 0x14036D520 (MiFlushRelease.c)
 *     MmPurgeSection @ 0x14039CC74 (MmPurgeSection.c)
 *     MiDecrementSubsection @ 0x140473D20 (MiDecrementSubsection.c)
 *     MiDeleteControlArea @ 0x1404881E0 (MiDeleteControlArea.c)
 *     MiReturnAllSubsectionCharges @ 0x1404890DC (MiReturnAllSubsectionCharges.c)
 *     MiDeleteSubsectionPages @ 0x1404919FC (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14049406C (MiCreatePrototypePtes.c)
 *     MiFlushSection @ 0x1404ADA20 (MiFlushSection.c)
 *     MiUpControlAreaRefs @ 0x1404DE558 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14050151C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 *     MiDeleteExtendSubsections @ 0x140778B40 (MiDeleteExtendSubsections.c)
 *     MiChargeSubsectionProtos @ 0x14086AE9C (MiChargeSubsectionProtos.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14036E598 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140499D04 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140512248 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140531EA8 (MiComputeCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // rdi
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // rbx
  __int64 v4; // rsi
  char v5; // r8
  ULONG *v6; // rax
  __int64 v7; // rax
  int v9; // ebp

  v2 = *(_QWORD *)BugCheckParameter2;
  SubsectionHoldingCrossPartitionReferences = BugCheckParameter2;
  if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL)
    && (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x20) == 0
    && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x10000) == 0
    && !*(_QWORD *)(BugCheckParameter2 + 80) )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v4 = 0LL;
  if ( (a2 & 6) == 4 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(v2) )
  {
    if ( (v5 & 8) != 0 )
      v6 = 0LL;
    else
      v6 = (v5 & 0x40) != 0
         ? &MiSystemPartition
         : *(ULONG **)(stru_140E2EB88.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( v6 != *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(v2 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v9 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
      if ( v9 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v9 - 1));
        if ( v9 == 1 )
          v4 = MiComputeCrossPartitionSectionCharges(SubsectionHoldingCrossPartitionReferences);
      }
    }
  }
  if ( *(_QWORD *)(v2 + 64)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && (*(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32) & 0x10000) == 0 )
  {
    v7 = *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80);
    if ( !v7 )
      KeBugCheckEx(0x1Au, 0x42001uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
    *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) = v7 - 1;
  }
  return v4;
}
