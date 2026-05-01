/*
 * XREFs of ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x180107708
 * Callers:
 *     ?TaskGroupItemCount@CachedDataSource@@QEBAHXZ @ 0x1801073EC (-TaskGroupItemCount@CachedDataSource@@QEBAHXZ.c)
 *     ?NumberOfTaskGroupItems@TaskViewFrame@@UEAAIXZ @ 0x1802D15D0 (-NumberOfTaskGroupItems@TaskViewFrame@@UEAAIXZ.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@I@Z @ 0x1801077DC (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvide.c)
 *     ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180107860 (-AcceptsSwitchItem@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CountTaskGroupSwitchItemsInDataSource(
        const struct winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter *a1,
        __int64 **a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  int NetworkConnectivityLevel; // ebp
  char v7; // cl
  unsigned int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !*(_QWORD *)a1 )
    return 0LL;
  v4 = 0;
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    a2,
    &v9);
  v5 = 0;
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v9);
  while ( v5 != NetworkConnectivityLevel )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetAt(
      &v9,
      &v10,
      v5);
    v7 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
           a1,
           &v10);
    v8 = v4 + 1;
    if ( !v7 )
      v8 = v4;
    v4 = v8;
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
    ++v5;
  }
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  return v4;
}
