/*
 * XREFs of WmiDispatchSystemControl @ 0x1400349E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WmiDispatchSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PKSDEVICE DeviceForDeviceObject; // rax
  unsigned int v5; // esi
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+38h] [rbp+10h] BYREF

  IrpDisposition = IrpProcessed;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(DeviceObject);
  if ( !DeviceForDeviceObject )
    return (unsigned int)((__int64 (__fastcall *)(PDEVICE_OBJECT, PIRP))PerfSystemControlDispatch)(DeviceObject, Irp);
  v5 = WmiSystemControl(
         (PWMILIB_CONTEXT)((char *)DeviceForDeviceObject->Context + 456),
         DeviceObject,
         Irp,
         &IrpDisposition);
  if ( IrpDisposition )
  {
    if ( IrpDisposition == IrpNotCompleted )
    {
      IofCompleteRequest(Irp, 0);
      return v5;
    }
    return (unsigned int)((__int64 (__fastcall *)(PDEVICE_OBJECT, PIRP))PerfSystemControlDispatch)(DeviceObject, Irp);
  }
  return v5;
}
