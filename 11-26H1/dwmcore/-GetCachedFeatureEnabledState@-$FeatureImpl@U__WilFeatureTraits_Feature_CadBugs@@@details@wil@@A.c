/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CadBugs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800997B8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180252E0C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@de.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800334C0 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18009993C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CadBugs>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v2; // eax
  unsigned int v5; // ebp
  __int64 (__fastcall *v6)(__int64, __int64, int *); // rax
  int v7; // ecx
  int v8; // ebx
  int v9; // ebx
  signed __int32 v10; // eax
  bool v11; // zf
  signed __int32 v12; // r8d
  signed __int32 v13; // edx
  int v15; // eax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  *(_DWORD *)a2 = v2;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v16 = 0;
    v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
    if ( g_wil_details_internalGetFeatureEnabledState
      || (v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
    {
      v7 = v6(49822849LL, 3LL, &v16);
    }
    else
    {
      v7 = 0;
    }
    v8 = 8 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
    if ( (v7 & 0xFFFFFF3F) != 0 )
    {
      v15 = 0;
      if ( (v7 & 0xFFFFFF3F) == 2 )
        v15 = 64;
      v9 = v15 | v8;
    }
    else
    {
      v9 = v8 | 0x40;
    }
    v10 = *(_DWORD *)a2;
    do
    {
      v11 = v16 == 0;
      v12 = v10;
      *(_DWORD *)a2 = v10;
      v13 = v10;
      if ( !v11 && (v10 & 2) == 0 )
      {
        v13 = (v10 ^ ((unsigned __int16)v9 ^ (unsigned __int16)v10) & 0x180 ^ (v9 ^ v10 ^ ((unsigned __int16)v9 ^ (unsigned __int16)v10) & 0x180) & 0x40 | 1) ^ ((unsigned __int16)v9 ^ ((unsigned __int16)(v10 ^ (v9 ^ v10) & 0x180 ^ (v9 ^ v10 ^ (v9 ^ v10) & 0x180) & 0x40) | 1)) & 0x800 | 2;
        *(_DWORD *)a2 = v13;
      }
      if ( (v10 & 4) == 0 )
      {
        v13 = ((unsigned __int16)v9 ^ (unsigned __int16)v13) & 0x400 ^ v13 | 4;
        *(_DWORD *)a2 = v13;
      }
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v13, v10);
    }
    while ( v12 != v10 );
    if ( (v12 & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        wil::details::g_enabledStateManager,
        a1,
        3LL,
        v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *(_DWORD *)a2 = (*(_DWORD *)a2 ^ ((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180 ^ (v9 ^ *(_DWORD *)a2 ^ ((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180) & 0x40 | 1) ^ ((unsigned __int16)v9 ^ (*(_WORD *)a2 ^ ((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180 ^ ((unsigned __int16)v9 ^ *(_WORD *)a2 ^ ((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180) & 0x40 | 1)) & 0x800;
  }
  return a2;
}
