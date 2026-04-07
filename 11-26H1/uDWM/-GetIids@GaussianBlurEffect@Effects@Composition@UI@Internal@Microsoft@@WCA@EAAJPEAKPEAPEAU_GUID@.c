/*
 * XREFs of ?GetIids@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800E65D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::GetIids(
           a1 - 32,
           a2,
           a3);
}
