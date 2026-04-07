/*
 * XREFs of _dynamic_atexit_destructor_for__CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache__ @ 0x1800E9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@std@@QEBAXPEAVCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@Z @ 0x180090B0C (--R-$default_delete@VCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@std@@QEBAXPEAVCNoiseSurfaceCa.c)
 */

void __fastcall dynamic_atexit_destructor_for__CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache__(__int64 a1)
{
  if ( CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache )
    std::default_delete<CAccentAcrylicBlurBehind::CNoiseSurfaceCache>::operator()(
      a1,
      CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache);
}
