/*
 * XREFs of ?Resources@?$consume_Windows_UI_Xaml_IApplication@UXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18059ABB8
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180599038 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IApplication<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication>::Resources(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v12 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplication>, &v12);
    v5 = v12;
    v9 = v12;
  }
  else
  {
    v4 = 0;
    v9 = 0LL;
    v5 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult((int *)&v12, v4, (__int64)&v10);
  v10 = 0;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v8);
  winrt::check_hresult((int *)&v12, v6, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  *a2 = v8;
  return a2;
}
