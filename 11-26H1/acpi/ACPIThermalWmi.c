/*
 * XREFs of ACPIThermalWmi @ 0x1400CDAA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x140026DF0 (ACPIDispatchForwardIrp.c)
 */

__int64 __fastcall ACPIThermalWmi(struct _DEVICE_OBJECT *BugCheckParameter3, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  unsigned int v5; // edi
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+40h] [rbp+18h] BYREF

  IrpDisposition = IrpProcessed;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)BugCheckParameter3);
  v5 = WmiSystemControl(*(PWMILIB_CONTEXT *)(DeviceExtension + 224), BugCheckParameter3, Irp, &IrpDisposition);
  if ( IrpDisposition )
  {
    if ( IrpDisposition == IrpNotCompleted )
      IofCompleteRequest(Irp, 0);
    else
      return (unsigned int)ACPIDispatchForwardIrp((ULONG_PTR)BugCheckParameter3, Irp);
  }
  return v5;
}
