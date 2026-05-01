/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SingleEnduserOobeApp@@@details@wil@@QEAA_NXZ @ 0x1803BD498
 * Callers:
 *     ?IsOobeContinuation@@YA_NXZ @ 0x1803B9C5C (-IsOobeContinuation@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SingleEnduserOobeApp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B9068 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SingleEnduserOobeApp@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SingleEnduserOobeApp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BBE5C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SingleEnduserOobeApp@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SingleEnduserOobeApp>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SingleEnduserOobeApp>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SingleEnduserOobeApp>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
