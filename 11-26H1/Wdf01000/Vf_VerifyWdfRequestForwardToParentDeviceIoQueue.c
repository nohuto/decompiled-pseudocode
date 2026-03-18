/*
 * XREFs of Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1400E5A58
 * Callers:
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x14004F480 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD0A0 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(
        _FX_DRIVER_GLOBALS *fxDriverGlobals,
        FxRequest *request)
{
  int CanBeCompleted; // esi
  FxIrp *_a1; // rcx
  unsigned __int16 v6; // ax
  const void *_a2; // rbx
  unsigned __int16 m_ObjectSize; // ax
  const void *v9; // rbx

  if ( request->m_IrpAllocation != 2
    || !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(fxDriverGlobals, (unsigned int)request, 0xBu) )
  {
    CanBeCompleted = -1073741808;
    m_ObjectSize = request->m_ObjectSize;
    v9 = (const void *)((unsigned __int64)request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qd(fxDriverGlobals, 2u, 0x10u, 0x48u, WPP_FxRequestApi_cpp_Traceguids, v9, -1073741808);
    goto LABEL_14;
  }
  if ( fxDriverGlobals->FxVerifierOn )
  {
    CanBeCompleted = FxRequest::Vf_VerifyRequestCanBeCompleted(request, fxDriverGlobals);
    if ( CanBeCompleted < 0 )
      return (unsigned int)CanBeCompleted;
  }
  else
  {
    CanBeCompleted = 0;
  }
  _a1 = &request->m_Irp;
  if ( request->m_Irp.m_Irp->CurrentLocation <= 1 )
  {
    CanBeCompleted = -1073741808;
    v6 = request->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6 )
      _a2 = 0LL;
    WPP_IFR_SF_qqd(fxDriverGlobals, 2u, 0x10u, 0x49u, WPP_FxRequestApi_cpp_Traceguids, _a1, _a2, 0xC0000010);
LABEL_14:
    FxVerifierDbgBreakPoint(fxDriverGlobals);
  }
  return (unsigned int)CanBeCompleted;
}
