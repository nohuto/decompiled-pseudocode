/*
 * XREFs of _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x1803BE000
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_e29b4b5f2e56a6b31b6c15463fc9fe57___::Invoke @ 0x1803BE380 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803BE380.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002C774 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801D0FF4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180214EBC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18036601C (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     ??$try_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1803BE108 (--$try_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x1803BE5C0 (-ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const___(
        __int64 *a1,
        __int64 *a2,
        __int64 **a3)
{
  _QWORD *v5; // rax
  bool v6; // bl
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+28h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+30h] BYREF
  __int64 **v14; // [rsp+70h] [rbp+38h]
  volatile signed __int32 *v15; // [rsp+78h] [rbp+40h] BYREF

  v14 = a3;
  v13 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager>(
    a1 + 1,
    &v12);
  if ( v12 )
  {
    winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
      a3,
      &v13);
    v11 = 0LL;
    v10 = *winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
             (__int64 *)&v13,
             &v15);
    v5 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
           &v13,
           &v15);
    v6 = winrt::operator==((__int64)v5, (__int64)L"LogonWebHost");
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    if ( v6 )
    {
      *(_BYTE *)(*a1 + 104) = 1;
      v11 = 0x42C8000042C80000LL;
    }
    v7 = *a1;
    v8 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)&v13);
    CNetworkExperienceManager::ShowFlyout(v7, &v10, v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return 0LL;
}
