/*
 * XREFs of ACPIDevicePowerFlushQueue @ 0x14001C97C
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x140042F5C (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14004FE60 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x140060E90 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPITableUnload @ 0x140069970 (ACPITableUnload.c)
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x14001C9F8 (ACPIDeviceInternalSynchronizeRequest.c)
 */

__int64 __fastcall ACPIDevicePowerFlushQueue(__int64 a1)
{
  unsigned int v2; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = ACPIDeviceInternalSynchronizeRequest(a1, &ACPIDevicePowerNotifyEvent, &Event);
  if ( v2 == 259 )
  {
    v2 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v2;
}
