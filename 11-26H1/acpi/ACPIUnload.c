/*
 * XREFs of ACPIUnload @ 0x14005E810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WppCleanupKm @ 0x1400AC7F8 (WppCleanupKm.c)
 */

__int64 __fastcall ACPIUnload(__int64 a1)
{
  int v2; // edx

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
  KeSetEvent(&ACPITerminateEvent, 0, 0);
  KeWaitForSingleObject(ACPIThread, Executive, 0, 0, 0LL);
  ObfDereferenceObject(ACPIThread);
  IoDeleteSymbolicLink(&ACPISymbolicLinkName);
  ExDeleteNPagedLookasideList(&BuildRequestLookAsideList);
  ExDeleteNPagedLookasideList(&RequestLookAsideList);
  ExDeleteNPagedLookasideList(&DeviceExtensionLookAsideList);
  ExDeleteNPagedLookasideList(&ObjectDataLookAsideList);
  ExDeleteNPagedLookasideList(&XswContextLookAsideList);
  ExDeleteNPagedLookasideList(&WakeInterruptLookAsideList);
  ExDeleteNPagedLookasideList(&NotificationContextLookAsideList);
  if ( AcpiRegistryPath.Buffer )
    ExFreePoolWithTag(AcpiRegistryPath.Buffer, 0);
  if ( *((_QWORD *)&AcpiProcessorString + 1) )
    ExFreePoolWithTag(*((PVOID *)&AcpiProcessorString + 1), 0);
  if ( gE820Info )
    ExFreePoolWithTag((PVOID)gE820Info, 0);
  if ( ArbMmConfigRange )
  {
    ExFreePoolWithTag(ArbMmConfigRange, 0x4E627241u);
    ArbMmConfigRange = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    ExFreeFfaInterface();
    WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      18,
      (__int64)&WPP_49a3cf2aed283f952c963990affd9223_Traceguids);
  }
  return WppCleanupKm(a1);
}
