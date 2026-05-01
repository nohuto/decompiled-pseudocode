/*
 * XREFs of ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A1C30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVNPSMDesktopShellComponent@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVNPSMDesktopShellComponent@@@Z @ 0x1800A3144 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@E.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x18016D550 (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81.c)
 *     ?ConfigurationChanged@?$consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigurationStatics@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180265520 (-ConfigurationChanged@-$consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigu.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1802B5998 (--0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z.c)
 *     ??$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@winrt@@YA?A_PXZ @ 0x1802BC3F0 (--$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerSta.c)
 *     ??$?0V_lambda_b2611106fbec30b7121fc45a813eabb5_@@@?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@V_lambda_b2611106fbec30b7121fc45a813eabb5_@@@Z @ 0x18057C524 (--$-0V_lambda_b2611106fbec30b7121fc45a813eabb5_@@@-$TypedEventHandler@UTileStore@Tiles@Internal@.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x18057C5C0 (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotific_ea_18057C5C0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct IServiceProvider *a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v3; // rsi
  char *v4; // r15
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // r12
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // r12
  int v13; // eax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  __int64 *v19; // rax
  __int64 v20; // rax
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // r12
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
  int v32; // [rsp+20h] [rbp-88h]
  int v33; // [rsp+20h] [rbp-88h]
  int v34; // [rsp+20h] [rbp-88h]
  __int128 v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 v38; // [rsp+50h] [rbp-58h]
  _BYTE v39[72]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char *v43; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+20h] BYREF

  try
  {
    v3 = this;
    v4 = (char *)this - 48;
    if ( !*((_DWORD *)this + 62) )
    {
      QueryService = a2->lpVtbl->QueryService;
      v6 = (_QWORD *)((char *)this + 112);
      v7 = *((_QWORD *)this + 14);
      *v6 = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, _QWORD *))QueryService)(
             a2,
             &unk_18077EB40,
             &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
             v6);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x23,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v8,
          v32);
      v11 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
              (int)v3 + 128,
              *v6,
              v9,
              v10,
              (__int64)v4);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x28,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v11,
          v32);
    }
    if ( !*((_DWORD *)v3 + 94) )
    {
      v12 = a2->lpVtbl->QueryService;
      if ( *((_QWORD *)v3 + 13) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v3 + 13);
      v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
              a2,
              &IID_IClassicWindowManager,
              &GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5,
              (char *)v3 + 104);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2D,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v13,
          v32);
      v14 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v3 + 15);
      v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
              a2,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              (char *)v3 + 120);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2E,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v15,
          v32);
      v18 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),NPSMDesktopShellComponent *>(
              (int)v3 + 256,
              *((_QWORD *)v3 + 15),
              v16,
              v17,
              (__int64)v4);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x33,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v18,
          v33);
    }
    if ( !*((_QWORD *)v3 + 49) )
    {
      v43 = 0LL;
      v19 = (__int64 *)winrt::Windows::Internal::Tiles::TileStore::TileStore(
                         (winrt::Windows::Internal::Tiles::TileStore *)&v44,
                         (const struct winrt::Windows::System::User *)&v43);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)v3 + 48, v19);
      if ( v44 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v44);
      if ( v43 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v43);
      *(_QWORD *)&v37 = winrt::Windows::Internal::Shell::implementation::WindowTabHost::TileStoreChanged;
      DWORD2(v37) = 0;
      v43 = v4;
      v20 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_(v39, &v43, &v37);
      v37 = *(_OWORD *)v20;
      v38 = *(_QWORD *)(v20 + 16);
      winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>(
        &v43,
        &v37);
      *((_QWORD *)v3 + 49) = *(_QWORD *)winrt::impl::consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigurationStatics<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::ConfigurationChanged(
                                          (char *)v3 + 384,
                                          &v44,
                                          &v43);
      if ( v43 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v43);
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
                  (__int64)v4);
          if ( v26 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x45,
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
    v29 = (__int64 *)winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(&v43);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)v3 + 12, v29);
    if ( v43 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v43);
    v31 = (char *)v3 + 825;
    *((_BYTE *)v3 + 825) = 1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4E,
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
