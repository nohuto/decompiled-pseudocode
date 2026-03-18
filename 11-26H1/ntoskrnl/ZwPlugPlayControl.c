/*
 * XREFs of ZwPlugPlayControl @ 0x140725BB0
 * Callers:
 *     DifZwPlugPlayControlWrapper @ 0x1406AE440 (DifZwPlugPlayControlWrapper.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B0854 (PiCMDeleteDeviceWorker.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x140A786F0 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlGetDeviceStatus @ 0x140A7F4D0 (PiPnpRtlGetDeviceStatus.c)
 *     PlugPlayGetDeviceStatus @ 0x140A80AD4 (PlugPlayGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x140AA1E30 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140AAA010 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140AF0900 (PiPnpRtlGetDeviceRelationsList.c)
 *     PiCMSetProblem @ 0x140B3DF98 (PiCMSetProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
