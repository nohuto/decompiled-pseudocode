/*
 * XREFs of ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x14005AB70
 * Callers:
 *     NdisMNetPnPEvent @ 0x14006B000 (NdisMNetPnPEvent.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140079A70 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x140090250 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     ?ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400944CC (-ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140094654 (-ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisIMNotifyPnPEvent @ 0x1400AA610 (NdisIMNotifyPnPEvent.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140154FC0 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x140155730 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401578D0 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x140157EB0 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x140167060 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140174EC4 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140177D10 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInitializeNetPnPEvent(struct _NET_PNP_EVENT_NOTIFICATION *a1, struct _KEVENT *a2)
{
  *(_QWORD *)&a1->NetPnPEvent.NetEvent = 23LL;
  *(_OWORD *)(&a1->NetPnPEvent.BufferLength + 1) = 0LL;
  *(_OWORD *)((char *)&a1->NetPnPEvent.NdisReserved[1] + 4) = 0LL;
  *(_OWORD *)((char *)&a1->NetPnPEvent.NdisReserved[3] + 4) = 0LL;
  *(_OWORD *)((char *)&a1->NetPnPEvent.TransportReserved[1] + 4) = 0LL;
  *(_OWORD *)((char *)&a1->NetPnPEvent.TransportReserved[3] + 4) = 0LL;
  *(_OWORD *)((char *)&a1->NetPnPEvent.TdiReserved[1] + 4) = 0LL;
  *(_OWORD *)((char *)&a1->NetPnPEvent.TdiReserved[3] + 4) = 0LL;
  *(_OWORD *)((char *)&a1->NetPnPEvent.TdiClientReserved[1] + 4) = 0LL;
  *(unsigned __int64 *)((char *)&a1->NetPnPEvent.TdiClientReserved[3] + 4) = 0LL;
  *(_QWORD *)&a1->VPortId = 0LL;
  *(_QWORD *)&a1->Header.Type = 11272832LL;
  a1->SwitchId = 0;
  a1->NetPnPEvent.Buffer = 0LL;
  a1->NetPnPEvent.BufferLength = 0;
  if ( a2 )
  {
    KeInitializeEvent(a2, NotificationEvent, 0);
    a1->NetPnPEvent.NdisReserved[0] = (unsigned __int64)a2;
  }
}
