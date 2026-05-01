/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FSOE@@@details@wil@@QEAA_NXZ @ 0x18061CAB4
 * Callers:
 *     _lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1::operator() @ 0x180619440 (_lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FSOE@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18061A804 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FSOE@@@details@wil@@AEAA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FSOE@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18061C494 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FSOE@@@details@wil@@QEAAX_NW4ReportingKin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FSOE>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FSOE>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FSOE>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
