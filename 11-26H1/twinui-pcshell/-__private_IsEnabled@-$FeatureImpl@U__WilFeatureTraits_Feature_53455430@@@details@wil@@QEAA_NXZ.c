/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ @ 0x180593518
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x180267D60 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     _lambda_31a0a1389f2a17342555b3fdd039100d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058E764 (_lambda_31a0a1389f2a17342555b3fdd039100d_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_9d63f5b83c4626ea321dd6f3d651c13d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058E868 (_lambda_9d63f5b83c4626ea321dd6f3d651c13d_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_f0f0704f501388b5535c1eee59b56383_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058EA44 (_lambda_f0f0704f501388b5535c1eee59b56383_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180591198 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180592B8C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
