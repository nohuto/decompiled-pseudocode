/*
 * XREFs of Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline @ 0x140075C2C
 * Callers:
 *     ?GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA?AU_LUID@@K@Z @ 0x140202EB8 (-GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA-AU_LUID@@K@Z.c)
 *     ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x140204124 (-SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledFallback @ 0x140075C68 (Feature_SetPairedRenderNoSessionLock__private_IsEnabledFallback.c)
 */

__int64 Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetPairedRenderNoSessionLock__private_featureState & 0x10) != 0 )
    return Feature_SetPairedRenderNoSessionLock__private_featureState & 1;
  else
    return Feature_SetPairedRenderNoSessionLock__private_IsEnabledFallback(
             (unsigned int)Feature_SetPairedRenderNoSessionLock__private_featureState,
             3LL);
}
