/*
 * XREFs of _dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x1800E9DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCBorderBrushCache@CCachedBorderBrush@CWindowBorder@@@std@@QEBAXPEAVCBorderBrushCache@CCachedBorderBrush@CWindowBorder@@@Z @ 0x180090ADC (--R-$default_delete@VCBorderBrushCache@CCachedBorderBrush@CWindowBorder@@@std@@QEBAXPEAVCBorderB.c)
 */

void __fastcall dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__(__int64 a1)
{
  if ( CWindowBorder::CCachedBorderBrush::s_cache )
    std::default_delete<CWindowBorder::CCachedBorderBrush::CBorderBrushCache>::operator()(
      a1,
      (CWindowBorder::CCachedBorderBrush::CBorderBrushCache *)CWindowBorder::CCachedBorderBrush::s_cache);
}
