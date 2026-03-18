/*
 * XREFs of Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C
 * Callers:
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002D2B4 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__&DrvSampleDisplayState_ @ 0x14007EB18 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__-.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ApplyPathsModality @ 0x1401F498C (ApplyPathsModality.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x1401C6108 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
 */

__int64 Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DispBrokerOptimizations__private_featureState & 0x10) != 0 )
    return Feature_DispBrokerOptimizations__private_featureState & 1;
  else
    return Feature_DispBrokerOptimizations__private_IsEnabledFallback(
             (unsigned int)Feature_DispBrokerOptimizations__private_featureState,
             3LL);
}
