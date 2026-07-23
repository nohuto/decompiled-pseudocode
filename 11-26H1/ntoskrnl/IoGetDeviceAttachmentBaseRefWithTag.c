/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14026D554 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026E3F4 (FsRtlReleaseFileForModWrite.c)
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140423E94 (PopDiagTraceThermalZoneRundown.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404255AC (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1404258E0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PoStoreRequester @ 0x1404263B8 (PoStoreRequester.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1404C0370 (PopDiagTraceDeviceIdleCheck.c)
 *     PoSetSystemWakeDevice @ 0x1404D6A20 (PoSetSystemWakeDevice.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 *     HalpIommuGetDeviceId @ 0x1404F04C0 (HalpIommuGetDeviceId.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404F90BC (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14050A090 (PopTraceThermalZonePassiveHistogram.c)
 *     PopDiagTraceThermalStateChange @ 0x14060BF5C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14060C084 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14060C420 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14060C554 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTracePowerLimitHistogram @ 0x14060C8BC (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060CD80 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x14060CF50 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14060D074 (PopTraceZoneCr3Tripped.c)
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1407CF28C (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopDiagTraceActiveCooling @ 0x1407D55EC (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x1407D6A8C (PopDiagTracePassiveCooling.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407D711C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D74B0 (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407D8864 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1407D8958 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1407E8444 (PopSqmThermalCriticalEvent.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409DBF3C (IopQueryInterfaceRecurseUp.c)
 *     PoThermalCounterSetCallback @ 0x140A761B0 (PoThermalCounterSetCallback.c)
 *     PiControlGetDeviceStack @ 0x140A93A48 (PiControlGetDeviceStack.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC37E0 (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140AC398C (PopDiagTraceThermalRequest.c)
 *     PopCheckThermalPolicy @ 0x140AC5D5C (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140AC5FFC (PopDiagTraceThermalCoolingMode.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 *     PopNotifyDevice @ 0x140C13C14 (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140CC3960 (IopMarkBootPartition.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14026E884 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  void *DeviceAttachmentBase; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return DeviceAttachmentBase;
}
