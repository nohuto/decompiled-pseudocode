/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TabTipShutdownHandling@@@details@wil@@QEAA_NXZ @ 0x180480714
 * Callers:
 *     ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180479248 (-EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabTipShutdownHandling@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804797AC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabTipShutdownHandling@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabTipShutdownHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18047DE58 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabTipShutdownHandling@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabTipShutdownHandling>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabTipShutdownHandling>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabTipShutdownHandling>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
