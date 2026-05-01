/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@QEAA_NXZ @ 0x180568164
 * Callers:
 *     ?unsubscribe_from_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x18026FA80 (-unsubscribe_from_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180568280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 *     ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x180568320 (-subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     _lambda_a4f7c7eeeddd540844b15b912167922b_::operator() @ 0x180569618 (_lambda_a4f7c7eeeddd540844b15b912167922b_--operator().c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180567884 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180567F14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressTouchGestures>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressTouchGestures>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressTouchGestures>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
