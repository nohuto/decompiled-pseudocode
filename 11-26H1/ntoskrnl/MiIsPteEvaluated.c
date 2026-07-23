/*
 * XREFs of MiIsPteEvaluated @ 0x1403DCEC8
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x1403DCAFC (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsPteEvaluated(__int64 *a1)
{
  __int64 PteShadow; // r8
  int v2; // eax
  unsigned __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r10

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a1, *a1);
  if ( !PteShadow )
    return 0LL;
  if ( (PteShadow & 1) != 0 )
    return 1LL;
  if ( (PteShadow & 0x400) == 0 )
    return 1LL;
  LOBYTE(v2) = MiIsPrototypePteVadLookup(PteShadow);
  if ( !v2 )
    return 1LL;
  LOBYTE(v4) = ((v3 >> 5) & 0x1F) != v5;
  return v4;
}
