/*
 * XREFs of ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x1801FF328
 * Callers:
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18057C830 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ??$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z @ 0x1802BEC20 (--$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z.c)
 *     ??$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z @ 0x180577F74 (--$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18057BA44 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@AE.c)
 */

void __fastcall CShellSnapComponent::SetDockThreshold(CShellSnapComponent *this)
{
  unsigned int v2; // r8d
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  UINT v7; // edx
  UINT v8; // ecx
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+28h] [rbp-40h]
  int v11; // [rsp+78h] [rbp+10h] BYREF
  __int16 v12; // [rsp+7Ch] [rbp+14h]
  __int64 v13; // [rsp+80h] [rbp+18h]
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v2 = `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v13 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
                       &v14);
    v2 = v13;
  }
  v11 = 3;
  v12 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_18089E4A8,
    0x1AA167Fu,
    (v2 >> 10) & 1,
    (v2 >> 11) & 1,
    (__int64)&v11,
    1u,
    3);
  if ( *((_BYTE *)this + 1156) )
  {
    CSnapComponentTelemetry::SetDockThreshold<long &,long &,long &,long &,long &,long &>(
      (_DWORD)this + 1160,
      (_DWORD)this + 1164,
      (_DWORD)this + 1168,
      (_DWORD)this + 1172,
      (__int64)this + 1176,
      (__int64)this + 1180);
    SystemParametersInfoW(0x8Bu, *((_DWORD *)this + 295), 0LL, 0);
    SystemParametersInfoW(0x89u, *((_DWORD *)this + 292), 0LL, 0);
    SystemParametersInfoW(0x87u, *((_DWORD *)this + 294), 0LL, 0);
    SystemParametersInfoW(0x85u, *((_DWORD *)this + 291), 0LL, 0);
    SystemParametersInfoW(0x81u, *((_DWORD *)this + 293), 0LL, 0);
    v7 = *((_DWORD *)this + 290);
    v8 = 127;
  }
  else
  {
    CSnapComponentTelemetry::SetDockThreshold<int const &,int const &,int const &,int const &,int const &,int const &>(
      v4,
      v3,
      v5,
      v6,
      v9,
      v10);
    SystemParametersInfoW(0x7Fu, 1u, 0LL, 0);
    SystemParametersInfoW(0x81u, 0x1Eu, 0LL, 0);
    SystemParametersInfoW(0x85u, 0x18u, 0LL, 0);
    SystemParametersInfoW(0x87u, 0x1Eu, 0LL, 0);
    SystemParametersInfoW(0x89u, 0x32u, 0LL, 0);
    v7 = 50;
    v8 = 139;
  }
  SystemParametersInfoW(v8, v7, 0LL, 0);
}
