/*
 * XREFs of ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C4F20
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402C43E4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402C5524 (-UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInThresholdAlways(struct MOVESIZEDATA *a1)
{
  int v1; // r8d
  int v2; // eax
  __int16 v3; // ax

  v1 = *((_DWORD *)a1 + 50) >> 11;
  v2 = v1 & 7;
  if ( v2 == 2 || v2 == 3 )
  {
    v3 = v1 - 2;
  }
  else
  {
    if ( (unsigned int)(v2 - 4) > 1 )
      return;
    v3 = v1 - 4;
  }
  *((_DWORD *)a1 + 50) ^= ((unsigned __int16)*((_DWORD *)a1 + 50) ^ (unsigned __int16)(v3 << 11)) & 0x3800;
}
