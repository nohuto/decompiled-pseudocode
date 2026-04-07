/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@details@wil@@QEAA_NXZ @ 0x1800E4F38
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E0E3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E40CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixDwmAnimations>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixDwmAnimations>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixDwmAnimations>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
