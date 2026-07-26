/*
 * XREFs of ?ndisMSwapFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400A1BD4
 * Callers:
 *     ?HandlersSwappedEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400B2DD0 (-HandlersSwappedEntry@EntryFuncs@-$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D830 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisMSwapFilterHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *i; // rbx
  bool v3; // zf

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x60u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      2);
  for ( i = a1->HighestFilter; i; i = i->LowerFilter )
  {
    i->XState |= 2u;
    ndisUpdateFilterFakeStatus(i);
    v3 = (i->XState & 1) == 0;
    i->FilterSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFakeFilterSendHandler;
    i->FilterCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
    if ( !v3 )
      i->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      97,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
}
