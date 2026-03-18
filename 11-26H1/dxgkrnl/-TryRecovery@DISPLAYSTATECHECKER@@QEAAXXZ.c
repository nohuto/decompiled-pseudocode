/*
 * XREFs of ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401CC0B0
 * Callers:
 *     DxgkCheckDisplayState @ 0x1401CC150 (DxgkCheckDisplayState.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     DpiTryLidStateRecovery @ 0x1400858F4 (DpiTryLidStateRecovery.c)
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401C74F4 (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1401CBF24 (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 */

void __fastcall DISPLAYSTATECHECKER::TryRecovery(DISPLAYSTATECHECKER *this)
{
  int v2; // eax
  __int64 v3; // [rsp+38h] [rbp+10h]

  if ( DISPLAYSTATECHECKER::NeedLidStateRecovery(this) )
  {
    DpiTryLidStateRecovery();
  }
  else
  {
    v3 = (unsigned int)Feature_BlackScreenAutoRecoveryFramework__private_featureState;
    if ( (Feature_BlackScreenAutoRecoveryFramework__private_featureState & 0x10) == 0 )
    {
      LODWORD(v3) = Feature_BlackScreenAutoRecoveryFramework__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_BlackScreenAutoRecoveryFramework__private_descriptor,
        v3,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v3,
        3,
        (__int64)&Feature_BlackScreenAutoRecoveryFramework__private_descriptor);
    }
    if ( *((_BYTE *)this + 14095) )
    {
      v2 = (unsigned __int8)*(_DWORD *)this;
      if ( v2 == 1 || v2 == 9 )
        DxgkRequestDisplayRecoveryToBroker();
    }
  }
}
