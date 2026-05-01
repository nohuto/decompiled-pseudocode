/*
 * XREFs of _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x180694460
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___::Invoke @ 0x1806963D0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1806963D0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246F98 (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?StaticSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180247294 (-StaticSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180247AFC (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     ?set@ItemIconSize@__ISwitchItemListViewModelArgsPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAU?$IBox@VSize@Foundation@Windows@@@Platform@@@Z @ 0x1802BE260 (-set@ItemIconSize@__ISwitchItemListViewModelArgsPublicNonVirtuals@Switcher@Experiences@Composabl.c)
 *     ??0Point@Foundation@Windows@@QEAA@MM@Z @ 0x1802D009C (--0Point@Foundation@Windows@@QEAA@MM@Z.c)
 *     ??$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z @ 0x18069458C (--$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z.c)
 *     ?ScreenPointToImmersiveMonitorClient@@YA?AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123@@Z @ 0x180696B00 (-ScreenPointToImmersiveMonitorClient@@YA-AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const___winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const___(
        __int64 a1,
        __int64 a2,
        __int64 **a3)
{
  float *v4; // rbx
  float v5; // xmm6_4
  float *v6; // rbx
  float *v7; // rax
  Windows::Foundation::Point *v8; // rax
  _OWORD *v9; // rbx
  _OWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  char v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF
  char v17; // [rsp+A8h] [rbp+38h] BYREF

  v16 = a2;
  if ( *(_QWORD *)a1 )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      a3,
      &v16);
    v4 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                    &v16,
                    &v11);
    v5 = v4[3]
       + *((float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                      &v16,
                      &v12)
         + 1);
    v6 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
                    &v16,
                    &v13);
    v7 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
                    &v16,
                    &v14);
    v8 = Windows::Foundation::Point::Point(
           (Windows::Foundation::Point *)&v15,
           0.0,
           (float)(v5 - (float)(v6[3] + v7[1])) - *(double *)(a1 + 16));
    ScreenPointToImmersiveMonitorClient(
      &v17,
      *(_QWORD *)(a1 + 8),
      _mm_unpacklo_ps((__m128)*(unsigned int *)v8, (__m128)*((unsigned int *)v8 + 1)).m128_u64[0]);
    v9 = winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
           &v16,
           &v14);
    v10 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
            &v16,
            &v13);
    XamlSwitcherTelemetry::DisplayMonitorInfoUpdate<float,float,double const &>(
      (char *)v10 + 12,
      (char *)v9 + 12,
      a1 + 16);
    WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelArgsPublicNonVirtuals::ItemIconSize::set(*(_QWORD *)a1);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  }
}
