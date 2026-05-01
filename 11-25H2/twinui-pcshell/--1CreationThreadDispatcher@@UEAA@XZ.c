/*
 * XREFs of ??1CreationThreadDispatcher@@UEAA@XZ @ 0x1801C7310
 * Callers:
 *     ??_GCreationThreadDispatcher@@UEAAPEAXI@Z @ 0x1801F01E0 (--_GCreationThreadDispatcher@@UEAAPEAXI@Z.c)
 *     ??_GThumbnailDeviceFactory@@UEAAPEAXI@Z @ 0x18047EE60 (--_GThumbnailDeviceFactory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CreationThreadDispatcher::~CreationThreadDispatcher(CreationThreadDispatcher *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)this + 8);
}
