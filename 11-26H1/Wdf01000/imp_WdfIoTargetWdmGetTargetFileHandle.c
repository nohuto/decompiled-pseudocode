/*
 * XREFs of imp_WdfIoTargetWdmGetTargetFileHandle @ 0x140075390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

void *__fastcall imp_WdfIoTargetWdmGetTargetFileHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  void *m_TargetHandle; // rbx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxIoTargetRemote *pTarget; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pTarget = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1201u,
    (void **)&pTarget,
    &pFxDriverGlobals);
  v3 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xEu, 0x3Du, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
  m_TargetHandle = pTarget->m_TargetHandle;
  if ( v3->FxVerboseOn )
    WPP_IFR_SF_qq(v3, 5u, 0xEu, 0x3Eu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, pTarget->m_TargetHandle);
  return m_TargetHandle;
}
