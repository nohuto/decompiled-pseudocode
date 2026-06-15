/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18002C268
 * Callers:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18000B090 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002C368 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupp.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18002C44C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSup.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18002C528 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180035204 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::__private_IsEnabled(
        wil::details *a1,
        char a2)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int16 v6; // bx
  signed __int32 v7; // edx
  int v8; // r8d
  bool v9; // zf
  signed __int32 v10; // eax
  char v11; // di
  __int64 v12; // rcx
  wil::details *v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v15) = a2;
  v14 = a1;
  v2 = *(_DWORD *)Feature_PackagedComElevationSupport__descriptor;
  if ( (*(_BYTE *)Feature_PackagedComElevationSupport__descriptor & 6) != 6 )
  {
    v3 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v15 = 0;
    v4 = v3;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::GetCurrentFeatureEnabledState(
      v5,
      &v14,
      &v15);
    v6 = (__int16)v14;
    v7 = v2;
    do
    {
      v2 = v7;
      if ( v15 && (v7 & 2) == 0 )
        v2 = v6 & 0x9C1 | v7 & 0xFFFFF63E | 2;
      v8 = v7 & 4;
      if ( (v7 & 4) == 0 )
        v2 = v2 & 0xFFFFFBFF | v6 & 0x400 | 4;
      v10 = _InterlockedCompareExchange(
              (volatile signed __int32 *)Feature_PackagedComElevationSupport__descriptor,
              v2,
              v7);
      v9 = v7 == v10;
      v7 = v10;
    }
    while ( !v9 );
    if ( !v8 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        Feature_PackagedComElevationSupport__descriptor,
        3LL,
        v4);
    if ( (v2 & 2) == 0 )
      LOBYTE(v2) = v2 & 0x3E | v6 & 0xC1;
  }
  v11 = v2 & 1;
  v12 = *(unsigned int *)Feature_PackagedComElevationSupport__descriptor;
  if ( (v12 & 4) == 0 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::GetCachedFeatureEnabledState(
      v12,
      &v14);
  return v11;
}
