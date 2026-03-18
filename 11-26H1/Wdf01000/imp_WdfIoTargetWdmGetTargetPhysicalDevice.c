/*
 * XREFs of imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x140078C30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfIoTargetWdmGetTargetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  _DEVICE_OBJECT *m_TargetPdo; // rbx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxIoTarget *pTarget; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pTarget = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget,
    &pFxDriverGlobals);
  v3 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xEu, 0xCu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget);
  m_TargetPdo = pTarget->m_TargetPdo;
  if ( v3->FxVerboseOn )
    WPP_IFR_SF_qq(v3, 5u, 0xEu, 0xDu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, pTarget->m_TargetPdo);
  return m_TargetPdo;
}
