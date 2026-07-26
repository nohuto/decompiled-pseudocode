/*
 * XREFs of ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143948
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140157F60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisIsUdpRscEnabled@@YA_NAEBU_NDIS_OFFLOAD@@@Z @ 0x1400C5004 (-ndisIsUdpRscEnabled@@YA_NAEBU_NDIS_OFFLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisDisableUdpRsc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v3; // edx
  _NDIS_MINIPORT_OFFLOAD *Offload; // r8
  int v5; // r9d
  __int64 v6; // r8
  int v7; // ecx
  unsigned __int8 *p_UdpRscDisallowed; // rcx
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx
  struct _NDIS_OID_REQUEST v12; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+140h] [rbp+40h] BYREF
  __int128 v14; // [rsp+150h] [rbp+50h]
  int v15; // [rsp+160h] [rbp+60h]

  IsEnabledDeviceUsageNoInline = Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline();
  Offload = a1->Offload;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !Offload )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v5 = 10;
      goto LABEL_5;
    }
    if ( Offload->UdpRscDisallowed )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qql(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          6u,
          0xDu,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
          (char)a1,
          (char)Offload,
          Offload->UdpRscDisallowed);
    }
    else
    {
      Offload->UdpRscDisallowed = 1;
      if ( ndisIsUdpRscEnabled(&Offload->MiniportCurrentConfig)
        || ndisIsUdpRscEnabled((const struct _NDIS_OFFLOAD *)(v6 + 228)) )
      {
        *(_BYTE *)(v6 + 7) = 1;
        v15 = 0x10000;
        v13 = 0LL;
        LODWORD(v13) = 2360960;
        v14 = 0LL;
        LODWORD(v14) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
        memset(&v12, 0, 0xF8uLL);
        *(_DWORD *)&v12.NdisReserved[16] |= 8u;
        *(_QWORD *)&v12.NdisReserved[32] = &ndisIntReqGeneric;
        EtwActivityIdControl(3u, (LPGUID)&v12.NdisReserved[96]);
        v12.Header = (NDIS_OBJECT_HEADER)15466902;
        v12.DATA.QUERY_INFORMATION.InformationBuffer = &v13;
        v12.DATA.QUERY_INFORMATION.Oid = -67042804;
        *(_QWORD *)&v12.RequestType = 1LL;
        v12.DATA.QUERY_INFORMATION.InformationBufferLength = 36;
        v7 = ndisQuerySetMiniport(a1, 0LL, &v12, 0, 0LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            6u,
            0xBu,
            (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
            (char)a1,
            v7);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 12;
LABEL_5:
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          6,
          v5,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
          (char)a1);
      }
    }
  }
  else
  {
    p_UdpRscDisallowed = &Offload->UdpRscDisallowed;
    if ( !Offload || *p_UdpRscDisallowed )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          6u,
          0x10u,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
          (char)Offload,
          *p_UdpRscDisallowed);
    }
    else
    {
      *p_UdpRscDisallowed = 1;
      if ( ndisIsUdpRscEnabled(&a1->Offload->MiniportCurrentConfig)
        || ndisIsUdpRscEnabled((const struct _NDIS_OFFLOAD *)(v9 + 228)) )
      {
        *(_BYTE *)(v9 + 7) = 1;
        v15 = 0x10000;
        v13 = 0LL;
        LODWORD(v13) = 2360960;
        v14 = 0LL;
        LODWORD(v14) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
        memset(&v12, 0, 0xF8uLL);
        *(_DWORD *)&v12.NdisReserved[16] |= 8u;
        *(_QWORD *)&v12.NdisReserved[32] = &ndisIntReqGeneric;
        EtwActivityIdControl(3u, (LPGUID)&v12.NdisReserved[96]);
        v12.Header = (NDIS_OBJECT_HEADER)15466902;
        v12.DATA.QUERY_INFORMATION.InformationBuffer = &v13;
        v12.DATA.QUERY_INFORMATION.Oid = -67042804;
        *(_QWORD *)&v12.RequestType = 1LL;
        v12.DATA.QUERY_INFORMATION.InformationBufferLength = 36;
        v11 = ndisQuerySetMiniport(a1, 0LL, &v12, 0, 0LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            6u,
            0xEu,
            (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids,
            v11);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          6,
          15,
          (struct _GUID *)&WPP_0e3699f405f339483576bad44db9872d_Traceguids);
      }
    }
  }
}
