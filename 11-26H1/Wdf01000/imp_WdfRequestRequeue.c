/*
 * XREFs of imp_WdfRequestRequeue @ 0x14004FC40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14004FCF0 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14004FE20 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfRequestRequeue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *v3; // rcx
  FxIoQueue *CurrentQueue; // rax
  FxRequest *v5; // rcx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pRequest = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest,
    &pFxDriverGlobals);
  if ( FxRequest::GetCurrentQueue(pRequest) )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v3);
    return FxIoQueue::Requeue(CurrentQueue, v5);
  }
  else
  {
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0x10u, 0x4Du, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
    return -1073741808;
  }
}
