/*
 * XREFs of ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004C230
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007FF70 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x140082F10 (ndisWdfDevicePowerOn.c)
 *     ?RestoreHandlers@NdisWdfIdle@@AEAAXXZ @ 0x1400B2F5C (-RestoreHandlers@NdisWdfIdle@@AEAAXXZ.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140183FD0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004C450 (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisMRestoreOpenHandlers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  __int64 (__fastcall *v4)(_QWORD *, struct _NDIS_REQUEST *); // rdx
  __int64 v5; // rcx
  _NDIS_FILTER_BLOCK *HighestFilter; // rax
  _NDIS_OPEN_BLOCK *OpenQueue; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rax
  struct _GUID *v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  char v11[4]; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x59u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      *(_DWORD *)v11);
  }
  if ( ndisMiniportXStateClearFlag(a1, a2) )
  {
    HighestFilter = a1->HighestFilter;
    if ( HighestFilter && !HighestFilter->XState )
      HighestFilter->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    a1->SendPathType = a1->SavedSendPathType;
    a1->NextSendNetBufferListsHandler = a1->SavedNextSendNetBufferListsHandler;
    a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisCancelSendPackets;
    OpenQueue = a1->OpenQueue;
    if ( OpenQueue )
    {
      v4 = ndisLegacyRequest;
      do
      {
        OpenQueue->SendHandler = OpenQueue->SavedSendHandler;
        OpenQueue->SendPacketsHandler = OpenQueue->SavedSendPacketsHandler;
        OpenQueue->CancelSendPacketsHandler = OpenQueue->SavedCancelSendPacketsHandler;
        OpenQueue->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
        OpenQueue->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
        OpenQueue->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
        OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
      while ( OpenQueue );
    }
  }
  else
  {
    if ( Microsoft_Windows_NDISEnableBits < 0 )
    {
      LODWORD(v10) = a1->XState;
      LODWORD(v9) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        v5,
        (__int64)&KeptMiniportFakeHandlers,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v9,
        a1->NetLuid.Value,
        v10);
    }
    if ( (a1->XState & 0xF5) == 0 )
    {
      MiniportNextOpen = a1->OpenQueue;
      if ( MiniportNextOpen )
      {
        v4 = ndisLegacyRequest;
        do
        {
          MiniportNextOpen->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
          MiniportNextOpen->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
          MiniportNextOpen->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
          MiniportNextOpen = MiniportNextOpen->MiniportNextOpen;
        }
        while ( MiniportNextOpen );
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v4,
      13,
      90,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  }
}
