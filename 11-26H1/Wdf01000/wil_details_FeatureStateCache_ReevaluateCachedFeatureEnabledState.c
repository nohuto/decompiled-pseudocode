/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14008AFCC
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x14008B130 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x14008B288 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x14008B130 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        wil_details_FeatureStateCache observedState,
        const wil_details_FeatureDescriptor *descriptor)
{
  unsigned int v3; // ebp
  unsigned int exchange; // ebx
  __int16 exchange64; // di
  int v8; // esi
  signed __int32 i; // ecx
  signed __int32 v10; // eax
  int shouldCacheState; // [rsp+50h] [rbp+8h] BYREF
  wil_details_FeatureStateCache state; // [rsp+58h] [rbp+10h]

  v3 = 0;
  shouldCacheState = 0;
  state.exchange64 = observedState.exchange64;
  exchange = observedState.exchange;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  exchange64 = wil_details_GetCurrentFeatureEnabledState(descriptor, &shouldCacheState).exchange64;
  if ( descriptor->changeTime )
    v8 = shouldCacheState;
  else
    v8 = v3 != 0 ? shouldCacheState : 0;
  for ( i = exchange; ; i = v10 )
  {
    state.exchange = exchange;
    if ( v8 )
    {
      state.exchange = exchange;
      if ( (i & 2) == 0 )
      {
        exchange = exchange64 & 0x9C1 | i & 0xFFFFF63E | 2;
        state.exchange = exchange;
      }
    }
    if ( (i & 4) == 0 )
    {
      exchange = exchange & 0xFFFFFBFF | exchange64 & 0x400 | 4;
      state.exchange = exchange;
    }
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)featureState, exchange, i);
    if ( i == v10 )
      break;
    exchange = v10;
  }
  if ( (i & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(
      featureState,
      (wil_FeatureChangeTime)descriptor->changeTime,
      v3);
  if ( !v8 )
    state.exchange = exchange & 0xFFFFF63E | exchange64 & 0x9C1;
  return state;
}
