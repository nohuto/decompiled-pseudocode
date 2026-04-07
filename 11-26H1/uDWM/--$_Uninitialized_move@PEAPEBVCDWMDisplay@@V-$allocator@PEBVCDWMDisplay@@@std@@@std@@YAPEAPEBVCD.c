/*
 * XREFs of ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x18009D780
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800B2990 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@00@Z @ 0x18008D528 (--$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchD.c)
 */

char *__fastcall std::_Uninitialized_move<CDWMDisplay const * *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
