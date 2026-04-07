/*
 * XREFs of ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180036264
 * Callers:
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x180030C0C (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@@012@@Z @ 0x180037200 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@_ea_180037200.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@E.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect **a1)
{
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(v1);
  }
  return result;
}
