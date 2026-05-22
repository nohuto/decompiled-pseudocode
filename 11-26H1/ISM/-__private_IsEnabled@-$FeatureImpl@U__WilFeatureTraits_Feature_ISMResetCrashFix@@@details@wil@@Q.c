/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800CB6A8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800C9204 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C81F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CA2E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ISMResetCrashFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ISMResetCrashFix>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ISMResetCrashFix>::ReportUsage((__int64)a1, v4 & 1, 0);
  return v2;
}
