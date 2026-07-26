/*
 * XREFs of ?ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055840
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055160 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsVerifierDummyHandler@@YA_NPEAX@Z @ 0x1400A5594 (-ndisIsVerifierDummyHandler@@YA_NPEAX@Z.c)
 */

void __fastcall ndisSetupDownwardHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *LowestFilter; // rdi
  _NDIS_FILTER_BLOCK *HigherFilter; // rdx
  _NDIS_FILTER_BLOCK *LowerFilter; // r8
  void (__fastcall *CancelSendNetBufferListsHandler)(void *, void *); // rax
  void **p_FilterModuleContext; // r10
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  bool v8; // zf
  void *FilterModuleContext; // rax
  _NDIS_OBJECT_HEADER *p_Header; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  void *v12; // rax
  _NDIS_OBJECT_HEADER *NextReturnNetBufferListsObject; // rax
  void *NextRequestHandle; // rax
  _NDIS_FILTER_BLOCK *HighestFilter; // rdx
  void (__fastcall *v16)(void *, void *); // rcx
  void (__fastcall *NextCancelSendNetBufferListsHandler)(void *, void *); // rax
  __int64 v18; // rax
  void (__fastcall *v19)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void *v20; // rax
  _NDIS_OBJECT_HEADER *NextSendNetBufferListsObject; // rax
  void (__fastcall *v22)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  void **v23; // r9
  void *v24; // rax
  _NDIS_OBJECT_HEADER *v25; // rax
  void *v26; // rax
  void (__stdcall *v27)(PVOID); // rax

  LowestFilter = a1->LowestFilter;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      69,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->SynchronousReturnPacketContext = a1;
    a1->NextSendPacketsHandler = ndisMSendPacketsToNetBufferLists;
    a1->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
  }
  HigherFilter = LowestFilter->HigherFilter;
  LowestFilter->NextCancelSendNetBufferListsHandler = a1->NoFilter.CancelSendHandler;
  LowestFilter->NextCancelSendNetBufferListsContext = a1->NoFilter.CancelSendContext;
  LowestFilter->NextSendNetBufferListsHandler = a1->NoFilter.SendNetBufferListsHandler;
  LowestFilter->NextSendNetBufferListsContext = a1->NoFilter.SendNetBufferListsContext;
  LowestFilter->NextSendNetBufferListsTracker = a1->NblTracker;
  LowestFilter->NextSendNetBufferListsObject = &a1->Header;
  LowestFilter->NextReturnNetBufferListsHandler = a1->NoFilter.ReturnNetBufferListsHandler;
  LowestFilter->NextReturnNetBufferListsContext = a1->NoFilter.ReturnNetBufferListsContext;
  LowestFilter->NextReturnNetBufferListsTracker = a1->NoFilter.ReturnNetBufferListsTracker;
  LowestFilter->NextReturnNetBufferListsObject = a1->NoFilter.ReturnNetBufferListsObject;
  LowestFilter->NextRequestHandle = a1->NoFilter.RequestHandle;
  for ( LowestFilter->NextDirectRequestHandle = a1->NoFilter.DirectRequestHandle;
        HigherFilter;
        HigherFilter = HigherFilter->HigherFilter )
  {
    LowerFilter = HigherFilter->LowerFilter;
    CancelSendNetBufferListsHandler = LowerFilter->Characteristics.CancelSendNetBufferListsHandler;
    if ( CancelSendNetBufferListsHandler )
    {
      p_FilterModuleContext = &LowerFilter->FilterModuleContext;
    }
    else
    {
      CancelSendNetBufferListsHandler = LowerFilter->NextCancelSendNetBufferListsHandler;
      p_FilterModuleContext = &LowerFilter->NextCancelSendNetBufferListsContext;
    }
    HigherFilter->NextCancelSendNetBufferListsHandler = CancelSendNetBufferListsHandler;
    HigherFilter->NextCancelSendNetBufferListsContext = *p_FilterModuleContext;
    SendNetBufferListsHandler = LowerFilter->Characteristics.SendNetBufferListsHandler;
    if ( SendNetBufferListsHandler )
    {
      HigherFilter->NextSendNetBufferListsHandler = SendNetBufferListsHandler;
      v8 = !ndisIsVerifierDummyHandler(LowerFilter->Characteristics.SendNetBufferListsHandler);
      FilterModuleContext = LowerFilter;
      if ( v8 )
        FilterModuleContext = LowerFilter->FilterModuleContext;
      HigherFilter->NextSendNetBufferListsContext = FilterModuleContext;
      HigherFilter->NextSendNetBufferListsTracker = LowerFilter->NblTracker;
      p_Header = &LowerFilter->Header;
    }
    else
    {
      HigherFilter->NextSendNetBufferListsHandler = LowerFilter->NextSendNetBufferListsHandler;
      HigherFilter->NextSendNetBufferListsContext = LowerFilter->NextSendNetBufferListsContext;
      HigherFilter->NextSendNetBufferListsTracker = LowerFilter->NextSendNetBufferListsTracker;
      p_Header = LowerFilter->NextSendNetBufferListsObject;
    }
    HigherFilter->NextSendNetBufferListsObject = p_Header;
    ReturnNetBufferListsHandler = LowerFilter->Characteristics.ReturnNetBufferListsHandler;
    if ( ReturnNetBufferListsHandler )
    {
      HigherFilter->NextReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
      v8 = !ndisIsVerifierDummyHandler(LowerFilter->Characteristics.ReturnNetBufferListsHandler);
      v12 = LowerFilter;
      if ( v8 )
        v12 = LowerFilter->FilterModuleContext;
      HigherFilter->NextReturnNetBufferListsContext = v12;
      HigherFilter->NextReturnNetBufferListsTracker = LowerFilter->NblTracker;
      NextReturnNetBufferListsObject = &LowerFilter->Header;
    }
    else
    {
      HigherFilter->NextReturnNetBufferListsHandler = LowerFilter->NextReturnNetBufferListsHandler;
      HigherFilter->NextReturnNetBufferListsContext = LowerFilter->NextReturnNetBufferListsContext;
      HigherFilter->NextReturnNetBufferListsTracker = LowerFilter->NextReturnNetBufferListsTracker;
      NextReturnNetBufferListsObject = LowerFilter->NextReturnNetBufferListsObject;
    }
    HigherFilter->NextReturnNetBufferListsObject = NextReturnNetBufferListsObject;
    NextRequestHandle = LowerFilter;
    if ( !LowerFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
      NextRequestHandle = LowerFilter->NextRequestHandle;
    HigherFilter->NextRequestHandle = NextRequestHandle;
    if ( !LowerFilter->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
      LowerFilter = (_NDIS_FILTER_BLOCK *)LowerFilter->NextDirectRequestHandle;
    HigherFilter->NextDirectRequestHandle = LowerFilter;
  }
  HighestFilter = a1->HighestFilter;
  v16 = HighestFilter->Characteristics.CancelSendNetBufferListsHandler;
  NextCancelSendNetBufferListsHandler = v16;
  if ( !v16 )
    NextCancelSendNetBufferListsHandler = HighestFilter->NextCancelSendNetBufferListsHandler;
  a1->Next.CancelSendHandler = NextCancelSendNetBufferListsHandler;
  v18 = 24LL;
  if ( !v16 )
    v18 = 568LL;
  a1->Next.CancelSendContext = *(void **)(&HighestFilter->Header.Type + v18);
  v19 = HighestFilter->Characteristics.SendNetBufferListsHandler;
  if ( v19 )
  {
    a1->Next.SendNetBufferListsHandler = v19;
    v8 = !ndisIsVerifierDummyHandler(HighestFilter->Characteristics.SendNetBufferListsHandler);
    v20 = HighestFilter;
    if ( v8 )
      v20 = HighestFilter->FilterModuleContext;
    a1->Next.SendNetBufferListsContext = v20;
    a1->Next.SendNetBufferListsTracker = HighestFilter->NblTracker;
    NextSendNetBufferListsObject = &HighestFilter->Header;
  }
  else
  {
    a1->Next.SendNetBufferListsHandler = HighestFilter->NextSendNetBufferListsHandler;
    a1->Next.SendNetBufferListsContext = HighestFilter->NextSendNetBufferListsContext;
    a1->Next.SendNetBufferListsTracker = HighestFilter->NextSendNetBufferListsTracker;
    NextSendNetBufferListsObject = HighestFilter->NextSendNetBufferListsObject;
  }
  a1->Next.SendNetBufferListsObject = NextSendNetBufferListsObject;
  v22 = HighestFilter->Characteristics.ReturnNetBufferListsHandler;
  if ( v22 )
  {
    a1->Next.ReturnNetBufferListsHandler = v22;
    v8 = !ndisIsVerifierDummyHandler(HighestFilter->Characteristics.ReturnNetBufferListsHandler);
    v24 = HighestFilter;
    if ( v8 )
      v24 = *v23;
    a1->Next.ReturnNetBufferListsContext = v24;
    a1->Next.ReturnNetBufferListsTracker = HighestFilter->NblTracker;
    v25 = &HighestFilter->Header;
  }
  else
  {
    a1->Next.ReturnNetBufferListsHandler = HighestFilter->NextReturnNetBufferListsHandler;
    a1->Next.ReturnNetBufferListsContext = HighestFilter->NextReturnNetBufferListsContext;
    a1->Next.ReturnNetBufferListsTracker = HighestFilter->NextReturnNetBufferListsTracker;
    v25 = HighestFilter->NextReturnNetBufferListsObject;
  }
  a1->Next.ReturnNetBufferListsObject = v25;
  v26 = HighestFilter;
  if ( !HighestFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
    v26 = HighestFilter->NextRequestHandle;
  a1->Next.RequestHandle = v26;
  if ( !HighestFilter->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
    HighestFilter = (_NDIS_FILTER_BLOCK *)HighestFilter->NextDirectRequestHandle;
  a1->Next.DirectRequestHandle = HighestFilter;
  if ( a1->XState )
  {
    v27 = NdisQueryOffloadState;
  }
  else
  {
    a1->SendPathType = NdisFilterSendPath;
    v27 = (void (__stdcall *)(PVOID))NdisCancelSendPackets;
    a1->NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisSendNBLToFilter;
  }
  a1->SavedSendPathType = NdisFilterSendPath;
  a1->SavedNextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisSendNBLToFilter;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v27;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      70,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
}
