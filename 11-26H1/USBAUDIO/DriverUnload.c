/*
 * XREFs of DriverUnload @ 0x14002F2F0
 * Callers:
 *     DriverEntry @ 0x14002F13C (DriverEntry.c)
 * Callees:
 *     WppCleanupKm @ 0x14002FCB0 (WppCleanupKm.c)
 */

void __fastcall DriverUnload(__int64 a1)
{
  void *v2; // rcx

  if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  LODWORD(WPP_MAIN_CB.SecurityDescriptor) = 0;
  WppCleanupKm(a1);
  if ( g_RegistryPath )
  {
    v2 = (void *)*((_QWORD *)g_RegistryPath + 1);
    if ( v2 )
      ExFreePool(v2);
    ExFreePool(g_RegistryPath);
    g_RegistryPath = 0LL;
  }
}
