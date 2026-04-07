/*
 * XREFs of ??R?$default_delete@VCBorderBrushCache@CCachedBorderBrush@CWindowBorder@@@std@@QEBAXPEAVCBorderBrushCache@CCachedBorderBrush@CWindowBorder@@@Z @ 0x180090ADC
 * Callers:
 *     ?EnsureBorderBrushCache@CCachedBorderBrush@CWindowBorder@@CAXXZ @ 0x18000D090 (-EnsureBorderBrushCache@CCachedBorderBrush@CWindowBorder@@CAXXZ.c)
 *     _dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x1800E9DE0 (_dynamic_atexit_destructor_for__CWindowBorder--CCachedBorderBrush--s_cache__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CBorderBrushCache@CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x180090918 (--1CBorderBrushCache@CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CWindowBorder::CCachedBorderBrush::CBorderBrushCache>::operator()(
        __int64 a1,
        CWindowBorder::CCachedBorderBrush::CBorderBrushCache *a2)
{
  if ( a2 )
  {
    CWindowBorder::CCachedBorderBrush::CBorderBrushCache::~CBorderBrushCache(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x28);
  }
}
