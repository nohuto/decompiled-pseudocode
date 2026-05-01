/*
 * XREFs of ?Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@URenderedEventArgs@Media@Xaml@UI@Windows@winrt@@@Foundation@56@@Z @ 0x180689540
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180102AD4 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180104998 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?RAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@_lambda_b9509f33d83c0e476f815cbceb4935ba_@@QEBA?A_PAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180227BE8 (--$-RAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@_lambda_b9509f33d83c0e476f815c.c)
 *     ??$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@?$factory_cache_entry@UCompositionTarget@Media@Xaml@UI@Windows@winrt@@UICompositionTargetStatics3@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@Z @ 0x180232464 (--$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@-$factory_cache_entry@UCompositionTarget.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::Windows::UI::Xaml::Media::CompositionTarget::Rendered(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_18089CC18);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3> )
  {
    _lambda_b9509f33d83c0e476f815cbceb4935ba_::operator()<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3 const &>(
      (__int64)a1,
      &v13);
    _InterlockedDecrement64(&qword_18089CC18);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089CC18);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>::call<_lambda_b9509f33d83c0e476f815cbceb4935ba_ &>(
      (__int64)a1,
      &v13,
      a3);
  }
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v5 = v13;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, *a3, &v9);
  winrt::check_hresult(&v12, v6, (__int64)&v10);
  v7 = v9;
  *a1 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = v7;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  return a1;
}
