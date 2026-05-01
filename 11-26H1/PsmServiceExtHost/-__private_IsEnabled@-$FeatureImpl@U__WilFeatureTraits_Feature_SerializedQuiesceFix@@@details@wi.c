/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@details@wil@@QEAA_NXZ @ 0x180079BD8
 * Callers:
 *     ?HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006C04C (-HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180077F20 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007986C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SerializedQuiesceFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SerializedQuiesceFix>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SerializedQuiesceFix>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
