/*
 * XREFs of ?GetLightThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A7010
 * Callers:
 *     ?GetActiveBrush@CAcrylicSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180095D20 (-GetActiveBrush@CAcrylicSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@.c)
 * Callees:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180064ACC (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CCompositionEffectCache::GetLightThemeDesktopAcrylicBrush(
        CCompositionEffectCache *this,
        __int64 a2,
        __int64 a3)
{
  CCompositionEffectCache::EnsureEffectsInitialized(this, a2, a3);
  return (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this + 4);
}
