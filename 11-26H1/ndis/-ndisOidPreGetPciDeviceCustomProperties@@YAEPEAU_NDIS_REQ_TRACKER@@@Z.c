/*
 * XREFs of ?ndisOidPreGetPciDeviceCustomProperties@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 */

unsigned __int8 __fastcall ndisOidPreGetPciDeviceCustomProperties(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // eax
  int *v5; // rdx
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  char v11[4]; // [rsp+38h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x97u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      0,
      v1);
  v4 = *(_DWORD *)(v1 + 4);
  if ( !v4 || v4 == 2 )
  {
    v5 = (int *)((char *)a1 + 40);
    v6 = 52;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 0x34u )
    {
      if ( *(_QWORD *)a1 )
      {
        v3 = *(_QWORD *)a1;
      }
      else
      {
        v7 = *((_QWORD *)a1 + 2);
        if ( v7 )
          v3 = *(_QWORD *)(v7 + 32);
      }
      if ( *(_DWORD *)(v3 + 3720) == 5 )
      {
        v8 = *(_QWORD *)(v1 + 40);
        *(_OWORD *)v8 = *(_OWORD *)(v3 + 3336);
        *(_OWORD *)(v8 + 16) = *(_OWORD *)(v3 + 3352);
        *(_OWORD *)(v8 + 32) = *(_OWORD *)(v3 + 3368);
        *(_DWORD *)(v8 + 48) = *(_DWORD *)(v3 + 3384);
        v9 = 0;
      }
      else
      {
        v6 = 0;
        v9 = -1073741808;
      }
      *v5 = v9;
      *(_DWORD *)(v1 + 52) = v6;
      *(_DWORD *)(v1 + 56) = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 52;
      *v5 = -1073676268;
    }
  }
  else
  {
    v5 = (int *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x98u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      1,
      *(_DWORD *)v11);
  }
  return 1;
}
