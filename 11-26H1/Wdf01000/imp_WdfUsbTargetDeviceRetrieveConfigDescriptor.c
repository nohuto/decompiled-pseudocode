/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x14007D270
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z @ 0x1400835DC (-GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceRetrieveConfigDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  int result; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    &pFxDriverGlobals);
  if ( !ConfigDescriptorLength )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( result >= 0 )
    return FxUsbDevice::GetConfigDescriptor(pUsbDevice, ConfigDescriptor, ConfigDescriptorLength);
  return result;
}
