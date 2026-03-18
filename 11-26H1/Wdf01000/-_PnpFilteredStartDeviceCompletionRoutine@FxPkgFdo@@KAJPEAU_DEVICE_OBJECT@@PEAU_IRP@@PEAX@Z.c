/*
 * XREFs of ?_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400A7B00
 * Callers:
 *     <none>
 * Callees:
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400228A0 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1400A7948 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxFilteredStartContext *Context)
{
  FxPkgPnp *PkgFdo; // rbx

  PkgFdo = Context->PkgFdo;
  FxFilteredStartContext::`scalar deleting destructor'(Context);
  return FxPkgFdo::_PnpStartDeviceCompletionRoutine(DeviceObject, Irp, PkgFdo);
}
