/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180624E20
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1806242D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E48D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1806365BC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NW4R.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57343652>::GetCurrentFeatureEnabledState(
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
  unsigned int v10; // ecx
  __int64 v11; // r8
  int v12; // eax
  int v13; // edi
  __int64 v14; // rdx
  bool v15; // cl
  char v16; // si
  char IsEnabled; // al

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x36AFEA4,
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
    v11 = 64LL;
  }
  v12 = v9;
  v13 = 1;
  v14 = v10 | v9;
  v15 = 0;
  *(_DWORD *)a2 = v11 | v12;
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
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GatePerf>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GatePerf>::GetImpl'::`2'::impl,
    v14,
    v11);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_55121036>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55121036>::GetImpl'::`2'::impl);
  v15 = IsEnabled != 0;
  if ( v16 && !IsEnabled )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_13:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v15 )
    v13 = 0;
  *(_DWORD *)a2 = v13 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
