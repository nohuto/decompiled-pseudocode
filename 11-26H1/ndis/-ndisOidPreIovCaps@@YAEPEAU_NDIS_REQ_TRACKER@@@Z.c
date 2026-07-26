/*
 * XREFs of ?ndisOidPreIovCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E23E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  char v11[4]; // [rsp+38h] [rbp-A0h]
  __int128 v12; // [rsp+40h] [rbp-98h]
  __int128 v13; // [rsp+60h] [rbp-78h]
  __int64 v14; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v4 = 0;
  v5 = ndisCaptureIovOidContext((__int64)&v14, a1);
  v12 = *(_OWORD *)v5;
  v13 = *(_OWORD *)(v5 + 32);
  v6 = *(_QWORD *)(v5 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x19u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v6,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    v7 = *(_DWORD *)(v1 + 4);
    if ( v7 != 2 && v7 )
      goto LABEL_7;
    if ( !(_BYTE)v12 )
      goto LABEL_14;
    v8 = *(_DWORD *)(v1 + 32) == 66121 ? v13 : *((_QWORD *)&v13 + 1);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v1 + 40);
      *(_QWORD *)v9 = *(_QWORD *)v8;
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v1 + 52) = 12;
    }
    else
    {
LABEL_7:
      v2 = -1073741637;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 12;
    v2 = -1073676268;
  }
  *((_DWORD *)a1 + 10) = v2;
  v4 = 1;
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Au,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v6,
      v4,
      *(_DWORD *)v11);
  }
  return v4;
}
