/*
 * XREFs of ?ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14008FC60 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DFD28 (-ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_N.c)
 */

char __fastcall ndisOidPreIovEnumNicSwitches(struct _NDIS_REQ_TRACKER *a1)
{
  char v2; // r14
  _OWORD *v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  int v6; // ecx
  unsigned int NumSwitches; // r13d
  unsigned int v8; // ecx
  __int64 v9; // rax
  KIRQL v10; // dl
  __int64 v11; // rax
  unsigned int v12; // r12d
  struct _NDIS_NIC_SWITCH_BLOCK *Flink; // r15
  struct _NDIS_NIC_SWITCH_INFO *v14; // rdi
  KIRQL v15; // dl
  __int64 v16; // rax
  unsigned int v17; // ecx
  struct _NDIS_MINIPORT_BLOCK *v19[2]; // [rsp+40h] [rbp-69h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v20[2]; // [rsp+50h] [rbp-59h]
  __int128 v21; // [rsp+60h] [rbp-49h]
  char v22[128]; // [rsp+80h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+118h] [rbp+6Fh]
  struct _NDIS_NIC_SWITCH_INFO *v25; // [rsp+120h] [rbp+77h]
  __int64 p_NicSwitchList; // [rsp+128h] [rbp+7Fh]

  NewIrql = 0;
  v2 = 1;
  v3 = (_OWORD *)ndisCaptureIovOidContext((__int64)v22, a1);
  *(_OWORD *)v19 = *v3;
  *(_OWORD *)v20 = v3[1];
  v21 = v3[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      21,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  v5 = v19[1];
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = 0;
  v6 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL);
  if ( v6 == 2 || !v6 )
  {
    if ( LOBYTE(v19[0]) )
    {
      if ( ndisIovNicSwitchWithoutIovSupported(v20[1])
        || *((_QWORD *)&v21 + 1) && v20[1] && (*(_BYTE *)(*((_QWORD *)&v21 + 1) + 8LL) & 3) == 3 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v19[1], &NewIrql);
        NumSwitches = v19[1]->NumSwitches;
        v8 = 572 * NumSwitches + 16;
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) = v8;
        v9 = *((_QWORD *)a1 + 4);
        v24 = v8;
        if ( v8 <= *(_DWORD *)(v9 + 48) )
        {
          v11 = *(_QWORD *)(v9 + 40);
          v12 = 0;
          *(_DWORD *)v11 = 1048960;
          *(_DWORD *)(v11 + 4) = 16;
          *(_DWORD *)(v11 + 8) = NumSwitches;
          *(_DWORD *)(v11 + 12) = 572;
          v25 = (struct _NDIS_NIC_SWITCH_INFO *)(v11 + 16);
          Flink = (struct _NDIS_NIC_SWITCH_BLOCK *)v19[1]->NicSwitchList.Flink;
          p_NicSwitchList = (__int64)&v19[1]->NicSwitchList;
          if ( Flink != (struct _NDIS_NIC_SWITCH_BLOCK *)&v19[1]->NicSwitchList )
          {
            v14 = v25;
            do
            {
              if ( v12 >= NumSwitches )
                break;
              ndisIovCopyNicSwitchInfo(v14, Flink, v20[1]);
              Flink = *(struct _NDIS_NIC_SWITCH_BLOCK **)Flink;
              v14 = (struct _NDIS_NIC_SWITCH_INFO *)((char *)v14 + 572);
              ++v12;
            }
            while ( Flink != (struct _NDIS_NIC_SWITCH_BLOCK *)p_NicSwitchList );
            v5 = v19[1];
          }
          v15 = NewIrql;
          v5->MiniportThread = 0LL;
          KeReleaseSpinLock(&v5->Lock, v15);
          v16 = *((_QWORD *)a1 + 4);
          v17 = v24;
          *((_DWORD *)a1 + 10) = 0;
          *(_DWORD *)(v16 + 52) = v17;
        }
        else
        {
          v10 = NewIrql;
          v19[1]->MiniportThread = 0LL;
          KeReleaseSpinLock(&v19[1]->Lock, v10);
          *((_DWORD *)a1 + 10) = -1073676266;
        }
      }
      else
      {
        *((_DWORD *)a1 + 10) = -1073741637;
      }
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x16u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      *((_DWORD *)a1 + 10));
  return v2;
}
