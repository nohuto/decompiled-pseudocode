/*
 * XREFs of ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B51BC
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180288360 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Current@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1801B5480 (-Current@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ??$as@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18024E7B0 (--$as@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@Utype@-$abi@UIUnknown@Foundation@Wi.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1802893F8 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ??0XamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x1802A8900 (--0XamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@QEAA@XZ.c)
 *     ?WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1802C0B30 (-WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     wil::scope_exit__lambda_0d01419ef72c37527064bf309b0b038e___ @ 0x180446154 (wil--scope_exit__lambda_0d01419ef72c37527064bf309b0b038e___.c)
 *     wil::details::lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___::_lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___ @ 0x1804462BC (wil--details--lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___--_lambda_call__lambda_fb7a.c)
 *     ?MicrosoftUIXamlMarkupXamlMetadataProvider@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions4@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180446AD4 (-MicrosoftUIXamlMarkupXamlMetadataProvider@-$consume_WindowsUdk_ApplicationModel_AppExtensions_I.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::LoadMetadata(
        winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK *this)
{
  _QWORD *v2; // rax
  WinUICohabitationFunctions *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h] BYREF
  __int64 v7; // [rsp+30h] [rbp-10h] BYREF

  winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions::Current();
  if ( v7 )
  {
    v2 = (_QWORD *)winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions4<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions>::MicrosoftUIXamlMarkupXamlMetadataProvider(
                     &v7,
                     &v5);
    winrt::impl::as<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v6,
      *v2);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 6, &v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  }
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  v3 = WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_RegisterWASDKThreadWrapper(v3);
  wil::scope_exit__lambda_0d01419ef72c37527064bf309b0b038e___(&v7);
  v4 = (__int64 *)winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider::XamlControlsXamlMetaDataProvider((winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider *)&v5);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 7, v4);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  wil::details::lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___::_lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___(&v7);
}
