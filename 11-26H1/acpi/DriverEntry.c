/*
 * XREFs of DriverEntry @ 0x1400D8CB0
 * Callers:
 *     GsDriverEntry @ 0x1400D8B30 (GsDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memset @ 0x140072740 (memset.c)
 *     AcpiInitializeExternalResourceTranslation @ 0x1400A8D98 (AcpiInitializeExternalResourceTranslation.c)
 *     WppInitKm @ 0x1400A9DF8 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1400AAA1C (WppLoadTracingSupport.c)
 *     AcpiUseFlexibleOscHandoff @ 0x1400B3D60 (AcpiUseFlexibleOscHandoff.c)
 *     ArbLibraryInitialize @ 0x1400BF260 (ArbLibraryInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1400D7F6C (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetEmOverride @ 0x1400D82C4 (ACPIInitGetEmOverride.c)
 *     ACPIInitGetPlatformOverrides @ 0x1400D8538 (ACPIInitGetPlatformOverrides.c)
 *     ACPIGlobalInitialize @ 0x1400D8740 (ACPIGlobalInitialize.c)
 *     ACPIInitRecordEmOverrides @ 0x1400D88DC (ACPIInitRecordEmOverrides.c)
 *     AcpipInitPciBusStatePool @ 0x1400D8ACC (AcpipInitPciBusStatePool.c)
 *     AcpiDiagInitialize @ 0x1400D8B98 (AcpiDiagInitialize.c)
 *     wil_InitializeFeatureStaging @ 0x1400D96F8 (wil_InitializeFeatureStaging.c)
 *     AcpiInitializeDispatchTables @ 0x1400D98DC (AcpiInitializeDispatchTables.c)
 *     AcpiInitializeInterfaces @ 0x1400DB0E4 (AcpiInitializeInterfaces.c)
 *     AcpiDumpInit @ 0x1400DB308 (AcpiDumpInit.c)
 *     ACPIInitializeWorker @ 0x1400DC090 (ACPIInitializeWorker.c)
 *     Simulator_InitializeInterface @ 0x1400DC428 (Simulator_InitializeInterface.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp-48h] BYREF
  __int128 SystemInformation; // [rsp+48h] [rbp-40h] BYREF

  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_AcpiTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (_IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  wil_InitializeFeatureStaging();
  AcpiDriverProxyExtension = 0LL;
  AcpiInitializeInterfaces();
  AcpiInitializeDispatchTables();
  AcpiOverrideAttributes = 0;
  AcpiRetainDebugDeviceInD0 = 0;
  ACPIInitGetEmOverride();
  ACPIInitReadRegistryKeys();
  ACPIInitGetPlatformOverrides();
  result = ArbLibraryInitialize();
  if ( result >= 0 )
  {
    if ( (AcpiOverrideAttributes & 0x10000) != 0 )
    {
      AcpiLoadSimulatorTable = 1;
      Simulator_InitializeInterface();
    }
    AcpiRegistryPath.Length = 0;
    v5 = (unsigned __int16)(RegistryPath->Length + 2);
    AcpiDriverObject = DriverObject;
    AcpiRegistryPath.MaximumLength = v5;
    AcpiRegistryPath.Buffer = (wchar_t *)ExAllocatePool2(256LL, RegistryPath->Length + 2LL, 1299211073LL);
    if ( AcpiRegistryPath.Buffer )
      RtlCopyUnicodeString(&AcpiRegistryPath, RegistryPath);
    else
      AcpiRegistryPath.MaximumLength = 0;
    KeInitializeDpc(&AcpiPowerDpc, (PKDEFERRED_ROUTINE)ACPIDevicePowerDpc, 0LL);
    KeInitializeDpc(&AcpiBuildDpc, (PKDEFERRED_ROUTINE)ACPIBuildDeviceDpc, 0LL);
    KeInitializeDpc(&AcpiGpeDpc, (PKDEFERRED_ROUTINE)ACPIInterruptDispatchEventDpc, 0LL);
    KeInitializeTimer(&AcpiGpeTimer);
    KeInitializeSpinLock(&AcpiDeviceTreeLock);
    KeInitializeSpinLock(&AcpiPowerLock);
    KeInitializeSpinLock(&AcpiPowerQueueLock);
    KeInitializeSpinLock(&AcpiBuildQueueLock);
    KeInitializeSpinLock(&AcpiThermalLock);
    KeInitializeSpinLock(&AcpiThermalConstraintLock);
    KeInitializeSpinLock(&AcpiFanLock);
    KeInitializeSpinLock(&AcpiButtonLock);
    KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
    KeInitializeSpinLock(&AcpiPm1EnableRegisterLock);
    KeInitializeSpinLock(&AcpiWatchdogLock);
    AcpiOpRegionLock.Count = 1;
    AcpiOpRegionLock.Owner = 0LL;
    AcpiOpRegionLock.Contention = 0;
    KeInitializeEvent(&AcpiOpRegionLock.Event, SynchronizationEvent, 0);
    AcpiProcessorStartupLock.Count = 1;
    AcpiProcessorStartupLock.Owner = 0LL;
    AcpiProcessorStartupLock.Contention = 0;
    KeInitializeEvent(&AcpiProcessorStartupLock.Event, SynchronizationEvent, 0);
    qword_140090C38 = (__int64)&AcpiPowerDelayedQueueList;
    AcpiPowerDelayedQueueList = (__int64)&AcpiPowerDelayedQueueList;
    qword_140090C48 = (__int64)&AcpiPowerQueueList;
    AcpiPowerQueueList = (__int64)&AcpiPowerQueueList;
    qword_140090C58 = (__int64)&AcpiPowerBlockedOnDependencyList;
    AcpiPowerBlockedOnDependencyList = (__int64)&AcpiPowerBlockedOnDependencyList;
    qword_140090C68 = (__int64)&AcpiPowerBlockedOnPhase3List;
    AcpiPowerBlockedOnPhase3List = (__int64)&AcpiPowerBlockedOnPhase3List;
    qword_140090C78 = (__int64)&AcpiPowerPhase0List;
    AcpiPowerPhase0List = &AcpiPowerPhase0List;
    qword_140090C88 = (__int64)&AcpiPowerPhase1List;
    AcpiPowerPhase1List = &AcpiPowerPhase1List;
    qword_140090C98 = (__int64)&AcpiPowerPhase2List;
    AcpiPowerPhase2List = (__int64)&AcpiPowerPhase2List;
    qword_140090CA8 = (__int64)&AcpiPowerPhase3List;
    AcpiPowerPhase3List = (__int64)&AcpiPowerPhase3List;
    qword_140090CB8 = (__int64)&AcpiPowerPhase4List;
    AcpiPowerPhase4List = &AcpiPowerPhase4List;
    qword_140090CC8 = (__int64)&AcpiPowerPhase5List;
    AcpiPowerPhase5List = &AcpiPowerPhase5List;
    qword_140090CD8 = (__int64)&AcpiPowerWaitWakeList;
    AcpiPowerWaitWakeList = (__int64)&AcpiPowerWaitWakeList;
    qword_14008F7B8 = (__int64)&AcpiPowerWaitWakeInterruptList;
    AcpiPowerWaitWakeInterruptList = (__int64)&AcpiPowerWaitWakeInterruptList;
    qword_140090CE8 = (__int64)&AcpiPowerSynchronizeList;
    AcpiPowerSynchronizeList = (__int64)&AcpiPowerSynchronizeList;
    qword_140090CF8 = (__int64)&AcpiPowerNodeList;
    AcpiPowerNodeList = (__int64)&AcpiPowerNodeList;
    qword_140090D08 = (__int64)&AcpiDevicesWhichMightNeedEnumerationList;
    AcpiDevicesWhichMightNeedEnumerationList = (__int64)&AcpiDevicesWhichMightNeedEnumerationList;
    qword_140090F58 = (__int64)&AcpiBuildQueueList;
    AcpiBuildQueueList = (__int64)&AcpiBuildQueueList;
    qword_140090FE8 = (__int64)&AcpiBuildDeviceList;
    AcpiBuildDeviceList = (__int64)&AcpiBuildDeviceList;
    qword_140090F68 = (__int64)&AcpiBuildDelayedDependencyList;
    AcpiBuildDelayedDependencyList = (__int64)&AcpiBuildDelayedDependencyList;
    qword_140090F78 = (__int64)&AcpiBuildOperationRegionList;
    AcpiBuildOperationRegionList = (__int64)&AcpiBuildOperationRegionList;
    qword_140090F88 = (__int64)&AcpiBuildPowerResourceList;
    AcpiBuildPowerResourceList = (__int64)&AcpiBuildPowerResourceList;
    qword_140090F98 = (__int64)&AcpiBuildRunMethodList;
    AcpiBuildRunMethodList = (__int64)&AcpiBuildRunMethodList;
    qword_140090FA8 = (__int64)&AcpiBuildSpecialSynchronizationList;
    AcpiBuildSpecialSynchronizationList = &AcpiBuildSpecialSynchronizationList;
    qword_140090FB8 = (__int64)&AcpiBuildSynchronizationList;
    AcpiBuildSynchronizationList = &AcpiBuildSynchronizationList;
    qword_140090FC8 = (__int64)&AcpiBuildThermalZoneList;
    AcpiBuildThermalZoneList = (__int64)&AcpiBuildThermalZoneList;
    qword_140090EE8 = (__int64)&AcpiUnresolvedEjectList;
    AcpiUnresolvedEjectList = (__int64)&AcpiUnresolvedEjectList;
    qword_14008F848 = (__int64)&AcpiThermalList;
    AcpiThermalList = (__int64)&AcpiThermalList;
    qword_14008F878 = (__int64)&AcpiThermalClientList;
    AcpiThermalClientList = (__int64)&AcpiThermalClientList;
    qword_14008F858 = (__int64)&AcpiThermalUnclaimedConstraintList;
    AcpiThermalUnclaimedConstraintList = (__int64)&AcpiThermalUnclaimedConstraintList;
    qword_14008F888 = (__int64)&AcpiThermalZoneList;
    AcpiThermalZoneList = (__int64)&AcpiThermalZoneList;
    qword_140090AA8 = (__int64)&AcpiFanList;
    AcpiFanList = (__int64)&AcpiFanList;
    qword_140090ED8 = (__int64)&AcpiButtonList;
    AcpiButtonList = (__int64)&AcpiButtonList;
    qword_140091238 = (__int64)&AcpiGetListEntry;
    AcpiGetListEntry = (__int64)&AcpiGetListEntry;
    qword_14008FA68 = (__int64)&AcpiOpRegionHandlerList;
    AcpiOpRegionHandlerList = (__int64)&AcpiOpRegionHandlerList;
    qword_14008FE58 = (__int64)&AcpiIgnoreResourceMapValidationList;
    AcpiIgnoreResourceMapValidationList = (__int64)&AcpiIgnoreResourceMapValidationList;
    qword_14008F9B8 = (__int64)&AcpiProcessorContainerRootList;
    AcpiProcessorContainerRootList = (__int64)&AcpiProcessorContainerRootList;
    AcpiPowerDpcFlags = 0;
    AcpiPowerCurrentPagingPathTransitions = 0;
    AcpiBuildDpcFlags = 0;
    AcpiBuildFixedButtonEnumerated = 0;
    AcpiFatalOutstanding = 0;
    AcpiGpeDpcRunning = 0;
    AcpiGpeDpcScheduled = 0;
    AcpiGpeWorkDone = 0;
    AcpiRegisteredOpRegionMask = 0;
    BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 0;
    AcpiUseFlexibleOscHandoffRegValue = AcpiUseFlexibleOscHandoff();
    ExInitializeNPagedLookasideList(&BuildRequestLookAsideList, 0LL, 0LL, 0x200u, 0x88uLL, 0x44706341u, 0x1Eu);
    ExInitializeNPagedLookasideList(&RequestLookAsideList, 0LL, 0LL, 0x200u, 0x108uLL, 0x50706341u, 0x3Eu);
    ExInitializeNPagedLookasideList(&DeviceExtensionLookAsideList, 0LL, 0LL, 0x200u, 0x3F8uLL, 0x44706341u, 0x40u);
    ExInitializeNPagedLookasideList(&RequestDependencyLookAsideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x44706341u, 0x32u);
    ExInitializeNPagedLookasideList(&ObjectDataLookAsideList, 0LL, 0LL, 0x200u, 0x28uLL, 0x4F706341u, 0x66u);
    ExInitializeNPagedLookasideList(&XswContextLookAsideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x50706341u, 0x10u);
    ExInitializeNPagedLookasideList(&WakeInterruptLookAsideList, 0LL, 0LL, 0x200u, 0x60uLL, 0x50706341u, 0x10u);
    ExInitializeNPagedLookasideList(&NotificationContextLookAsideList, 0LL, 0LL, 0x200u, 0x18uLL, 0x4D706341u, 0x10u);
    AcpipInitPciBusStatePool();
    ACPIInitializeWorker();
    DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ACPIDispatchAddDevice;
    memset64(DriverObject->MajorFunction, (unsigned __int64)ACPIDispatchIrp, 0x1CuLL);
    DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))ACPIUnload;
    memset(&WPP_MAIN_CB.Reserved, 0, 0xE0uLL);
    LODWORD(WPP_MAIN_CB.Reserved) = 224;
    qword_1400911A8 = (__int64)ACPIFilterFastIoDetachCallback;
    DriverObject->FastIoDispatch = (_FAST_IO_DISPATCH *)&WPP_MAIN_CB.Reserved;
    AcpiDiagInitialize();
    ACPIInitRecordEmOverrides();
    ACPIGlobalInitialize();
    AcpiInitializeExternalResourceTranslation(DriverObject);
    qword_140090D28 = (__int64)&AcpiDeviceFirmwareLockHandlerList;
    AcpiDeviceFirmwareLockHandlerList = (__int64)&AcpiDeviceFirmwareLockHandlerList;
    KeInitializeSpinLock(&AcpiDeviceFirmwareLockGlobalLock);
    LOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 0;
    IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)BootCompleteCallback, &AcpiRegistryPath);
    ReturnLength = 0;
    SystemInformation = 0LL;
    if ( ZwQuerySystemInformation(SystemIsolatedUserModeInformation, &SystemInformation, 0x10u, &ReturnLength) >= 0 )
      BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = SystemInformation & 1;
    AcpiDumpInit();
    WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)ExGetFfaInterface(1LL);
    return 0;
  }
  return result;
}
