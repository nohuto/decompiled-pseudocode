/*
 * XREFs of ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1801974C0
 * Callers:
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800971F4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180197124 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180197398 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x180250050 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802500A0 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180250190 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1803853FC (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180387130 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnVisibilityChanged@CVirtualTouchpadExperienceManager@@AEAAXXZ @ 0x180390CF0 (-OnVisibilityChanged@CVirtualTouchpadExperienceManager@@AEAAXXZ.c)
 *     ?OnViewHidden@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803B4BF0 (-OnViewHidden@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803B4CC0 (-OnViewShown@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJE@Z @ 0x1803E0F70 (-SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     std::_Func_impl_no_alloc__lambda_65531314798acc7a8393a9f386776a3e__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x1804912E0 (std--_Func_impl_no_alloc__lambda_65531314798acc7a8393a9f386776a3e__void_enum_winrt-_ea_1804912E0.c)
 *     std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x180491310 (std--_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt-_ea_180491310.c)
 *     ?ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4ViewVisibility@3UI@WindowsUdk@6@@Z @ 0x1805D2120 (-ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4V.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, v3);
  return winrt::check_hresult(&v8, v4, &v6);
}
