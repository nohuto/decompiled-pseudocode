/*
 * XREFs of ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1400C7C60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140042CF0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140042E50 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMCancelSendNetBufferListsOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  if ( !a1->SelectiveSuspend || ndisSetBusyAsync((__int64)a1, 1u, 0x35u, a2, 0) )
  {
    a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler(a1->MiniportAdapterContext, (void *)a2);
    if ( a1->SelectiveSuspend )
      ndisClearBusy(a1, 1, 53);
  }
}
