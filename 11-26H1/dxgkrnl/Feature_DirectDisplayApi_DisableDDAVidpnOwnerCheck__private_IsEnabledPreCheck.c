/*
 * XREFs of Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck @ 0x14005C0C8
 * Callers:
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x14029CB18 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x14029E57C (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState;
  if ( (Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_descriptor,
      v1,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_descriptor);
  }
  return 1LL;
}
