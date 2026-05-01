/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableTouchKeyboardFix@@@details@wil@@QEAA_NXZ @ 0x180485A3C
 * Callers:
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1804840A0 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableTouchKeyboardFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180482DD4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableTouchKeyboardFix@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableTouchKeyboardFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18048492C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableTouchKeyboardFix@@@details@wil@@QE.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableTouchKeyboardFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableTouchKeyboardFix>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableTouchKeyboardFix>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
