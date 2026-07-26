/*
 * XREFs of ?ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14008FC60 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E0BAC (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreIovDeleteVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // xmm2_8
  char v5; // bl
  __int64 v6; // rcx
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  _NDIS_OPEN_BLOCK *v8; // rbp
  unsigned int v9; // edx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  __m128i v12; // [rsp+40h] [rbp-98h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v13[2]; // [rsp+50h] [rbp-88h]
  __int128 v14; // [rsp+60h] [rbp-78h]
  __int64 v15; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v15, a1);
  v12 = *(__m128i *)v3;
  *(_OWORD *)v13 = *(_OWORD *)(v3 + 16);
  v14 = *(_OWORD *)(v3 + 32);
  v4 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v3, 8).m128i_u64[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Cu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  v5 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_20;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    *(_DWORD *)(v1 + 56) = 12;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_21;
  }
  if ( !v12.m128i_i8[0] )
    goto LABEL_7;
  if ( (v12.m128i_i8[1]
     || ndisIovNicSwitchWithoutIovSupported(v13[1])
     || *((_QWORD *)&v14 + 1) && v6 && (*(_BYTE *)(*((_QWORD *)&v14 + 1) + 8LL) & 3) == 3)
    && (OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1),
        (v8 = OidSourceHandle) != 0LL)
    && OidSourceHandle->Header.Type == 18
    && (v9 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL)) != 0 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v4, v9);
    if ( VPortByVPortId && VPortByVPortId->Open == v8 )
    {
      *(_QWORD *)(v1 + 152) = VPortByVPortId;
LABEL_7:
      v5 = 0;
      goto LABEL_21;
    }
    *((_DWORD *)a1 + 10) = -1073741811;
  }
  else
  {
LABEL_20:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Du,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v5,
      *((_DWORD *)a1 + 10));
  return v5;
}
