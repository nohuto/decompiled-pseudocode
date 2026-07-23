/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14041C498
 * Callers:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14041C460 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x140603D70 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback.c)
 *     Feature_CFR_Child_KM_C__private_ReportUsageFallback @ 0x1406E70F4 (Feature_CFR_Child_KM_C__private_ReportUsageFallback.c)
 *     Feature_CFR_Parent_KM_C__private_ReportUsageFallback @ 0x1406E7164 (Feature_CFR_Parent_KM_C__private_ReportUsageFallback.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x1406E71D4 (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x14041C5B8 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r14d
  signed __int32 v5; // edi
  __int16 CurrentFeatureEnabledState; // bx
  int v8; // ebp
  signed __int32 v9; // eax
  char i; // cl
  signed __int32 v11; // esi
  int v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v13 = 0;
  v14 = a2;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = guard_dispatch_icall_no_overrides(a1, a2);
  CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a3, &v13);
  if ( *(_BYTE *)(a3 + 28) )
    v8 = v13;
  else
    v8 = v3 != 0 ? v13 : 0;
  v9 = v5;
  for ( i = v5; ; i = v9 )
  {
    LODWORD(v14) = v9 | 0x40000;
    v11 = v9 | 0x40000;
    if ( v8 && (i & 2) == 0 )
    {
      v11 = CurrentFeatureEnabledState & 0x9C1 | v9 & 0xFFFBF63E | 0x40000 | 2;
      LODWORD(v14) = v11;
    }
    if ( (v5 & 4) == 0 )
    {
      v11 = v11 & 0xFFFFFBFF | CurrentFeatureEnabledState & 0x400 | 4;
      LODWORD(v14) = v11;
    }
    v9 = _InterlockedCompareExchange(a1, v11, v5);
    if ( v5 == v9 )
      break;
    v5 = v9;
  }
  if ( (v5 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    guard_dispatch_icall_no_overrides(a1, *(unsigned __int8 *)(a3 + 28));
  if ( !v8 )
    LODWORD(v14) = v11 & 0xFFFFF63E | CurrentFeatureEnabledState & 0x9C1;
  return v14;
}
