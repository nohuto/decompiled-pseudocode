/*
 * XREFs of MiEmptyWorkingSet @ 0x1403C545C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, __int64 a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL);
}
