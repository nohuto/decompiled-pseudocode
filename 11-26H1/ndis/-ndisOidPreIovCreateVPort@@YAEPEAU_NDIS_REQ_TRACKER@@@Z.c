/*
 * XREFs of ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14008FC60 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E011C (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CA.c)
 */

char __fastcall ndisOidPreIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  _OWORD *v3; // rax
  char VPort; // bl
  int v5; // edx
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v6; // rcx
  char v8[4]; // [rsp+40h] [rbp-98h]
  struct _NDIS_MINIPORT_BLOCK *v9[2]; // [rsp+50h] [rbp-88h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v10[2]; // [rsp+60h] [rbp-78h]
  __int128 v11; // [rsp+70h] [rbp-68h]
  __int64 v12; // [rsp+90h] [rbp-48h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  v3 = (_OWORD *)ndisCaptureIovOidContext((__int64)&v12, a1);
  *(_OWORD *)v9 = *v3;
  *(_OWORD *)v10 = v3[1];
  v11 = v3[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x32u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      v1);
  if ( v1[1] != 12 )
    goto LABEL_4;
  VPort = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( v1[12] < 0x23Cu )
  {
    v5 = -1073676268;
LABEL_9:
    VPort = 1;
    v1[17] = 572;
    *((_DWORD *)a1 + 10) = v5;
    goto LABEL_16;
  }
  if ( v1[13] < 0x23Cu )
  {
    v5 = -1073676266;
    goto LABEL_9;
  }
  if ( LOBYTE(v9[0]) )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(v10[1])
      && (!*((_QWORD *)&v11 + 1) || !v6 || (*(_BYTE *)(*((_QWORD *)&v11 + 1) + 8LL) & 3) != 3) )
    {
LABEL_4:
      VPort = 1;
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_16;
    }
    VPort = ndisIovCreateVPort(a1, v9[1], v6);
  }
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x33u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      VPort,
      *(_DWORD *)v8);
  }
  return VPort;
}
