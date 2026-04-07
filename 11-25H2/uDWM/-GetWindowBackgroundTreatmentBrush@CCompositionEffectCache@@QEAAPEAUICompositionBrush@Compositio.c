/*
 * XREFs of ?GetWindowBackgroundTreatmentBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180074080
 * Callers:
 *     ?GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180074050 (-GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Wind.c)
 * Callees:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x1800740EC (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CCompositionEffectCache::GetWindowBackgroundTreatmentBrush(
        CCompositionEffectCache *this)
{
  CCompositionEffectCache::EnsureEffectsInitialized(this);
  return (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this + 7);
}
