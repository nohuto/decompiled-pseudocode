/*
 * XREFs of ?HasThreadAccess@?$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180269914
 * Callers:
 *     ?RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ @ 0x18026BE48 (-RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_95fe7ae5c51dffe541392b6a2acce5a3___::Invoke @ 0x1805B40F0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805B40F0.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B536C (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 *     ?CreateMessageWindow@WindowDragInputProvider@@QEAAXUDispatcherQueue@System@Windows@winrt@@@Z @ 0x1805BF98C (-CreateMessageWindow@WindowDragInputProvider@@QEAAXUDispatcherQueue@System@Windows@winrt@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_Windows_System_IDispatcherQueue2<winrt::Windows::System::DispatcherQueue>::HasThreadAccess(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  unsigned int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-20h] BYREF
  __int128 v7; // [rsp+28h] [rbp-18h]
  char v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v8 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v9 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Windows::System::IDispatcherQueue2>, &v9);
    v3 = v9;
    v10 = v9;
  }
  else
  {
    v2 = 0;
    v10 = 0LL;
    v3 = 0LL;
  }
  v6 = 0;
  v7 = 0LL;
  winrt::check_hresult(&v9, v2, &v6);
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 48LL))(v3, &v8);
  winrt::check_hresult(&v9, v4, &v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return v8;
}
