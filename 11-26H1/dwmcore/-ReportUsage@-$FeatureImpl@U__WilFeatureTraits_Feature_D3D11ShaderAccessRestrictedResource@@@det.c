/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098F88
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAA_NXZ @ 0x1800339A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResour.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003390C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestric.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18009969C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1800F777C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800F7F40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180225874 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x180226714 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  int v3; // r14d
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  volatile signed __int32 *v7; // rsi
  unsigned int v8; // r9d
  unsigned int v9; // ebx
  int v10; // ecx
  void (*i)(void *); // rdx
  signed __int32 v12; // r8d
  BOOL v13; // edi
  unsigned __int32 v14; // eax
  __int64 v15; // r8
  void (__fastcall *v16)(__int64, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v17; // edx
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  const char *v20; // [rsp+20h] [rbp-50h]
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF
  _BOOL8 v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+58h] BYREF
  va_list va; // [rsp+C8h] [rbp+58h]
  va_list va1; // [rsp+D0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  LOBYTE(v24) = a3;
  v3 = *(_DWORD *)a1;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::GetCachedFeatureEnabledState(
            a1,
            &v21);
  v24 = 3;
  LODWORD(v25) = 0;
  v6 = v5;
  v7 = (volatile signed __int32 *)((char *)a1 + 8);
  v8 = 1;
  WORD2(v25) = 1;
  v22 = 0LL;
  v9 = 4 * (v5 ^ 1) + 2;
  v23 = 0LL;
  switch ( v9 )
  {
    case 0u:
      goto LABEL_35;
    case 1u:
LABEL_48:
      wil_details_FeatureReporting_IncrementOpportunityInCache(v7, v9, a3, &v22);
      goto LABEL_36;
    case 2u:
    case 3u:
      goto LABEL_10;
    case 4u:
LABEL_35:
      wil_details_FeatureReporting_IncrementUsageInCache(v7, v9, a3, &v22);
LABEL_36:
      v13 = v23;
      goto LABEL_18;
    case 5u:
      goto LABEL_48;
  }
  if ( v9 - 6 > 1 )
  {
    v18 = *((_DWORD *)v7 + 1);
    do
    {
      v13 = 0;
      i = (void (*)(void *))(v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)(32 * (v9 - 320))) & 0x7E0 | 0x10u);
      v19 = v18;
      v18 = _InterlockedCompareExchange(v7 + 1, (signed __int32)i, v18);
    }
    while ( v19 != v18 );
    DWORD2(v22) = v9;
    DWORD1(v22) = 1;
    goto LABEL_18;
  }
LABEL_10:
  v10 = 0;
  switch ( v9 )
  {
    case 2u:
      v10 = 2;
      break;
    case 3u:
      v10 = 8;
      break;
    case 6u:
      v10 = 4;
      break;
    case 7u:
      v10 = 16;
      break;
  }
  for ( i = (void (*)(void *))*(unsigned int *)v7; ; i = (void (*)(void *))v14 )
  {
    v12 = (unsigned int)i | v10;
    v13 = ((unsigned int)i | v10) == (_DWORD)i;
    if ( ((unsigned int)i | v10) != (_DWORD)i )
      v12 = (unsigned int)i | v10 | 1;
    v14 = _InterlockedCompareExchange(v7, v12, (signed __int32)i);
    if ( (_DWORD)i == v14 )
      break;
  }
  LODWORD(v22) = (v12 & 1) != 0 && ((unsigned __int8)i & 1) == 0;
LABEL_18:
  if ( (_DWORD)v22 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      wil::details::g_enabledStateManager,
      0x2FB7FEFu,
      (struct wil_details_FeatureReportingCache *)v7);
  v15 = DWORD1(v22);
  if ( DWORD1(v22) )
  {
    v16 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v16 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v16(50036719LL, DWORD2(v22), DWORD1(v22), 0LL);
    }
  }
  if ( !v13 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)wil::details::g_enabledStateManager,
      i);
  if ( (v3 & 0x400) != 0 )
  {
    v17 = v9;
    if ( (v3 & 0x800) != 0 )
      v17 = v9 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x2FB7FEF, v17, 0, v8, v20);
  }
  if ( !v13 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v15) = 1;
      g_wil_details_realtimeFeatureUsageHook(50036719LL, v9, v15);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(50036719LL, (__int64 *)va, 0LL, v6, &v24, 0LL, 0, 1LL);
  }
}
