/*
 * XREFs of ??$emplace_back@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAAEAUSuperWetInkBallpointPenPoint@@$$QEAU2@@Z @ 0x1800AAE4C
 * Callers:
 *     ?OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800AAF30 (-OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProces.c)
 * Callees:
 *     ??$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@$$QEAU2@@Z @ 0x1800AAC94 (--$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint@@V.c)
 */

char *__fastcall std::vector<SuperWetInkBallpointPenPoint>::emplace_back<SuperWetInkBallpointPenPoint>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<SuperWetInkBallpointPenPoint>::_Emplace_reallocate<SuperWetInkBallpointPenPoint>(
             a1,
             v3,
             (__int128 *)a2);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(a2 + 32);
  *(_QWORD *)(v3 + 48) = *(_QWORD *)(a2 + 48);
  v4 = a1[1];
  a1[1] = v4 + 56;
  return (char *)v4;
}
