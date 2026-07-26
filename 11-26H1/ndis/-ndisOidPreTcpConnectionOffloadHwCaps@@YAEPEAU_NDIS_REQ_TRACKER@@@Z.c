/*
 * XREFs of ?ndisOidPreTcpConnectionOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BF9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadHwCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  int v4; // eax
  unsigned __int8 v5; // bl
  _DWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v10[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC5u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v3);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = 0;
  if ( !v4 || v4 == 2 )
  {
    v6 = (_DWORD *)((char *)a1 + 40);
    if ( !*(_QWORD *)a1 )
      goto LABEL_13;
    if ( *(_QWORD *)(v1 + 4096) )
    {
      *v6 = 0;
      if ( *(_DWORD *)(v3 + 48) >= 0x14u )
      {
        v7 = *(_QWORD *)(v1 + 4096);
        v8 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v8 = *(_OWORD *)(v7 + 1040);
        *(_DWORD *)(v8 + 16) = *(_DWORD *)(v7 + 1056);
        *(_DWORD *)(v3 + 56) = 20;
        *(_DWORD *)(v3 + 52) = 20;
        *v6 = 0;
      }
      else
      {
        *(_DWORD *)(v3 + 56) = 20;
        *v6 = -1073676268;
      }
      goto LABEL_12;
    }
  }
  else
  {
    v6 = (_DWORD *)((char *)a1 + 40);
  }
  *v6 = -1073741637;
LABEL_12:
  v5 = 1;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC6u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      *v6,
      *(_DWORD *)v10);
  }
  return v5;
}
