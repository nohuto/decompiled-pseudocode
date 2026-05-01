/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18006BCF0
 * Callers:
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x1800E40C0 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18022E700 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinui.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
        unsigned int *a1)
{
  unsigned int v1; // r8d
  int v4; // [rsp+50h] [rbp+8h] BYREF
  __int16 v5; // [rsp+54h] [rbp+Ch]
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v1 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v6 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetCachedFeatureEnabledState(
                      a1,
                      &v6);
    v1 = v6;
  }
  v4 = 0;
  v5 = 3;
  wil::details::ReportUsageToService(a1 + 2, 33793580LL, (v1 >> 10) & 1, (v1 >> 11) & 1, &v4, 1, 3);
  return 1;
}
