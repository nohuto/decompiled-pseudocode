/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@QEAA_NXZ @ 0x1800DEFD8
 * Callers:
 *     ?GetRepresentationWindowData@CWindowData@@QEAAPEAV1@W4WindowRepresentationType@@@Z @ 0x18008B450 (-GetRepresentationWindowData@CWindowData@@QEAAPEAV1@W4WindowRepresentationType@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800DEBB8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfter.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DEF14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@deta.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
