/*
 * XREFs of ?FxHandleDriverEntryFailure@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008E4A0
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x14008EC10 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     FxDestroy @ 0x1400820E0 (FxDestroy.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxHandleDriverEntryFailure(_FX_DRIVER_GLOBALS *pFxDriverGlobals)
{
  if ( pFxDriverGlobals->Driver )
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "Destroy FxDriver after DriverEntry failure\n");
    }
    pFxDriverGlobals->Driver->DeleteObject(pFxDriverGlobals->Driver);
    FxDestroy(pFxDriverGlobals);
    pFxDriverGlobals->Driver = 0LL;
  }
}
