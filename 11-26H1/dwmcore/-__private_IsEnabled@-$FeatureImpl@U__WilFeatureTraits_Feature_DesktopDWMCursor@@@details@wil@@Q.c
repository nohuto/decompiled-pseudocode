/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180033150
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@@Z @ 0x1801D3B00 (--0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefres.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180033430 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@detai.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800334C0 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18009969C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18009993C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1800F777C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800F7F40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180225874 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x180226714 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18024FAAC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@deta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(
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
  signed __int32 v11; // ebx
  unsigned __int8 v12; // di
  volatile signed __int32 *v13; // r15
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // r8
  BOOL v17; // eax
  BOOL v18; // r14d
  unsigned int v19; // esi
  void (__fastcall *v20)(__int64, _QWORD, _QWORD, _QWORD); // rax
  int v22; // edx
  signed __int32 i; // ecx
  signed __int32 v24; // eax
  bool v25; // zf
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
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetCurrentFeatureEnabledState(
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
      v26 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v4, v10);
      v25 = v10 == v26;
      v10 = v26;
    }
    while ( !v25 );
    if ( !(_DWORD)a3 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        wil::details::g_enabledStateManager,
        a1,
        3LL,
        v7);
    if ( (v4 & 2) == 0 )
      LOBYTE(v4) = v4 & 0x3E | v9 & 0xC1;
  }
  v11 = *(_DWORD *)a1;
  v12 = v4 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v31 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetCachedFeatureEnabledState(
                       a1,
                       &v34);
    LOWORD(v11) = v31;
  }
  v32 = 0;
  v13 = (volatile signed __int32 *)((char *)a1 + 8);
  v33 = 2;
  LODWORD(v31) = 3;
  v28 = 0LL;
  v14 = 4 * (v12 ^ 1) + 2;
  v29 = 0LL;
  switch ( 4 * (v12 ^ 1u) )
  {
    case 0xFFFFFFFE:
    case 2u:
      wil_details_FeatureReporting_IncrementUsageInCache((char *)a1 + 8, v14, a3, &v28);
      v17 = v28;
      v18 = v29;
      break;
    case 0xFFFFFFFF:
    case 3u:
      wil_details_FeatureReporting_IncrementOpportunityInCache((char *)a1 + 8, v14, a3, &v28);
      v17 = v28;
      v18 = v29;
      break;
    case 0u:
    case 1u:
    case 4u:
      v15 = 0LL;
      if ( 4 * (v12 ^ 1) )
      {
        switch ( 4 * (v12 ^ 1) )
        {
          case 1:
            v15 = 8LL;
            break;
          case 4:
            v15 = 4LL;
            break;
          case 5:
            v15 = 16LL;
            break;
        }
      }
      else
      {
        v15 = 2LL;
      }
      for ( i = *v13; ; i = v24 )
      {
        v18 = (i | (unsigned int)v15) == i;
        v16 = i | (unsigned int)v15 | 1;
        if ( (i | (unsigned int)v15) == i )
          v16 = i | (unsigned int)v15;
        v24 = _InterlockedCompareExchange(v13, v16, i);
        if ( i == v24 )
          break;
      }
      v17 = (v16 & 1) != 0 && (i & 1) == 0;
      break;
  }
  v19 = DWORD1(v28);
  if ( v17 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      wil::details::g_enabledStateManager,
      0x1A8A411u,
      (struct wil_details_FeatureReportingCache *)v13);
  if ( v19 )
  {
    v20 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v20 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v20(27829265LL, DWORD2(v28), v19, 0LL);
    }
  }
  if ( !v18 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)wil::details::g_enabledStateManager,
      (void (*)(void *))v15);
  if ( (v11 & 0x400) != 0 )
  {
    v22 = v14 | 0x80000000;
    if ( (v11 & 0x800) == 0 )
      v22 = 4 * (v12 ^ 1) + 2;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x1A8A411, v22, 0, a4, v27);
  }
  if ( !v18 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v16) = 2;
      g_wil_details_realtimeFeatureUsageHook(27829265LL, v14, v16);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(27829265LL, &v32, 0LL, v12, &v31, 0LL, 0, 1LL);
  }
  return v12;
}
