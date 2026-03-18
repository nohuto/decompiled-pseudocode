/*
 * XREFs of imp_WdfFdoQueryForInterface @ 0x1400647B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1400648F8 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfFdoQueryForInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Fdo,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        void *InterfaceSpecificData)
{
  int result; // eax
  FxDeviceBase *pDeviceBase; // [rsp+40h] [rbp-20h] BYREF
  FxQueryInterfaceParams params; // [rsp+48h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+18h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+80h] [rbp+20h] BYREF
  FxDevice *pDevice; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)&params.Type = 4098LL;
  pFxDriverGlobals = 0LL;
  params.Object = (void **)&pDevice;
  pDeviceBase = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Fdo,
    0x1030u,
    (void **)&pDeviceBase,
    &pFxDriverGlobals);
  pDevice = 0LL;
  if ( !InterfaceType )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !Interface )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( pDeviceBase->QueryInterface(pDeviceBase, &params) >= 0
      && (pDevice->m_Legacy || pDevice->m_PkgPnp->m_Type != 4353) )
    {
      WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceFdoApi_cpp_Traceguids, Fdo, -1073741811);
      return -1073741811;
    }
    else
    {
      return FxDeviceBase::QueryForInterface(
               pDeviceBase,
               InterfaceType,
               Interface,
               Size,
               Version,
               InterfaceSpecificData,
               0LL);
    }
  }
  return result;
}
