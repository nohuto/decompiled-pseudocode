/*
 * XREFs of ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6304
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x14004B850 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x140041380 (-NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z.c)
 */

void __fastcall ndisQueueReceiveNblsOnMiniport(struct _NDIS_SELECTIVE_SUSPEND *a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *NblInNblChain; // rax

  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *((_QWORD *)a1 + 77), 1u, 1u);
  NblInNblChain = NdisLastNblInNblChain(a2);
  **((_QWORD **)a1 + 71) = a2;
  *((_QWORD *)a1 + 71) = NblInNblChain;
}
