/*
 * XREFs of ?ndisOidPreIovVfSerialNumber@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovVfSerialNumber(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // eax
  _DWORD *v7; // rdx
  _DWORD *v9; // rcx
  __int128 v10; // [rsp+40h] [rbp-98h]
  __int128 v11; // [rsp+60h] [rbp-78h]
  __int64 v12; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v4 = ndisCaptureIovOidContext((__int64)&v12, a1);
  v10 = *(_OWORD *)v4;
  v11 = *(_OWORD *)(v4 + 32);
  v5 = *(_QWORD *)(v4 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x58u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v5,
      v1);
  v6 = *(_DWORD *)(v1 + 4);
  if ( v6 && v6 != 2 )
  {
    v7 = (_DWORD *)((char *)a1 + 40);
LABEL_6:
    *v7 = -1073741637;
LABEL_7:
    v3 = 1;
    goto LABEL_8;
  }
  v7 = (_DWORD *)((char *)a1 + 40);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 8u )
  {
    *(_DWORD *)(v1 + 56) = 8;
    *v7 = -1073676268;
    goto LABEL_7;
  }
  if ( (_BYTE)v10 )
  {
    if ( *((_QWORD *)&v11 + 1) && (*(_BYTE *)(*((_QWORD *)&v11 + 1) + 8LL) & 5) == 5 && *(_QWORD *)(v5 + 4872) )
    {
      v9 = *(_DWORD **)(v1 + 40);
      *v9 = 524672;
      v9[1] = *(_DWORD *)(v5 + 4880);
      *(_DWORD *)(v1 + 52) = 8;
      goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x59u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v5,
      v3,
      *v7);
  return v3;
}
