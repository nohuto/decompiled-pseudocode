/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14008B0D4
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14008B288 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        wil_details_FeatureStateCache observedState,
        wil_ReportingKind kind,
        const wil_details_FeatureDescriptor *descriptor)
{
  wil_details_FeatureStateCache *featureStateCache; // r9
  int v5; // edx
  unsigned int v6; // r8d
  signed __int32 exchange; // eax
  signed __int32 v8; // ett

  featureStateCache = descriptor->featureStateCache;
  v5 = kind - 3;
  if ( v5 )
  {
    if ( v5 != 1 )
      return;
    v6 = 32;
  }
  else
  {
    v6 = 16;
  }
  if ( descriptor->isAlwaysEnabled || descriptor->isAlwaysDisabled )
  {
    _InterlockedOr((volatile signed __int32 *)featureStateCache, v6);
  }
  else
  {
    exchange = featureStateCache->exchange;
    do
    {
      if ( (exchange & 2) == 0 )
        break;
      if ( ((LOBYTE(observedState.exchange64) ^ (unsigned __int8)exchange) & 1) != 0 )
        break;
      v8 = exchange;
      exchange = _InterlockedCompareExchange((volatile signed __int32 *)featureStateCache, exchange | v6, exchange);
    }
    while ( v8 != exchange );
  }
}
