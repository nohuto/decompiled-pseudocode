/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_3708023098@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18027C784
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_3708023098@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18027C6A8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_3708023098@@@details@wil.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801D9704 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_3708023098>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  unsigned int v9; // eax
  char v10; // r8
  int v11; // edx
  int v12; // ecx

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x3A01EE9,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = (8 * (FeatureEnabledState & 0x80 | (4 * (FeatureEnabledState & 0x40)))) | ((FeatureEnabledState & 3) << 7);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = 64;
  }
  v9 = v7 | v8;
  v10 = 0;
  v11 = 1;
  if ( (v9 & 0x400) != 0 && v9 >= 0x800 )
  {
    v12 = v9 & 0x40;
LABEL_9:
    v10 = 1;
    goto LABEL_10;
  }
  v12 = v9 & 0x40;
  if ( (v9 & 0x40) != 0 )
    goto LABEL_9;
LABEL_10:
  if ( !v12 || !v10 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | v9;
  return a2;
}
