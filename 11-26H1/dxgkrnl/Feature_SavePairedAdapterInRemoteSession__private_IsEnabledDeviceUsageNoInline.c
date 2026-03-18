/*
 * XREFs of Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x14006737C
 * Callers:
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401D89D0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403FE2EC (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback @ 0x1400677E8 (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback.c)
 */

__int64 Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SavePairedAdapterInRemoteSession__private_featureState & 0x10) != 0 )
    return Feature_SavePairedAdapterInRemoteSession__private_featureState & 1;
  else
    return Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback(
             (unsigned int)Feature_SavePairedAdapterInRemoteSession__private_featureState,
             3LL);
}
