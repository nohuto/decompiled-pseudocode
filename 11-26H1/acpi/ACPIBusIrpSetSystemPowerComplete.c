/*
 * XREFs of ACPIBusIrpSetSystemPowerComplete @ 0x14004B0A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x140024E50 (ACPIDeviceIrpCompleteRequest.c)
 */

void __fastcall ACPIBusIrpSetSystemPowerComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _QWORD *DeviceExtension; // rax

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(DeviceObject);
  Context->IoStatus.Information = 0LL;
  ACPIDeviceIrpCompleteRequest(DeviceExtension, Context, IoStatus->Status);
}
