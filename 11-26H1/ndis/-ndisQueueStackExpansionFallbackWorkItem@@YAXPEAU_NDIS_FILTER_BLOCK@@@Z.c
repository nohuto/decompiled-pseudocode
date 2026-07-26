/*
 * XREFs of ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C720
 * Callers:
 *     NdisFNetPnPEvent @ 0x14000DB00 (NdisFNetPnPEvent.c)
 *     NdisFOidRequestComplete @ 0x1400439C0 (NdisFOidRequestComplete.c)
 *     ?ndisFDoOidRequest@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004B710 (-ndisFDoOidRequest@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisFDevicePnPEventNotify @ 0x1400523E0 (NdisFDevicePnPEventNotify.c)
 *     NdisFIndicateStatus @ 0x1400560D0 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1400CD200 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

void __fastcall ndisQueueStackExpansionFallbackWorkItem(struct _NDIS_FILTER_BLOCK *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1->StackExpansionFallback.WorkItemQueued )
  {
    v2 = 0;
    ndisReferenceRefEx(&a1->Ref.SpinLock, 1u, (enum _NDIS_REFERENCE_STATUS *)&v2);
    a1->StackExpansionFallback.WorkItemQueued = 1;
    ExQueueWorkItem(&a1->StackExpansionFallback.WorkItem, NormalWorkQueue);
  }
}
