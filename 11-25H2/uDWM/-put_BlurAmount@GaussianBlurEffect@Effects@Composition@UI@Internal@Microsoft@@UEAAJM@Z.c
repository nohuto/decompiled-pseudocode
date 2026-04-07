/*
 * XREFs of ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z @ 0x18009A030
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003EAB8 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        float a2)
{
  if ( a2 < 0.0 || a2 > 250.0 )
    return 2147942487LL;
  *((float *)this + 10) = a2;
  return 0LL;
}
