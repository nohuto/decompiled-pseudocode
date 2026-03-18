/*
 * XREFs of imp_WdfUsbTargetDeviceCreate @ 0x14009D710
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x14005E6BC (FxUsbTargetDeviceCreate.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+30h] [rbp-18h] BYREF
  FxDeviceBase *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  return FxUsbTargetDeviceCreate(pFxDriverGlobals, pDevice, 0xFFFFFFFF, Attributes, UsbDevice);
}
