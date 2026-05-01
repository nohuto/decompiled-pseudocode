/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_47942714@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803B2E18
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_47942714@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B1510 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_47942714@@@details@wil@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802D6EF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_03_NonSec@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_53693389@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B770C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_53693389@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_51718004@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803BACA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_51718004@@@details@wil@@QEAA_NW4R.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_47942714>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // edi
  char v15; // si
  __int64 v16; // rdx
  __int64 v17; // r8
  char IsEnabled; // al

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2DB8C3A,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0x80;
  v7 = 4 * (FeatureEnabledState & 0x40);
  v8 = FeatureEnabledState & 0xFFFFFF3F;
  v9 = (8 * (v6 | v7)) | ((unsigned __int8)(v8 & 3) << 7);
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
  LOBYTE(v9) = 0;
  *(_DWORD *)a2 = v13;
  v14 = 1;
  if ( (v12 & 0x400) != 0 && v12 >= 0x800 )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    if ( (v12 & 0x40) == 0 )
      goto LABEL_13;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53693389>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_53693389>::GetImpl'::`2'::impl,
    v9);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_03_NonSec>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_03_NonSec>::GetImpl'::`2'::impl,
    v16,
    v17);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_51718004>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_51718004>::GetImpl'::`2'::impl);
  LOBYTE(v9) = IsEnabled != 0;
  if ( v15 && !IsEnabled )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_13:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !(_BYTE)v9 )
    v14 = 0;
  *(_DWORD *)a2 = v14 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
