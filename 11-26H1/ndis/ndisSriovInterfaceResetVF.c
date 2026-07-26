/*
 * XREFs of ndisSriovInterfaceResetVF @ 0x140149960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceResetVF(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2)
{
  int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // edi
  char v8[4]; // [rsp+30h] [rbp-D0h]
  _BYTE v9[6]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v10; // [rsp+50h] [rbp-B0h] BYREF

  memset(&v10.Header.Revision, 0, 0xF7uLL);
  *(_DWORD *)&v9[1] = 0;
  v9[5] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      110,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  *(_DWORD *)v9 = 393600;
  *(_WORD *)&v9[4] = a2;
  memset(&v10, 0, 0xF8uLL);
  *(_DWORD *)&v10.NdisReserved[16] |= 8u;
  *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v10.NdisReserved[96]);
  v10.Header = (NDIS_OBJECT_HEADER)15466902;
  v10.DATA.QUERY_INFORMATION.InformationBuffer = v9;
  v10.DATA.QUERY_INFORMATION.Oid = 66133;
  *(_QWORD *)&v10.RequestType = 1LL;
  v10.DATA.QUERY_INFORMATION.InformationBufferLength = 6;
  v5 = ndisQuerySetMiniport(a1, 0LL, &v10, 0, 0LL);
  v6 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v5;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x6Fu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      *(_DWORD *)v8);
  }
  return v6;
}
