/*
 * XREFs of ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x18058FD88
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18057CA40 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802470A0 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     ??$emplace_back@AEBURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA?A_TAEBURect@Foundation@Windows@@@Z @ 0x18046AC64 (--$emplace_back@AEBURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocator@UR.c)
 *     ?SnapAssistPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590DEC (-SnapAssistPositions@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestR.c)
 *     ?LastHitTestResult@WindowDragInputProvider@@QEBA?AUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@XZ @ 0x18059B950 (-LastHitTestResult@WindowDragInputProvider@@QEBA-AUWindowDragHitTestResult@Shell@UI@WindowsUdk@w.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall SnapFlyoutHost::GetGuidedSnapAssistRegions(__int64 a1, _QWORD *a2)
{
  char *v3; // rsi
  char *i; // r14
  LPVOID pv; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+30h] [rbp-20h]
  __int128 v8; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v10; // [rsp+78h] [rbp+28h]

  v10 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  WindowDragInputProvider::LastHitTestResult(*(_QWORD *)(a1 + 112), &v9);
  if ( v9 )
  {
    if ( (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(&v9) == 1 )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::SnapAssistPositions(
        &v9,
        &pv);
      v3 = (char *)pv + 16 * v7;
      for ( i = (char *)pv; i != v3; i += 16 )
      {
        v8 = *(_OWORD *)i;
        std::vector<Windows::Foundation::Rect>::emplace_back<Windows::Foundation::Rect const &>((__int64)a2, &v8);
      }
      if ( pv )
        CoTaskMemFree_0(pv);
    }
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
