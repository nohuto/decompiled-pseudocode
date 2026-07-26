/*
 * XREFs of ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015D3C0
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x14015CF80 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPcwQueryPcfMatchCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rax
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_OID_REQUEST v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+130h] [rbp+30h]

  ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
  v2 = 0LL;
  v5 = 0LL;
  if ( !ReceiveFilterCurrentCapabilities || (ReceiveFilterCurrentCapabilities->EnabledFilterTypes & 2) == 0 )
    return 0LL;
  memset(&v6.NdisReserved[40], 0, 128);
  v7 = 0LL;
  *(_QWORD *)&v6.NdisReserved[32] = &ndisIntReqGeneric;
  memset(&v6, 0, 32);
  *(&v6.DATA.METHOD_INFORMATION.Oid + 1) = 0;
  memset(&v6.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
  *(_DWORD *)&v6.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v6.NdisReserved[96]);
  v6.Header = (NDIS_OBJECT_HEADER)15466902;
  v6.DATA.QUERY_INFORMATION.InformationBuffer = &v5;
  v6.DATA.QUERY_INFORMATION.Oid = 66101;
  *(_QWORD *)&v6.RequestType = 2LL;
  v6.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
  if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v6, 0, 0LL) )
    return v5;
  return v2;
}
