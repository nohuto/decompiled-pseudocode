/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@@details@wil@@QEAA_NXZ @ 0x1800CF860
 * Callers:
 *     ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x18008BD90 (-GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CE2B4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicy.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CF188 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
