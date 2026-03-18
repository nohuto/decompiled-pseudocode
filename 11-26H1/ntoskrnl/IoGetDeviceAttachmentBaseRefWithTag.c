/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14026DFE4 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026EE84 (FsRtlReleaseFileForModWrite.c)
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140434FBC (PopDiagTraceThermalZoneRundown.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14043661C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140436950 (PopTraceThermalRequestPassiveHistogram.c)
 *     PoStoreRequester @ 0x140437428 (PoStoreRequester.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1404C69C0 (PopDiagTraceDeviceIdleCheck.c)
 *     PoSetSystemWakeDevice @ 0x1404DD340 (PoSetSystemWakeDevice.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 *     HalpIommuGetDeviceId @ 0x1404F6EB0 (HalpIommuGetDeviceId.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404FF8CC (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140510620 (PopTraceThermalZonePassiveHistogram.c)
 *     PopDiagTraceThermalStateChange @ 0x14060939C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1406094C4 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140609860 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140609994 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTracePowerLimitHistogram @ 0x140609CFC (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060A1C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x14060A390 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14060A4B4 (PopTraceZoneCr3Tripped.c)
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1407CC1EC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopDiagTraceActiveCooling @ 0x1407D2580 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x1407D390C (PopDiagTracePassiveCooling.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407D3F9C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D4330 (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407D56AC (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1407D57A0 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1407E33B4 (PopSqmThermalCriticalEvent.c)
 *     PoThermalCounterSetCallback @ 0x140A691E0 (PoThermalCounterSetCallback.c)
 *     PiControlGetDeviceStack @ 0x140A8ED78 (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x140AA8A08 (IopQueryInterfaceRecurseUp.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC1740 (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140AC18EC (PopDiagTraceThermalRequest.c)
 *     PopCheckThermalPolicy @ 0x140AC40EC (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140AC438C (PopDiagTraceThermalCoolingMode.c)
 *     PopFxRegisterDevice @ 0x140B4F9A0 (PopFxRegisterDevice.c)
 *     PopNotifyDevice @ 0x140C0DA04 (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140CBD890 (IopMarkBootPartition.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14026F314 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
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
