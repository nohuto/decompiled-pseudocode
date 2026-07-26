/*
 * XREFs of ?ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall ndisOidPreMacAddress(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  int v5; // eax
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x91u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v3);
  v5 = *(_DWORD *)(v3 + 4);
  if ( !v5 || v5 == 2 )
  {
    if ( *((_QWORD *)a1 + 2) )
    {
      v6 = (_DWORD *)((char *)a1 + 40);
      goto LABEL_12;
    }
    v6 = (_DWORD *)((char *)a1 + 40);
    *v6 = 0;
    v7 = *(_QWORD *)(v1 + 4040);
    v8 = *(unsigned __int16 *)(v7 + 1124);
    if ( *(_DWORD *)(v3 + 48) < v8 )
    {
      *(_DWORD *)(v3 + 56) = v8;
      *v6 = -1073676268;
      goto LABEL_12;
    }
    memmove(*(void **)(v3 + 40), (const void *)(v7 + 1126), *(unsigned __int16 *)(v7 + 1124));
    *v6 = 0;
    *(_DWORD *)(v3 + 52) = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4040) + 1124LL);
  }
  else
  {
    v6 = (_DWORD *)((char *)a1 + 40);
    *v6 = -1073741637;
  }
  v4 = 1;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *v6;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x92u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v10);
  }
  return v4;
}
