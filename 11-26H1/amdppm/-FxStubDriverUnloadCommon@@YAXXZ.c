/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140004EE8
 * Callers:
 *     FxDriverEntryWorker @ 0x140004F54 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1400050E0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140005274 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
