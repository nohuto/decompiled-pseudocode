/*
 * XREFs of ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402A86C0
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A80B4 (-SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A8100 (-SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A8138 (-SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 */

void __fastcall UpdateDragThresholdForMove(struct MOVESIZEDATA *a1, int a2, int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned __int16 v5; // ax

  if ( a3 == 4 )
  {
    if ( a2 == 4 )
      return;
LABEL_9:
    SetDragInToDragOutThreshold(a1);
    return;
  }
  if ( a2 == 4 )
  {
    if ( a3 )
      SetDragOutToDragInThreshold(a1);
    else
      SetDragInThresholdAlways(a1);
  }
  else
  {
    if ( !a2 )
      goto LABEL_9;
    v3 = *((_DWORD *)a1 + 50);
    v4 = (v3 >> 11) & 7;
    if ( v4 < 2 )
    {
      v5 = v3 + 4096;
    }
    else
    {
      if ( v4 - 4 > 1 )
        return;
      v5 = ((unsigned __int16)(v3 >> 11) - 2) << 11;
    }
    *((_DWORD *)a1 + 50) = v3 ^ ((unsigned __int16)v3 ^ v5) & 0x3800;
  }
}
