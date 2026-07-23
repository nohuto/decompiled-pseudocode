/*
 * XREFs of ZwPlugPlayControl @ 0x14072A780
 * Callers:
 *     DifZwPlugPlayControlWrapper @ 0x1406B2020 (DifZwPlugPlayControlWrapper.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PiCMSetProblem @ 0x14094CFF8 (PiCMSetProblem.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x140A81190 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlGetDeviceStatus @ 0x140A85340 (PiPnpRtlGetDeviceStatus.c)
 *     PlugPlayGetDeviceStatus @ 0x140A86944 (PlugPlayGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x140AA3900 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140AA75F0 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140AF34D0 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PnPControlClass);
}
