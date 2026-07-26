/*
 * XREFs of ?ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006B850
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140157F60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisDisableRsc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_MINIPORT_OFFLOAD *v3; // rax
  _BYTE v4[248]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v5[33]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v6; // [rsp+151h] [rbp+51h]
  char v7; // [rsp+153h] [rbp+53h]

  memset(&v4[1], 0, 0xF7uLL);
  v6 = 0;
  v7 = 0;
  Offload = a1->Offload;
  memset(&v5[1], 0, 32);
  if ( Offload && !Offload->RSCDisallowed )
  {
    if ( (Offload->RSCDisallowed = 1, v3 = a1->Offload, v3->MiniportCurrentConfig.Header.Size >= 0x9Cu)
      && v3->MiniportCurrentConfig.Header.Revision >= 3u
      && (v3->MiniportCurrentConfig.Rsc.IPv4.Enabled || v3->MiniportCurrentConfig.Rsc.IPv6.Enabled)
      || v3->TopCapabilities.Header.Size >= 0x9Cu
      && v3->TopCapabilities.Header.Revision >= 3u
      && (v3->TopCapabilities.Rsc.IPv4.Enabled || v3->TopCapabilities.Rsc.IPv6.Enabled) )
    {
      *(_DWORD *)&v5[16] |= 1u;
      *(_DWORD *)v5 = 1704832;
      *(_QWORD *)&v4[104] = &ndisIntReqGeneric;
      memset(v4, 0, 104);
      *(_WORD *)&v5[22] = 257;
      memset(&v4[112], 0, 136);
      *(_DWORD *)&v4[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v4[168]);
      *(_DWORD *)v4 = 15466902;
      *(_DWORD *)&v4[32] = -67042804;
      *(_QWORD *)&v4[4] = 1LL;
      *(_QWORD *)&v4[40] = v5;
      *(_DWORD *)&v4[48] = 36;
      ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v4, 0, 0LL);
    }
  }
}
