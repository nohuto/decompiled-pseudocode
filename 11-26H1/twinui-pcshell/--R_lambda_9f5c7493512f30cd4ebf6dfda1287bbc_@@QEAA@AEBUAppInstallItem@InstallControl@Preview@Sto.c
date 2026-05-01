/*
 * XREFs of ??R_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1805CD4A8
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805D3ED0 (-Invoke@-$delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@Application.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A624 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC238 (--1-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@1@XZ @ 0x1805CC6A0 (--C-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ??R?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@QEBAXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z @ 0x1805CDE34 (--R-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 *     ?ErrorCode@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@UIAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805CFC18 (-ErrorCode@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@UIA.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805DB080 (-close@-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _lambda_9f5c7493512f30cd4ebf6dfda1287bbc_::operator()(__int64 a1, __int64 **a2, __int64 a3)
{
  int v5; // edi
  _DWORD *v6; // rbx
  wil::details *v7; // rsi
  int v8; // eax
  void *v9; // rdx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  wil::details **v14; // rax
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+28h] [rbp-18h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h]
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v20; // [rsp+88h] [rbp+48h] BYREF

  v19 = a3;
  winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
    a2,
    &v18);
  v5 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v18);
  tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
    a1,
    (__int64 *)&v20);
  v6 = v20;
  v20[74] = v5;
  v7 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v15);
  winrt::check_hresult((int *)&v19, v8, (__int64)&v16);
  *((_QWORD *)v6 + 35) = v15;
  v6[72] = *(_DWORD *)winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>::ErrorCode(
                        &v18,
                        &v19);
  tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(&v20);
  if ( *(_QWORD *)(a1 + 80) )
    std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::operator()(
      a1 + 24,
      a2);
  v10 = v5 - 7;
  if ( !v10 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 || (v13 = v12 - 1) == 0 || (unsigned int)(v13 - 1) <= 1 )
  {
    v14 = *(wil::details ***)(a1 + 8);
    if ( v14 )
      v7 = *v14;
    wil::details::SetEvent(v7, v9);
  }
  tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)&v20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
}
