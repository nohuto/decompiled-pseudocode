/*
 * XREFs of ?ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141B34
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisInitializeTimer @ 0x140070C20 (NdisInitializeTimer.c)
 */

void __fastcall ndisMInitializePDCTaskClient(struct _NDIS_TIMER *FunctionContext)
{
  NdisInitializeTimer(FunctionContext + 43, (PNDIS_TIMER_FUNCTION)ndisPdcTaskClientDisableTimeoutDpc, FunctionContext);
  *(_QWORD *)&FunctionContext[44].Timer.Header.Lock = FunctionContext;
  FunctionContext[44].Timer.Header.WaitListHead.Flink = (_LIST_ENTRY *)ndisPdcTaskClientDisableTimeoutWorkItem;
}
