/*
 * XREFs of ?GetVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18045B060
 * Callers:
 *     ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x180244EA0 (-RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::GetVisibilityForMonitor(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+28h] [rbp-18h]
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0;
  v3 = *a1;
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator3>, &v11);
    v5 = v11;
    v12 = v11;
  }
  else
  {
    v4 = 0;
    v12 = 0LL;
    v5 = 0LL;
  }
  v8 = 0;
  v9 = 0LL;
  winrt::check_hresult((int *)&v11, v4, (__int64)&v8);
  v8 = 0;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v5 + 88LL))(v5, a2, &v10);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  return v10;
}
