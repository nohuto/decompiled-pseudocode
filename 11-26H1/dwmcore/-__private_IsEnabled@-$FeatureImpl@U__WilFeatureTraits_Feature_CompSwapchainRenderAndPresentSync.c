/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x180032674 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180033A40 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800350DC (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUD.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801AADE0 (-CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z.c)
 *     ?CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ @ 0x1801B8D90 (-CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ.c)
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18029AEE0 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A5DC0 (-NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800334C0 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800334E0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndP.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003382C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPr.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18009969C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18009993C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1800F777C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800F7F40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180225874 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x180226714 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  signed __int32 v4; // edi
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int16 v9; // bx
  signed __int32 v10; // edx
  bool v11; // zf
  signed __int32 v12; // eax
  signed __int32 v13; // ebx
  unsigned __int8 v14; // di
  volatile signed __int32 *v15; // r15
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // r8
  BOOL v19; // eax
  BOOL v20; // r14d
  unsigned int v21; // esi
  void (__fastcall *v22)(__int64, _QWORD, _QWORD, _QWORD); // rax
  int v24; // edx
  signed __int32 i; // ecx
  signed __int32 v26; // eax
  const char *v27; // [rsp+20h] [rbp-58h]
  __int128 v28; // [rsp+50h] [rbp-28h] BYREF
  _BOOL8 v29; // [rsp+60h] [rbp-18h]
  int v30; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+50h] BYREF
  int v32; // [rsp+D0h] [rbp+58h] BYREF
  __int16 v33; // [rsp+D4h] [rbp+5Ch]
  char v34; // [rsp+D8h] [rbp+60h] BYREF

  v4 = *(_DWORD *)a1;
  if ( (*(_BYTE *)a1 & 6) != 6 )
  {
    v6 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v30 = 0;
    v7 = v6;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetCurrentFeatureEnabledState(
      v8,
      &v31,
      &v30);
    v9 = v31;
    v10 = v4;
    do
    {
      v4 = v10;
      if ( v30 && (v10 & 2) == 0 )
        v4 = v9 & 0x9C1 | v10 & 0xFFFFF63E | 2;
      a3 = v10 & 4;
      if ( (v10 & 4) == 0 )
        v4 = v4 & 0xFFFFFBFF | v9 & 0x400 | 4;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v4, v10);
      v11 = v10 == v12;
      v10 = v12;
    }
    while ( !v11 );
    if ( !(_DWORD)a3 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        wil::details::g_enabledStateManager,
        a1,
        3LL,
        v7);
    if ( (v4 & 2) == 0 )
      LOBYTE(v4) = v4 & 0x3E | v9 & 0xC1;
  }
  v13 = *(_DWORD *)a1;
  v14 = v4 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v31 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetCachedFeatureEnabledState(
                       a1,
                       &v34);
    LOWORD(v13) = v31;
  }
  v32 = 0;
  v15 = (volatile signed __int32 *)((char *)a1 + 8);
  v33 = 2;
  LODWORD(v31) = 3;
  v28 = 0LL;
  v16 = 4 * (v14 ^ 1) + 2;
  v29 = 0LL;
  switch ( 4 * (v14 ^ 1u) )
  {
    case 0xFFFFFFFE:
    case 2u:
      wil_details_FeatureReporting_IncrementUsageInCache((char *)a1 + 8, v16, a3, &v28);
      v19 = v28;
      v20 = v29;
      break;
    case 0xFFFFFFFF:
    case 3u:
      wil_details_FeatureReporting_IncrementOpportunityInCache((char *)a1 + 8, v16, a3, &v28);
      v19 = v28;
      v20 = v29;
      break;
    case 0u:
    case 1u:
    case 4u:
      v17 = 0LL;
      if ( 4 * (v14 ^ 1) )
      {
        switch ( 4 * (v14 ^ 1) )
        {
          case 1:
            v17 = 8LL;
            break;
          case 4:
            v17 = 4LL;
            break;
          case 5:
            v17 = 16LL;
            break;
        }
      }
      else
      {
        v17 = 2LL;
      }
      for ( i = *v15; ; i = v26 )
      {
        v20 = (i | (unsigned int)v17) == i;
        v18 = i | (unsigned int)v17 | 1;
        if ( (i | (unsigned int)v17) == i )
          v18 = i | (unsigned int)v17;
        v26 = _InterlockedCompareExchange(v15, v18, i);
        if ( i == v26 )
          break;
      }
      v19 = (v18 & 1) != 0 && (i & 1) == 0;
      break;
  }
  v21 = DWORD1(v28);
  if ( v19 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      wil::details::g_enabledStateManager,
      0x337E4AFu,
      (struct wil_details_FeatureReportingCache *)v15);
  if ( v21 )
  {
    v22 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v22 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v22(53994671LL, DWORD2(v28), v21, 0LL);
    }
  }
  if ( !v20 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)wil::details::g_enabledStateManager,
      (void (*)(void *))v17);
  if ( (v13 & 0x400) != 0 )
  {
    v24 = v16 | 0x80000000;
    if ( (v13 & 0x800) == 0 )
      v24 = 4 * (v14 ^ 1) + 2;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x337E4AF, v24, 0, a4, v27);
  }
  if ( !v20 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v18) = 2;
      g_wil_details_realtimeFeatureUsageHook(53994671LL, v16, v18);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(53994671LL, &v32, 0LL, v14, &v31, 0LL, 0, 1LL);
  }
  return v14;
}
