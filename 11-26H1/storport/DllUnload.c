/*
 * XREFs of DllUnload @ 0x1400ADF30
 * Callers:
 *     <none>
 * Callees:
 *     FreeNvmeAuthKeyTable @ 0x140074FEC (FreeNvmeAuthKeyTable.c)
 *     StorpShutdownRegistryWatch @ 0x1400774A0 (StorpShutdownRegistryWatch.c)
 *     UnloadExtensionDriver @ 0x1400782AC (UnloadExtensionDriver.c)
 *     RaidSecondaryDumpDeregister @ 0x1400C49D4 (RaidSecondaryDumpDeregister.c)
 *     FreeCpuInformation @ 0x14011EA5C (FreeCpuInformation.c)
 *     FreeNvmeIceList @ 0x140187620 (FreeNvmeIceList.c)
 *     StorpWheaRemoveErrorSource @ 0x140188990 (StorpWheaRemoveErrorSource.c)
 *     StorpUnregisterShim @ 0x140190750 (StorpUnregisterShim.c)
 *     StorKsrUninitialize @ 0x140196A8C (StorKsrUninitialize.c)
 */

__int64 __fastcall DllUnload(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID *v4; // rbx
  __int64 v5; // rax
  PVOID *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  if ( _InterlockedExchangeAdd(&NumDllInitialize, 0xFFFFFFFF) == 1 )
  {
    StorpUnregisterShim();
    while ( 1 )
    {
      v4 = (PVOID *)EnclosureIdList;
      if ( EnclosureIdList == &EnclosureIdList )
        break;
      if ( *((PVOID **)EnclosureIdList + 1) != &EnclosureIdList
        || (v5 = *(_QWORD *)EnclosureIdList, *(PVOID *)(*(_QWORD *)EnclosureIdList + 8LL) != EnclosureIdList) )
      {
LABEL_12:
        __fastfail(3u);
      }
      EnclosureIdList = *(PVOID *)EnclosureIdList;
      *(_QWORD *)(v5 + 8) = &EnclosureIdList;
      ExFreePoolWithTag(v4[2], 0x48536152u);
      ExFreePoolWithTag(v4, 0x48536152u);
    }
    ExDeleteResourceLite(&EnclosureIdListLock);
    while ( 1 )
    {
      v6 = *(PVOID **)&WPP_MAIN_CB.SectorSize;
      if ( *(struct _DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
        break;
      if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WPP_MAIN_CB.SectorSize + 8LL) != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
        goto LABEL_12;
      v7 = **(_QWORD **)&WPP_MAIN_CB.SectorSize;
      if ( *(_QWORD *)(**(_QWORD **)&WPP_MAIN_CB.SectorSize + 8LL) != *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        goto LABEL_12;
      *(_QWORD *)&WPP_MAIN_CB.SectorSize = **(_QWORD **)&WPP_MAIN_CB.SectorSize;
      *(_QWORD *)(v7 + 8) = &WPP_MAIN_CB.SectorSize;
      ExFreePoolWithTag(v6[3], 0x48536152u);
      ExFreePoolWithTag(v6, 0x48536152u);
    }
    ExDeleteResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
    FreeNvmeIceList();
    ExDeleteResourceLite(&NvmeIceListLock);
    FreeNvmeAuthKeyTable();
    ExDeleteResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32);
    if ( RegWatchContext )
    {
      StorpShutdownRegistryWatch((__int64)RegWatchContext);
      ExFreePoolWithTag(RegWatchContext, 0x57526152u);
      RegWatchContext = 0LL;
    }
    StorpWheaRemoveErrorSource();
    UnloadExtensionDriver(v9, v8, v10);
    StorKsrUninitialize();
    FreeCpuInformation();
    if ( g_wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      g_wil_details_featureChangeNotification = 0LL;
    }
    a1 = g_wil_details_featureUsageProvider;
    if ( g_wil_details_featureUsageProvider )
    {
      RtlUnregisterFeatureUsageProvider();
      g_wil_details_featureUsageProvider = 0LL;
    }
    g_wil_details_isFeatureStagingInitialized = 0;
  }
  return RaidSecondaryDumpDeregister(a1, a2, a3, a4);
}
