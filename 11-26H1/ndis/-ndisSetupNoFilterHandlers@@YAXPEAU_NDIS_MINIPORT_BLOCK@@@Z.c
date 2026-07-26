/*
 * XREFs of ?ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055230
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055160 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisSetupNoFilterHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // ecx
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  bool v4; // cf
  void (__stdcall *v5)(PVOID); // rdx
  _NDIS_SEND_PATH_TYPE v6; // ecx
  void (__fastcall *IndicateNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rdx
  void *IndicateNetBufferListsContext; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      67,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  v2 = 0;
  a1->NextSendPacketsHandler = a1->FinalSendPacketsHandler;
  a1->Next.CancelSendHandler = a1->NoFilter.CancelSendHandler;
  a1->Next.CancelSendContext = a1->NoFilter.CancelSendContext;
  a1->Next.SendNetBufferListsTracker = a1->NoFilter.SendNetBufferListsTracker;
  SendNetBufferListsHandler = a1->NoFilter.SendNetBufferListsHandler;
  if ( (a1->Flags & 0x20000000) != 0 )
  {
    v4 = a1->MajorNdisVersion < 6u;
    v5 = (void (__stdcall *)(PVOID))NdisCancelSendPackets;
    a1->NextSendNetBufferListsHandler = SendNetBufferListsHandler;
    LOBYTE(v2) = v4;
    v6 = v2 + 1;
    a1->SendPathType = v6;
  }
  else
  {
    v5 = NdisQueryOffloadState;
    LOBYTE(v2) = a1->MajorNdisVersion < 6u;
    v6 = v2 + 1;
  }
  a1->SavedSendPathType = v6;
  a1->SavedNextSendNetBufferListsHandler = SendNetBufferListsHandler;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v5;
  IndicateNetBufferListsHandler = a1->NoFilter.IndicateNetBufferListsHandler;
  IndicateNetBufferListsContext = a1->NoFilter.IndicateNetBufferListsContext;
  a1->Next.ReturnNetBufferListsHandler = a1->NoFilter.ReturnNetBufferListsHandler;
  a1->Next.ReturnNetBufferListsContext = a1->NoFilter.ReturnNetBufferListsContext;
  a1->Next.ReturnNetBufferListsTracker = a1->NoFilter.ReturnNetBufferListsTracker;
  a1->Next.ReturnNetBufferListsObject = a1->NoFilter.ReturnNetBufferListsObject;
  a1->Next.SendNetBufferListsCompleteHandler = a1->NoFilter.SendNetBufferListsCompleteHandler;
  a1->Next.SendNetBufferListsCompleteContext = a1->NoFilter.SendNetBufferListsCompleteContext;
  a1->Next.SendNetBufferListsCompleteTracker = a1->NoFilter.SendNetBufferListsCompleteTracker;
  a1->Next.SendNetBufferListsCompleteObject = a1->NoFilter.SendNetBufferListsCompleteObject;
  a1->Next.IndicateNetBufferListsTracker = a1->NoFilter.IndicateNetBufferListsTracker;
  a1->Next.IndicateNetBufferListsObject = a1->NoFilter.IndicateNetBufferListsObject;
  a1->Next.RequestHandle = a1;
  a1->Next.DirectRequestHandle = a1;
  a1->Next.IndicateNetBufferListsHandler = IndicateNetBufferListsHandler;
  a1->Next.IndicateNetBufferListsContext = IndicateNetBufferListsContext;
  a1->Next.SaveIndicateNetBufferListsHandler = IndicateNetBufferListsHandler;
  a1->Next.SaveIndicateNetBufferListsContext = IndicateNetBufferListsContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      68,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
}
