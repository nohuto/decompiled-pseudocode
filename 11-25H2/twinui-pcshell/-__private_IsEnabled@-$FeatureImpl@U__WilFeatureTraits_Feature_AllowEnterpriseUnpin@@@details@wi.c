/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NXZ @ 0x180321990
 * Callers:
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1803209F4 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x180321748 (-RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180320444 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032162C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
