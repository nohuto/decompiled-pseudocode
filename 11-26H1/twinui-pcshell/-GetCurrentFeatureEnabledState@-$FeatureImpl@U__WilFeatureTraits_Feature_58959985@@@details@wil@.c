/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58959985@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1804FBE70
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58959985@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FAF28 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58959985@@@details@wil@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_10_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E8FEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_10_NonSec@@@details@wil@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180330638 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NW4R.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_58959985>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  int v5; // edi
  unsigned int FeatureEnabledState; // eax
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  bool v15; // cl
  char v16; // si
  char IsEnabled; // al

  v5 = 1;
  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x383A871,
                                        1LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0x80;
  v8 = 4 * (FeatureEnabledState & 0x40);
  v9 = FeatureEnabledState & 0xFFFFFF3F;
  v10 = (8 * (v7 | v8)) | ((v9 & 3) << 7);
  if ( v9 )
  {
    v11 = 0;
    if ( v9 == 2 )
      v11 = 64;
    v12 = v11;
  }
  else
  {
    v11 = 64;
    v12 = 64LL;
  }
  v13 = v10;
  v14 = v11 | v10;
  v15 = 0;
  *(_DWORD *)a2 = v12 | v13;
  if ( (v14 & 0x400) != 0 && (unsigned int)v14 >= 0x800 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( (v14 & 0x40) == 0 )
      goto LABEL_13;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_10_NonSec>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_10_NonSec>::GetImpl'::`2'::impl,
    v14,
    v12);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  v15 = IsEnabled != 0;
  if ( v16 && !IsEnabled )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_13:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v15 )
    v5 = 0;
  *(_DWORD *)a2 = v5 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
