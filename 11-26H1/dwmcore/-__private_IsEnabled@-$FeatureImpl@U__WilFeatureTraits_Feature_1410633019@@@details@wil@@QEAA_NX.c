/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1410633019@@@details@wil@@QEAA_NXZ @ 0x18027130C
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_1410633019@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802709F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_1410633019@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_1410633019@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180270FE4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_1410633019@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_1410633019>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_1410633019>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_1410633019>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
