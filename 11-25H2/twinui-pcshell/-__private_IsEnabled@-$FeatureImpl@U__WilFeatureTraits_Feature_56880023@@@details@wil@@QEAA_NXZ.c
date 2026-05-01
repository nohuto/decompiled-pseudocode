/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56880023@@@details@wil@@QEAA_NXZ @ 0x18067758C
 * Callers:
 *     ??0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA@AEBUShellAnimationCoordinator@23456@@Z @ 0x1802158D0 (--0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180676E2C (-UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Interna.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56880023@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180676104 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56880023@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56880023@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180676990 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56880023@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56880023>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56880023>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56880023>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
