/*
 * XREFs of imp_WdfObjectAcquireLock @ 0x14006AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     FxGetCallbackLock @ 0x14006AEB0 (FxGetCallbackLock.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfObjectAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  FxCallbackLock *CallbackLock; // rax
  FxCallbackLock *v4; // rbx
  _FX_DRIVER_GLOBALS *v5; // rbx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF
  FxObject *pObject; // [rsp+50h] [rbp+18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp+20h] BYREF

  pObject = 0LL;
  pFxDriverGlobals = 0LL;
  irql = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Object,
    0x1000u,
    (void **)&pObject,
    &pFxDriverGlobals);
  CallbackLock = FxGetCallbackLock(pObject);
  v4 = CallbackLock;
  if ( !CallbackLock )
  {
    v5 = pFxDriverGlobals;
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxObjectAPI_cpp_Traceguids, Object);
    FxVerifierDbgBreakPoint(v5);
    FxVerifierBugCheckWorker(v5, WDF_INVALID_LOCK_OPERATION, (unsigned __int64)Object, 0LL);
  }
  CallbackLock->Lock(CallbackLock, &irql);
  v4->m_PreviousIrql = irql;
}
