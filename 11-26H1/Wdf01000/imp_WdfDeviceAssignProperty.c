/*
 * XREFs of imp_WdfDeviceAssignProperty @ 0x140091BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x14007D1A8 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAssignProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int Type,
        ULONG BufferLength,
        void *PropertyBuffer)
{
  unsigned __int8 v8; // dl
  int v10; // edi
  FxPropertyType v11; // r8d
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    WPP_IFR_SF_DDd(
      pFxDriverGlobals,
      v8,
      0xCu,
      0x3Au,
      WPP_FxDeviceApi_cpp_Traceguids,
      DeviceProperty->Size,
      0x18u,
      -1073741820);
    return 3221225476LL;
  }
  v10 = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 1u);
  if ( v10 < 0 )
  {
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
    return (unsigned int)v10;
  }
  if ( !BufferLength && PropertyBuffer )
  {
    v10 = -1073741811;
    WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0x12u, 0x3Bu, WPP_FxDeviceApi_cpp_Traceguids, 0xC000000D);
    return (unsigned int)v10;
  }
  return FxDevice::AssignProperty(pDevice, DeviceProperty, v11, Type, BufferLength, PropertyBuffer);
}
