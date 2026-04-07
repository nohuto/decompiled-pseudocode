/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800DED64
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800DEBB8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfter.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800399C0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800766B8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxPerfImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009FAFC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxPerfImp@@@details@wil@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  char v6; // r8
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // edx
  char v15; // cl
  unsigned int v16; // r8d
  unsigned __int8 v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v19 = a1;
  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x33ED687,
                                        3LL,
                                        a3,
                                        a4);
  v6 = FeatureEnabledState;
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0x80;
  v8 = FeatureEnabledState & 0xFFFFFF3F;
  v9 = (8 * (v7 | (4 * (v6 & 0x40)))) | ((v8 & 3) << 7);
  if ( v8 )
  {
    v10 = 0;
    if ( v8 == 2 )
      v10 = 64;
    v11 = v10;
  }
  else
  {
    v10 = 64;
    v11 = 64;
  }
  v12 = 1;
  v13 = v11 | v9;
  v14 = v10 | v9;
  *(_DWORD *)a2 = v13;
  v15 = 0;
  if ( (v14 & 0x400) != 0 && v14 >= 0x800 || (v14 & 0x40) != 0 )
  {
    v16 = `wil::Feature<__WilFeatureTraits_Feature_UxPerfImp>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_UxPerfImp>::GetImpl'::`2'::impl & 4) == 0 )
    {
      v20 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxPerfImp>::GetCachedFeatureEnabledState(
               (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_UxPerfImp>::GetImpl'::`2'::impl,
               &v20);
      v16 = v20;
    }
    LODWORD(v19) = 0;
    WORD2(v19) = 3;
    wil::details::ReportUsageToService(
      (volatile signed __int32 *)&unk_180115850,
      0x3667C98u,
      (v16 >> 10) & 1,
      (v16 >> 11) & 1,
      (__int64)&v19,
      1u,
      0,
      v18);
    v15 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v15 )
    v12 = 0;
  *(_DWORD *)a2 = v12 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
