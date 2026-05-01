/*
 * XREFs of ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x1805B3E38
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805A0510 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180237F80 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     ??$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805B1E90 (--$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@-$vector@USuggest.c)
 *     ?SuggestedWindowPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805B5190 (-SuggestedWindowPositions@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHit.c)
 *     ?LastHitTestResult@WindowDragInputProvider@@QEBA?AUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@XZ @ 0x1805BFC04 (-LastHitTestResult@WindowDragInputProvider@@QEBA-AUWindowDragHitTestResult@Shell@UI@WindowsUdk@w.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall SnapFlyoutHost::GetSuggestedWindowPositions(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rbx
  char *v4; // rbp
  __int64 *v5; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *i; // rbx
  LPVOID pv; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h]

  v11 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  WindowDragInputProvider::LastHitTestResult(*(_QWORD *)(a1 + 112), &v10);
  if ( v10
    && (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(&v10) == 1 )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2<winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult>::SuggestedWindowPositions(
      &v10,
      &pv);
    v3 = (__int64 *)pv;
    v4 = (char *)pv + 8 * v9;
    while ( v3 != (__int64 *)v4 )
    {
      v5 = (__int64 *)a2[1];
      if ( v5 == (__int64 *)a2[2] )
      {
        std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::_Emplace_reallocate<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition const &>(
          (__int64)a2,
          v5,
          v3);
      }
      else
      {
        *v5 = *v3;
        Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v5);
        a2[1] += 8LL;
      }
      ++v3;
    }
    if ( pv )
    {
      for ( i = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)pv;
            i != (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v4;
            i = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)i + 8) )
      {
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(i);
      }
      CoTaskMemFree_0(pv);
    }
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
