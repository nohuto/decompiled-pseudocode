/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAA_NXZ @ 0x1800AE8CC
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000E0B0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AD514 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     std::_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800AE4C0 (std--_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT__ea_1800AE4C0.c)
 *     ?SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z @ 0x180136BD0 (-SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z.c)
 *     ?GetParentDelegationTarget@DWMInputRouter@@UEAAJPEAPEAUIFocusInputTarget@@@Z @ 0x1801A32F0 (-GetParentDelegationTarget@DWMInputRouter@@UEAAJPEAPEAUIFocusInputTarget@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AC088 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@detail.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AD250 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAAX_NW4R.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::ReportUsage((__int64)a1, v5 & 1, v3);
  return v2;
}
