/*
 * XREFs of imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x140091EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z @ 0x14007BC08 (-GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_cd @ 0x140091694 (WPP_IFR_SF_cd.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1400A122C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 */

__int64 __fastcall imp_WdfDeviceConfigureWdmIrpDispatchCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFDRIVER__ *Driver,
        unsigned __int8 MajorFunction,
        int (__fastcall *EvtDeviceWdmIrpDispatch)(WDFDEVICE__ *, unsigned __int8, unsigned __int8, unsigned int, void *, _IRP *, void *),
        void *DriverContext)
{
  int v6; // esi
  FxCxDeviceInfo *CxDeviceInfo; // rbp
  unsigned __int8 v9; // dl
  unsigned int v10; // ebx
  FxDevice *v11; // r10
  unsigned __int16 v12; // r9
  FxDevice *pDevice; // [rsp+40h] [rbp-18h] BYREF
  FxDriver *pDriver; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  v6 = MajorFunction;
  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  CxDeviceInfo = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( v6 == 3 || v6 == 4 || (unsigned int)(v6 - 14) < 2 )
  {
    if ( Driver )
    {
      pDriver = 0LL;
      FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
      CxDeviceInfo = FxDevice::GetCxDeviceInfo(pDevice, pDriver);
    }
    else
    {
      v11 = pDevice;
    }
    if ( !EvtDeviceWdmIrpDispatch )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
    if ( v11->m_Legacy )
    {
      if ( (v11->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        v10 = -1073741436;
        v12 = 61;
LABEL_13:
        WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0xCu, v12, WPP_FxDeviceApi_cpp_Traceguids, v11, -1073741436);
        return v10;
      }
    }
    else if ( v11->m_CurrentPnpState != WdfDevStatePnpInit )
    {
      v10 = -1073741436;
      v12 = 62;
      goto LABEL_13;
    }
    return (unsigned int)FxPkgIo::ConfigureDynamicDispatching(
                           v11->m_PkgIo,
                           v6,
                           CxDeviceInfo,
                           EvtDeviceWdmIrpDispatch,
                           DriverContext);
  }
  v10 = -1073741811;
  WPP_IFR_SF_cd(pFxDriverGlobals, v9, 0xCu, 0x3Cu, WPP_FxDeviceApi_cpp_Traceguids, v6);
  return v10;
}
