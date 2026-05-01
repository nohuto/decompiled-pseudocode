/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180124858
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ABCDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800B97B8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180123B40 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTe.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1801253E8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v2; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rcx
  int *v8; // r9
  signed __int32 v9; // eax
  __int16 v10; // bx
  bool v11; // zf
  signed __int32 v12; // edx
  unsigned int v13; // ecx
  int v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  *(_DWORD *)a2 = v2;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v15 = 0;
    v6 = v5;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetCurrentFeatureEnabledState(
      v7,
      &v16,
      (enum FEATURE_CHANGE_TIME)&v15,
      v8);
    v9 = *(_DWORD *)a2;
    v10 = v16;
    do
    {
      v11 = v15 == 0;
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
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3LL, v6);
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v10 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
