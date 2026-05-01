/*
 * XREFs of ?IsWireless@?$consume_Windows_Gaming_Input_IGameController@UIUINavigationController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18034C08C
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034F230 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_Windows_Gaming_Input_IGameController<winrt::Windows::Gaming::Input::IUINavigationController>::IsWireless(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+28h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v10[8]; // [rsp+48h] [rbp-18h] BYREF

  v10[0] = 0;
  v1 = *a1;
  if ( v1 )
  {
    v9 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Windows::Gaming::Input::IGameController>, &v9);
    v3 = v9;
    v6 = v9;
  }
  else
  {
    v2 = 0;
    v6 = 0LL;
    v3 = 0LL;
  }
  v7 = 0;
  v8 = 0LL;
  winrt::check_hresult((int *)&v9, v2, (__int64)&v7);
  v7 = 0;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 104LL))(v3, v10);
  winrt::check_hresult((int *)&v9, v4, (__int64)&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return v10[0];
}
