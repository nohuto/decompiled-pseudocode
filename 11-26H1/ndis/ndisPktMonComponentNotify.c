/*
 * XREFs of ndisPktMonComponentNotify @ 0x1401427F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007EC30 (-ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisPktMonComponentNotify(__int64 a1)
{
  bool v2; // zf
  char v3; // al
  _BYTE v4[5]; // [rsp+30h] [rbp-D0h] BYREF
  char v5; // [rsp+35h] [rbp-CBh]
  struct _NDIS_OID_REQUEST v6; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v6, 0, 0xF8uLL);
  memset(v4, 0, sizeof(v4));
  v2 = *(_DWORD *)(a1 + 48) == 2;
  v5 = 0;
  if ( v2 && (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)(a1 - 5816), 0x6Fu) )
  {
    if ( !g_featureNVBugFixes2507
      || (mem::ReadNoFence<unsigned long,void>((unsigned int *)(a1 - 5816 + 120)) & 0x80u) == 0LL )
    {
      if ( ndisIsMiniportReady((struct _NDIS_MINIPORT_BLOCK *)(a1 - 5816)) )
      {
        v3 = *(_BYTE *)(a1 + 56);
        *(_DWORD *)&v6.NdisReserved[16] |= 8u;
        *(_DWORD *)v4 = 328064;
        v4[4] = (v3 & 2) != 0;
        *(_QWORD *)&v6.NdisReserved[32] = &ndisIntReqGeneric;
        EtwActivityIdControl(3u, (LPGUID)&v6.NdisReserved[96]);
        *(_DWORD *)&v6.NdisReserved[16] |= 0x100000u;
        v6.DATA.QUERY_INFORMATION.InformationBuffer = v4;
        v6.Header = (NDIS_OBJECT_HEADER)15466902;
        v6.DATA.QUERY_INFORMATION.Oid = 66257;
        *(_QWORD *)&v6.RequestType = 1LL;
        v6.DATA.QUERY_INFORMATION.InformationBufferLength = 6;
        ndisQuerySetMiniport((struct _NDIS_MINIPORT_BLOCK *)(a1 - 5816), 0LL, &v6, 0, 0LL);
      }
    }
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)(a1 - 5816), 0x6Fu);
  }
}
