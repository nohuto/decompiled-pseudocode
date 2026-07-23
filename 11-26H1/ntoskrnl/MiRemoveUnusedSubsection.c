/*
 * XREFs of MiRemoveUnusedSubsection @ 0x1402EE21C
 * Callers:
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402EC1B0 (MiDereferenceControlAreaPfnList.c)
 *     MiIncrementSubsectionViewCount @ 0x1402EDF10 (MiIncrementSubsectionViewCount.c)
 *     MiReferenceSubsection @ 0x1402EE060 (MiReferenceSubsection.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiReferenceActiveSubsection @ 0x140454670 (MiReferenceActiveSubsection.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x1402EE29C (MiUnlinkUnusedSubsection.c)
 */

__int64 __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 2112));
  result = MiUnlinkUnusedSubsection(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v2 + 2112), retaddr);
  }
  *(_DWORD *)(v2 + 2112) = 0;
  return result;
}
