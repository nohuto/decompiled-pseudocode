/*
 * XREFs of ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x140048EB0
 * Callers:
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14004A300 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMDoProtocolRequest(
        struct _NDIS_OPEN_BLOCK *a1,
        __int64 a2,
        NDIS_OID a3,
        void *a4,
        UINT a5,
        unsigned int a6)
{
  unsigned int v9; // ebx
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  struct _NDIS_OID_REQUEST v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+130h] [rbp+30h]

  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x3Du,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      a3);
  MiniportHandle = a1->MiniportHandle;
  memset(&v15.NdisReserved[40], 0, 128);
  v16 = 0LL;
  memset(&v15.RequestType, 0, 36);
  *(_QWORD *)&v15.NdisReserved[32] = a1;
  memset(&v15.DATA.METHOD_INFORMATION.OutputBufferLength, 0, 52);
  *(_DWORD *)&v15.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v15.NdisReserved[96]);
  LOBYTE(v11) = 6;
  ndisMReferenceOpen(a1, v11);
  *(_DWORD *)&v15.NdisReserved[16] |= 0x220u;
  v15.DATA.QUERY_INFORMATION.InformationBufferLength = a5;
  v15.RequestType = NdisRequestSetInformation;
  v15.Header = (NDIS_OBJECT_HEADER)16253334;
  v15.DATA.QUERY_INFORMATION.Oid = a3;
  v15.DATA.QUERY_INFORMATION.InformationBuffer = a4;
  v12 = ndisQuerySetMiniport(MiniportHandle, 0LL, &v15, 1u, 0LL);
  if ( v12 )
  {
    v9 = a6;
    if ( v12 != -1 )
      v9 = a6 + 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      6u,
      0x3Eu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      a3,
      v9);
  return v9;
}
