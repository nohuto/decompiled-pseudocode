/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@QEAA_NXZ @ 0x1800AD378
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800ABB28 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AAD90 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayMana.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ACE20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
