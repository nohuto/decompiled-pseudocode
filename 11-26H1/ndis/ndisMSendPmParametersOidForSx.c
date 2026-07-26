/*
 * XREFs of ndisMSendPmParametersOidForSx @ 0x140049450
 * Callers:
 *     ndisWdmSendOidPmParametersForSx @ 0x1400ABAB4 (ndisWdmSendOidPmParametersForSx.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401648B0 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMSendPmParametersOidForSx(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  struct _NDIS_OID_REQUEST v5; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+120h] [rbp+20h]

  v6 = 0LL;
  memset(&v5.NdisReserved[40], 0, 128);
  *(_QWORD *)&v5.NdisReserved[32] = &ndisIntReqGeneric;
  memset(&v5, 0, 32);
  *(&v5.DATA.METHOD_INFORMATION.Oid + 1) = 0;
  memset(&v5.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
  *(_DWORD *)&v5.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v5.NdisReserved[96]);
  v5.Header = (NDIS_OBJECT_HEADER)15466902;
  v5.DATA.QUERY_INFORMATION.Oid = -50265847;
  *(_QWORD *)&v5.RequestType = 1LL;
  v5.DATA.QUERY_INFORMATION.InformationBuffer = a2;
  v5.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
  return ndisQuerySetMiniport(a1, 0LL, &v5, 0, 0LL);
}
