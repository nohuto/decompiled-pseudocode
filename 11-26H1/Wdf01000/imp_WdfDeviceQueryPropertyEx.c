/*
 * XREFs of imp_WdfDeviceQueryPropertyEx @ 0x140053E80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x140054FF4 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfDeviceQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *RequiredSize,
        unsigned int *Type)
{
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *v11; // rbx
  int v12; // edi
  unsigned __int16 v13; // r9
  FxPropertyType _a1; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+80h] [rbp+18h] BYREF

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
      v9,
      0xCu,
      0x36u,
      WPP_FxDeviceApi_cpp_Traceguids,
      DeviceProperty->Size,
      0x18u,
      -1073741820);
    return -1073741820;
  }
  v11 = pFxDriverGlobals;
  v12 = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 1u);
  if ( v12 < 0 )
  {
    FxVerifierDbgBreakPoint(v11);
    return v12;
  }
  if ( !RequiredSize )
    FxVerifierNullBugCheck(v11, retaddr);
  if ( !Type )
    FxVerifierNullBugCheck(v11, retaddr);
  if ( BufferLength )
  {
    if ( !PropertyBuffer )
    {
      v13 = 55;
LABEL_15:
      v12 = -1073741811;
      WPP_IFR_SF_D(v11, 2u, 0x12u, v13, WPP_FxDeviceApi_cpp_Traceguids, 0xC000000D);
      return v12;
    }
  }
  else if ( PropertyBuffer )
  {
    v13 = 56;
    goto LABEL_15;
  }
  return FxDevice::_QueryPropertyEx(
           v11,
           0LL,
           pDevice,
           DeviceProperty,
           _a1,
           BufferLength,
           PropertyBuffer,
           RequiredSize,
           Type);
}
