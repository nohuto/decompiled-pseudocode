/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B6778
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180038CD8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180039544 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18005C3C4 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800766B8 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v2; // eax
  unsigned int v5; // eax
  int v6; // ebp
  int *v7; // r9
  unsigned int FeatureEnabledState; // eax
  unsigned int v9; // r8d
  int v10; // edi
  int v11; // eax
  int v12; // edi
  signed __int32 v13; // eax
  bool v14; // zf
  signed __int32 v15; // r8d
  signed __int32 v16; // edx
  enum FEATURE_CHANGE_TIME v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  *(_DWORD *)a2 = v2;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v18 = FEATURE_CHANGE_TIME_READ;
    v6 = v5;
    FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                          (wil::details *)0x198771B,
                                          0LL,
                                          (__int64)&v18,
                                          v7);
    v9 = FeatureEnabledState & 0xFFFFFF3F;
    v10 = ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 3 | ((FeatureEnabledState & 0x40) != 0
                                                                                       ? 0x10
                                                                                       : 0)) << 7);
    if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
    {
      v11 = 0;
      if ( v9 == 2 )
        v11 = 64;
    }
    else
    {
      v11 = 64;
    }
    v12 = v11 | v10;
    if ( !v6 )
      v18 = FEATURE_CHANGE_TIME_READ;
    v13 = *(_DWORD *)a2;
    do
    {
      v14 = v18 == FEATURE_CHANGE_TIME_READ;
      v15 = v13;
      *(_DWORD *)a2 = v13;
      v16 = v13;
      if ( !v14 && (v13 & 2) == 0 )
      {
        v16 = (v13 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v13) & 0x180 ^ (v12 ^ v13 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v13) & 0x180) & 0x40 | 1) ^ ((unsigned __int16)v12 ^ ((unsigned __int16)(v13 ^ (v12 ^ v13) & 0x180 ^ (v12 ^ v13 ^ (v12 ^ v13) & 0x180) & 0x40) | 1)) & 0x800 | 2;
        *(_DWORD *)a2 = v16;
      }
      if ( (v13 & 4) == 0 )
      {
        v16 = (v16 ^ v12) & 0x400 ^ v16 | 4;
        *(_DWORD *)a2 = v16;
      }
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v16, v13);
    }
    while ( v15 != v13 );
    if ( (v15 & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        0,
        v6);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *(_DWORD *)a2 = (*(_DWORD *)a2 ^ ((unsigned __int16)v12 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180 ^ (v12 ^ *(_DWORD *)a2 ^ ((unsigned __int16)v12 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180) & 0x40 | 1) ^ ((unsigned __int16)v12 ^ (*(_WORD *)a2 ^ ((unsigned __int16)v12 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180 ^ ((unsigned __int16)v12 ^ *(_WORD *)a2 ^ ((unsigned __int16)v12 ^ (unsigned __int16)*(_DWORD *)a2) & 0x180) & 0x40 | 1)) & 0x800;
  }
  return a2;
}
