/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@details@wil@@QEAA_NXZ @ 0x180294D38
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1801E1120 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@A.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180294AF0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@de.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180294CB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@details@wil@@QEAAX_.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchpadPublicApis3>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchpadPublicApis3>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchpadPublicApis3>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
