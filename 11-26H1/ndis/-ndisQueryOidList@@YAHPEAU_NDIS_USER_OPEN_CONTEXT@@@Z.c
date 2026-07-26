/*
 * XREFs of ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1400455E0
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x140073550 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x140045F20 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ?ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z @ 0x14005D500 (-ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisQueryOidList(struct _NDIS_USER_OPEN_CONTEXT *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rcx
  struct _NDIS_CO_VC_PTR_BLOCK *v3; // rdx
  unsigned __int8 v4; // r9
  unsigned int v5; // eax
  PVOID v6; // rdi
  unsigned int v7; // esi
  struct _GUID *v9; // [rsp+20h] [rbp-E0h]
  struct _NDIS_FILTER_BLOCK *v10; // [rsp+28h] [rbp-D8h]
  __int64 v11; // [rsp+30h] [rbp-D0h]
  unsigned int v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-ACh] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  struct _NDIS_OID_REQUEST v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+150h] [rbp+50h]

  P = 0LL;
  v13 = 0;
  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      17,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1);
  memset(&v15.NdisReserved[40], 0, 128);
  v16 = 0LL;
  *(_QWORD *)&v15.NdisReserved[32] = &ndisIntReqIoctl;
  memset(&v15, 0, 104);
  *(_DWORD *)&v15.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v15.NdisReserved[96]);
  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
  v15.Header = (NDIS_OBJECT_HEADER)15466902;
  v15.DATA.QUERY_INFORMATION.Oid = 65793;
  *(_QWORD *)&v15.RequestType = 2LL;
  v15.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v15.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  v5 = ndisQuerySetMiniportEx2(v2, v3, &v15, v4, (struct _NDIS_FILTER_BLOCK *)v9, v10, 0x2020444Eu, &P, &v13, &v12);
  v6 = P;
  v7 = v5;
  if ( !v5 )
    v7 = ndisSplitStatisticsOids(a1, (unsigned int *)P, v12 >> 2);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v7;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      v11);
  }
  return v7;
}
