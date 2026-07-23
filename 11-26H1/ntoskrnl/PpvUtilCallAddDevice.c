/*
 * XREFs of PpvUtilCallAddDevice @ 0x1404E12E4
 * Callers:
 *     PnpCallAddDevice @ 0x14096F278 (PnpCallAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfDevObjPreAddDevice @ 0x140C4E034 (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140C4E100 (VfDevObjPostAddDevice.c)
 */

__int64 __fastcall PpvUtilCallAddDevice(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  unsigned int v5; // ebx

  if ( !PpvUtilVerifierEnabled )
    return guard_dispatch_icall_no_overrides(DriverObject, TargetDevice);
  VfDevObjPreAddDevice(TargetDevice, DriverObject);
  v5 = guard_dispatch_icall_no_overrides(DriverObject, TargetDevice);
  VfDevObjPostAddDevice(TargetDevice, DriverObject, v5);
  return v5;
}
