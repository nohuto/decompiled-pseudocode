/*
 * XREFs of ?GetWindowBackgroundTreatmentBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180064A8C
 * Callers:
 *     ?GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180064A5C (-GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Wind.c)
 * Callees:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180064ACC (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CCompositionEffectCache::GetWindowBackgroundTreatmentBrush(
        CCompositionEffectCache *this)
{
  CCompositionEffectCache::EnsureEffectsInitialized(this);
  return (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this + 7);
}
