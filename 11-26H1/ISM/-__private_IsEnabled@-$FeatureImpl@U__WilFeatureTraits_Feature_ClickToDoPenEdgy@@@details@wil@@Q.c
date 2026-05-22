/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@details@wil@@QEAA_NXZ @ 0x18015DD14
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180085720 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18015C9B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015D344 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::ReportUsage((__int64)a1, v5 & 1, v3);
  return v2;
}
