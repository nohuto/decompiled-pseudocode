/*
 * XREFs of ??1?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x180089458
 * Callers:
 *     ??1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x180088138 (--1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ.c)
 *     ??_G?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x1800EA8B0 (--_G-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Compos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::~EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(
        __int64 a1)
{
  WindowsDeleteString(*(HSTRING *)(a1 + 56));
  *(_QWORD *)(a1 + 56) = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(a1);
}
