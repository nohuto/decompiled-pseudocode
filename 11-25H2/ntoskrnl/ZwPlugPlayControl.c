/*
 * XREFs of ZwPlugPlayControl @ 0x14069D8E0
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14071A824 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiCMSetProblem @ 0x140725498 (PiCMSetProblem.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1409ECC20 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlGetDeviceStatus @ 0x1409F68E0 (PiPnpRtlGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x140A184B0 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140A18580 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140A53030 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
