/*
 * XREFs of MmQueryTransitionPagesMadeColdCount @ 0x1404E6CAC
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x1409D21C0 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQueryTransitionPagesMadeColdCount(int *a1)
{
  *a1 = stru_140E366D8.WaitRegister.Flags & 1;
  return (unsigned int)dword_140E34A84;
}
