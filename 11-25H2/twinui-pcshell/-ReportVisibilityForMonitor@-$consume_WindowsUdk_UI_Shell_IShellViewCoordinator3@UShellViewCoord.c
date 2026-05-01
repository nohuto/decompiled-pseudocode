/*
 * XREFs of ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1802508B8
 * Callers:
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802500A0 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        unsigned int *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+28h] [rbp-18h] BYREF
  __int128 v11; // [rsp+30h] [rbp-10h]
  char v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v13 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator3>, &v13);
    v7 = v13;
    v9 = v13;
  }
  else
  {
    v6 = 0;
    v9 = 0LL;
    v7 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult(&v12, v6, &v10);
  v10 = 0;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 112LL))(v7, a2, *a3);
  winrt::check_hresult(&v12, v8, &v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}
