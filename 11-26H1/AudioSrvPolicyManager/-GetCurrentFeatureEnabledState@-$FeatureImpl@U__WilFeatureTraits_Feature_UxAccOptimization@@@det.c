/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18003BAD0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003B948 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@deta.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003D5E0 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18003D720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edi
  char v11; // si
  char IsEnabled; // al

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x2E30A37, (unsigned int)a2, a3, a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = FeatureEnabledState & 0x80 | (4 * (FeatureEnabledState & 0x40u));
  v8 = (8 * (int)v7) | ((unsigned __int8)(FeatureEnabledState & 3) << 7);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v9 = 0;
    if ( v6 == 2 )
      v9 = 64;
    v8 = v9 | (unsigned int)v8;
  }
  *(_DWORD *)a2 = v8;
  LOBYTE(v7) = 0;
  v10 = 1;
  if ( (v8 & 0xC00) == 0xC00 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( (v8 & 0x40) == 0 )
      goto LABEL_11;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::__private_IsEnabled(
                3072LL,
                v8,
                v7);
  LOBYTE(v7) = IsEnabled;
  if ( v11 && !IsEnabled )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_11:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !(_BYTE)v7 )
    v10 = 0;
  *(_DWORD *)a2 = v10 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
