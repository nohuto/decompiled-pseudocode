/*
 * XREFs of ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x1805B3D38
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805A0510 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180237F80 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     ??$emplace_back@AEAURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAURect@Foundation@Windows@@AEAU234@@Z @ 0x180466390 (--$emplace_back@AEAURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocator@UR.c)
 *     ?SnapAssistPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805B4D34 (-SnapAssistPositions@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestR.c)
 *     ?LastHitTestResult@WindowDragInputProvider@@QEBA?AUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@XZ @ 0x1805BFC04 (-LastHitTestResult@WindowDragInputProvider@@QEBA-AUWindowDragHitTestResult@Shell@UI@WindowsUdk@w.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall SnapFlyoutHost::GetGuidedSnapAssistRegions(__int64 a1, _QWORD *a2)
{
  __int128 *v3; // rdi
  __int128 *v4; // rsi
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
      v3 = (__int128 *)pv;
      v4 = (__int128 *)((char *)pv + 16 * v7);
      while ( v3 != v4 )
      {
        v8 = *v3;
        std::vector<Windows::Foundation::Rect>::emplace_back<Windows::Foundation::Rect &>(a2, &v8);
        ++v3;
      }
      if ( pv )
        CoTaskMemFree_0(pv);
    }
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
