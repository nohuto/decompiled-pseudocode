/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AA78C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ACA84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@@details@wil@@QEAA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AD1D4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@@details@w.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180039544 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18005C3C4 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AB0B4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2507>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v2; // eax
  unsigned int v5; // eax
  int v6; // ebp
  __int64 v7; // rcx
  signed __int32 v8; // eax
  __int16 v9; // bx
  bool v10; // zf
  signed __int32 v11; // edx
  unsigned int v12; // ecx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  *(_DWORD *)a2 = v2;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v14 = 0;
    v6 = v5;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2507>::GetCurrentFeatureEnabledState(
      v7,
      &v15,
      &v14);
    v8 = *(_DWORD *)a2;
    v9 = v15;
    do
    {
      v10 = v14 == 0;
      v11 = v8;
      *(_DWORD *)a2 = v8;
      v12 = v8;
      if ( !v10 && (v8 & 2) == 0 )
      {
        v12 = v9 & 0x9C1 | v8 & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v12;
      }
      if ( (v8 & 4) == 0 )
      {
        v12 = v9 & 0x400 | v12 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v12;
      }
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v12, v8);
    }
    while ( v11 != v8 );
    if ( (v11 & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        3,
        v6);
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v9 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
