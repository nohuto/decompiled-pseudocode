/*
 * XREFs of imp_WdfCxDeviceInitGetTypedContextWorker @ 0x1400931A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z @ 0x14004D880 (-FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z.c)
 *     FxValiateCx @ 0x140077070 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall imp_WdfCxDeviceInitGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  _FX_DRIVER_GLOBALS *v3; // rcx
  __int64 v4; // rbx
  FxUserObject *CxContextObject; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  v4 = 0LL;
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v3, retaddr);
  if ( (int)FxValiateCx(DeviceInit->DriverGlobals, v3) >= 0 )
  {
    CxContextObject = DeviceInit->CxContextObject;
    if ( CxContextObject )
      return FxObjectGetTypedContext(CxContextObject, TypeInfo);
  }
  return (char *)v4;
}
