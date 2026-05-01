/*
 * XREFs of ??1VirtualDesktopAcessibility@@UEAA@XZ @ 0x18055AEE8
 * Callers:
 *     ??_EVirtualDesktopAcessibility@@UEAAPEAXI@Z @ 0x18055AFB0 (--_EVirtualDesktopAcessibility@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 */

void __fastcall VirtualDesktopAcessibility::~VirtualDesktopAcessibility(VirtualDesktopAcessibility *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 224);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  SmartCookie::~SmartCookie((VirtualDesktopAcessibility *)((char *)this + 64));
  *((_DWORD *)this + 15) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)this + 24);
}
