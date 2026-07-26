/*
 * XREFs of ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x14016B050
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x140073550 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016EDD0 (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisMDoMiniportOp(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        NDIS_OID a3,
        void *a4,
        UINT a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  int v11; // ecx
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax
  struct _NDIS_OID_REQUEST v15; // [rsp+30h] [rbp-128h] BYREF

  memset(&v15, 0, 0xF8uLL);
  v11 = *(_DWORD *)&v15.NdisReserved[16];
  if ( a2 )
  {
    v11 = *(_DWORD *)&v15.NdisReserved[16] | 0x80;
    *(_DWORD *)&v15.NdisReserved[16] |= 0x80u;
  }
  else
  {
    v15.RequestType = NdisRequestSetInformation;
  }
  v15.DATA.QUERY_INFORMATION.InformationBufferLength = a5;
  *(_QWORD *)&v15.NdisReserved[32] = &ndisIntReqGeneric;
  v15.Header = (NDIS_OBJECT_HEADER)15466902;
  v15.DATA.QUERY_INFORMATION.Oid = a3;
  v15.DATA.QUERY_INFORMATION.InformationBuffer = a4;
  if ( a7 )
    *(_DWORD *)&v15.NdisReserved[16] = v11 | 0x8000;
  v12 = ndisQuerySetMiniport(a1, 0LL, &v15, 0, 0LL);
  if ( !v12 )
    return 0LL;
  v13 = v12 == -1;
  result = a6;
  if ( !v13 )
    return a6 + 1;
  return result;
}
