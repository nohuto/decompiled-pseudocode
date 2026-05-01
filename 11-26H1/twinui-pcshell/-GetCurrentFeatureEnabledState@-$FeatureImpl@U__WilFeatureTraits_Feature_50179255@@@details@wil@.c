/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805D10BC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D00D4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802D6EF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@QE.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_50179255>::GetCurrentFeatureEnabledState(
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
  __int64 v13; // rdx
  char v14; // cl
  int v15; // edi

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2FDACB7,
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
  v13 = v10 | (unsigned int)v11;
  *(_DWORD *)a2 = v12;
  v14 = 0;
  v15 = 1;
  if ( (v13 & 0xC00) == 0xC00 || (v13 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_03_NonSec>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_03_NonSec>::GetImpl'::`2'::impl,
      v13,
      3072LL);
    v14 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v14 )
    v15 = 0;
  *(_DWORD *)a2 = v15 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
