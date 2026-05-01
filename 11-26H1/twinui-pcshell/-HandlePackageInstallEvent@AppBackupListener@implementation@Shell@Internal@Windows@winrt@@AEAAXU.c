/*
 * XREFs of ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x18002D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x18002A768 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002C714 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800306AC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z @ 0x1801A5430 (-_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeo.c)
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x18027B8D0 (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     memcpy_s_3 @ 0x1802D97A0 (memcpy_s_3.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // r14d
  struct winrt::impl::shared_hstring_header *v9; // rbx
  __int64 **v10; // rax
  struct winrt::impl::shared_hstring_header **v11; // rax
  struct winrt::impl::shared_hstring_header *v12; // rbx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // r8d
  winrt::hstring *v16; // rax
  struct winrt::impl::shared_hstring_header *v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  char v20[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-38h]
  __int64 *v22; // [rsp+98h] [rbp+20h] BYREF

  v6 = std::_WChar_traits<wchar_t>::length(&pvData);
  v8 = v6;
  if ( v6 )
  {
    v9 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)v6, v7);
    memcpy_s_3((char *)v9 + 28, 2LL * v8, &pvData, 2LL * v8);
  }
  else
  {
    v9 = 0LL;
  }
  v17 = v9;
  v10 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                      a3,
                      &v18);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    v10,
    &v22);
  if ( v18 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  v11 = (struct winrt::impl::shared_hstring_header **)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                                                        &v22,
                                                        &v19);
  if ( &v17 != v11 )
  {
    v12 = *v11;
    *v11 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
    v17 = v12;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
  if ( (unsigned __int8)_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_(a3)
    && winrt::Windows::Internal::Shell::implementation::AppBackupListener::ShouldBackupPackage(v13, &v22) )
  {
    v21 = &v19;
    v14 = winrt::hstring::hstring((winrt::hstring *)&v19, L"Install");
    v16 = winrt::hstring::hstring((winrt::hstring *)v20, (const struct winrt::hstring *)&v17, v15);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(a1, v16, v14);
  }
  if ( v22 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v22);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
}
