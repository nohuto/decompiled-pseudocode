/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAA_NXZ @ 0x1803BAC30
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18023C500 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18023D960 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 *     ?evaluate@_tip_SearchHideTest@@QEAAXXZ @ 0x18023FE58 (-evaluate@_tip_SearchHideTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B143C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B74F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_46485871>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_46485871>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_46485871>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
