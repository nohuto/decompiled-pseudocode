/*
 * XREFs of Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline @ 0x1400B2840
 * Callers:
 *     StorpInitializeAdapterTelemetry @ 0x140056650 (StorpInitializeAdapterTelemetry.c)
 *     StorpTelemetrySendAdapterUfsHealthInfo @ 0x1400C14F4 (StorpTelemetrySendAdapterUfsHealthInfo.c)
 * Callees:
 *     Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback @ 0x1400B287C (Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback.c)
 */

__int64 Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SurfaceUfsHealthInfo__private_featureState & 0x10) != 0 )
    return Feature_SurfaceUfsHealthInfo__private_featureState & 1;
  else
    return Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback(
             (unsigned int)Feature_SurfaceUfsHealthInfo__private_featureState,
             3LL);
}
