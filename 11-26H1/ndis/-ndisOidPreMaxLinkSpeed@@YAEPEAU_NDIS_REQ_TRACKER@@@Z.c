/*
 * XREFs of ?ndisOidPreMaxLinkSpeed@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 */

char __fastcall ndisOidPreMaxLinkSpeed(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 v3; // rdi
  int v5; // eax
  _DWORD *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  char v11[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x95u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      0,
      v1);
  v5 = *(_DWORD *)(v1 + 4);
  if ( !v5 || v5 == 2 )
  {
    v7 = *((_QWORD *)a1 + 2);
    if ( v7 )
    {
      v3 = *(_QWORD *)(v7 + 32);
    }
    else if ( *(_QWORD *)a1 )
    {
      v3 = *(_QWORD *)a1;
    }
    v6 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x10u )
    {
      *(_DWORD *)(v1 + 56) = 16;
      *v6 = -1073676268;
      goto LABEL_14;
    }
    v8 = *(_QWORD *)(v3 + 3032);
    v9 = *(_QWORD **)(v1 + 40);
    *v9 = *(_QWORD *)(v3 + 3024);
    v9[1] = v8;
    *v6 = 0;
    *(_QWORD *)(v1 + 52) = 16LL;
  }
  else
  {
    v6 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  v2 = 1;
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x96u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v2,
      *(_DWORD *)v11);
  }
  return v2;
}
