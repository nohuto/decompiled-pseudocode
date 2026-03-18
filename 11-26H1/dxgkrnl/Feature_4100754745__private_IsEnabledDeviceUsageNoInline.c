/*
 * XREFs of Feature_4100754745__private_IsEnabledDeviceUsageNoInline @ 0x140081E90
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205FD4 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     Feature_4100754745__private_IsEnabledFallback @ 0x140081ECC (Feature_4100754745__private_IsEnabledFallback.c)
 */

__int64 Feature_4100754745__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_4100754745__private_featureState & 0x10) != 0 )
    return Feature_4100754745__private_featureState & 1;
  else
    return Feature_4100754745__private_IsEnabledFallback((unsigned int)Feature_4100754745__private_featureState, 3LL);
}
