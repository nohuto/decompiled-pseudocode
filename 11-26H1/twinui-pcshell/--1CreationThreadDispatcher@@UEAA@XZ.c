/*
 * XREFs of ??1CreationThreadDispatcher@@UEAA@XZ @ 0x1801BD65C
 * Callers:
 *     ??_GCreationThreadDispatcher@@UEAAPEAXI@Z @ 0x1801E5490 (--_GCreationThreadDispatcher@@UEAAPEAXI@Z.c)
 *     ??_GThumbnailDeviceFactory@@UEAAPEAXI@Z @ 0x18048F9D0 (--_GThumbnailDeviceFactory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CreationThreadDispatcher::~CreationThreadDispatcher(CreationThreadDispatcher *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)this + 8);
}
