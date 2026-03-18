/*
 * XREFs of imp_WdfRequestRetrieveInputWdmMdl @ 0x14006D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140008F68 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveInputWdmMdl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _MDL **Mdl)
{
  FxRequest *v5; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
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
  if ( !Mdl )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v5 = pRequest;
  *Mdl = 0LL;
  if ( v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 3 )
    return FxRequest::GetMdl(v5, Mdl, (unsigned __int8)v5);
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qd(pFxDriverGlobals, 5u, 0x10u, 0x29u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
  return 3221225488LL;
}
