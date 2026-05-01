/*
 * XREFs of ?HardwareProductId@?$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180347F84
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034B670 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Gaming_Input_IRawGameController<winrt::Windows::Gaming::Input::IRawGameController>::HardwareProductId(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  unsigned __int16 v8; // [rsp+40h] [rbp-18h] BYREF

  v1 = *a1;
  v8 = 0;
  v6 = 0;
  v2 = *v1;
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 *))(v2 + 72))(v1, &v8);
  winrt::check_hresult(&v5, v3, (__int64)&v6);
  return v8;
}
