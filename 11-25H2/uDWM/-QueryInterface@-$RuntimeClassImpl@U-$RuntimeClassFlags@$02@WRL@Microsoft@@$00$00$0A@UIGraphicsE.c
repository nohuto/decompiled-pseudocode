/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DA20
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EADB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800EADB0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EADC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800EADC0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EADD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800EADD0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EADE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800EADE0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>>(
           a1,
           a2,
           a3);
}
