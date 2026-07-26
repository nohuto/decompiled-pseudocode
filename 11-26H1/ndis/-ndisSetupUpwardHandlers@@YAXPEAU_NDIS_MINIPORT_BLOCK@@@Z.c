/*
 * XREFs of ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055420
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055160 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisIsVerifierDummyHandler@@YA_NPEAX@Z @ 0x1400A5594 (-ndisIsVerifierDummyHandler@@YA_NPEAX@Z.c)
 */

void __fastcall ndisSetupUpwardHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  int v3; // esi
  unsigned int StackFlags; // ecx
  _NDIS_FILTER_BLOCK *LowerFilter; // r8
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rdx
  unsigned int v7; // eax
  int v8; // ecx
  bool v9; // di
  const struct _NDIS_FILTER_BLOCK *HigherFilter; // r10
  bool v11; // zf
  _QWORD *v12; // r8
  __int64 v13; // r10
  int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 *v19; // r11
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  void (__fastcall *v23)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  void *v24; // rax
  _NDIS_OBJECT_HEADER *v25; // rax
  __int64 v26; // r8
  void **v27; // r10
  void *v28; // rax
  _NDIS_MEDIUM MediaType; // ecx
  void (__fastcall *v30)(void *, _NDIS_PACKET **, unsigned int); // rax

  HighestFilter = a1->HighestFilter;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      71,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  StackFlags = HighestFilter->StackFlags;
  LowerFilter = HighestFilter->LowerFilter;
  HighestFilter->NextSendNetBufferListsCompleteHandler = a1->NoFilter.SendNetBufferListsCompleteHandler;
  HighestFilter->NextSendNetBufferListsCompleteContext = a1->NoFilter.SendNetBufferListsCompleteContext;
  HighestFilter->NextSendNetBufferListsCompleteTracker = a1->NoFilter.SendNetBufferListsCompleteTracker;
  HighestFilter->NextSendNetBufferListsCompleteObject = a1->NoFilter.SendNetBufferListsCompleteObject;
  HighestFilter->NextIndicateReceiveNetBufferListsHandler = a1->NoFilter.IndicateNetBufferListsHandler;
  HighestFilter->NextIndicateReceiveNetBufferListsContext = a1->NoFilter.IndicateNetBufferListsContext;
  HighestFilter->NextIndicateReceiveNetBufferListsTracker = a1->NoFilter.IndicateNetBufferListsTracker;
  HighestFilter->NextIndicateReceiveNetBufferListsObject = a1->NoFilter.IndicateNetBufferListsObject;
  OidRequestHandler = HighestFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler;
  v7 = StackFlags & 0xFFFFFFFE;
  v8 = StackFlags | 1;
  if ( !OidRequestHandler )
    v8 = v7;
  HighestFilter->StackFlags = v8;
  a1->ReceiveFilters = 0;
  if ( LowerFilter )
  {
    v9 = OidRequestHandler != 0LL;
    do
    {
      HigherFilter = LowerFilter->HigherFilter;
      if ( v9 || !LowerFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
      {
        LowerFilter->StackFlags &= ~1u;
      }
      else
      {
        LowerFilter->StackFlags |= 1u;
        v9 = 1;
      }
      ++v3;
      v11 = !FILTER_TEST_FLAG(HigherFilter, 0x8000);
      v15 = *(_QWORD *)(v13 + 592);
      if ( v11 )
        v3 = v14;
      if ( v15 )
      {
        v12[58] = v15;
        v11 = !ndisIsVerifierDummyHandler(*(void **)(v13 + 592));
        v16 = v13;
        if ( v11 )
          v16 = *(_QWORD *)(v13 + 24);
        v12[59] = v16;
        v12[60] = *(_QWORD *)(v13 + 648);
        v17 = v13;
      }
      else
      {
        v12[58] = *(_QWORD *)(v13 + 464);
        v12[59] = *(_QWORD *)(v13 + 472);
        v12[60] = *(_QWORD *)(v13 + 480);
        v17 = *(_QWORD *)(v13 + 488);
      }
      v12[61] = v17;
      if ( *(_QWORD *)(v13 + 608) )
      {
        if ( !v3 )
          ++a1->ReceiveFilters;
        v12[62] = *(_QWORD *)(v13 + 608);
        v11 = !ndisIsVerifierDummyHandler(*(void **)(v13 + 608));
        v20 = v18;
        if ( v11 )
          v20 = *v19;
        v12[63] = v20;
        v12[64] = *(_QWORD *)(v18 + 648);
      }
      else
      {
        v12[62] = *(_QWORD *)(v13 + 496);
        v12[63] = *(_QWORD *)(v13 + 504);
        v12[64] = *(_QWORD *)(v13 + 512);
        v18 = *(_QWORD *)(v13 + 520);
      }
      v12[65] = v18;
      LowerFilter = (_NDIS_FILTER_BLOCK *)v12[14];
    }
    while ( LowerFilter );
  }
  v11 = !FILTER_TEST_FLAG(a1->LowestFilter, 0x8000);
  v22 = v3 + 1;
  v23 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))(v21 + 592);
  if ( v11 )
    v22 = v3;
  if ( v23 )
  {
    a1->Next.SendNetBufferListsCompleteHandler = v23;
    v11 = !ndisIsVerifierDummyHandler(*(void **)(v21 + 592));
    v24 = (void *)v21;
    if ( v11 )
      v24 = *(void **)(v21 + 24);
    a1->Next.SendNetBufferListsCompleteContext = v24;
    a1->Next.SendNetBufferListsCompleteTracker = *(NDIS_NBL_TRACKER_HANDLE__ **)(v21 + 648);
    v25 = (_NDIS_OBJECT_HEADER *)v21;
  }
  else
  {
    a1->Next.SendNetBufferListsCompleteHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))(v21 + 464);
    a1->Next.SendNetBufferListsCompleteContext = *(void **)(v21 + 472);
    a1->Next.SendNetBufferListsCompleteTracker = *(NDIS_NBL_TRACKER_HANDLE__ **)(v21 + 480);
    v25 = *(_NDIS_OBJECT_HEADER **)(v21 + 488);
  }
  a1->Next.SendNetBufferListsCompleteObject = v25;
  if ( *(_QWORD *)(v21 + 608) )
  {
    if ( !v22 )
      ++a1->ReceiveFilters;
    a1->Next.IndicateNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v21 + 608);
    v11 = !ndisIsVerifierDummyHandler(*(void **)(v21 + 608));
    v28 = (void *)v26;
    if ( v11 )
      v28 = *v27;
    a1->Next.IndicateNetBufferListsContext = v28;
    a1->Next.IndicateNetBufferListsTracker = *(NDIS_NBL_TRACKER_HANDLE__ **)(v26 + 648);
  }
  else
  {
    a1->Next.IndicateNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v21 + 496);
    a1->Next.IndicateNetBufferListsContext = *(void **)(v21 + 504);
    a1->Next.IndicateNetBufferListsTracker = *(NDIS_NBL_TRACKER_HANDLE__ **)(v21 + 512);
    v26 = *(_QWORD *)(v21 + 520);
  }
  a1->Next.IndicateNetBufferListsObject = (_NDIS_OBJECT_HEADER *)v26;
  if ( v22 == 1 )
  {
    MediaType = a1->MediaType;
    if ( MediaType )
    {
      if ( MediaType == NdisMediumWan )
        goto LABEL_46;
      v30 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacket;
    }
    else
    {
      v30 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ethFilterDprIndicateReceivePacket;
    }
    a1->TopNdis5PacketIndicateHandler = v30;
  }
LABEL_46:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      72,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
}
