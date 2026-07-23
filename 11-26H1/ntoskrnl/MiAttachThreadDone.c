/*
 * XREFs of MiAttachThreadDone @ 0x140311390
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     MiSharePagesCleanup @ 0x140311260 (MiSharePagesCleanup.c)
 *     MmQueryCommitReleaseState @ 0x1404C1D8C (MmQueryCommitReleaseState.c)
 *     MiAskKeToOutswapProcess @ 0x1404D1920 (MiAskKeToOutswapProcess.c)
 *     MiEmptyThisWorkingSet @ 0x1404FA1B4 (MiEmptyThisWorkingSet.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406EA1AC (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 */

KIRQL __fastcall MiAttachThreadDone(__int64 a1, int a2)
{
  KIRQL result; // al
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int8 v6; // bl
  __int64 v7; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = stru_140E2ED08.ThreadLock;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( a2 )
  {
    v6 = 17;
  }
  else
  {
    result = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 21384));
    v6 = result;
  }
  --*(_DWORD *)(v4 + 56);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( v7 )
    result = KeSignalGate(v7, 1LL);
  if ( v6 != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v5 + 21384) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v5 + 21384), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    result = v6;
    __writecr8(v6);
  }
  return result;
}
