/*
 * XREFs of ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1401491F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceGetVendorAndDeviceIds(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int16 a2,
        _WORD *a3,
        _WORD *a4)
{
  int v8; // edx
  __int64 result; // rax
  struct _NDIS_OID_REQUEST v10; // [rsp+40h] [rbp-C0h] BYREF
  _TBYTE v11; // [rsp+140h] [rbp+40h] BYREF

  memset(&v10.Header.Revision, 0, 0xF7uLL);
  *(_QWORD *)((char *)&v11 + 1) = 0LL;
  HIBYTE(v11) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      26,
      108,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  *(_DWORD *)((char *)&v11 + 6) = 0;
  LODWORD(v11) = 655744;
  WORD2(v11) = a2;
  memset(&v10, 0, 0xF8uLL);
  *(_DWORD *)&v10.NdisReserved[16] |= 8u;
  *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v10.NdisReserved[96]);
  v10.Header = (NDIS_OBJECT_HEADER)15466902;
  v10.DATA.QUERY_INFORMATION.InformationBuffer = &v11;
  *(_QWORD *)&v10.RequestType = 12LL;
  v10.DATA.QUERY_INFORMATION.Oid = 66135;
  *(_QWORD *)&v10.DATA.METHOD_INFORMATION.OutputBufferLength = 10LL;
  v10.DATA.QUERY_INFORMATION.InformationBufferLength = 10;
  result = ndisQuerySetMiniport(a1, 0LL, &v10, 0, 0LL);
  if ( !(_DWORD)result )
  {
    *a3 = WORD3(v11);
    *a4 = HIWORD(v11);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qL(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             0x1Au,
             0x6Du,
             (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
             (char)a1,
             result);
  return result;
}
