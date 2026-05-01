/*
 * XREFs of ?SuggestedWindowPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180591238
 * Callers:
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x180273A28 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x18058FE78 (-GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA-AV-$vector@USuggestedWindowPosition@Shell@UI@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+38h] [rbp-18h]
  int v11; // [rsp+70h] [rbp+20h] BYREF
  int v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+7Ch] [rbp+2Ch]
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  v13 = HIDWORD(a2);
  v12 = 0;
  v8 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v14 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult2>, &v14);
    v5 = v14;
    v15 = v14;
  }
  else
  {
    v4 = 0;
    v15 = 0LL;
    v5 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult(&v11, v4, (__int64)&v9);
  v9 = 0;
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v12, &v8);
  winrt::check_hresult(&v11, v6, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  *(_QWORD *)a2 = v8;
  *(_DWORD *)(a2 + 8) = v12;
  return a2;
}
