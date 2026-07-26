/*
 * XREFs of ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143D20
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140157F60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisEnableUdpRsc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_MINIPORT_OFFLOAD *v3; // rax
  int v4; // eax
  struct _NDIS_OID_REQUEST v5; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v6; // [rsp+130h] [rbp+30h] BYREF
  __int128 v7; // [rsp+140h] [rbp+40h]
  int v8; // [rsp+150h] [rbp+50h]

  Offload = a1->Offload;
  if ( Offload )
  {
    Offload->UdpRscDisallowed = 0;
    v3 = a1->Offload;
    if ( v3->UdpRscPreviouslyEnabled )
    {
      v3->UdpRscPreviouslyEnabled = 0;
      v8 = 0x20000;
      v6 = 0LL;
      LODWORD(v6) = 2360960;
      v7 = 0LL;
      LODWORD(v7) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
      memset(&v5, 0, 0xF8uLL);
      *(_DWORD *)&v5.NdisReserved[16] |= 8u;
      *(_QWORD *)&v5.NdisReserved[32] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v5.NdisReserved[96]);
      v5.Header = (NDIS_OBJECT_HEADER)15466902;
      v5.DATA.QUERY_INFORMATION.InformationBuffer = &v6;
      v5.DATA.QUERY_INFORMATION.Oid = -67042804;
      *(_QWORD *)&v5.RequestType = 1LL;
      v5.DATA.QUERY_INFORMATION.InformationBufferLength = 36;
      v4 = ndisQuerySetMiniport(a1, 0LL, &v5, 0, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          6u,
          0x11u,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
          v4);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        6u,
        0x12u,
        (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
        0);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      19,
      (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids);
  }
}
