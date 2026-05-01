/*
 * XREFs of ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B52A4
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801B500C (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@I@Z @ 0x1801077DC (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvide.c)
 *     ?Current@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1801B5480 (-Current@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AU?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x1801B54F8 (-DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA-AU-$IVectorVi.c)
 *     ??$as@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@UIObjMgr@@$0A@@impl@winrt@@YA?AUIXamlMetadataProvider@Markup@Xaml@UI@Windows@1@PEAUIObjMgr@@@Z @ 0x1801B554C (--$as@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@UIObjMgr@@$0A@@impl@winrt@@YA-AUIXaml.c)
 *     ?XamlMetadataProvider@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions@UIXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B55DC (-XamlMetadataProvider@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions@UIXaml.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@XZ @ 0x1801B5658 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvider.c)
 *     ??$capture@UIObjMgr@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIObjMgr@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x1801B56C0 (--$capture@UIObjMgr@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA-AU-$com_pt.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::LoadMetadata(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *this,
        __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rbx
  GUID v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h] BYREF

  v7 = CLSID_XamlRuntimeSiteAggregator;
  v9 = 0LL;
  LODWORD(v10) = 1;
  ___capture_UIObjMgr__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIObjMgr___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
    &v8,
    a2,
    &v7,
    &v9,
    &v10);
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::DefaultProviders(&v11);
  v3 = 0;
  v4 = winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::Size(&v11);
  v5 = v8;
  while ( v3 != v4 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetAt(
      &v11,
      (winrt *)&v10,
      v3);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, v10);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
    ++v3;
  }
  winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions::Current();
  if ( v10 )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensions>::XamlMetadataProvider(
      &v10,
      &v9);
    v6 = v9;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, v9);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  }
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  winrt::impl::as<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,IObjMgr,0>(&v10, v5);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 8, &v10);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
}
