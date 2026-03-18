/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAA_NXZ @ 0x1800339A0
 * Callers:
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180034140 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1801C48E0 (-IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800334C0 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098F88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@det.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18009993C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802AB8C4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestri.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::__private_IsEnabled(
        wil::details *a1,
        __int64 a2)
{
  signed __int32 v2; // edi
  unsigned int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // rcx
  __int16 v7; // bx
  char v8; // di
  int v10; // r8d
  bool v11; // zf
  unsigned __int32 v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)a1;
  if ( (*(_BYTE *)a1 & 6) != 6 )
  {
    v4 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v13 = 0;
    v5 = v4;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::GetCurrentFeatureEnabledState(
      v6,
      &v14,
      &v13);
    v7 = v14;
    LODWORD(a2) = v2;
    do
    {
      v2 = a2;
      if ( v13 && (a2 & 2) == 0 )
        v2 = v7 & 0x9C1 | a2 & 0xFFFFF63E | 2;
      v10 = a2 & 4;
      if ( (a2 & 4) == 0 )
        v2 = v2 & 0xFFFFFBFF | v7 & 0x400 | 4;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v2, a2);
      v11 = (_DWORD)a2 == v12;
      a2 = v12;
    }
    while ( !v11 );
    if ( !v10 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        wil::details::g_enabledStateManager,
        a1,
        1LL,
        v5);
    if ( (v2 & 2) == 0 )
      LOBYTE(v2) = v2 & 0x3E | v7 & 0xC1;
  }
  v8 = v2 & 1;
  LOBYTE(a2) = v8;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::ReportUsage(a1, a2);
  return v8;
}
