/*
 * XREFs of ??1AppLayoutCache@@UEAA@XZ @ 0x180209984
 * Callers:
 *     ??_EAppLayoutCache@@UEAAPEAXI@Z @ 0x180209948 (--_EAppLayoutCache@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall AppLayoutCache::~AppLayoutCache(AppLayoutCache *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>(this);
}
