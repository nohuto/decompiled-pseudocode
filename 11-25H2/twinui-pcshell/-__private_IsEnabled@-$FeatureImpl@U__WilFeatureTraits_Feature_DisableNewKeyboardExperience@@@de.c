/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperience@@@details@wil@@QEAA_NXZ @ 0x180468910
 * Callers:
 *     _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x1804578C0 (_lambda_c20ddfa74c13e3309a3b622ad13c0825_--operator()_winrt--WindowsUdk--UI--Shell-_ea_1804578C0.c)
 *     _lambda_125ce7e834e11fd92811414f264430c1_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x18045809C (_lambda_125ce7e834e11fd92811414f264430c1_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1804634F4 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperience@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804606C8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180463D88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableNewKeyboardExperience@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableNewKeyboardExperience>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableNewKeyboardExperience>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableNewKeyboardExperience>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
