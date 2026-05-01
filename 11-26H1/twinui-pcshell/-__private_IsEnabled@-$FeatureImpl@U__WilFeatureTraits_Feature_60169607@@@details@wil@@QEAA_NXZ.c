/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@QEAA_NXZ @ 0x180504F20
 * Callers:
 *     _lambda_3a62f6db24c191cee0c877e4c7c22fb6_::operator() @ 0x1804F7964 (_lambda_3a62f6db24c191cee0c877e4c7c22fb6_--operator().c)
 *     _lambda_61aaaea7faa44b78167a0b42c2312525_::operator() @ 0x1804F7D5C (_lambda_61aaaea7faa44b78167a0b42c2312525_--operator().c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180500E90 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180501850 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB844 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180502CF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_60169607@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_60169607>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60169607>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60169607>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
