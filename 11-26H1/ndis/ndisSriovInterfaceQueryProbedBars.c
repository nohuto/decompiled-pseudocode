/*
 * XREFs of ndisSriovInterfaceQueryProbedBars @ 0x140149390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceQueryProbedBars(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int *Pool2; // rax
  unsigned int *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  struct _NDIS_OID_REQUEST v9; // [rsp+40h] [rbp-C0h] BYREF

  v2 = a2;
  memset(&v9, 0, 248);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      106,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 32LL, 1869169742LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 524672;
    Pool2[1] = 8;
    memset(&v9, 0, 0xF8uLL);
    *(_DWORD *)&v9.NdisReserved[16] |= 8u;
    *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v9.NdisReserved[96]);
    *(_QWORD *)&v9.Header.Type = 15466902LL;
    v9.DATA.QUERY_INFORMATION.Oid = 66136;
    v9.PortNumber = 0;
    v9.DATA.QUERY_INFORMATION.InformationBuffer = v5;
    v9.DATA.QUERY_INFORMATION.InformationBufferLength = 32;
    v6 = ndisQuerySetMiniport(a1, 0LL, &v9, 0, 0LL);
    if ( !v6 )
    {
      v7 = v5[1];
      *(_OWORD *)v2 = *(_OWORD *)((char *)v5 + v7);
      *(_QWORD *)(v2 + 16) = *(_QWORD *)((char *)v5 + v7 + 16);
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v6 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x6Bu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      v6);
  return v6;
}
