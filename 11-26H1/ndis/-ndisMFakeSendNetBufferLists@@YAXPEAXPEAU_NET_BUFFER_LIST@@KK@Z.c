/*
 * XREFs of ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140038E40
 * Callers:
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140024860 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140038FC0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400637B0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        char a4)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x52u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      a2);
  if ( byte_14011F740 && ((__int64)a1[4].PendingOidRequest & 2) != 0 )
    PktMonClientNblDropNdis(
      (__int64)&a1[4].HigherFilter,
      (__int64)a2,
      a3,
      2LL,
      HIDWORD(a1->NextReturnNetBufferListsContext),
      -536866811);
  if ( ndisIsNblContextVeriferEnabled(a1) )
    ndisRemoveNblContextTerminator(a2, &a1->Header);
  NdisSetStatusInNblChain(a2, HIDWORD(a1->NextReturnNetBufferListsContext));
  ndisMSendCompleteNetBufferListsInternal(a1, a2, a4 & 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x53u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      a2);
}
