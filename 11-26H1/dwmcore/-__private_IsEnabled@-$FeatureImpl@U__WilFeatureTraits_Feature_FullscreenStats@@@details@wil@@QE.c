/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAA_NXZ @ 0x180202388
 * Callers:
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802023C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAAX_NW4R.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18020244C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::ReportUsage(a1, v3);
  return v2;
}
