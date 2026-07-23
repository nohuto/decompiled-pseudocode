/*
 * XREFs of MiIsPteDecommittedPage @ 0x140314040
 * Callers:
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteDecommittedPage(__int64 a1)
{
  return (a1 & 0x3E0) == 0x200
      && (a1 & 1) == 0
      && ((a1 & 0x400) == 0 || (a1 & 0x3FFFFFFFFFF000LL) == 0x3FFFFFFFFFF000LL);
}
