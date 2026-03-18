/*
 * XREFs of ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD0A0
 * Callers:
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1400DD008 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     Vf_VerifyRequestComplete @ 0x1400DDAF4 (Vf_VerifyRequestComplete.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1400E5A58 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD17C (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400E4C5C (-Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestCanBeCompleted(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  char v4; // r9
  unsigned int v5; // ebx
  int IsCurrentStackValid; // edi
  const void *_a2; // rcx

  v5 = 0;
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)FxDriverGlobals, 0xBu) )
  {
    if ( v4 )
      return (unsigned int)FxRequest::Vf_VerifyRequestIsAllocatedFromIo(this, FxDriverGlobals);
    return v5;
  }
  if ( !v4
    || (IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(this, FxDriverGlobals),
        IsCurrentStackValid >= 0) )
  {
    if ( this->m_CanComplete )
      return v5;
    IsCurrentStackValid = -1073741808;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqd(FxDriverGlobals, 2u, 0x10u, 0x3Eu, WPP_FxRequest_cpp_Traceguids, this->m_Irp.m_Irp, _a2, 0xC0000010);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return (unsigned int)IsCurrentStackValid;
}
