/*
 * XREFs of MiExcessCommitExists @ 0x1405002A0
 * Callers:
 *     MiContractPagingFiles @ 0x1404E1D30 (MiContractPagingFiles.c)
 *     MiAttemptPageFileReduction @ 0x1406FD3DC (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x1407121C0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiExcessCommitExists(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx

  if ( a1 + 0x8000 < a1 )
    return 0LL;
  v2 = ((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
  return (v2 - (a1 + 0x8000)) & -(__int64)(a1 + 0x8000 < v2);
}
