/*
 * XREFs of ?ndisOidPreRcvFilterGlobalParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AD940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterGlobalParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // r12
  char v5; // di
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // eax
  int v10; // eax
  char v12[4]; // [rsp+40h] [rbp-A8h]
  __int128 v13; // [rsp+50h] [rbp-98h]
  __int128 v14; // [rsp+80h] [rbp-68h]
  __int64 v15; // [rsp+90h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *(_QWORD *)(v1 + 40);
  v7 = ndisCaptureIovOidContext(&v15, a1);
  v13 = *(_OWORD *)v7;
  v14 = *(_OWORD *)(v7 + 48);
  v8 = *(_QWORD *)(v7 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v8,
      v3,
      v1);
  v9 = *(_DWORD *)(v1 + 4);
  if ( v9 != 2 && v9 )
    goto LABEL_5;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    v2 = -1073676268;
    goto LABEL_13;
  }
  if ( !(_BYTE)v13 )
    goto LABEL_14;
  if ( !(_QWORD)v14 )
  {
LABEL_5:
    v2 = -1073741637;
LABEL_13:
    *((_DWORD *)a1 + 10) = v2;
    v5 = 1;
    goto LABEL_14;
  }
  v10 = *(_DWORD *)(v1 + 4);
  if ( v10 == 2 || !v10 )
  {
    *(_QWORD *)v6 = 1048960LL;
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(v8 + 3532);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(v8 + 3528);
    *(_DWORD *)(v1 + 52) = 16;
    goto LABEL_13;
  }
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v2;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v8,
      v3,
      v5,
      *(_DWORD *)v12);
  }
  return v5;
}
