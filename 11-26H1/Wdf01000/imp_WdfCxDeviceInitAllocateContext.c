/*
 * XREFs of imp_WdfCxDeviceInitAllocateContext @ 0x140093100
 * Callers:
 *     <none>
 * Callees:
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14001B3B8 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1400241D0 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     FxValiateCx @ 0x140077070 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfCxDeviceInitAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  int result; // eax
  unsigned int v9; // r9d
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  result = FxValiateCx(DeviceInit->DriverGlobals, v4);
  if ( result >= 0 )
  {
    if ( DeviceInit->CxContextObject )
      return FxObjectAllocateContext(DeviceInit->CxContextObject, ContextAttributes, 0, Context);
    result = FxUserObject::_Create(v4, 0LL, &DeviceInit->CxContextObject, v9);
    if ( result >= 0 )
      return FxObjectAllocateContext(DeviceInit->CxContextObject, ContextAttributes, 0, Context);
  }
  return result;
}
