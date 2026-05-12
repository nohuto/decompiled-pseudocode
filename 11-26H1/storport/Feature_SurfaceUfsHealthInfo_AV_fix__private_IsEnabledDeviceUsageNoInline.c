/*
 * XREFs of Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledDeviceUsageNoInline @ 0x1400B27E8
 * Callers:
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 * Callees:
 *     Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback @ 0x1400B2824 (Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback.c)
 */

__int64 Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SurfaceUfsHealthInfo_AV_fix__private_featureState & 0x10) != 0 )
    return Feature_SurfaceUfsHealthInfo_AV_fix__private_featureState & 1;
  else
    return Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback(
             (unsigned int)Feature_SurfaceUfsHealthInfo_AV_fix__private_featureState,
             3LL);
}
