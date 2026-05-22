/*
 * XREFs of ??$_Uninitialized_move@PEAUSuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@YAPEAUSuperWetInkBallpointPenPoint@@QEAU1@0PEAU1@AEAV?$allocator@USuperWetInkBallpointPenPoint@@@0@@Z @ 0x1800AADF0
 * Callers:
 *     ??$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@$$QEAU2@@Z @ 0x1800AAC94 (--$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint@@V.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<SuperWetInkBallpointPenPoint *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum _Button *,enum _Button *>(a1, a2, a3);
  return &a3[56 * ((a2 - (__int64)a1) / 56)];
}
