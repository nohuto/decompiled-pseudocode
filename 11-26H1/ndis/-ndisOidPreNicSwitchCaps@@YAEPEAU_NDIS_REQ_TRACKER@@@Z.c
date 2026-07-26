/*
 * XREFs of ?ndisOidPreNicSwitchCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E5210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreNicSwitchCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // r14
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // r15
  int v8; // r8d
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  char v16[4]; // [rsp+40h] [rbp-A8h]
  __int128 v17; // [rsp+50h] [rbp-98h]
  __int128 v18; // [rsp+60h] [rbp-88h]
  __int64 v19; // [rsp+90h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = ndisCaptureIovOidContext((__int64)&v19, a1);
  v17 = *(_OWORD *)v6;
  v18 = *(_OWORD *)(v6 + 16);
  v7 = *(_QWORD *)(v6 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v7,
      v3,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  v8 = 32;
  v9 = *(_DWORD *)(v1 + 48);
  if ( v9 >= 0x20 )
  {
    v10 = *(_DWORD *)(v1 + 4);
    if ( v10 == 2 || !v10 )
    {
      if ( !(_BYTE)v17 )
        goto LABEL_21;
      v5 = 1;
      if ( *(_DWORD *)(v1 + 32) == 66094 )
        v11 = v18;
      else
        v11 = *((_QWORD *)&v18 + 1);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v1 + 40);
        *(_OWORD *)v12 = *(_OWORD *)v11;
        *(_OWORD *)(v12 + 16) = *(_OWORD *)(v11 + 16);
        if ( v9 >= 0x74 )
        {
          v8 = 132;
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v11 + 32);
          *(_OWORD *)(v12 + 48) = *(_OWORD *)(v11 + 48);
          *(_OWORD *)(v12 + 64) = *(_OWORD *)(v11 + 64);
          *(_OWORD *)(v12 + 80) = *(_OWORD *)(v11 + 80);
          *(_OWORD *)(v12 + 96) = *(_OWORD *)(v11 + 96);
          if ( v9 < 0x84 )
          {
            *(_DWORD *)(v12 + 112) = *(_DWORD *)(v11 + 112);
            v14 = *(_QWORD *)(v1 + 40);
            *(_BYTE *)(v14 + 1) = 2;
            *(_WORD *)(v14 + 2) = 116;
            *(_DWORD *)(v1 + 52) = 116;
            goto LABEL_20;
          }
          *(_OWORD *)(v12 + 112) = *(_OWORD *)(v11 + 112);
          *(_DWORD *)(v12 + 128) = *(_DWORD *)(v11 + 128);
        }
        else
        {
          v13 = *(_QWORD *)(v1 + 40);
          *(_BYTE *)(v13 + 1) = 1;
          *(_WORD *)(v13 + 2) = 32;
        }
        *(_DWORD *)(v1 + 52) = v8;
        goto LABEL_20;
      }
    }
    else
    {
      v5 = 1;
    }
    v2 = -1073741637;
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 32;
    v2 = -1073676268;
    v5 = 1;
  }
LABEL_20:
  *((_DWORD *)a1 + 10) = v2;
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = v2;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v7,
      v3,
      v5,
      *(_DWORD *)v16);
  }
  return v5;
}
