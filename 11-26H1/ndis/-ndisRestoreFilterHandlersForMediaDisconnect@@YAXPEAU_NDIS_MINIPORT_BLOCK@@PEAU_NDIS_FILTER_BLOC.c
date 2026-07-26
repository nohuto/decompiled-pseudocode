/*
 * XREFs of ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14009CBE8
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x14004BFC0 (-ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004C450 (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisRestoreFilterHandlersForMediaDisconnect(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  _GUID *p_InterfaceGuid; // r8
  _NDIS_IF_BLOCK *IfBlock; // rcx
  void *v8; // rdx
  unsigned int IfIndex; // eax
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  struct _GUID *v11; // [rsp+20h] [rbp-28h]
  __int64 Value; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x51u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( a3 )
  {
    if ( !ndisFilterXStateClearFlag(a3, 1) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = a3->XState;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x52u,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)a3,
          v13);
      }
      if ( Microsoft_Windows_NDISEnableBits < 0 )
      {
        p_InterfaceGuid = &a3->InterfaceGuid;
        IfBlock = a3->IfBlock;
        v8 = &KeptFilterFakeHandlers;
        LODWORD(v13) = a3->XState;
        Value = IfBlock->NetLuid.Value;
        IfIndex = a3->IfIndex;
LABEL_9:
        LODWORD(v11) = IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)IfBlock,
          (__int64)v8,
          (__int64)p_InterfaceGuid,
          (__int64)p_InterfaceGuid,
          (__int64)v11,
          Value,
          v13);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
    a3->FilterSendNetBufferListsHandler = ndisFilterSendNetBufferLists;
    a3->FilterCancelSendNetBufferListsHandler = ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    if ( !ndisMiniportXStateClearFlag(a1, 2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = a1->XState;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x53u,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)a1,
          v13);
      }
      if ( Microsoft_Windows_NDISEnableBits < 0 )
      {
        p_InterfaceGuid = &a1->InterfaceGuid;
        LODWORD(v13) = a1->XState;
        v8 = &KeptMiniportFakeHandlers;
        Value = a1->NetLuid.Value;
        IfIndex = a1->IfIndex;
        goto LABEL_9;
      }
LABEL_10:
      if ( a2 )
        goto LABEL_12;
      goto LABEL_11;
    }
    OpenQueue = a1->OpenQueue;
    a1->SendPathType = a1->SavedSendPathType;
    a1->NextSendNetBufferListsHandler = a1->SavedNextSendNetBufferListsHandler;
    a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisCancelSendPackets;
    while ( OpenQueue )
    {
      OpenQueue->SendHandler = OpenQueue->SavedSendHandler;
      OpenQueue->SendPacketsHandler = OpenQueue->SavedSendPacketsHandler;
      OpenQueue->CancelSendPacketsHandler = OpenQueue->SavedCancelSendPacketsHandler;
      OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
  }
  if ( !a2 )
  {
LABEL_11:
    a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
    a1->ReceivePathEnabled = a1->SavedReceivePathEnabled;
    goto LABEL_12;
  }
  a2->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x54u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      (char)a2,
      a3);
}
