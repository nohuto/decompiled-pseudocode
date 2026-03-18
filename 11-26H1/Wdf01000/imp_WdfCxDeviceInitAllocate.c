/*
 * XREFs of imp_WdfCxDeviceInitAllocate @ 0x140076D70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     FxValiateCx @ 0x140077070 (FxValiateCx.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1400824AC (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFCXDEVICE_INIT *__fastcall imp_WdfCxDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *v2; // rdi
  _FX_DRIVER_GLOBALS *v4; // rbp
  WDFCXDEVICE_INIT *v5; // rbx
  WDFCXDEVICE_INIT *CxDeviceInit; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v2, retaddr);
  v4 = DeviceInit->DriverGlobals;
  v5 = 0LL;
  if ( FxValiateCx(DeviceInit->DriverGlobals, v2) >= 0 && (int)FxVerifierCheckIrqlLevel(v4, 0) >= 0 )
  {
    CxDeviceInit = WDFCXDEVICE_INIT::_AllocateCxDeviceInit(DeviceInit);
    v5 = CxDeviceInit;
    if ( CxDeviceInit )
    {
      CxDeviceInit->ClientDriverGlobals = v4;
      CxDeviceInit->CxDriverGlobals = v2;
    }
  }
  return v5;
}
