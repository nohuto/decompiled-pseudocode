/*
 * XREFs of imp_WdfUsbTargetDeviceCreateWithParameters @ 0x14009D780
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     FxUsbTargetDeviceCreate @ 0x14005E6BC (FxUsbTargetDeviceCreate.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceCreateWithParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_USB_DEVICE_CREATE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  unsigned __int8 v7; // dl
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDeviceBase *pDevice; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !Config )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( Config->Size == 8 )
    return FxUsbTargetDeviceCreate(pFxDriverGlobals, pDevice, Config->USBDClientContractVersion, Attributes, UsbDevice);
  WPP_IFR_SF_DDd(pFxDriverGlobals, v7, 0xEu, 0xAu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Config->Size, 8u, -1073741820);
  return 3221225476LL;
}
