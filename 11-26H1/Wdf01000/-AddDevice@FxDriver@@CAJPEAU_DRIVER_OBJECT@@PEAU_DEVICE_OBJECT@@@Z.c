/*
 * XREFs of ?AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x140079BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14003A4B4 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z @ 0x140079D40 (-GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z.c)
 */

__int64 __fastcall FxDriver::AddDevice(_DRIVER_OBJECT *DriverObject, _DEVICE_OBJECT *PhysicalDeviceObject)
{
  FxDriver *FxDriver; // rax

  FxDriver = FxDriver::GetFxDriver(DriverObject);
  if ( FxDriver )
    return FxDriver::AddDevice(FxDriver, PhysicalDeviceObject);
  else
    return 3221225473LL;
}
