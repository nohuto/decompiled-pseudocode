/*
 * XREFs of ?SnapAssistPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805B4D34
 * Callers:
 *     ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x1805B3D38 (-GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA-AV-$vector@URect@Foundation@Windows@@V-$allocat.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::SnapAssistPositions(
        __int64 **a1,
        __int64 a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v2 = *a1;
  LODWORD(v10) = 0;
  v11 = 0LL;
  v7 = 0;
  v4 = *v2;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64 *))(v4 + 80))(v2, &v10, &v11);
  winrt::check_hresult(&v9, v5, (__int64)&v7);
  *(_QWORD *)a2 = v11;
  *(_DWORD *)(a2 + 8) = v10;
  return a2;
}
