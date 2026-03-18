/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180225B8C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802258F8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D9704 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_11_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802262DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_11_NonSec@@@details@wil@@QE.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::GetCurrentFeatureEnabledState(
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
  char v15; // cl

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x383EDE7,
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
  if ( (v14 & 0x400) != 0 && v14 >= 0x800 || (v14 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_11_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_11_NonSec>::GetImpl'::`2'::impl);
    v15 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v15 )
    v13 = 0;
  *(_DWORD *)a2 = v13 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
