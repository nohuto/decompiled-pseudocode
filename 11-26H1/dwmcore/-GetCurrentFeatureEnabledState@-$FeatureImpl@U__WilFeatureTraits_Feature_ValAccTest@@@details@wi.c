/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ValAccTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18023C728
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ValAccTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18023BC4C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ValAccTest@@@details@wil.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D9704 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_10_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180226260 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_10_NonSec@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18023DCDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ValLabTest@@@details@wil@@QEAAX_NW4Report.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValAccTest>::GetCurrentFeatureEnabledState(
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
  unsigned int v12; // ecx
  int v13; // eax
  char v14; // dl
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x3667CA7,
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
  v12 = v9 | v10;
  v13 = v11 | v9;
  v14 = 0;
  *(_DWORD *)a2 = v13;
  v15 = 1;
  if ( (v12 & 0x400) != 0 && v12 >= 0x800 || (v12 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValLabTest>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_ValLabTest>::GetImpl'::`2'::impl);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_10_NonSec>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_Standalone_25_10_NonSec>::GetImpl'::`2'::impl,
      v16,
      v17);
    v14 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v14 )
    v15 = 0;
  *(_DWORD *)a2 = v15 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
