/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2@@@details@wil@@QEAA_NXZ @ 0x1800390FC
 * Callers:
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180038F30 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180039468 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventO.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180039544 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x180039E28 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18005C324 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18005C3C4 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18006AB14 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180078314 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x180098CDC (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A0004 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEvent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2>::__private_IsEnabled(
        _DWORD *a1,
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
  signed __int32 v13; // r15d
  unsigned __int8 v14; // di
  volatile signed __int32 *v15; // r14
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  void (*i)(void *); // rdx
  signed __int32 v23; // r8d
  BOOL v24; // esi
  unsigned __int32 v25; // eax
  __int64 v26; // r8
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  int v30; // edx
  const char *v31; // [rsp+20h] [rbp-58h]
  unsigned int v32[4]; // [rsp+50h] [rbp-28h] BYREF
  _BOOL8 v33; // [rsp+60h] [rbp-18h]
  int v34; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+50h] BYREF
  int v36; // [rsp+D0h] [rbp+58h] BYREF
  __int16 v37; // [rsp+D4h] [rbp+5Ch]
  char v38; // [rsp+D8h] [rbp+60h] BYREF

  v4 = *a1;
  if ( (*(_BYTE *)a1 & 6) != 6 )
  {
    v6 = wil::details::EnsureSubscribedToFeatureConfigurationChanges((wil::details *)a1);
    v34 = 0;
    v7 = v6;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2>::GetCurrentFeatureEnabledState(
      v8,
      &v35,
      &v34);
    v9 = v35;
    v10 = v4;
    do
    {
      v4 = v10;
      if ( v34 && (v10 & 2) == 0 )
        v4 = v9 & 0x9C1 | v10 & 0xFFFFF63E | 2;
      a3 = v10 & 4;
      if ( (v10 & 4) == 0 )
        v4 = v4 & 0xFFFFFBFF | v9 & 0x400 | 4;
      v12 = _InterlockedCompareExchange(a1, v4, v10);
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
  v13 = *a1;
  v14 = v4 & 1;
  if ( (*a1 & 4) == 0 )
  {
    v35 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2>::GetCachedFeatureEnabledState(
                       a1,
                       &v38);
    LOWORD(v13) = v35;
  }
  v15 = a1 + 2;
  v36 = 0;
  v37 = 2;
  LODWORD(v35) = 3;
  *(_OWORD *)v32 = 0LL;
  v16 = 4 * (v14 ^ 1) + 2;
  v33 = 0LL;
  if ( 4 * (v14 ^ 1) == -2 )
    goto LABEL_40;
  if ( 4 * (v14 ^ 1) == -1 )
  {
LABEL_55:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1 + 2, v16, a3, v32);
    goto LABEL_41;
  }
  v17 = 4 * (v14 ^ 1);
  if ( !v17 )
    goto LABEL_22;
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_22;
  v19 = v18 - 1;
  if ( !v19 )
  {
LABEL_40:
    wil_details_FeatureReporting_IncrementUsageInCache(a1 + 2, v16, a3, v32);
LABEL_41:
    v24 = v33;
    goto LABEL_30;
  }
  v20 = v19 - 1;
  if ( !v20 )
    goto LABEL_55;
  if ( (unsigned int)(v20 - 1) > 1 )
  {
    v28 = a1[3];
    do
    {
      v24 = 0;
      i = (void (*)(void *))(v28 ^ ((unsigned __int16)(32 * (4 * (v14 ^ 1) - 318)) ^ (unsigned __int16)v28) & 0x7E0 | 0x10u);
      v29 = v28;
      v28 = _InterlockedCompareExchange(v15 + 1, (signed __int32)i, v28);
    }
    while ( v29 != v28 );
    v32[2] = 4 * (v14 ^ 1) + 2;
    v32[1] = 1;
    goto LABEL_30;
  }
LABEL_22:
  v21 = 0;
  if ( 4 * (v14 ^ 1) )
  {
    switch ( 4 * (v14 ^ 1) )
    {
      case 1:
        v21 = 8;
        break;
      case 4:
        v21 = 4;
        break;
      case 5:
        v21 = 16;
        break;
    }
  }
  else
  {
    v21 = 2;
  }
  for ( i = (void (*)(void *))*(unsigned int *)v15; ; i = (void (*)(void *))v25 )
  {
    v23 = (unsigned int)i | v21;
    v24 = ((unsigned int)i | v21) == (_DWORD)i;
    if ( ((unsigned int)i | v21) != (_DWORD)i )
      v23 = (unsigned int)i | v21 | 1;
    v25 = _InterlockedCompareExchange(v15, v23, (signed __int32)i);
    if ( (_DWORD)i == v25 )
      break;
  }
  v32[0] = (v23 & 1) != 0 && ((unsigned __int8)i & 1) == 0;
LABEL_30:
  if ( v32[0] )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (wil::details::EnabledStateManager *)wil::details::g_enabledStateManager,
      0x3554547u,
      (struct wil_details_FeatureReportingCache *)v15);
  v26 = v32[1];
  if ( v32[1] )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x3554547, v32[2], v32[1], a4, v31);
  if ( !v24 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)wil::details::g_enabledStateManager,
      i);
  if ( (v13 & 0x400) != 0 )
  {
    v30 = 4 * (v14 ^ 1) + 2;
    if ( (v13 & 0x800) != 0 )
      v30 = v16 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x3554547, v30, 0, a4, v31);
  }
  if ( !v24 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v26) = 2;
      g_wil_details_realtimeFeatureUsageHook(55919943LL, v16, v26);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(55919943LL, &v36, 0LL, v14, &v35, 0LL, 0, 1LL);
  }
  return v14;
}
