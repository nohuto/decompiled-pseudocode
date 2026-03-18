/*
 * XREFs of MmQueryTransitionPagesMadeColdCount @ 0x1404ED6CC
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x14096FED8 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQueryTransitionPagesMadeColdCount(int *a1)
{
  *a1 = stru_140E36558.WaitRegister.Flags & 1;
  return (unsigned int)dword_140E34904;
}
