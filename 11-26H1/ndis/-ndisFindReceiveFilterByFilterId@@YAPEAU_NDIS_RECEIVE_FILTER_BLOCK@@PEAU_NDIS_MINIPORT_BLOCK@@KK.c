/*
 * XREFs of ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x140071D10
 * Callers:
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140071BF0 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ACC30 (-ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ACE30 (-ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AD090 (-ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ADAD0 (-ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ADCB0 (-ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_RECEIVE_FILTER_BLOCK *__fastcall ndisFindReceiveFilterByFilterId(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  struct _NDIS_RECEIVE_FILTER_BLOCK *p_ReceiveFilterList; // rcx
  struct _NDIS_RECEIVE_FILTER_BLOCK *result; // rax

  p_ReceiveFilterList = (struct _NDIS_RECEIVE_FILTER_BLOCK *)&a1->ReceiveFilterList;
  for ( result = (struct _NDIS_RECEIVE_FILTER_BLOCK *)p_ReceiveFilterList->AdapterLink.Flink;
        result != p_ReceiveFilterList;
        result = (struct _NDIS_RECEIVE_FILTER_BLOCK *)result->AdapterLink.Flink )
  {
    if ( result->FilterId == a2 )
      return result;
    if ( result->FilterId > a2 )
      break;
  }
  return 0LL;
}
