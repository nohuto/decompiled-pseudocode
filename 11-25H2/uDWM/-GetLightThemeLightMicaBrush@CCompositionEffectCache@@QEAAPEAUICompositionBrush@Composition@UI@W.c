/*
 * XREFs of ?GetLightThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180073ED8
 * Callers:
 *     ?GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x18008A3C0 (-GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows.c)
 * Callees:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x1800740EC (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CCompositionEffectCache::GetLightThemeLightMicaBrush(
        CCompositionEffectCache *this)
{
  CCompositionEffectCache::EnsureEffectsInitialized(this);
  return (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this + 6);
}
