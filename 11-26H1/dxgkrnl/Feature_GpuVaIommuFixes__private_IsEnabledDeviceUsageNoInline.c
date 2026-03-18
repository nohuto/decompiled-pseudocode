/*
 * XREFs of Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline @ 0x14006F7DC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DpiFdoCreateSysMmAdapter @ 0x14023FEBC (DpiFdoCreateSysMmAdapter.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x140245984 (DpiFdoQuerySysMmAdapterCaps.c)
 *     SmmAttachDomainToAllDevices @ 0x140284C0C (SmmAttachDomainToAllDevices.c)
 * Callees:
 *     Feature_GpuVaIommuFixes__private_IsEnabledFallback @ 0x14006F818 (Feature_GpuVaIommuFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GpuVaIommuFixes__private_featureState & 0x10) != 0 )
    return Feature_GpuVaIommuFixes__private_featureState & 1;
  else
    return Feature_GpuVaIommuFixes__private_IsEnabledFallback(
             (unsigned int)Feature_GpuVaIommuFixes__private_featureState,
             3LL);
}
