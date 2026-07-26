/*
 * XREFs of ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008D080
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1400789D0 (-ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_C.c)
 */

__int64 __fastcall ndisRssV2Initialize(PVOID DeferredContext)
{
  *((_DWORD *)DeferredContext + 1432) = 0;
  KeInitializeEvent((PRKEVENT)DeferredContext + 239, NotificationEvent, 0);
  *((_BYTE *)DeferredContext + 5760) = 0;
  return ndisRssV2InitializeDpcWorkerContext(DeferredContext, (struct _KDPC **)DeferredContext + 715);
}
