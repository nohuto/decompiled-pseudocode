/*
 * XREFs of ndisNdkPcwCollectMiniportStats @ 0x140162B40
 * Callers:
 *     ndisNdkPcwCollectData @ 0x140162A90 (ndisNdkPcwCollectData.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140162F60 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisNdkPcwCollectMiniportStats(__int64 a1, struct _PCW_BUFFER *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  const UNICODE_STRING *MiniportName; // rax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_OID_REQUEST v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+130h] [rbp+30h]
  __int64 v10; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v11[248]; // [rsp+148h] [rbp+48h] BYREF

  memset(v11, 0, 0xF0uLL);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 8);
  v10 = 16253312LL;
  memset(&v8.NdisReserved[40], 0, 128);
  v9 = 0LL;
  *(_QWORD *)&v8.NdisReserved[32] = &ndisIntReqGeneric;
  memset(&v8, 0, 32);
  *(&v8.DATA.METHOD_INFORMATION.Oid + 1) = 0;
  memset(&v8.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
  *(_DWORD *)&v8.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v8.NdisReserved[96]);
  v8.Header = (NDIS_OBJECT_HEADER)15466902;
  v8.DATA.QUERY_INFORMATION.InformationBuffer = &v10;
  v8.DATA.QUERY_INFORMATION.Oid = -66846206;
  *(_QWORD *)&v8.RequestType = 2LL;
  v8.DATA.QUERY_INFORMATION.InformationBufferLength = 248;
  if ( (unsigned int)ndisQuerySetMiniport(v4, 0LL, &v8, 0, 0LL) )
    return -1073741823;
  Data.Size = 240;
  Data.Data = v11;
  MiniportName = ndisPcwGetMiniportName(v4);
  return PcwAddInstance(a2, MiniportName, *(_DWORD *)(a1 + 20), 1u, &Data);
}
