/*
 * XREFs of ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140043D60
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1400C1280 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 * Callees:
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008F730 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008F990 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 *     IsOidInFilterList @ 0x1400E6A00 (IsOidInFilterList.c)
 */

__int64 __fastcall ndisMQueueOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // r8
  struct _NDIS_MINIPORT_BLOCK *v3; // r9
  UCHAR *NdisReserved; // rbx
  unsigned int v5; // edx
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *Flink; // rax
  int v8; // eax
  char v9; // cl
  unsigned int v10; // eax
  _LIST_ENTRY **p_Flink; // rax

  v2 = a2;
  v3 = a1;
  NdisReserved = a2->NdisReserved;
  v5 = -1073741823;
  *(_QWORD *)NdisReserved = 0LL;
  *((_QWORD *)NdisReserved + 1) = 0LL;
  if ( (a1->PnPFlags & 0x100) != 0 )
    return v5;
  p_OidRequestList = &a1->OidRequestList;
  Flink = a1->OidRequestList.Flink;
  if ( Flink == &a1->OidRequestList )
  {
LABEL_5:
    if ( (unsigned int)dword_14011C6C0 <= 4 )
      goto LABEL_22;
    if ( (qword_14011C6D0 & 0x400) == 0 )
      goto LABEL_22;
    if ( (qword_14011C6D8 & 0x400) != qword_14011C6D8 )
      goto LABEL_22;
    v8 = *(_DWORD *)&v2->NdisReserved[16] & 0x30000000;
    if ( v8 == 0x10000000 )
      goto LABEL_22;
    if ( v8 )
    {
      if ( v8 != 0x20000000 )
      {
LABEL_22:
        p_Flink = &p_OidRequestList->Blink->Flink;
        v5 = 0;
        if ( *p_Flink != p_OidRequestList )
          __fastfail(3u);
        *(_QWORD *)NdisReserved = p_OidRequestList;
        *((_QWORD *)NdisReserved + 1) = p_Flink;
        *p_Flink = (_LIST_ENTRY *)NdisReserved;
        p_OidRequestList->Blink = (_LIST_ENTRY *)NdisReserved;
        return v5;
      }
    }
    else
    {
      if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress
        || (ndisAzOidTelemetryFilter & 2) != 0 && (unsigned __int8)IsOidInFilterList(v2->DATA.QUERY_INFORMATION.Oid) )
      {
        v9 = 1;
        v10 = *(_DWORD *)&v2->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
      }
      else
      {
        v9 = 0;
        v10 = *(_DWORD *)&v2->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
      }
      *(_DWORD *)&v2->NdisReserved[16] = v10;
      if ( !v9 )
        goto LABEL_22;
    }
    if ( *(_QWORD *)&v2->NdisReserved[24] )
      TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_MINIPORT_BLOCK>(v3, v2);
    else
      TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_MINIPORT_BLOCK>(v3, v2);
    goto LABEL_22;
  }
  while ( Flink != (_LIST_ENTRY *)NdisReserved )
  {
    Flink = Flink->Flink;
    if ( Flink == p_OidRequestList )
      goto LABEL_5;
  }
  return v5;
}
