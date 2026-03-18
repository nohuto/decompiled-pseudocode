/*
 * XREFs of ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C4F98
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402C43E4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402C5524 (-UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragOutToDragInThreshold(struct MOVESIZEDATA *a1)
{
  int v1; // r8d

  v1 = *((_DWORD *)a1 + 50) >> 11;
  if ( (v1 & 7) == 2 || (v1 & 7) == 3 )
    *((_DWORD *)a1 + 50) ^= ((unsigned __int16)*((_DWORD *)a1 + 50) ^ (unsigned __int16)(((_WORD)v1 - 2) << 11)) & 0x3800;
}
