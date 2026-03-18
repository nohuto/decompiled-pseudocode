/*
 * XREFs of ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x1401929F8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x140245984 (DpiFdoQuerySysMmAdapterCaps.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

char __fastcall DXGGLOBAL::GpuVaIoMmuEnabled(DXGGLOBAL *this)
{
  char v1; // bl
  __int64 v4; // [rsp+30h] [rbp+8h]

  v1 = *((_BYTE *)this + 1364);
  if ( !v1 )
  {
    v1 = 1;
    v4 = (unsigned int)Feature_GpuVaIoMmu__private_featureState;
    if ( (Feature_GpuVaIoMmu__private_featureState & 0x10) == 0 )
    {
      LODWORD(v4) = Feature_GpuVaIoMmu__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_GpuVaIoMmu__private_descriptor, v4, 3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v4,
        3,
        (__int64)&Feature_GpuVaIoMmu__private_descriptor);
    }
    *((_BYTE *)this + 1364) = 1;
  }
  return v1;
}
