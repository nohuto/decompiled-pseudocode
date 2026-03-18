/*
 * XREFs of FxLibraryCommonUnregisterClient @ 0x14008EC10
 * Callers:
 *     LibraryUnregisterClient @ 0x140086030 (LibraryUnregisterClient.c)
 * Callees:
 *     FxFreeDriverGlobals @ 0x14007E520 (FxFreeDriverGlobals.c)
 *     FxDestroy @ 0x1400820E0 (FxDestroy.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400845D8 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxHandleDriverEntryFailure@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008E4A0 (-FxHandleDriverEntryFailure@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     UnlockVerifierSection @ 0x140096FA0 (UnlockVerifierSection.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxLibraryCommonUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobalsParam)
{
  unsigned int v4; // edi
  _WDF_DRIVER_GLOBALS *v5; // rbx
  __int64 v7; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: enter\n");
  }
  if ( Info && WdfDriverGlobalsParam )
  {
    v4 = 0;
    v5 = WdfDriverGlobalsParam - 8;
    if ( Info == (_WDF_BIND_INFO *)0x7FFFFFFFFFFFEFFFLL )
    {
      FxHandleDriverEntryFailure((_FX_DRIVER_GLOBALS *)&WdfDriverGlobalsParam[-8]);
      return 0LL;
    }
    v7 = *(_QWORD *)&v5[1].DriverName[8];
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
      FxDestroy((_FX_DRIVER_GLOBALS *)&WdfDriverGlobalsParam[-8]);
    }
    FxIFRStop((_FX_DRIVER_GLOBALS *)&WdfDriverGlobalsParam[-8]);
    if ( *(_WORD *)&v5[7].DriverName[4] )
      UnlockVerifierSection((_FX_DRIVER_GLOBALS *)&WdfDriverGlobalsParam[-8]);
    FxFreeDriverGlobals(WdfDriverGlobalsParam);
  }
  else
  {
    v4 = -1073741823;
  }
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: exit: status %X\n", v4);
  }
  return v4;
}
