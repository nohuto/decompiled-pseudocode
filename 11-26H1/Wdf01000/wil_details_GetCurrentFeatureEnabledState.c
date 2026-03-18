/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x14008B130
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14008AFCC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14008AFCC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1400DA3D4 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_GetCurrentFeatureEnabledState(
        const wil_details_FeatureDescriptor *descriptor,
        int *cacheFeatureState,
        __int64 a3,
        int *a4)
{
  unsigned __int8 changeTime; // al
  BOOL v6; // r8d
  unsigned int featureId; // edx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  int v12; // ebx
  const wil_details_FeatureDescriptor *const *requiresFeatures; // rdi
  const wil_details_FeatureDescriptor *v14; // rcx
  unsigned int exchange; // eax
  BOOL v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  wil_FeatureState state; // [rsp+20h] [rbp-28h] BYREF
  wil_details_FeatureStateCache result; // [rsp+50h] [rbp+8h]
  wil_details_FeatureStateCache observedState; // [rsp+58h] [rbp+10h]

  changeTime = descriptor->changeTime;
  v6 = changeTime == 3 || changeTime == 2;
  *cacheFeatureState = 1;
  featureId = descriptor->featureId;
  memset(&state, 0, sizeof(state));
  v8 = wil_RtlStagingConfig_QueryFeatureState(&state, featureId, v6, a4);
  result.payloadId = 0;
  v9 = state.enabledState & (unsigned __int8)-(v8 != 0) & 3;
  if ( v9 )
  {
    v10 = 0;
    if ( state.enabledState == wil_FeatureEnabledState_Enabled )
      v10 = 64;
  }
  else
  {
    v10 = descriptor->isEnabledByDefault != 0 ? 0x40 : 0;
  }
  v11 = (state.hasNotification != 0 ? 0x400 : 0) | (state.isWexpConfiguration != 0 ? 0x800 : 0) | (v9 << 7) | v10;
  v12 = v11 | (v11 >> 6) & 1;
  result.exchange = v12;
  if ( ((v11 >> 6) & 1) != 0 )
  {
    requiresFeatures = descriptor->requiresFeatures;
    if ( requiresFeatures )
    {
      while ( (v12 & 1) != 0 )
      {
        v14 = *requiresFeatures;
        if ( !*requiresFeatures )
          break;
        if ( v14->isAlwaysEnabled || v14->isAlwaysDisabled )
        {
          v17 = (v12 & 1) != 0 && v14->isEnabledByDefault;
          v18 = v12 & 0xFFFFFFFE;
        }
        else
        {
          observedState.exchange64 = v14->featureStateCache->exchange64;
          if ( (observedState.exchange64 & 2) != 0 )
            exchange = v14->featureStateCache->exchange;
          else
            LOBYTE(exchange) = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                                 v14->featureStateCache,
                                 observedState,
                                 v14).exchange64;
          v16 = ((unsigned __int8)v12 & (unsigned __int8)exchange & 1) != 0;
          v17 = v12 & 0xFFFFFFFE;
          v18 = v16;
        }
        v12 = v17 | v18;
        result.exchange = v12;
        ++requiresFeatures;
      }
    }
  }
  return result;
}
