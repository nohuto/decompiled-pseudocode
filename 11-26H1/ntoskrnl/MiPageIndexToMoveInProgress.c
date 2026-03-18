/*
 * XREFs of MiPageIndexToMoveInProgress @ 0x1403C8300
 * Callers:
 *     MiGetLargePageDemoteAsNeeded @ 0x1403C7FF0 (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageIndexToMoveInProgress(unsigned int a1, int a2)
{
  if ( a2 )
    return 2LL;
  else
    return a1 < 2;
}
