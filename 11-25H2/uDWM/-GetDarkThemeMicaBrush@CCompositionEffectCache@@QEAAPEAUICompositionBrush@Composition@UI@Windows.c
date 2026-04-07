/*
 * XREFs of ?GetDarkThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180073EF8
 * Callers:
 *     ?GetActiveBrush@CMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800740A0 (-GetActiveBrush@CMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ.c)
 * Callees:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x1800740EC (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CCompositionEffectCache::GetDarkThemeMicaBrush(
        CCompositionEffectCache *this)
{
  CCompositionEffectCache::EnsureEffectsInitialized(this);
  return (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this + 1);
}
