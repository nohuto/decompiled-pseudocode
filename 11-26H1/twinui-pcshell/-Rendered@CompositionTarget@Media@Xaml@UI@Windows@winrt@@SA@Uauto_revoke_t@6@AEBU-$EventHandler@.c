/*
 * XREFs of ?Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@URenderedEventArgs@Media@Xaml@UI@Windows@winrt@@@Foundation@56@@Z @ 0x1806B0910
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D1D0 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801AD464 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?RAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@_lambda_b9509f33d83c0e476f815cbceb4935ba_@@QEBA?A_PAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180218ACC (--$-RAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@_lambda_b9509f33d83c0e476f815c.c)
 *     ??$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@?$factory_cache_entry@UCompositionTarget@Media@Xaml@UI@Windows@winrt@@UICompositionTargetStatics3@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@Z @ 0x18022127C (--$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@-$factory_cache_entry@UCompositionTarget.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::Windows::UI::Xaml::Media::CompositionTarget::Rendered(
        __int64 *a1,
        char a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  int v9; // [rsp+28h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 *v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v12) = a2;
  v11 = a1;
  _InterlockedIncrement64(&qword_1808DD2F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3> )
  {
    _lambda_b9509f33d83c0e476f815cbceb4935ba_::operator()<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3 const &>(
      (__int64)a1,
      (__int64 *)&v11);
    _InterlockedDecrement64(&qword_1808DD2F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD2F8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>::call<_lambda_b9509f33d83c0e476f815cbceb4935ba_ &>(
      (__int64)a1,
      (__int64 *)&v11,
      a3);
  }
  v13 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v5 = (__int64)v11;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v11 + 48))(v11, *a3, &v13);
  winrt::check_hresult(&v12, v6, (__int64)&v9);
  v7 = v13;
  *a1 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = v7;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a1;
}
