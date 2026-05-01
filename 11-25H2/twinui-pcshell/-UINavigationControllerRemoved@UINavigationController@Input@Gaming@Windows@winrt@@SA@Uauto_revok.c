/*
 * XREFs of ?UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x180350D30
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18034F714 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@winrt@@YA?A_PXZ @ 0x1802AAF50 (--$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationCont.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::Windows::Gaming::Input::UINavigationController::UINavigationControllerRemoved(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 *v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  int v11; // [rsp+34h] [rbp-34h] BYREF
  int v12; // [rsp+38h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]

  v9 = a1;
  winrt::get_activation_factory<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>(
    (__int64 *)&v9,
    a2,
    a3);
  v10 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v5 = (__int64)v9;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v9 + 64))(v9, *a3, &v10);
  winrt::check_hresult(&v11, v6, (__int64)&v12);
  v7 = v10;
  *a1 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = v7;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a1;
}
