/*
 * XREFs of ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180238260
 * Callers:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1800505E8 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180237FD4 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802445F0 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJE@Z @ 0x1803EA440 (-SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     std::_Func_impl_no_alloc__lambda_4947cc5562530a5e119976c0de6f80d3__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x1804A1DE0 (std--_Func_impl_no_alloc__lambda_4947cc5562530a5e119976c0de6f80d3__void_enum_winrt-_ea_1804A1DE0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v11 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator3>, &v11);
    v7 = v11;
    v12 = v11;
  }
  else
  {
    v6 = 0;
    v12 = 0LL;
    v7 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult(&v11, v6, &v9);
  v9 = 0;
  v10 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 112LL))(v7, a2, *a3);
  winrt::check_hresult(&v11, v8, &v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
}
