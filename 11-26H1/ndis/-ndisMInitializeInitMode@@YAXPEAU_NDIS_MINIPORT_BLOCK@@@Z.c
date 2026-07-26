/*
 * XREFs of ?ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016AF50
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisInitializeTimer @ 0x140070C20 (NdisInitializeTimer.c)
 */

void __fastcall ndisMInitializeInitMode(char *FunctionContext)
{
  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 2776),
    (PNDIS_TIMER_FUNCTION)ndisInitModeTimeoutDpc,
    FunctionContext);
  *((_QWORD *)FunctionContext + 363) = FunctionContext;
  *((_QWORD *)FunctionContext + 364) = ndisInitModeTimeoutWorkItem;
  KeInitializeEvent((PRKEVENT)(FunctionContext + 2984), NotificationEvent, 1u);
}
