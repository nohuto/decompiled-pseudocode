/*
 * XREFs of MiRemoveUnusedSubsection @ 0x14030C19C
 * Callers:
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x14030A130 (MiDereferenceControlAreaPfnList.c)
 *     MiIncrementSubsectionViewCount @ 0x14030BE90 (MiIncrementSubsectionViewCount.c)
 *     MiReferenceSubsection @ 0x14030BFE0 (MiReferenceSubsection.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiReferenceActiveSubsection @ 0x14045AE40 (MiReferenceActiveSubsection.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x14030C21C (MiUnlinkUnusedSubsection.c)
 */

__int64 __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 2112));
  result = MiUnlinkUnusedSubsection(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = LODWORD(stru_140F11D08.WaitStatus);
    if ( !LODWORD(stru_140F11D08.WaitStatus) )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v2 + 2112), retaddr);
  }
  *(_DWORD *)(v2 + 2112) = 0;
  return result;
}
