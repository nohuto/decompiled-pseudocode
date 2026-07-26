/*
 * XREFs of IsOidInFilterList @ 0x1400E6A00
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140023DF0 (--$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140029700 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140043860 (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140043D60 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisFInvokeOidRequestComplete @ 0x140044450 (ndisFInvokeOidRequestComplete.c)
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x14004A820 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140051C40 (--$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_O.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOidInFilterList(int a1)
{
  unsigned __int64 v1; // rax
  int v2; // edx

  v1 = 0LL;
  while ( 1 )
  {
    v2 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + v1);
    if ( !v2 )
      return 0;
    if ( v2 == a1 )
      break;
    v1 += 4LL;
    if ( v1 >= 0x40 )
      return 0;
  }
  return 1;
}
