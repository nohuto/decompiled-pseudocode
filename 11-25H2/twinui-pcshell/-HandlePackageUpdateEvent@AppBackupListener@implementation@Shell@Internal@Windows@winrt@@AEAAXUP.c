/*
 * XREFs of ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1800AB090
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800A9908 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AB23C (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x1800AB3F4 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800ACE7C (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1802842E8 (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?IsComplete@?$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805D32D8 (-IsComplete@-$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEventA.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        __int64 **a3)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v4; // rsi
  winrt::impl *v6; // rbx
  __int64 **View; // rax
  winrt::impl **v8; // rax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v9; // rcx
  __int64 v10; // r14
  struct winrt::impl::hstring_header *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  winrt::impl *v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  struct winrt::impl::hstring_header *v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3;
    v4 = a2;
    v6 = 0LL;
    v14 = 0LL;
    View = (__int64 **)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                         a3,
                         &v15);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      View,
      &v22);
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
    v8 = (winrt::impl **)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                           &v22,
                           &v16);
    if ( &v14 != v8 )
    {
      v6 = *v8;
      *v8 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
      v14 = v6;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    if ( (unsigned __int8)winrt::impl::consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs>::IsComplete(v3)
      && winrt::Windows::Internal::Shell::implementation::AppBackupListener::ShouldBackupPackage(
           v9,
           (struct winrt::Windows::ApplicationModel::PackageId *)&v22) )
    {
      v17[1] = v17;
      v10 = winrt::hstring::hstring((winrt::hstring *)v17, L"Update");
      v16 = winrt::impl::duplicate_hstring(v6, v11);
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(a1, &v16, v10);
    }
    if ( v22 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v22);
  }
  catch ( ... )
  {
    v17[0] = winrt::hstring::c_str((winrt::hstring *)&v14);
    v12 = winrt::to_hresult(&v22);
    CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[53],winrt::hresult,unsigned short const *>(
      v13,
      v12,
      v17);
    v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3;
    v4 = a2;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v3);
}
