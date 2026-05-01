/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180625598
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180624978 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModerni.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1801CE808 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UexTest7@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18048078C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UexTest7@@@details@wil@@QEAA_NW4R.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  int v5; // edi
  unsigned int FeatureEnabledState; // eax
  unsigned int v7; // edx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  char v11; // dl
  char v12; // si
  char IsEnabled; // al

  v5 = 1;
  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x3974D6F,
                                        1LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  v8 = (8 * (FeatureEnabledState & 0x80 | (4 * (FeatureEnabledState & 0x40)))) | ((FeatureEnabledState & 3) << 7);
  if ( v7 )
  {
    v9 = 0;
    if ( v7 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = 64;
  }
  v10 = v9 | v8;
  v11 = 0;
  *(_DWORD *)a2 = v10;
  if ( (v10 & 0x400) != 0 && v10 >= 0x800 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v10 & 0x40) == 0 )
      goto LABEL_12;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_UexTest7>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_UexTest7>::GetImpl'::`2'::impl);
  v11 = IsEnabled;
  if ( v12 && !IsEnabled )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_12:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v11 )
    v5 = 0;
  *(_DWORD *)a2 = v5 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
