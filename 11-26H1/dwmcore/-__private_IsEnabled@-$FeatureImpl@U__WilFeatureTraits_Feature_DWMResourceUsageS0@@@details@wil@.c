/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800EEDF0
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1801FBF80 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180253770 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800334C0 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18009969C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18009993C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1800F777C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800F7F40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801959A0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@det.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180225874 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x180226714 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180252E0C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@de.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(
        wil::details *a1,
        __int64 a2,
        __int64 a3)
{
  signed __int32 v3; // edi
  unsigned int v4; // r9d
  signed __int32 v6; // ebx
  unsigned __int8 v7; // di
  volatile signed __int32 *v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  BOOL v13; // r14d
  unsigned int v14; // esi
  void (__fastcall *v15)(__int64, _QWORD, _QWORD, _QWORD); // rax
  int v17; // edx
  signed __int32 i; // ecx
  signed __int32 v19; // eax
  unsigned int v20; // eax
  int v21; // r14d
  __int64 *CachedFeatureEnabledState; // rax
  __int16 v23; // bx
  signed __int32 v24; // edx
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

  v3 = *(_DWORD *)a1;
  v4 = 0;
  if ( (*(_BYTE *)a1 & 6) != 6 )
  {
    v20 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v30 = 0;
    v21 = v20;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetCurrentFeatureEnabledState(
      0LL,
      &v31,
      &v30);
    v4 = 0;
    if ( !v21 )
      v30 = 0;
    v23 = v31;
    v24 = v3;
    do
    {
      v3 = v24;
      if ( v30 && (v24 & 2) == 0 )
        v3 = v23 & 0x9C1 | v24 & 0xFFFFF63E | 2;
      a3 = v24 & 4;
      if ( (v24 & 4) == 0 )
        v3 = v3 & 0xFFFFFBFF | v23 & 0x400 | 4;
      v26 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v3, v24);
      v25 = v24 == v26;
      v24 = v26;
    }
    while ( !v25 );
    if ( !(_DWORD)a3 )
    {
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        0,
        v21);
      v4 = 0;
    }
    if ( (v3 & 2) == 0 )
      LOBYTE(v3) = v3 & 0x3E | v23 & 0xC1;
  }
  v6 = *(_DWORD *)a1;
  v7 = v3 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    CachedFeatureEnabledState = (__int64 *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetCachedFeatureEnabledState(
                                             a1,
                                             &v34,
                                             a3,
                                             0LL);
    v4 = 0;
    v31 = *CachedFeatureEnabledState;
    LOWORD(v6) = v31;
  }
  v32 = 0;
  v33 = 2;
  LODWORD(v31) = 3;
  v8 = (volatile signed __int32 *)((char *)a1 + 8);
  v28 = 0LL;
  v9 = 4 * (v7 ^ 1) + 2;
  v29 = 0LL;
  switch ( 4 * (v7 ^ 1u) )
  {
    case 0xFFFFFFFE:
    case 2u:
      wil_details_FeatureReporting_IncrementUsageInCache((char *)a1 + 8, v9, a3, &v28);
      v12 = v28;
      v13 = v29;
      break;
    case 0xFFFFFFFF:
    case 3u:
      wil_details_FeatureReporting_IncrementOpportunityInCache((char *)a1 + 8, v9, a3, &v28);
      v12 = v28;
      v13 = v29;
      break;
    case 0u:
    case 1u:
    case 4u:
      v10 = 0LL;
      if ( 4 * (v7 ^ 1) )
      {
        switch ( 4 * (v7 ^ 1) )
        {
          case 1:
            v10 = 8LL;
            break;
          case 4:
            v10 = 4LL;
            break;
          case 5:
            v10 = 16LL;
            break;
        }
      }
      else
      {
        v10 = 2LL;
      }
      for ( i = *v8; ; i = v19 )
      {
        v13 = (i | (unsigned int)v10) == i;
        v11 = i | (unsigned int)v10 | 1;
        if ( (i | (unsigned int)v10) == i )
          v11 = i | (unsigned int)v10;
        v19 = _InterlockedCompareExchange(v8, v11, i);
        if ( i == v19 )
          break;
      }
      if ( (v11 & 1) == 0 || (v12 = 1, (i & 1) != 0) )
        v12 = 0;
      break;
  }
  v14 = DWORD1(v28);
  if ( v12 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)wil::details::g_enabledStateManager,
      50050836,
      (struct wil_details_FeatureReportingCache *)v8);
  if ( v14 )
  {
    v15 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v15 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v15(50050836LL, DWORD2(v28), v14, 0LL);
    }
  }
  if ( !v13 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)wil::details::g_enabledStateManager,
      (void (*)(void *))v10);
  if ( (v6 & 0x400) != 0 )
  {
    v17 = v9 | 0x80000000;
    if ( (v6 & 0x800) == 0 )
      v17 = 4 * (v7 ^ 1) + 2;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x2FBB714, v17, 0, v4, v27);
  }
  if ( !v13 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v11) = 2;
      g_wil_details_realtimeFeatureUsageHook(50050836LL, v9, v11);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(50050836LL, &v32, 0LL, v7, &v31, 0LL, 0, 1LL);
  }
  return v7;
}
