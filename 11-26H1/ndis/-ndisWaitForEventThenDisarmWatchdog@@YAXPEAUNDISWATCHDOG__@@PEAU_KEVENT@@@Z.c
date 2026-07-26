/*
 * XREFs of ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x140155470
 * Callers:
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140044F30 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400886C0 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140155960 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140178D10 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140182D00 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140186160 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x140057400 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x140155280 (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1401565A0 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWaitForEventThenDisarmWatchdog(struct NDISWATCHDOG__ *a1, struct _KEVENT *a2)
{
  struct NDISWATCHDOG__ *v3; // rbx

  if ( a1 == (struct NDISWATCHDOG__ *)-1LL )
  {
    ndisWaitForKernelObject(a2);
  }
  else
  {
    v3 = WatchdogFromHandle(a1);
    NdisWatchdogState::Disarm((NdisWatchdogState *)v3);
    NdisWatchdogState::WaitSynchronously((NdisWatchdogState *)v3, a2);
  }
}
