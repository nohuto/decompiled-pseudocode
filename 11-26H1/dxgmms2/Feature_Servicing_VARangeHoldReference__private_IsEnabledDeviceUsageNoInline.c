/*
 * XREFs of Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004DCBC
 * Callers:
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x140105F78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x14010EFB0 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_AL.c)
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140129B90 (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 * Callees:
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback @ 0x14004DCF8 (Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_VARangeHoldReference__private_featureState & 0x10) != 0 )
    return Feature_Servicing_VARangeHoldReference__private_featureState & 1;
  else
    return Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_VARangeHoldReference__private_featureState,
             3LL);
}
