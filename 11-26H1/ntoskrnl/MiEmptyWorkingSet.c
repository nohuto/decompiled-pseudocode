/*
 * XREFs of MiEmptyWorkingSet @ 0x1403BB5EC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x1403BC020 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, __int64 a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
