/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ @ 0x18056FC28
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     _lambda_20c45cccf234445ae58f04cca16f301c_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AA60 (_lambda_20c45cccf234445ae58f04cca16f301c_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_21db7767322f1ff1c886f131a6440c5a_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AB5C (_lambda_21db7767322f1ff1c886f131a6440c5a_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_a6b4bd61808e145dfc62d4568902935b_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AD30 (_lambda_a6b4bd61808e145dfc62d4568902935b_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18056D47C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18056F268 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
