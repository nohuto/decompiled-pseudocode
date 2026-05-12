/*
 * XREFs of NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine @ 0x1401253C0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40 (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 *     NvmeAdapterSendPowerToMiniport @ 0x140126054 (NvmeAdapterSendPowerToMiniport.c)
 */

void __fastcall NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine(PDEVICE_OBJECT DeviceObject, __int64 Context)
{
  void *DeviceExtension; // rdi
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  Interval.QuadPart = 0LL;
  if ( (unsigned int)NvmeAdapterSendPowerToMiniport(DeviceExtension) == -2147483631 )
  {
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    NvmeAdapterSendPowerToMiniport(DeviceExtension);
  }
  NvmeAdapterPowerUpDeviceCompletionLastStep((__int64)DeviceExtension, Context);
}
