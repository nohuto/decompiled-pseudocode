/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x140087DF0 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 *     ldevLoadDriver @ 0x140101990 (ldevLoadDriver.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x140137664 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x140142714 (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     ?ShutdownImWorker@@YAJXZ @ 0x140149A50 (-ShutdownImWorker@@YAJXZ.c)
 *     Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck @ 0x140159D40 (Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage @ 0x1401A2124 (Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage.c)
 *     Feature_ID51538523__private_ReportDeviceUsage @ 0x1401A7180 (Feature_ID51538523__private_ReportDeviceUsage.c)
 *     Feature_Rust_GDI_REGION__private_IsEnabledPreCheck @ 0x1401C8AD4 (Feature_Rust_GDI_REGION__private_IsEnabledPreCheck.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v6 | v5, v6);
    }
    while ( v7 != v6 );
  }
}
