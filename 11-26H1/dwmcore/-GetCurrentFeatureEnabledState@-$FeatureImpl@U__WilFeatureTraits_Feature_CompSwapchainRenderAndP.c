/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800334E0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003382C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPr.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800F7390 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D9704 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180230650 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
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
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v18 = a1;
  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x337E4AF, 3u, a3, a4);
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
    v16 = `wil::Feature<__WilFeatureTraits_Feature_GatePerf>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_GatePerf>::GetImpl'::`2'::impl & 4) == 0 )
    {
      v19 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GatePerf>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_GatePerf>::GetImpl'::`2'::impl,
                         &v19);
      v16 = v19;
    }
    LODWORD(v18) = 0;
    WORD2(v18) = 3;
    wil::details::ReportUsageToService(&unk_1803DEA28, 54238000LL, (v16 >> 10) & 1, (v16 >> 11) & 1, &v18, 1, 0);
    v15 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v15 )
    v12 = 0;
  *(_DWORD *)a2 = v12 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
