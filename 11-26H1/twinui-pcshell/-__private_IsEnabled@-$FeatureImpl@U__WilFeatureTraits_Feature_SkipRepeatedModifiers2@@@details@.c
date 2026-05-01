/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@@details@wil@@QEAA_NXZ @ 0x1806368E0
 * Callers:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180624A4C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180634348 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SkipRepeatedModifiers2@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipRepeatedModifiers2>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipRepeatedModifiers2>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipRepeatedModifiers2>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
