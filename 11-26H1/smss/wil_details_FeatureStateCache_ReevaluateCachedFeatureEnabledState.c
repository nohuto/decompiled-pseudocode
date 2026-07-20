/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140019FC4
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14000D584 (wil_details_IsEnabledFallback.c)
 *     wil_details_AreDependenciesEnabled @ 0x140019A94 (wil_details_AreDependenciesEnabled.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x14001A128 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x14001F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // ebx
  __int16 CurrentFeatureEnabledState; // di
  int v8; // esi
  signed __int32 i; // ecx
  signed __int32 v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v12 = 0;
  v13 = a2;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a3, &v12);
  if ( *(_BYTE *)(a3 + 28) )
    v8 = v12;
  else
    v8 = v3 != 0 ? v12 : 0;
  for ( i = v5; ; i = v10 )
  {
    LODWORD(v13) = v5;
    if ( v8 )
    {
      LODWORD(v13) = v5;
      if ( (i & 2) == 0 )
      {
        v5 = CurrentFeatureEnabledState & 0x9C1 | i & 0xFFFFF63E | 2;
        LODWORD(v13) = v5;
      }
    }
    if ( (i & 4) == 0 )
    {
      v5 = v5 & 0xFFFFFBFF | CurrentFeatureEnabledState & 0x400 | 4;
      LODWORD(v13) = v5;
    }
    v10 = _InterlockedCompareExchange(a1, v5, i);
    if ( i == v10 )
      break;
    v5 = v10;
  }
  if ( (i & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 28), v3);
  if ( !v8 )
    LODWORD(v13) = v5 & 0xFFFFF63E | CurrentFeatureEnabledState & 0x9C1;
  return v13;
}
