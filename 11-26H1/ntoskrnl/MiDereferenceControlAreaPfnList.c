/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x14030A130
 * Callers:
 *     MiReleaseInPageRefs @ 0x140309D08 (MiReleaseInPageRefs.c)
 *     MiInsertPurgedPages @ 0x140309EC4 (MiInsertPurgedPages.c)
 *     MiGatherMappedPages @ 0x140496CD8 (MiGatherMappedPages.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckForControlAreaDeletion @ 0x14030BAE0 (MiCheckForControlAreaDeletion.c)
 *     MiRemoveUnusedSubsection @ 0x14030C19C (MiRemoveUnusedSubsection.c)
 *     MiInsertUnusedSubsectionInternal @ 0x14036E724 (MiInsertUnusedSubsectionInternal.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 inserted; // r14
  __int64 v9; // rbx
  volatile LONG *v10; // rcx
  KIRQL v11; // bp
  bool v12; // zf
  __int64 v13; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  BOOL v15; // [rsp+78h] [rbp+20h]

  inserted = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    v9 = 0LL;
  else
    v9 = a2;
  v15 = *(_QWORD *)(a1 + 64) != 0LL;
  v10 = (volatile LONG *)(a1 + 72);
  if ( (a4 & 2) != 0 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v10);
  }
  if ( v9 )
  {
    v12 = *(_DWORD *)(v9 + 104) == (_DWORD)a3;
    *(_DWORD *)(v9 + 104) -= a3;
    if ( v12 && !*(_QWORD *)(v9 + 80) && (*(_DWORD *)(a2 + 32) & 0x90000) == 0x80000 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsectionInternal(v9, 0LL);
    }
  }
  *(_QWORD *)(a1 + 32) -= a3;
  if ( (a4 & 1) != 0 )
    MiCheckForControlAreaDeletion(a1);
  if ( inserted )
    v13 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  else
    v13 = 0LL;
  if ( v11 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *(_DWORD *)(a1 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *(_DWORD *)(a1 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v11);
  }
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v13, v15, inserted);
}
