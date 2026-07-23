/*
 * XREFs of MiRemoveViewsFromSection @ 0x14036F4F0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x140341C78 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemCacheReferences @ 0x14036F210 (MiRemoveSystemCacheReferences.c)
 *     MiConvertStaticSubsections @ 0x14047A2F0 (MiConvertStaticSubsections.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140370338 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140493854 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140534348 (MiComputeCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v4; // rbx
  _BOOL8 v5; // r12
  unsigned int v6; // r8d
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // r10d
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // rbp
  __int64 v11; // r14
  char v12; // r8
  ULONG *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 inserted; // rax
  int v18; // r13d
  unsigned int v19; // [rsp+70h] [rbp+18h]

  v4 = BugCheckParameter2;
  v5 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL) != 0LL;
  v6 = a3 | 0x200;
  v7 = 0LL;
  do
  {
    v8 = *(_QWORD *)v4;
    v9 = v6;
    v19 = v6;
    SubsectionHoldingCrossPartitionReferences = v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 64LL)
      && (*(_DWORD *)(*(_QWORD *)v4 + 56LL) & 0x20) == 0
      && (*(_DWORD *)(v4 + 32) & 0x10000) == 0
      && !*(_QWORD *)(v4 + 80) )
    {
      KeBugCheckEx(0x1Au, 0x42001uLL, v4, 0LL, 0LL);
    }
    v11 = 0LL;
    if ( (v6 & 6) == 4 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(v8) )
    {
      if ( (v12 & 8) != 0 )
        v13 = 0LL;
      else
        v13 = (v12 & 0x40) != 0
            ? &MiSystemPartition
            : *(ULONG **)(stru_140E2ED08.ThreadLock
                        + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      if ( v13 != *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v8 + 60) & 0x3FF)) )
      {
        SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v4);
        v18 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
        if ( v18 != 0x3FFFFFFF )
        {
          MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v18 - 1));
          if ( v18 == 1 )
            v11 = MiComputeCrossPartitionSectionCharges(SubsectionHoldingCrossPartitionReferences);
          v9 = v19;
        }
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
    v7 += v11;
    if ( v5 && !*(_QWORD *)(v4 + 80) && (*(_DWORD *)(v4 + 32) & 0x10000) == 0 )
    {
      inserted = MiInsertUnusedSubsectionInternal(v4, 0LL);
      v9 = v19;
      v7 += inserted;
    }
    if ( a2 )
    {
      v15 = *(unsigned int *)(v4 + 44);
      if ( a2 <= v15 )
        return v7;
      a2 -= v15;
    }
    v4 = *(_QWORD *)(v4 + 16);
    v6 = v9 & 0xFFFFFFFB;
    if ( v5 )
      v6 = v9;
  }
  while ( v4 );
  return v7;
}
