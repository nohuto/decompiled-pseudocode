/*
 * XREFs of ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401826A0
 * Callers:
 *     NdisMSetAttributesEx @ 0x140182970 (NdisMSetAttributesEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034C20 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055160 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMIsPowerSynchronizedDatapathRequired @ 0x14007FE10 (ndisMIsPowerSynchronizedDatapathRequired.c)
 */

void __fastcall ndisSetMiniportHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v2; // cf
  bool v3; // zf
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdx
  struct _NDIS_MINIPORT_BLOCK *MiniportAdapterContext; // rcx
  void (__fastcall *ReturnPacketHandler)(void *, _NDIS_PACKET *); // rax
  void (__fastcall *CancelSendPacketsHandler)(void *, void *); // rcx
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rax
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  _NDIS_OPEN_BLOCK *i; // rdi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      155,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  v2 = a1->MajorNdisVersion < 6u;
  a1->NoFilter.IndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMTopReceiveNetBufferLists;
  a1->NoFilter.IndicateNetBufferListsContext = a1;
  a1->NoFilter.IndicateNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)32;
  a1->NoFilter.IndicateNetBufferListsObject = &a1->Header;
  if ( v2 )
  {
    v3 = a1->Ndis6ProtocolsBound == 1;
    DriverHandle = a1->DriverHandle;
    MiniportAdapterContext = (struct _NDIS_MINIPORT_BLOCK *)a1->MiniportAdapterContext;
    a1->MiniportReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
    a1->MiniportReturnPacketContext = MiniportAdapterContext;
    if ( v3 || a1->HighestFilter )
    {
      MiniportAdapterContext = a1;
      ReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    }
    else
    {
      ReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
    }
    a1->SynchronousReturnPacketHandler = ReturnPacketHandler;
    a1->SynchronousReturnPacketContext = MiniportAdapterContext;
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x40000) == 0
      || (CancelSendPacketsHandler = a1->DriverHandle->MiniportCharacteristics.CancelSendPacketsHandler) == 0LL )
    {
      CancelSendPacketsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
    }
    a1->NoFilter.CancelSendHandler = CancelSendPacketsHandler;
    a1->NoFilter.CancelSendContext = a1->MiniportAdapterContext;
    a1->NoFilter.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMSendNetBufferListsToPackets;
    NblTracker = a1->NblTracker;
    a1->NoFilter.SendNetBufferListsTracker = NblTracker;
    a1->NoFilter.ReturnNetBufferListsTracker = NblTracker;
    a1->NoFilter.SendNetBufferListsContext = a1;
    a1->NoFilter.SendNetBufferListsObject = &a1->Header;
    a1->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
    a1->NoFilter.ReturnNetBufferListsContext = a1;
    a1->NoFilter.ReturnNetBufferListsObject = &a1->Header;
  }
  else
  {
    a1->SynchronousReturnPacketContext = a1;
    a1->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a1->NoFilter.CancelSendContext = a1;
    a1->NoFilter.CancelSendHandler = (void (__fastcall *)(void *, void *))ndisMCancelSendNetBufferListsOnMiniport;
    a1->NoFilter.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMSendNBLToMiniport;
    a1->NoFilter.SendNetBufferListsTracker = a1->NblTracker;
    a1->NoFilter.SendNetBufferListsContext = a1;
    a1->NoFilter.SendNetBufferListsObject = &a1->Header;
    if ( ndisMIsPowerSynchronizedDatapathRequired(a1) )
    {
      v9 = a1;
      ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNblWithPowerQueue;
    }
    else if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL )
    {
      v9 = (struct _NDIS_MINIPORT_BLOCK *)a1->MiniportAdapterContext;
      ReturnNetBufferListsHandler = a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    }
    else
    {
      v9 = a1;
      ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisWdfReturnNbl;
    }
    a1->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    a1->NoFilter.ReturnNetBufferListsContext = v9;
    a1->NoFilter.ReturnNetBufferListsTracker = a1->NblTracker;
    a1->NoFilter.ReturnNetBufferListsObject = &a1->Header;
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x20000) != 0 )
      a1->NextCoOidRequestHandle = a1->MiniportAdapterContext;
  }
  ndisSetupLwfMiniportHandlers(a1);
  for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
    ndisSetupNdis6OpenHandlers(i, i->ProtocolHandle, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      156,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
}
