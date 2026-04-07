/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@QEAA_NXZ @ 0x1800E238C
 * Callers:
 *     ?GetRepresentationWindowData@CWindowData@@QEAAPEAV1@W4WindowRepresentationType@@@Z @ 0x180090C14 (-GetRepresentationWindowData@CWindowData@@QEAAPEAV1@W4WindowRepresentationType@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E1BD0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfter.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E2204 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@deta.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
