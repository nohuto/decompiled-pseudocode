/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140007EB4
 * Callers:
 *     FxDriverEntryWorker @ 0x140007F24 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1400080B0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140008244 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
