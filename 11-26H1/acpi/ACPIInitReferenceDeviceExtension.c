/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x14001E480
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDockFindCorrespondingDock @ 0x14001C6D4 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 *     ACPIExtListTestElement @ 0x14001E418 (ACPIExtListTestElement.c)
 *     OSNotifyCreateOperationRegion @ 0x14001E71C (OSNotifyCreateOperationRegion.c)
 *     NotifyHandler @ 0x14001E9B0 (NotifyHandler.c)
 *     ACPIFilterIrpSetPower @ 0x1400262F0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1400280E0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003BD90 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C050 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x140046F28 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x140047354 (ACPIDetectDuplicateHID.c)
 *     AcpiDeviceResetInterface @ 0x140049BF0 (AcpiDeviceResetInterface.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051218 (ACPIGpeBuildWakeMasks.c)
 *     OSNotifyCreateThermalZone @ 0x140051E28 (OSNotifyCreateThermalZone.c)
 *     ACPIGetCmosInterface @ 0x140054C90 (ACPIGetCmosInterface.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x140055074 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIInitDeleteDeviceExtension @ 0x140061CBC (ACPIInitDeleteDeviceExtension.c)
 *     OSNotifyCreateProcessor @ 0x140063C6C (OSNotifyCreateProcessor.c)
 *     ACPIPccInterruptBuildDeviceExtension @ 0x1400651B0 (ACPIPccInterruptBuildDeviceExtension.c)
 *     ACPIDockIntfReference @ 0x1400AB340 (ACPIDockIntfReference.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1400AE448 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1400AE550 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400B4674 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 732) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
  return 1;
}
