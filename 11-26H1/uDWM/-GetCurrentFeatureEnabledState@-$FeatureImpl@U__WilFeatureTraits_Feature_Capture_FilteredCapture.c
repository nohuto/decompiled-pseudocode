/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009FE18
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009ECD0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureP.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800766B8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A67D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowData.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A690C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAA_.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // edi
  unsigned int v14; // edx
  bool v15; // cl
  char v16; // si

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x37F77E1,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0x80;
  v7 = 4 * (FeatureEnabledState & 0x40);
  v8 = FeatureEnabledState & 0xFFFFFF3F;
  v9 = (8 * (v6 | v7)) | ((v8 & 3) << 7);
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
  v12 = v9;
  v13 = 1;
  v14 = v10 | v9;
  v15 = 0;
  *(_DWORD *)a2 = v11 | v12;
  if ( (v14 & 0x400) != 0 && v14 >= 0x800 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( (v14 & 0x40) == 0 )
      goto LABEL_17;
  }
  v15 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::GetImpl'::`2'::impl)
     && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TestLoc1Perf>::GetImpl'::`2'::impl);
  if ( v16 && !v15 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_17:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v15 )
    v13 = 0;
  *(_DWORD *)a2 = v13 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
