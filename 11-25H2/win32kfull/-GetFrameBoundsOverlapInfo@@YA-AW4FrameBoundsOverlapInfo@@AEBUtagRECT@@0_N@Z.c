/*
 * XREFs of ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x14022C06C
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A7000 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402A81F8 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFrameBoundsOverlapInfo(_DWORD *a1, _DWORD *a2, char a3)
{
  unsigned int v4; // r8d

  if ( a3 && *a1 > *a2 )
    return 0LL;
  v4 = *a1 == *a2;
  if ( a3 )
  {
    if ( a1[1] > a2[1] )
      return 0LL;
  }
  if ( a1[1] == a2[1] )
    v4 |= 2u;
  if ( a3 && a1[2] < a2[2] )
    return 0LL;
  if ( a1[2] == a2[2] )
    v4 |= 4u;
  if ( a3 && a1[3] < a2[3] )
    return 0LL;
  if ( a1[3] == a2[3] )
    v4 |= 8u;
  return v4;
}
