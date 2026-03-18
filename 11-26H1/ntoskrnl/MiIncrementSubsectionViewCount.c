/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x14030BE90
 * Callers:
 *     MmPurgeSection @ 0x14039CC74 (MmPurgeSection.c)
 *     MiSetSubsectionBase @ 0x140458C48 (MiSetSubsectionBase.c)
 *     MiPrepareSegmentForDeletion @ 0x1404874E0 (MiPrepareSegmentForDeletion.c)
 *     MiCreatePrototypePtes @ 0x14049406C (MiCreatePrototypePtes.c)
 *     MiFlushSection @ 0x1404ADA20 (MiFlushSection.c)
 *     MiPrepareDataFileSubsectionForDeletion @ 0x1404B5148 (MiPrepareDataFileSubsectionForDeletion.c)
 *     MiRetainSubsection @ 0x1406FF8C8 (MiRetainSubsection.c)
 *     MiChargeSubsectionProtos @ 0x14086AE9C (MiChargeSubsectionProtos.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x14030C19C (MiRemoveUnusedSubsection.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140499D04 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140512248 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(__int64 *BugCheckParameter2, char a2)
{
  __int64 v2; // rbx
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // rsi
  unsigned int v4; // edi
  ULONG *v5; // rax
  int v6; // ebx
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  int v11; // edx
  char v12; // r8

  v2 = *BugCheckParameter2;
  SubsectionHoldingCrossPartitionReferences = (ULONG_PTR)BugCheckParameter2;
  v4 = 2;
  if ( (a2 & 6) == 4
    && (*(_DWORD *)(v2 + 56) & 0x30000000) != 0x10000000
    && (*(_QWORD *)(v2 + 64) || (*(_DWORD *)(v2 + 92) & 0x10000) == 0) )
  {
    if ( (a2 & 0x40) != 0 )
      v5 = &MiSystemPartition;
    else
      v5 = (a2 & 8) != 0
         ? 0LL
         : *(ULONG **)(stru_140E2EB88.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( v5 != *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(v2 + 60) & 0x3FF)) )
    {
      if ( (*(_DWORD *)(v2 + 56) & 0x100) != 0 && a2 >= 0 )
      {
        ++LODWORD(stru_140E2EB88.CycleTime);
        return 0LL;
      }
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(BugCheckParameter2);
      v11 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
      if ( v11 != 0x3FFFFFFF )
      {
        if ( !v11 )
        {
          if ( (v12 & 0x10) == 0 )
            return 1LL;
          v4 = 3;
        }
        MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v11 + 1));
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 && *(_QWORD *)(v2 + 64) )
  {
    v6 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    if ( (v6 & 0x80000) != 0 )
      MiRemoveUnusedSubsection(SubsectionHoldingCrossPartitionReferences);
    if ( (v6 & 0x10000) == 0 )
    {
      v7 = *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80);
      v8 = v7 == -1;
      v9 = v7 + 1;
      *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) = v9;
      if ( v8 || v9 == 0x8000000000000000uLL )
        KeBugCheckEx(0x1Au, 0x42000uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
    }
  }
  return v4;
}
