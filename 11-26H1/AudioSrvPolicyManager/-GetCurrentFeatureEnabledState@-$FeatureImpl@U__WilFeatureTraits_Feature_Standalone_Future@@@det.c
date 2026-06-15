/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18003BA2C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003B864 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@deta.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003D5E0 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // r8d
  _QWORD *result; // rax

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x2F29A04, (unsigned int)a2, a3, a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0x80;
  v7 = 4 * (FeatureEnabledState & 0x40);
  FeatureEnabledState &= 0xFFFFFF3F;
  v8 = (8 * (v6 | v7)) | ((FeatureEnabledState & 3) << 7);
  v9 = 0;
  if ( FeatureEnabledState == FEATURE_ENABLED_STATE_ENABLED )
    v9 = 64;
  v10 = v8 | v9;
  v11 = 1;
  if ( (v10 & 0xC00) != 0xC00 && (v10 & 0x40) == 0 || (v10 & 0x40) == 0 )
    v11 = 0;
  result = a2;
  *(_DWORD *)a2 = v11 | v10;
  return result;
}
