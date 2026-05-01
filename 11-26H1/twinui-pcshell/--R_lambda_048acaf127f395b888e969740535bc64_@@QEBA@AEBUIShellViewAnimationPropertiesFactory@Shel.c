/*
 * XREFs of ??R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18029DA58
 * Callers:
 *     ??0ShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@QEAA@_KAEBUGestureAnimationData@Input@234@@Z @ 0x18029D9D8 (--0ShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@QEAA@_KAEBUGestureAnimationData@Input.c)
 *     ??$call@AEAV_lambda_048acaf127f395b888e969740535bc64_@@@?$factory_cache_entry@UShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@UIShellViewAnimationPropertiesFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_048acaf127f395b888e969740535bc64_@@@Z @ 0x18069B96C (--$call@AEAV_lambda_048acaf127f395b888e969740535bc64_@@@-$factory_cache_entry@UShellViewAnimatio.c)
 * Callees:
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory@UIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBUGestureAnimationData@Input@UI@WindowsUdk@3@@Z @ 0x18029DA88 (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory@UIShellViewAn.c)
 */

__int64 __fastcall _lambda_048acaf127f395b888e969740535bc64_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory<winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>::CreateInstance(
    a3,
    a2,
    **(_QWORD **)a1,
    *(_QWORD *)(a1 + 8));
  return a2;
}
