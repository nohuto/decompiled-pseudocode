/*
 * XREFs of _lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const_&_ @ 0x1805970D8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4___::Invoke @ 0x18059A3C0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--Input--PointerEventHandler__lambda_4df4384ae3b5e.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?CreateSeparator@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1801398C8 (-CreateSeparator@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180294D54 (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ??R?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802BF7A8 (--R-$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureReportedArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803BA62C (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const___(
        __int64 *a1,
        __int64 a2,
        __int64 **a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // [rsp+50h] [rbp+28h] BYREF
  __int64 v9; // [rsp+58h] [rbp+30h] BYREF
  __int64 **v10; // [rsp+60h] [rbp+38h]
  __int64 v11; // [rsp+68h] [rbp+40h] BYREF

  v10 = a3;
  v9 = a2;
  if ( !*(_BYTE *)(*a1 + 160) )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      a3,
      &v11);
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v11) == 2 )
    {
      v5 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(*a1 + 120);
      v9 = 0LL;
      if ( v5 )
        (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v9);
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        a3,
        &v8,
        &v9);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
      v6 = *a1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs<winrt::WindowsUdk::UI::Shell::IShellViewGestureReportedArgs>::InvocationPoint(
        &v8,
        &v9);
      v7 = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId(&v8);
      std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::operator()(v6 + 24, v7);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
}
