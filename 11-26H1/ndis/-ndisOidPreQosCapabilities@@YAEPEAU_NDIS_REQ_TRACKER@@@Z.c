/*
 * XREFs of ?ndisOidPreQosCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BED30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 */

char __fastcall ndisOidPreQosCapabilities(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r14
  char v4; // di
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  char v10[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x57u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    v6 = *(_DWORD *)(v1 + 4);
    if ( v6 && v6 != 2 )
      goto LABEL_7;
    if ( !v3 )
      goto LABEL_14;
    v7 = *(_DWORD *)(v1 + 32) == -66781183 ? *(_QWORD *)(v3 + 4912) : *(_QWORD *)(v3 + 4920);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v8 = *(_OWORD *)v7;
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(v1 + 52) = 20;
    }
    else
    {
LABEL_7:
      v2 = -1073741637;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 20;
    v2 = -1073676268;
  }
  v4 = 1;
  *((_DWORD *)a1 + 10) = v2;
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x58u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v4,
      *(_DWORD *)v10);
  }
  return v4;
}
