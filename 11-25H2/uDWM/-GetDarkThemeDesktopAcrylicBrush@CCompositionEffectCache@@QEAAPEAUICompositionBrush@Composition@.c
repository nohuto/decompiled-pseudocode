/*
 * XREFs of ?GetDarkThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A9650
 * Callers:
 *     ?GetActiveBrush@CAcrylicSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A16F0 (-GetActiveBrush@CAcrylicSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@.c)
 * Callees:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x1800740EC (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CCompositionEffectCache::GetDarkThemeDesktopAcrylicBrush(
        CCompositionEffectCache *this,
        __int64 a2,
        __int64 a3)
{
  CCompositionEffectCache::EnsureEffectsInitialized(this, a2, a3);
  return (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this + 3);
}
