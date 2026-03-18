/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801959A0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800EEDF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800334C0 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18009993C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180252E0C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@de.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v2; // eax
  unsigned int v6; // eax
  int v7; // ebp
  __int64 v8; // rcx
  signed __int32 v9; // eax
  __int16 v10; // bx
  bool v11; // zf
  signed __int32 v12; // edx
  unsigned int v13; // ecx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  *(_DWORD *)a2 = v2;
  if ( (v2 & 6) != 6 )
  {
    v6 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v14 = 0;
    v7 = v6;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetCurrentFeatureEnabledState(
      v8,
      &v15,
      &v14);
    if ( !v7 )
      v14 = 0;
    v9 = *(_DWORD *)a2;
    v10 = v15;
    do
    {
      v11 = v14 == 0;
      v12 = v9;
      *(_DWORD *)a2 = v9;
      v13 = v9;
      if ( !v11 && (v9 & 2) == 0 )
      {
        v13 = v10 & 0x9C1 | v9 & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v13;
      }
      if ( (v9 & 4) == 0 )
      {
        v13 = v10 & 0x400 | v13 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v13;
      }
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v13, v9);
    }
    while ( v12 != v9 );
    if ( (v12 & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        0,
        v7);
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v10 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
