/*
 * XREFs of ?ndisOidPreOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140063830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z @ 0x140071420 (-ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z.c)
 */

__int64 __fastcall ndisOidPreOffloadHwCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // eax
  unsigned __int8 v5; // di
  _DWORD *v6; // rbx
  unsigned int v8; // r8d
  char v9[4]; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC1u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v3);
  v4 = *(_DWORD *)(v3 + 4);
  if ( !v4 || v4 == 2 )
  {
    if ( !*(_QWORD *)a1 )
    {
      v5 = 0;
      v6 = (_DWORD *)((char *)a1 + 40);
      goto LABEL_6;
    }
    v6 = (_DWORD *)((char *)a1 + 40);
    if ( *(_QWORD *)(v1 + 4096) )
    {
      *v6 = 0;
      v8 = *(_DWORD *)(v3 + 48);
      if ( v8 >= 0x70 )
      {
        ndisCopyNdisOffload(
          *(struct _NDIS_OFFLOAD **)(v3 + 40),
          (struct _NDIS_OFFLOAD *)(*(_QWORD *)(v1 + 4096) + 668LL),
          v8,
          (unsigned int *)(v3 + 52),
          1);
        *v6 = 0;
      }
      else
      {
        *(_DWORD *)(v3 + 56) = 112;
        *v6 = -1073676268;
      }
    }
    else
    {
      *v6 = -1073741637;
    }
  }
  else
  {
    v6 = (_DWORD *)((char *)a1 + 40);
    *v6 = -1073741637;
  }
  v5 = 1;
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC2u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      *v6,
      *(_DWORD *)v9);
  }
  return v5;
}
