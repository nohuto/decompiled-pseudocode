/*
 * XREFs of MiPrepareAttachThread @ 0x140474DE0
 * Callers:
 *     MmQueryCommitReleaseState @ 0x1404C804C (MmQueryCommitReleaseState.c)
 *     MiEmptyThisWorkingSet @ 0x1405009C4 (MiEmptyThisWorkingSet.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406E54FC (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPrepareAttachThread(__int64 a1, __int64 a2, int a3)
{
  if ( a3
    && ((*(_DWORD *)(a1 + 500) & 0xC00u) < 0xC00
     || *(_QWORD *)(*(_QWORD *)(a2 + 16) + 72LL)
     || *(_QWORD *)(a2 + 152) <= 1uLL) )
  {
    return 0LL;
  }
  ++*(_DWORD *)(*(_QWORD *)(a2 + 16) + 56LL);
  return 1LL;
}
