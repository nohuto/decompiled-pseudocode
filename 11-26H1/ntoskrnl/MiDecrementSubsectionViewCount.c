/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x140370370
 * Callers:
 *     MiFlushRelease @ 0x14036F2C0 (MiFlushRelease.c)
 *     MmPurgeSection @ 0x14039E9D4 (MmPurgeSection.c)
 *     MiDecrementSubsection @ 0x14046D4A0 (MiDecrementSubsection.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     MiReturnAllSubsectionCharges @ 0x140482C1C (MiReturnAllSubsectionCharges.c)
 *     MiDeleteSubsectionPages @ 0x14048B54C (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiUpControlAreaRefs @ 0x1404D7C38 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404FAD0C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiDeleteExtendSubsections @ 0x14077B9E0 (MiDeleteExtendSubsections.c)
 *     MiChargeSubsectionProtos @ 0x14087127C (MiChargeSubsectionProtos.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140370338 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140493854 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140534348 (MiComputeCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
         : *(ULONG **)(stru_140E2ED08.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( v6 != *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v2 + 60) & 0x3FF)) )
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
