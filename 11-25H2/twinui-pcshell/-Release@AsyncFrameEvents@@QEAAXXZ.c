/*
 * XREFs of ?Release@AsyncFrameEvents@@QEAAXXZ @ 0x1804A9AD4
 * Callers:
 *     ?DestroyFrame@CMultitaskingViewFrame@@UEAAXXZ @ 0x1804A8BA0 (-DestroyFrame@CMultitaskingViewFrame@@UEAAXXZ.c)
 *     ?SetFrameInteractionHandler@CMultitaskingViewFrame@@UEAAJPEAUIFrameInteractionEvents@@@Z @ 0x1804A9CE0 (-SetFrameInteractionHandler@CMultitaskingViewFrame@@UEAAJPEAUIFrameInteractionEvents@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall AsyncFrameEvents::Release(AsyncFrameEvents *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
