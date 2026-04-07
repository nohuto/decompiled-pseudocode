/*
 * XREFs of ??R?$default_delete@VCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@std@@QEBAXPEAVCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@Z @ 0x180090B0C
 * Callers:
 *     ?GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180094318 (-GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@U.c)
 *     _dynamic_atexit_destructor_for__CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache__ @ 0x1800E9DB0 (_dynamic_atexit_destructor_for__CAccentAcrylicBlurBehind--CNoiseSurfaceCache--s_cache__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x180090948 (--1CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CAccentAcrylicBlurBehind::CNoiseSurfaceCache>::operator()(
        __int64 a1,
        CAccentAcrylicBlurBehind::CNoiseSurfaceCache *a2)
{
  if ( a2 )
  {
    CAccentAcrylicBlurBehind::CNoiseSurfaceCache::~CNoiseSurfaceCache(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x20);
  }
}
