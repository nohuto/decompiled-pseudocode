/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SMB1@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180309A60
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ShellDataModel_HiddenPidlUnderflow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803095F4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ShellDataMode.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SMB1@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18030937C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SMB1@@@details@wil@@AEAA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SMB1@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803097C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SMB1@@@details@wil@@QEAAX_NW4ReportingKin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SMB1>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SMB1>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SMB1>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
