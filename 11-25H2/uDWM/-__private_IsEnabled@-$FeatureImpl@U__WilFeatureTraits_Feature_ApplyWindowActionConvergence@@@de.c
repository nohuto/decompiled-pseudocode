/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@details@wil@@QEAA_NXZ @ 0x1800E921C
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E495C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConverg.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E7B44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplyWindowActionConvergence>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplyWindowActionConvergence>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplyWindowActionConvergence>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
