/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAA_NXZ @ 0x180504CBC
 * Callers:
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180500B10 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 *     ?subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180505A70 (-subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180506000 (-unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB1A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805028AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59118310>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59118310>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59118310>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
