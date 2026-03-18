/*
 * XREFs of Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401ABE78
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017C3B8 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__&DrvSampleDisplayState_ @ 0x1401AB778 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__-.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 *     ApplyPathsModality @ 0x1401C9D0C (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401CD2F0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x1401ABEB0 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
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
