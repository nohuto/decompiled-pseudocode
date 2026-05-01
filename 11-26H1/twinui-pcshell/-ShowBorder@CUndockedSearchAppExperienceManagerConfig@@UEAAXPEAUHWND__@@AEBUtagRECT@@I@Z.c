/*
 * XREFs of ?ShowBorder@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@I@Z @ 0x1801D94E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180125238 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@AE.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::ShowBorder(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        const struct tagRECT *a3)
{
  unsigned int v3; // r8d
  int v4; // [rsp+40h] [rbp-18h] BYREF
  __int16 v5; // [rsp+44h] [rbp-14h]
  __int64 v6; // [rsp+48h] [rbp-10h] BYREF

  v3 = `wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v6 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::GetCachedFeatureEnabledState(
            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
            &v6);
    v3 = v6;
  }
  v4 = 0;
  v5 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1808DE3B0,
    0x1C68CFBu,
    (v3 >> 10) & 1,
    (v3 >> 11) & 1,
    (__int64)&v4,
    1u,
    3);
}
