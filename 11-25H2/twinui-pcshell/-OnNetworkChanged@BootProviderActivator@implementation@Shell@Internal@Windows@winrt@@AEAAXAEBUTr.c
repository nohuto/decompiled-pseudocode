/*
 * XREFs of ?OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180643728
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::Invoke @ 0x1806434D0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foun_ea_1806434D0.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CD910 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?revoke_impl@?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@AEAAXUISnapLayoutPickerExtension@Shell@UI@WindowsUdk@3@@Z @ 0x1802B1420 (-revoke_impl@-$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@-$a.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180616ED8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618F30 (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FD8 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?get@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18062FE40 (-get@-$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18064A6DC (-GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::OnNetworkChanged(
        winrt::Windows::Internal::Shell::implementation::BootProviderActivator *this,
        const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *a2,
        const struct winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo *a3)
{
  __int64 *Instance; // rcx
  char IsSystemProvided; // bl
  const char *v8; // r9
  __int64 v9; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-70h] BYREF
  volatile signed __int32 *v15; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v16; // [rsp+48h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v18[48]; // [rsp+58h] [rbp-50h] BYREF
  volatile signed __int32 *v19; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  try
  {
    Instance = (__int64 *)winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::GetInstance();
    IsSystemProvided = winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided(Instance);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v14);
    if ( IsSystemProvided )
    {
      v21 = 0LL;
      v9 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0LL;
      v13 = v9;
      winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 6, &v21);
      v10 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::get(
                                                                                                  &v13,
                                                                                                  &v17);
      _revoke_impl___event_revoker_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension_Shell_UI_WindowsUdk_3__Z(
        (__int64)this + 48,
        v10);
      if ( v9 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
      if ( v21 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v18);
      if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v19 + 2)) )
      {
        v11 = v19;
        v15 = v19;
        if ( v19 )
          _InterlockedIncrement(v19 + 90);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v11 + 2));
        std::wstring::operator=(
          (void **)v11 + 35,
          L"BootProviderActivator::ActivateProvider, Network connected after failing fast");
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v15);
        v12 = v19;
        v16 = v19;
        if ( v19 )
          _InterlockedIncrement(v19 + 90);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v12 + 2));
        *((_BYTE *)v12 + 276) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v16);
      }
      tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v18);
      (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::BootProviderActivator *, __int64 *, const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *, const struct winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo *))(*(_QWORD *)this + 16LL))(
        this,
        &v21,
        a2,
        a3);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xF3,
      (int)"pcshell\\twinui\\cloudpc\\lib\\bootprovideractivator.cpp",
      v8);
  }
}
