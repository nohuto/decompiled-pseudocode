/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@QEAA_NXZ @ 0x1805C8ADC
 * Callers:
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x1802964E4 (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805C1C9C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805C4264 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellHostPinning@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellHostPinning>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellHostPinning>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellHostPinning>::ReportUsage(a1, v4 & 1);
  return v2;
}
