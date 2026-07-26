/*
 * XREFs of ?ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034D40
 * Callers:
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034C20 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisSetupMiniportProtocolHandlers(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  unsigned __int8 MajorNdisVersion; // bp
  unsigned __int8 v5; // r14
  struct _NDIS_PROTOCOL_BLOCK *v6; // rsi
  void *ProtocolBindingContext; // rcx
  char v9; // [rsp+28h] [rbp-30h]

  MajorNdisVersion = a2->MajorNdisVersion;
  v5 = a3->MajorNdisVersion;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      149,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      v9,
      (char)a3,
      (char)a1);
  }
  if ( MajorNdisVersion < 6u )
  {
    a1->SendCompleteNetBufferListsContext = a1;
    a1->ProtSendNetBufferListsComplete = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendNetBufferListsCompleteToNdisPackets;
  }
  else if ( v5 < 6u )
  {
    if ( !a3->Miniport5InNdis6Mode )
    {
      a3->Miniport5InNdis6Mode = 1;
      a3->OutstandingReceives = 0;
    }
    a1->SendCompleteNdisPacketContext = a3;
    a2 = (struct _NDIS_PROTOCOL_BLOCK *)ndisMIndicatePacketsToNetBufferLists;
    a1->ProtSendNetBufferListsComplete = v6->SendNetBufferListsCompleteHandler;
    a1->SendCompleteNetBufferListsContext = a1->ProtocolBindingContext;
    if ( (a3->Flags & 0x20000000) != 0 )
      a3->PacketIndicateHandler = ndisMIndicatePacketsToNetBufferLists;
    a3->SavedPacketIndicateHandler = ndisMIndicatePacketsToNetBufferLists;
    a3->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a3->EthRxIndicateHandler = EthIndicateReceive;
    a3->SynchronousReturnPacketContext = a3;
    a1->ReceiveNetBufferLists = v6->ReceiveNetBufferListsHandler;
    a1->ReceiveNetBufferListsContext = a1->ProtocolBindingContext;
    a3->Ndis6ProtocolsBound = 1;
  }
  else
  {
    ProtocolBindingContext = a1->ProtocolBindingContext;
    a1->ProtSendNetBufferListsComplete = v6->SendNetBufferListsCompleteHandler;
    a1->SendCompleteNetBufferListsContext = ProtocolBindingContext;
    a1->ReceiveNetBufferLists = v6->ReceiveNetBufferListsHandler;
    a1->ReceiveNetBufferListsContext = ProtocolBindingContext;
    a3->Ndis6ProtocolsBound = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      150,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)v6,
      (char)a3,
      (char)a1);
  }
}
