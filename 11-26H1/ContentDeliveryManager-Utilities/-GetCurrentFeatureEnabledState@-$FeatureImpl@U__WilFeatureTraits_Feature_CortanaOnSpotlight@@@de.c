/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180091C5C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800919E4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@det.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003D0A8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // r10d
  unsigned int v7; // edx
  int v8; // r9d
  int v9; // eax
  int v10; // r9d
  _QWORD *result; // rax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState((wil::details *)0xB02D78, 0LL, a3, a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  v8 = 64;
  v9 = (8 * (FeatureEnabledState & 0x80 | (4 * (FeatureEnabledState & 0x40)))) | ((FeatureEnabledState & 3) << 7);
  if ( v7 )
  {
    if ( v7 == 2 )
      v6 = 64;
    v8 = v6;
  }
  v10 = v9 | v8;
  result = a2;
  *(_DWORD *)a2 = v10 | 1;
  return result;
}
