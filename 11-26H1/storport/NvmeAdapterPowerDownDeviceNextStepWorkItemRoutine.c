/*
 * XREFs of NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine @ 0x1401244B0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterDevicePowerStopAdapter @ 0x140123208 (NvmeAdapterDevicePowerStopAdapter.c)
 *     NvmeAdapterSendPowerToMiniport @ 0x140126054 (NvmeAdapterSendPowerToMiniport.c)
 *     NvmeAdapterStorMQPowerDownDeviceNextStep @ 0x140126D00 (NvmeAdapterStorMQPowerDownDeviceNextStep.c)
 */

void __fastcall NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine(PDEVICE_OBJECT DeviceObject, IRP *Context)
{
  void *DeviceExtension; // rbx
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  Interval.QuadPart = 0LL;
  if ( (unsigned int)NvmeAdapterSendPowerToMiniport(DeviceExtension) == -2147483631 )
  {
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    NvmeAdapterSendPowerToMiniport(DeviceExtension);
  }
  NvmeAdapterStorMQPowerDownDeviceNextStep(DeviceExtension);
  NvmeAdapterDevicePowerStopAdapter((__int64)DeviceExtension, Context);
}
