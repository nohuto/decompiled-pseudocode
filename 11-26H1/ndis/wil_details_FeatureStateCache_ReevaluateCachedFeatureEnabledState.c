/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140091FE8
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14008D920 (wil_details_IsEnabledFallback.c)
 *     wil_details_AreDependenciesEnabled @ 0x140091A5C (wil_details_AreDependenciesEnabled.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140092164 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r14d
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
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
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
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 28), v3);
  if ( !v8 )
    LODWORD(v14) = v11 & 0xFFFFF63E | CurrentFeatureEnabledState & 0x9C1;
  return v14;
}
