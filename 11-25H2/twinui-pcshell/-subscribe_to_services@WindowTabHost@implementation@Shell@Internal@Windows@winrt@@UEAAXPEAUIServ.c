/*
 * XREFs of ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180156990
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVNPSMDesktopShellComponent@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVNPSMDesktopShellComponent@@@Z @ 0x180156D7C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_180156D7C.c)
 *     ?ConfigurationChanged@?$consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigurationStatics@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1801584F0 (-ConfigurationChanged@-$consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigu.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x180158544 (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1802C004C (--0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z.c)
 *     ??$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@winrt@@YA?A_PXZ @ 0x1802C5804 (--$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerSta.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x18055840C (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotific_ea_18055840C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct IServiceProvider *a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v3; // rsi
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  int v12; // eax
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  __int64 *v18; // rax
  char *v19; // rax
  __int64 v20; // rdx
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  _QWORD *v22; // rbx
  _QWORD *v23; // rcx
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  HRESULT (__stdcall *v27)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  __int64 v28; // rcx
  __int64 *v29; // rax
  const char *v30; // r9
  _BYTE *v31; // rax
  int v32; // [rsp+20h] [rbp-68h]
  int v33; // [rsp+20h] [rbp-68h]
  int v34; // [rsp+20h] [rbp-68h]
  _BYTE v37[12]; // [rsp+38h] [rbp-50h] BYREF
  int v38; // [rsp+44h] [rbp-44h]
  __int128 v39; // [rsp+48h] [rbp-40h]
  __int64 v40; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v44; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+20h] BYREF

  try
  {
    v3 = this;
    if ( !*((_DWORD *)this + 62) )
    {
      QueryService = a2->lpVtbl->QueryService;
      v5 = (_QWORD *)((char *)this + 112);
      v6 = *((_QWORD *)this + 14);
      *v5 = 0LL;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, _QWORD *))QueryService)(
             a2,
             &unk_18075BA40,
             &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
             v5);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x24,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v7,
          v32);
      v10 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
              (int)v3 + 128,
              *v5,
              v8,
              v9,
              (__int64)v3 - 48);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x29,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v10,
          v32);
    }
    if ( !*((_DWORD *)v3 + 94) )
    {
      v11 = a2->lpVtbl->QueryService;
      if ( *((_QWORD *)v3 + 13) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v3 + 13);
      v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
              a2,
              &IID_IClassicWindowManager,
              &GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5,
              (char *)v3 + 104);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2E,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v12,
          v32);
      v13 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v3 + 15);
      v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
              a2,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              (char *)v3 + 120);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2F,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v14,
          v32);
      v17 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),NPSMDesktopShellComponent *>(
              (int)v3 + 256,
              *((_QWORD *)v3 + 15),
              v15,
              v16,
              (__int64)v3 - 48);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x34,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v17,
          v33);
    }
    if ( !*((_QWORD *)v3 + 49) )
    {
      v44 = 0LL;
      v18 = (__int64 *)winrt::Windows::Internal::Tiles::TileStore::TileStore(
                         (winrt::Windows::Internal::Tiles::TileStore *)&v45,
                         (const struct winrt::Windows::System::User *)&v44);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)v3 + 48, v18);
      if ( v45 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v45);
      if ( v44 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v44);
      *(_QWORD *)&v39 = (char *)v3 - 48;
      *((_QWORD *)&v39 + 1) = winrt::Windows::Internal::Shell::implementation::WindowTabHost::TileStoreChanged;
      LODWORD(v40) = 0;
      HIDWORD(v40) = v38;
      v19 = (char *)operator new(0x28uLL);
      winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v19 + 8));
      *(_OWORD *)(v20 + 16) = v39;
      *(_QWORD *)(v20 + 32) = v40;
      _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
      *(_QWORD *)v20 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>,_lambda_ae2144ca514bc0fccfa4c87b511bcbf7_>::`vftable';
      v44 = v20;
      *((_QWORD *)v3 + 49) = *(_QWORD *)winrt::impl::consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigurationStatics<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::ConfigurationChanged(
                                          (char *)v3 + 384,
                                          v37,
                                          &v44);
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v44);
    }
    if ( !*((_DWORD *)v3 + 136) )
    {
      v21 = a2->lpVtbl->QueryService;
      v22 = (_QWORD *)((char *)v3 + 416);
      v23 = (_QWORD *)*((_QWORD *)v3 + 52);
      *((_QWORD *)v3 + 52) = 0LL;
      if ( v23 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v23 + 16LL))(v23, *v23);
      if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v21)(
             a2,
             &SID_VirtualDesktopNotificationService,
             &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
             (char *)v3 + 416) >= 0 )
      {
        if ( *v22 )
        {
          v26 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
                  (int)v3 + 424,
                  *v22,
                  v24,
                  v25,
                  (__int64)v3 - 48);
          if ( v26 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x46,
              (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
              (const char *)(unsigned int)v26,
              v34);
        }
        v27 = a2->lpVtbl->QueryService;
        v28 = *((_QWORD *)v3 + 51);
        *((_QWORD *)v3 + 51) = 0LL;
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v27)(
          a2,
          &SID_VirtualDesktopManager,
          &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
          (char *)v3 + 408);
      }
    }
    v29 = (__int64 *)winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(&v45);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)v3 + 12, v29);
    if ( v45 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v45);
    v31 = (char *)v3 + 825;
    *((_BYTE *)v3 + 825) = 1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4F,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      v30);
    v31 = (char *)this + 825;
    v3 = this;
  }
  if ( !*v31 )
    (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::WindowTabHost *, _QWORD))(*(_QWORD *)v3 + 56LL))(
      v3,
      0LL);
}
