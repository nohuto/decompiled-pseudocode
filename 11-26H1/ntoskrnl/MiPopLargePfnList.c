/*
 * XREFs of MiPopLargePfnList @ 0x1404E6218
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 * Callees:
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiPopLargePfnList(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx

  v2 = (__int64 *)(a1 + 24LL * (unsigned int)a2);
  v3 = *v2;
  if ( *v2 == 0x3FFFFFFFFFLL )
  {
    MiDemotePfnListChain(a1, a2);
    v3 = *v2;
  }
  MiSimpleUnlinkPageEx((__int64)v2, v3);
  return v3;
}
