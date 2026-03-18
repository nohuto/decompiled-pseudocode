/*
 * XREFs of imp_WdfIoTargetStop @ 0x1400713B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfIoTargetStop(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, int Action)
{
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxIoTarget *pTarget; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pTarget = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget,
    &pFxDriverGlobals);
  if ( Action && Action <= 3 )
  {
    if ( (unsigned int)(Action - 1) > 1 || (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) >= 0 )
      pTarget->Stop(pTarget, (_WDF_IO_TARGET_SENT_IO_ACTION)Action);
  }
  else
  {
    WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xEu, 0xAu, WPP_FxIoTargetAPI_cpp_Traceguids, Action);
  }
}
