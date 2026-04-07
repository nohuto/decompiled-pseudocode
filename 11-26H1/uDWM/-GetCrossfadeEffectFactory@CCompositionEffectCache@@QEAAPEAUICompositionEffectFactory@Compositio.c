/*
 * XREFs of ?GetCrossfadeEffectFactory@CCompositionEffectCache@@QEAAPEAUICompositionEffectFactory@Composition@UI@Windows@@XZ @ 0x180042E58
 * Callers:
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180027A84 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z.c)
 * Callees:
 *     ?EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180042E78 (-EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionEffectFactory *__fastcall CCompositionEffectCache::GetCrossfadeEffectFactory(
        CCompositionEffectCache *this)
{
  CCompositionEffectCache::EnsureCrossFadeEffectInitialized(this);
  return (struct Windows::UI::Composition::ICompositionEffectFactory *)*((_QWORD *)this + 8);
}
