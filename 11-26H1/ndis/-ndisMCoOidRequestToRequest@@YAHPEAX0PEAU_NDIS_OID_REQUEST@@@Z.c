/*
 * XREFs of ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x140022AF0
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 * Callees:
 *     NdisMCoRequestComplete @ 0x1400227E0 (NdisMCoRequestComplete.c)
 *     WPP_RECORDER_SF_qqDd @ 0x140022A20 (WPP_RECORDER_SF_qqDd.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMCoOidRequestToRequest(_QWORD *a1, void *a2, struct _NDIS_OID_REQUEST *a3)
{
  NDIS_OID Oid; // r14d
  unsigned int v6; // esi
  void *v7; // r15
  __int64 Pool2; // rax
  __int64 v9; // rdi
  PVOID InformationBuffer; // rcx
  UINT InformationBufferLength; // edx
  UINT BytesWritten; // r8d
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  NDIS_STATUS v16; // eax
  char v18[4]; // [rsp+40h] [rbp-38h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  v6 = -1073741823;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      28,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a3,
      Oid);
  }
  if ( a3->RequestType == NdisRequestMethod )
  {
    v6 = -1073741637;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
      InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
      BytesWritten = a3->DATA.QUERY_INFORMATION.BytesWritten;
      *(_DWORD *)(Pool2 + 32) = a3->RequestType;
      *(_DWORD *)(Pool2 + 40) = a3->DATA.QUERY_INFORMATION.Oid;
      *(_QWORD *)(Pool2 + 48) = InformationBuffer;
      *(_DWORD *)(Pool2 + 56) = InformationBufferLength;
      *(_DWORD *)(Pool2 + 60) = BytesWritten;
      v13 = Pool2;
      *(_DWORD *)(Pool2 + 64) = a3->DATA.QUERY_INFORMATION.BytesNeeded;
      v14 = a1[470];
      *(_DWORD *)(v9 + 24) |= 0x400u;
      v15 = a1[3];
      *(_QWORD *)(v9 + 8) = a3;
      v16 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(v14 + 288))(v15, v7, v13);
      v6 = v16;
      if ( v16 != 259 )
      {
        NdisMCoRequestComplete(v16, a1, (PNDIS_REQUEST)v9);
        v6 = 259;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = v6;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      0x1Du,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a3,
      Oid,
      *(_DWORD *)v18);
  }
  return v6;
}
