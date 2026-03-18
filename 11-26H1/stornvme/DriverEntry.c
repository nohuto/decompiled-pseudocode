/*
 * XREFs of DriverEntry @ 0x140012008
 * Callers:
 *     GsDriverEntry @ 0x14004B010 (GsDriverEntry.c)
 * Callees:
 *     memset @ 0x140032A40 (memset.c)
 *     wil_InitializeFeatureStaging @ 0x14004B078 (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // eax
  NTSTATUS v5; // edi
  _QWORD v7[26]; // [rsp+20h] [rbp-79h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !g_DumpPreInitializeInvoked )
    wil_InitializeFeatureStaging();
  LODWORD(v7[23]) |= 0xC003B1B8;
  v7[1] = NVMeHwInitialize;
  v7[0] = 0x5000000D0LL;
  v7[2] = NVMeHwStartIo;
  LODWORD(v7[11]) = 16843010;
  v7[3] = NVMeHwInterrupt;
  v7[4] = NVMeHwFindAdapter;
  BYTE4(v7[11]) = 1;
  v7[5] = NVMeHwResetBus;
  v7[15] = NVMeHwAdapterControl;
  v7[16] = NVMeHwBuildIo;
  v7[22] = NVMeHwTracingEnabled;
  v7[25] = NVMeHwUnitControl;
  HIDWORD(v7[23]) = 2;
  LODWORD(v7[8]) = 4496;
  v7[9] = 0x200002088LL;
  v4 = ((__int64 (__fastcall *)(_DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD))StorPortInitialize)(
         DriverObject,
         RegistryPath,
         v7,
         0LL);
  v5 = v4;
  if ( !g_DumpPreInitializeInvoked )
  {
    if ( v4 )
    {
      if ( g_wil_details_featureChangeNotification )
      {
        RtlUnregisterFeatureConfigurationChangeNotification();
        g_wil_details_featureChangeNotification = 0LL;
      }
      if ( g_wil_details_featureUsageProvider )
      {
        RtlUnregisterFeatureUsageProvider();
        g_wil_details_featureUsageProvider = 0LL;
      }
      g_wil_details_isFeatureStagingInitialized = 0;
    }
    else
    {
      StorPortDriverUnload = (__int64)DriverObject->DriverUnload;
      if ( StorPortDriverUnload )
        DriverObject->DriverUnload = (PDRIVER_UNLOAD)StorNVMeDriverUnload;
    }
  }
  return v5;
}
