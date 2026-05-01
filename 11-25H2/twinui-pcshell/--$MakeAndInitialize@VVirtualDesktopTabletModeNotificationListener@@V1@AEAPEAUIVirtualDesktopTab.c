/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopTabletModeNotificationListener@@V1@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModeNotificationListener@@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Z @ 0x18007EF3C
 * Callers:
 *     ?VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18007EE5C (-VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UITabletModeChangeListener@@@WRL@Microsoft@@QEAA@XZ @ 0x18007F008 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UITabletModeChangeListener@@@WRL@Micro.c)
 *     ?RuntimeClassInitialize@VirtualDesktopTabletModeNotificationListener@@QEAAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@@Z @ 0x18007F048 (-RuntimeClassInitialize@VirtualDesktopTabletModeNotificationListener@@QEAAJPEAUIVirtualDesktopTa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopTabletModeNotificationListener,VirtualDesktopTabletModeNotificationListener,IVirtualDesktopTabletModePolicy * &,IServiceProvider * &>(
        VirtualDesktopTabletModeNotificationListener **a1,
        struct IVirtualDesktopTabletModePolicy **a2,
        struct IServiceProvider **a3)
{
  VirtualDesktopTabletModeNotificationListener *v6; // rax
  VirtualDesktopTabletModeNotificationListener *v7; // rbx
  int v8; // edi
  VirtualDesktopTabletModeNotificationListener *v10; // [rsp+40h] [rbp+8h] BYREF
  VirtualDesktopTabletModeNotificationListener *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (VirtualDesktopTabletModeNotificationListener *)operator new(
                                                         0x20uLL,
                                                         (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v10 = v6;
  if ( !v6 )
    return 2147942414LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeChangeListener>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeChangeListener>(v6);
  *(_QWORD *)v7 = &VirtualDesktopTabletModeNotificationListener::`vftable';
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  v11 = v7;
  v10 = 0LL;
  v8 = VirtualDesktopTabletModeNotificationListener::RuntimeClassInitialize(v7, *a2, *a3);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v10);
    return (unsigned int)v8;
  }
  else
  {
    (*(void (__fastcall **)(VirtualDesktopTabletModeNotificationListener *))(*(_QWORD *)v7 + 8LL))(v7);
    *a1 = v7;
    (*(void (__fastcall **)(VirtualDesktopTabletModeNotificationListener *))(*(_QWORD *)v7 + 16LL))(v7);
    return 0LL;
  }
}
