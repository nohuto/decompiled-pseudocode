/*
 * XREFs of ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x1800A1248
 * Callers:
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A0FA4 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0VirtualPinnedAppsHandler@@QEAA@XZ @ 0x18029F7C4 (--0VirtualPinnedAppsHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x1802A63F0 (-RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualPinnedAppsHandler,VirtualPinnedAppsHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopRegistryHelpers * &,IVirtualDesktopVisibilityPolicy * &,std::nullptr_t,IVirtualDesktopLock * &>(
        VirtualPinnedAppsHandler **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopRegistryHelpers **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        VirtualPinnedAppsHandler *a5,
        struct IVirtualDesktopLock **a6)
{
  unsigned int v10; // edi
  void *v11; // rax
  VirtualPinnedAppsHandler *v12; // rbx
  int v13; // ebp
  struct IUnknown *v15; // [rsp+20h] [rbp-28h]
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  *a1 = 0LL;
  v11 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v11;
  if ( v11 )
  {
    v12 = VirtualPinnedAppsHandler::VirtualPinnedAppsHandler((VirtualPinnedAppsHandler *)v11);
    a5 = v12;
    v16 = 0LL;
    v13 = VirtualPinnedAppsHandler::RuntimeClassInitialize(v12, *a2, *a3, *a4, v15, *a6);
    if ( v13 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
      return (unsigned int)v13;
    }
    if ( v12 )
      (*(void (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)v12 + 8LL))(v12);
    *a1 = v12;
    if ( v12 )
      (*(void (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
