/*
 * XREFs of Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline @ 0x14007072C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1403AA578 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledFallback @ 0x140070768 (Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledFallback.c)
 */

__int64 Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CleanUpDisplayedPrimaryInSetTimings__private_featureState & 0x10) != 0 )
    return Feature_CleanUpDisplayedPrimaryInSetTimings__private_featureState & 1;
  else
    return Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledFallback(
             (unsigned int)Feature_CleanUpDisplayedPrimaryInSetTimings__private_featureState,
             3LL);
}
