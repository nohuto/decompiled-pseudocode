/*
 * XREFs of ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007DF60
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004C4C0 (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D830 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisSwapFilterHandlersForMediaDisconnect(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  __int64 (__fastcall *v7)(void *, void *, void *); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x55u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( a3 )
  {
    a3->XState |= 1u;
    ndisUpdateFilterFakeStatus(a3);
  }
  else
  {
    a1->XState |= 2u;
    ndisUpdateMiniportFakeStatus(a1);
  }
  if ( a2 )
  {
    a2->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
  }
  else
  {
    a1->ReceivePathEnabled = 0;
    a1->PacketIndicateHandler = ndisMDummyIndicatePacket;
  }
  if ( a3 )
  {
    a3->FilterSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFakeFilterSendHandler;
    a3->FilterCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
  }
  else
  {
    OpenQueue = a1->OpenQueue;
    a1->NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMFakeSendNetBufferLists;
    a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
    for ( a1->SendPathType = NdisFakeSendPath; OpenQueue; OpenQueue = OpenQueue->MiniportNextOpen )
    {
      if ( a1->MediaType != NdisMediumWan || (v7 = ndisMFakeWanSend, (a1->Flags & 0x20000) != 0) )
        v7 = (__int64 (__fastcall *)(void *, void *, void *))ndisMFakeSend;
      OpenQueue->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))v7;
      OpenQueue->SendPacketsHandler = ndisMFakeSendPackets;
      OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMFakeReset;
      OpenQueue->CancelSendPacketsHandler = 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x56u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      (char)a2,
      a3);
}
