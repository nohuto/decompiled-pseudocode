/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@QEAA_NXZ @ 0x18067544C
 * Callers:
 *     ??0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA@AEBUShellAnimationCoordinator@23456@@Z @ 0x1802158D0 (--0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@AEBUShellAnimationCoordinator@34567@@Z @ 0x180285274 (-Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@.c)
 *     ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x1806750AC (-CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@W.c)
 *     ?ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18067661C (-ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1806751A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806753B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55536872>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55536872>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55536872>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
