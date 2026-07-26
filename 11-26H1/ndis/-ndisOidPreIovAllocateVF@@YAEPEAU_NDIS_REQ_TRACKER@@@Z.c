/*
 * XREFs of ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E20D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DFA8C (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  _OWORD *v3; // rax
  char VF; // bl
  int v5; // edx
  char v7[4]; // [rsp+40h] [rbp-98h]
  struct _NDIS_MINIPORT_BLOCK *v8[2]; // [rsp+50h] [rbp-88h]
  __int128 v9; // [rsp+60h] [rbp-78h]
  __int128 v10; // [rsp+70h] [rbp-68h]
  __int64 v11; // [rsp+90h] [rbp-48h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  v3 = (_OWORD *)ndisCaptureIovOidContext((__int64)&v11, a1);
  *(_OWORD *)v8 = *v3;
  v9 = v3[1];
  v10 = v3[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x24u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      v1);
  if ( v1[1] != 12 )
    goto LABEL_14;
  VF = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( v1[12] >= 0x660u )
  {
    if ( v1[13] < 0x660u )
    {
      v5 = -1073676266;
      goto LABEL_8;
    }
    if ( !LOBYTE(v8[0]) )
      goto LABEL_16;
    if ( *((_QWORD *)&v10 + 1) && *((_QWORD *)&v9 + 1) && (*(_BYTE *)(*((_QWORD *)&v10 + 1) + 8LL) & 3) == 3 )
    {
      VF = ndisIovAllocateVF(a1, v8[1]);
      goto LABEL_16;
    }
LABEL_14:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_15;
  }
  v5 = -1073676268;
LABEL_8:
  v1[17] = 1632;
  *((_DWORD *)a1 + 10) = v5;
LABEL_15:
  VF = 1;
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x25u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      VF,
      *(_DWORD *)v7);
  }
  return VF;
}
