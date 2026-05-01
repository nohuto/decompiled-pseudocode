/*
 * XREFs of ?SuggestedWindowPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805B5190
 * Callers:
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18026B964 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x1805B3E38 (-GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA-AV-$vector@USuggestedWindowPosition@Shell@UI@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2<winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult>::SuggestedWindowPositions(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  int v8; // [rsp+28h] [rbp-18h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  int v11; // [rsp+68h] [rbp+28h] BYREF
  int v12; // [rsp+6Ch] [rbp+2Ch]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v12 = HIDWORD(a2);
  v11 = 0;
  v14 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v10 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult2>, &v10);
    v5 = v10;
    v13 = v10;
  }
  else
  {
    v4 = 0;
    v13 = 0LL;
    v5 = 0LL;
  }
  v8 = 0;
  v9 = 0LL;
  winrt::check_hresult((int *)&v10, v4, (__int64)&v8);
  v8 = 0;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v11, &v14);
  winrt::check_hresult((int *)&v10, v6, (__int64)&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  *(_QWORD *)a2 = v14;
  *(_DWORD *)(a2 + 8) = v11;
  return a2;
}
