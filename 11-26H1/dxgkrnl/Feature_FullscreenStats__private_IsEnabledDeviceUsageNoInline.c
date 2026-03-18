/*
 * XREFs of Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x140067720
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x14003BE60 (NtQueryCompositionSurfaceStatistics.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x140067530 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x1400675E0 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z.c)
 *     ?QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1400A34C0 (-QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     Feature_FullscreenStats__private_IsEnabledFallback @ 0x14006775C (Feature_FullscreenStats__private_IsEnabledFallback.c)
 */

__int64 Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FullscreenStats__private_featureState & 0x10) != 0 )
    return Feature_FullscreenStats__private_featureState & 1;
  else
    return Feature_FullscreenStats__private_IsEnabledFallback(
             (unsigned int)Feature_FullscreenStats__private_featureState,
             3LL);
}
