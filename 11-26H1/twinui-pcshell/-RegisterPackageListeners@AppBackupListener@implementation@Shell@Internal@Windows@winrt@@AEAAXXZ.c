/*
 * XREFs of ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180616270
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180614CF0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ??$swap@U?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x1800A0F78 (--$swap@U-$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1802865A0 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIPackageCata.c)
 *     ??4?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802B2C0C (--4-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIPackageCata.c)
 *     ??0_lambda_75456b8a2c5d34b3c7a4799327b9064c_@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBQ8AppBackupListener@implementation@Shell@Internal@Windows@2@EAA?AUfire_and_forget@2@UTileCollection@StartScreen@UI@WindowsUdk@2@UTileRemovedEventArgs@StartScreen@UI@WindowsUdk@2@@Z@Z @ 0x1802C19F4 (--0_lambda_75456b8a2c5d34b3c7a4799327b9064c_@@QEAA@$$QEAU-$com_ptr@UAppBackupListener@implementa.c)
 *     ?TileRemoved@?$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileRemovedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180588090 (-TileRemoved@-$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI.c)
 *     ?TileAdded@?$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileAddedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180588118 (-TileAdded@-$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@W.c)
 *     ??$?0V_lambda_01b8b6bbc71cb9281046e68c04c32607_@@@?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageInstallingEventArgs@234@@Foundation@Windows@winrt@@QEAA@V_lambda_01b8b6bbc71cb9281046e68c04c32607_@@@Z @ 0x1806100C0 (--$-0V_lambda_01b8b6bbc71cb9281046e68c04c32607_@@@-$TypedEventHandler@UPackageCatalog@Applicatio.c)
 *     ??$?0V_lambda_5bc99ed09d38e2100802a247bfd45368_@@@?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUninstallingEventArgs@234@@Foundation@Windows@winrt@@QEAA@V_lambda_5bc99ed09d38e2100802a247bfd45368_@@@Z @ 0x180610260 (--$-0V_lambda_5bc99ed09d38e2100802a247bfd45368_@@@-$TypedEventHandler@UPackageCatalog@Applicatio.c)
 *     ??$?0V_lambda_726f44fc88d624015ed27ea51d5455f1_@@@?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUpdatingEventArgs@234@@Foundation@Windows@winrt@@QEAA@V_lambda_726f44fc88d624015ed27ea51d5455f1_@@@Z @ 0x1806102DC (--$-0V_lambda_726f44fc88d624015ed27ea51d5455f1_@@@-$TypedEventHandler@UPackageCatalog@Applicatio.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x1806124B0 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_1806124B0.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x1806124F0 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_1806124F0.c)
 *     ??4?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180612A4C (--4-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_180612A4C.c)
 *     ?PackageUninstalling@?$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUninstallingEventArgs@234@@Foundation@Windows@3@@Z @ 0x180615C30 (-PackageUninstalling@-$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@Applica.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterPackageListeners(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  __int64 *v2; // rsi
  __int64 *strong; // rax
  __int64 v4; // rax
  char v5; // r8
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  char v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax
  char v15; // r8
  __int64 *v16; // rax
  __int64 v17[4]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF
  __int64 v21; // [rsp+98h] [rbp+28h] BYREF

  v2 = (__int64 *)((char *)this + 96);
  strong = winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
             (__int64)this,
             &v21);
  v17[0] = (__int64)winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent;
  LODWORD(v17[1]) = 0;
  v4 = _lambda_75456b8a2c5d34b3c7a4799327b9064c_::_lambda_75456b8a2c5d34b3c7a4799327b9064c_((__int64)v19, strong, v17);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageInstallingEventArgs>::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageInstallingEventArgs>(
    &v20,
    v4);
  v6 = winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollection<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::TileAdded(
         v2,
         &v18,
         v5,
         &v20);
  __4__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BEI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (__int64 *)this + 13,
    v6);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BEI_AA_impl_winrt__QEAA_XZ((__int64 *)&v18);
  if ( v20 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
  v7 = winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
         (__int64)this,
         &v21);
  v17[0] = (__int64)winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent;
  LODWORD(v17[1]) = 0;
  v18 = *(_OWORD *)v17;
  v8 = _lambda_75456b8a2c5d34b3c7a4799327b9064c_::_lambda_75456b8a2c5d34b3c7a4799327b9064c_((__int64)v17, v7, &v18);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUpdatingEventArgs>::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUpdatingEventArgs>(
    &v20,
    v8);
  v10 = winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollection<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::TileRemoved(
          v2,
          v19,
          v9,
          &v20);
  v11 = *v10;
  *v10 = 0LL;
  v17[0] = v11;
  v17[1] = v10[1];
  std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(v17, (__int64 *)this + 15);
  v12 = v17[1];
  v17[1] = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = v12;
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BFI_AA_impl_winrt__QEAA_XZ(v17);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BFI_AA_impl_winrt__QEAA_XZ(v19);
  if ( v20 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
  v13 = winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          (__int64)this,
          &v21);
  v17[0] = (__int64)winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent;
  LODWORD(v17[1]) = 0;
  *(_OWORD *)v19 = *(_OWORD *)v17;
  v14 = _lambda_75456b8a2c5d34b3c7a4799327b9064c_::_lambda_75456b8a2c5d34b3c7a4799327b9064c_((__int64)v17, v13, v19);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUninstallingEventArgs>::TypedEventHandler<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::PackageUninstallingEventArgs>(
    &v20,
    v14);
  v16 = winrt::impl::consume_Windows_ApplicationModel_IPackageCatalog<winrt::Windows::ApplicationModel::IPackageCatalog>::PackageUninstalling(
          v2,
          &v18,
          v15,
          &v20);
  __4__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (__int64 *)this + 17,
    v16);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAA_XZ((__int64 *)&v18);
  if ( v20 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
}
