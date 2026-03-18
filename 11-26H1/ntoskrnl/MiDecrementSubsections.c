/*
 * XREFs of MiDecrementSubsections @ 0x14036E360
 * Callers:
 *     MiAddViewsForSection @ 0x1402E31A0 (MiAddViewsForSection.c)
 *     MmPurgeSection @ 0x14039CC74 (MmPurgeSection.c)
 *     MiReleaseFaultCharges @ 0x1404AC0A0 (MiReleaseFaultCharges.c)
 *     MiUpControlAreaRefs @ 0x1404DE558 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x1406F8198 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14036E598 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiInsertUnusedSubsectionInternal @ 0x14036E724 (MiInsertUnusedSubsectionInternal.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140499D04 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140512248 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140531EA8 (MiComputeCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementSubsections(_QWORD *BugCheckParameter2, _QWORD *a2, int a3)
{
  _QWORD *v4; // rbx
  BOOL v5; // r15d
  __int64 v6; // rbp
  unsigned int v7; // r8d
  unsigned int v8; // edi
  __int64 v10; // r14
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // r13
  __int64 v12; // r12
  char v13; // r8
  ULONG *v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+70h] [rbp+18h]

  v4 = BugCheckParameter2;
  v5 = *(_QWORD *)(*BugCheckParameter2 + 64LL) != 0LL;
  v6 = 0LL;
  v7 = a3 | 0x200;
  do
  {
    v8 = v7;
    if ( v4[1] )
    {
      v10 = *v4;
      SubsectionHoldingCrossPartitionReferences = (ULONG_PTR)v4;
      if ( *(_QWORD *)(*v4 + 64LL) && (*(_DWORD *)(*v4 + 56LL) & 0x20) == 0 && (v4[4] & 0x10000) == 0 && !v4[10] )
        KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)v4, 0LL, 0LL);
      v12 = 0LL;
      if ( (v7 & 6) == 4 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*v4) )
      {
        if ( (v13 & 8) != 0 )
          v14 = 0LL;
        else
          v14 = (v13 & 0x40) != 0
              ? &MiSystemPartition
              : *(ULONG **)(stru_140E2EB88.ThreadLock
                          + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
        if ( v14 != *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(v10 + 60) & 0x3FF)) )
        {
          SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v4);
          v16 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                          + 48) & 0x3FFFFFFF;
          v17 = v16;
          if ( v16 != 0x3FFFFFFF )
          {
            MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v16 - 1));
            if ( v17 == 1 )
              v12 = MiComputeCrossPartitionSectionCharges(SubsectionHoldingCrossPartitionReferences);
          }
        }
      }
      if ( *(_QWORD *)(v10 + 64)
        && (*(_DWORD *)(v10 + 56) & 0x20) == 0
        && (*(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32) & 0x10000) == 0 )
      {
        v15 = *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80);
        if ( !v15 )
          KeBugCheckEx(0x1Au, 0x42001uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
        *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) = v15 - 1;
      }
      v6 += v12;
      if ( v5 && !v4[10] && (v4[4] & 0x10000) == 0 )
        v6 += MiInsertUnusedSubsectionInternal(v4, 0LL);
    }
    if ( v4 == a2 )
      break;
    v4 = (_QWORD *)v4[2];
    v7 = v8 & 0xFFFFFFFB;
    if ( v5 )
      v7 = v8;
  }
  while ( v4 );
  return v6;
}
