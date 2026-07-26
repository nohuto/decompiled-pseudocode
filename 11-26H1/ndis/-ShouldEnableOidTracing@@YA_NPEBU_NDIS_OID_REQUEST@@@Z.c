/*
 * XREFs of ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x14004A820
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140029700 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 * Callees:
 *     IsOidInFilterList @ 0x1400E6A00 (IsOidInFilterList.c)
 */

bool __fastcall ShouldEnableOidTracing(const struct _NDIS_OID_REQUEST *a1)
{
  const struct _NDIS_OID_REQUEST *v1; // r8
  int v2; // eax

  v1 = a1;
  if ( (unsigned int)dword_14011C6C0 <= 4
    || (qword_14011C6D0 & 0x400) == 0
    || (qword_14011C6D8 & 0x400) != qword_14011C6D8 )
  {
    return 0;
  }
  v2 = *(_DWORD *)&a1->NdisReserved[16] & 0x30000000;
  if ( v2 == 0x10000000 )
    return 0;
  if ( v2 )
    return v2 == 0x20000000;
  if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress
    || (ndisAzOidTelemetryFilter & 2) != 0 && (unsigned __int8)IsOidInFilterList(a1->DATA.QUERY_INFORMATION.Oid) )
  {
    *(_DWORD *)&v1->NdisReserved[16] = *(_DWORD *)&v1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
    return 1;
  }
  else
  {
    *(_DWORD *)&v1->NdisReserved[16] = *(_DWORD *)&v1->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
    return 0;
  }
}
