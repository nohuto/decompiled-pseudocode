/*
 * XREFs of ?ndisOidPreTcpConnectionOffloadParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BFAE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BF2E4 (-ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PE.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadParameters(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_FILTER_BLOCK *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  unsigned __int8 v3; // si
  __int64 v4; // r14
  unsigned __int8 TcpConnectionParameters; // r15
  unsigned __int8 v7; // bl
  int *v8; // rdi
  int v9; // eax
  char v11[4]; // [rsp+38h] [rbp-20h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = 1;
  v4 = *((_QWORD *)a1 + 4);
  TcpConnectionParameters = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC7u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v2,
      v4);
  v7 = 0;
  if ( !v2 || v2->Offload )
  {
    v9 = *(_DWORD *)(v4 + 4);
    if ( !v9 || v9 == 2 )
    {
      v8 = (int *)((char *)a1 + 40);
      TcpConnectionParameters = ndisOidPreQueryTcpConnectionParameters(v2, a2, (struct _NDIS_OID_REQUEST *)v4, v8);
    }
    else
    {
      v8 = (int *)((char *)a1 + 40);
    }
    if ( *(_DWORD *)(v4 + 4) != 1 )
      v7 = TcpConnectionParameters;
    v3 = v7;
  }
  else
  {
    v8 = (int *)((char *)a1 + 40);
    *v8 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v3;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC8u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v2,
      *v8,
      *(_DWORD *)v11);
  }
  return v3;
}
