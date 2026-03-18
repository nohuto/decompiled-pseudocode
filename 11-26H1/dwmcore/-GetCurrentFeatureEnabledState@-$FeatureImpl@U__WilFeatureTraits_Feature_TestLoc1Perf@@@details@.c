/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180253DAC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180253B70 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@w.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D9704 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18023E538 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@QEAA_N.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_26_01_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180254724 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_26_01_NonSec@@@details@wil@@QE.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // ecx
  unsigned int v7; // r9d
  int v8; // edx
  int v9; // r8d
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  __int16 v13; // dx
  char v14; // cl
  int v15; // edi
  char v16; // si

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x38419AC,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0x80;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  v8 = FeatureEnabledState & 3;
  v9 = 4 * (FeatureEnabledState & 0x40);
  v10 = 0;
  v11 = (8 * (v6 | v9)) | (v8 << 7);
  if ( v7 )
  {
    if ( v7 == 2 )
      v10 = 64;
    v12 = v11 | v10;
  }
  else
  {
    v12 = v11;
  }
  v13 = v10 | v11;
  *(_DWORD *)a2 = v12;
  v14 = 0;
  v15 = 1;
  if ( (v13 & 0xC00) == 0xC00 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( (v13 & 0x40) == 0 )
      goto LABEL_15;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestAccPerf>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TestAccPerf>::GetImpl'::`2'::impl) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_26_01_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Standalone_26_01_NonSec>::GetImpl'::`2'::impl);
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  if ( v16 && !v14 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_15:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v14 )
    v15 = 0;
  *(_DWORD *)a2 = v15 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
