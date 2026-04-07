/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A01A0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180038E48 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@detai.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800766B8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A6948 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  char v12; // si
  char IsEnabled; // al

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x1A8A411,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = FeatureEnabledState & 0x80 | (4 * (FeatureEnabledState & 0x40));
  v8 = (8 * v7) | ((FeatureEnabledState & 3) << 7);
  if ( (_DWORD)v6 )
  {
    v9 = 0;
    if ( (_DWORD)v6 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = 64;
  }
  v10 = v9 | v8;
  LOBYTE(v6) = 0;
  *(_DWORD *)a2 = v10;
  v11 = 1;
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
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::__private_IsEnabled(
                &`wil::Feature<__WilFeatureTraits_Feature_UxAccOptimization>::GetImpl'::`2'::impl,
                v6,
                v7);
  LOBYTE(v6) = IsEnabled;
  if ( v12 && !IsEnabled )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_12:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !(_BYTE)v6 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
