/*
 * XREFs of ?OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUWindowMigrationEventArgs@94567@@Z @ 0x180565170
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180223CCC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x180242D50 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ?TryFindGroupWithWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x18026D298 (-TryFindGroupWithWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGr.c)
 *     ?MigrationReason@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180338B90 (-MigrationReason@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventAr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnWindowMigrationEvent(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *a3)
{
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !(unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::MigrationReason((__int64 *)a3)
    && *((_QWORD *)this + 57) )
  {
    v6 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)a3);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::TryFindGroupWithWindow(
      (__int64 **)this + 57,
      v5,
      &v6);
    if ( v5[0] )
    {
      if ( *((_QWORD *)this + 58) )
        winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
          (__int64 *)this + 58,
          v5);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5);
  }
}
