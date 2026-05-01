/*
 * XREFs of ?InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ @ 0x1800DA980
 * Callers:
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800D9A00 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800286C8 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x180124100 (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ??$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@Z @ 0x1801EE5D8 (--$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@-$factory_cache_entry@USnapLayoutManager.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapLayoutHelpers::InitializeSnapQuadrantsPolicy(SnapLayoutHelpers *this)
{
  char v1; // di
  __int64 v2; // [rsp+40h] [rbp+18h] BYREF
  __int64 *v3; // [rsp+48h] [rbp+20h] BYREF
  __int64 *v4; // [rsp+50h] [rbp+28h] BYREF
  __int64 *v5; // [rsp+58h] [rbp+30h]

  v2 = 0LL;
  v3 = &v2;
  v5 = &qword_1808DB8E8;
  v1 = 1;
  _InterlockedAdd64(&qword_1808DB8E8, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>,
      &v4,
      &v2);
    _InterlockedDecrement64(&qword_1808DB8E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB8E8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>::call<_lambda_706f938a80e432de8be00e3d53e53638_ &>(
      this,
      &v4,
      &v3);
  }
  if ( v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v2);
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
    &v4,
    &v3);
  if ( !v3
    || (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v3) != 1 )
  {
    v1 = 0;
  }
  byte_1808DAA14 = v1;
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v3);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v4);
}
