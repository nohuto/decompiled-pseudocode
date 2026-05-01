/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805D17E8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D0778 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_11_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032DBA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_11_NonSec@@@details@wil@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1805DAC90 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@QEAA_NW4R.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_58311344>::GetCurrentFeatureEnabledState(
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
  __int64 v17; // rdx
  __int64 v18; // r8

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x379C2B0,
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
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57840822>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57840822>::GetImpl'::`2'::impl) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_11_NonSec>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_11_NonSec>::GetImpl'::`2'::impl,
      v17,
      v18);
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
