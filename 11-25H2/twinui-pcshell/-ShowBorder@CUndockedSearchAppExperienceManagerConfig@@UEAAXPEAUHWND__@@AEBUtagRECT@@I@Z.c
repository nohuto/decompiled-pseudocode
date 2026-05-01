/*
 * XREFs of ?ShowBorder@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@I@Z @ 0x180074080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180060490 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@AE.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::ShowBorder(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        const struct tagRECT *a3)
{
  unsigned int v3; // r8d
  int v4; // [rsp+40h] [rbp-28h] BYREF
  __int16 v5; // [rsp+44h] [rbp-24h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  _QWORD v7[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = `wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v6 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::GetCachedFeatureEnabledState(
            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
            v7);
    v3 = v6;
  }
  v4 = 0;
  v5 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_18089DD30,
    0x1C68CFBu,
    (v3 >> 10) & 1,
    (v3 >> 11) & 1,
    (__int64)&v4,
    1u,
    3);
}
