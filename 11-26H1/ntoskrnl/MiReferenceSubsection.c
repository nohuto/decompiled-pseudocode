/*
 * XREFs of MiReferenceSubsection @ 0x1402EE060
 * Callers:
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiComputeDataFlushRange @ 0x140480064 (MiComputeDataFlushRange.c)
 *     MiFlushAcquire @ 0x1404AC7F4 (MiFlushAcquire.c)
 *     MiPreventControlAreaDeletion @ 0x1404EF8B8 (MiPreventControlAreaDeletion.c)
 *     MiUpdateActiveSubsection @ 0x1406FCE68 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x1402EE21C (MiRemoveUnusedSubsection.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140493854 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReferenceSubsection(__int64 *BugCheckParameter2, char a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // rbp
  unsigned int v6; // r12d
  BOOL v7; // r14d
  unsigned int v8; // r15d
  ULONG *v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  int v15; // edx
  char v16; // r8

  v2 = *BugCheckParameter2;
  if ( !BugCheckParameter2[1] )
    return 1LL;
  v4 = *BugCheckParameter2;
  SubsectionHoldingCrossPartitionReferences = (ULONG_PTR)BugCheckParameter2;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 64) != 0LL;
  v8 = 2;
  if ( (a2 & 6) != 4
    || (*(_DWORD *)(v4 + 56) & 0x30000000) == 0x10000000
    || !*(_QWORD *)(v4 + 64) && (*(_DWORD *)(v4 + 92) & 0x10000) != 0 )
  {
    goto LABEL_10;
  }
  if ( (a2 & 0x40) != 0 )
    v9 = &MiSystemPartition;
  else
    v9 = (a2 & 8) != 0
       ? 0LL
       : *(ULONG **)(stru_140E2ED08.ThreadLock
                   + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  if ( v9 == *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v4 + 60) & 0x3FF)) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v4 + 56) & 0x100) != 0 && a2 >= 0 )
  {
    ++LODWORD(stru_140E2ED08.CycleTime);
    return v6;
  }
  SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(BugCheckParameter2);
  v15 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
  if ( v15 != 0x3FFFFFFF )
  {
    if ( !v15 )
    {
      if ( (v16 & 0x10) == 0 )
        return 1;
      v8 = 3;
    }
    MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v15 + 1));
  }
LABEL_10:
  if ( (*(_DWORD *)(v4 + 56) & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
  {
    v10 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    if ( (v10 & 0x80000) != 0 )
      MiRemoveUnusedSubsection(SubsectionHoldingCrossPartitionReferences);
    if ( (v10 & 0x10000) == 0 )
    {
      v11 = *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80);
      v12 = v11 == -1;
      v13 = v11 + 1;
      *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) = v13;
      if ( v12 || v13 == 0x8000000000000000uLL )
        KeBugCheckEx(0x1Au, 0x42000uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
    }
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
      *((_DWORD *)BugCheckParameter2 + 8) |= 1u;
  }
  return v8;
}
