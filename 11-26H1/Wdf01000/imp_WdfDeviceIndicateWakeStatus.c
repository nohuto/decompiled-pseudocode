/*
 * XREFs of imp_WdfDeviceIndicateWakeStatus @ 0x14006E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x14006E5BC (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 */

__int64 __fastcall imp_WdfDeviceIndicateWakeStatus(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        int WaitWakeStatus)
{
  unsigned int v4; // ebx
  FxPkgPnp *m_PkgPnp; // rcx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  pDevice = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !Device || WaitWakeStatus == 259 || WaitWakeStatus == -1073741536 )
  {
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0x12u, 0x14u, WPP_FxDeviceApiKm_cpp_Traceguids, Device, WaitWakeStatus);
    return 3221225485LL;
  }
  else
  {
    m_PkgPnp = pDevice->m_PkgPnp;
    if ( m_PkgPnp->m_SharedPower.m_WaitWakeOwner )
    {
      if ( !FxPkgPnp::PowerIndicateWaitWakeStatus(m_PkgPnp, WaitWakeStatus) )
      {
        WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0x15u, WPP_FxDeviceApiKm_cpp_Traceguids, Device);
        return (unsigned int)-1073741808;
      }
    }
    else
    {
      WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0x16u, WPP_FxDeviceApiKm_cpp_Traceguids, Device);
      return (unsigned int)-1073741436;
    }
    return v4;
  }
}
