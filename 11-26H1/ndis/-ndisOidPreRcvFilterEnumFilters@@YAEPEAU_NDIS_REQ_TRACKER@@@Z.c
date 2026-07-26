/*
 * XREFs of ?ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AD1D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400AC73C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E0C0C (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreRcvFilterEnumFilters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // r13
  struct _NDIS_VPORT_BLOCK *v3; // r15
  char v4; // r12
  _OWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rax
  int *v8; // rcx
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // rsi
  __int64 v16; // r8
  unsigned int *v17; // r9
  struct _NDIS_VPORT_BLOCK *VPortByVPortIdInternal; // rax
  unsigned int NumFilters; // edx
  unsigned int v20; // edx
  unsigned int v21; // r12d
  KIRQL v22; // dl
  $B86B21B9CD3D320E9D12224C3EB689D6 *Flink; // rcx
  unsigned int v24; // r11d
  __int64 i; // rsi
  struct _NDIS_PCW_DATA_BLOCK **p_PcwDataBlock; // rax
  _DWORD *v27; // r9
  $B86B21B9CD3D320E9D12224C3EB689D6 *v28; // r10
  KIRQL v29; // dl
  __int64 v30; // rax
  struct _NDIS_MINIPORT_BLOCK *v31[2]; // [rsp+48h] [rbp-49h]
  __int128 v32; // [rsp+78h] [rbp-19h]
  char v33[64]; // [rsp+88h] [rbp-9h] BYREF
  KIRQL NewIrql; // [rsp+F8h] [rbp+67h] BYREF

  NewIrql = 0;
  ReceiveQueueByQueueId = 0LL;
  v3 = 0LL;
  v4 = 1;
  v5 = (_OWORD *)ndisCaptureIovOidContext(v33, a1);
  *(_OWORD *)v31 = *v5;
  v32 = v5[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      25,
      30,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)a1);
  }
  v7 = *((_QWORD *)a1 + 4);
  v8 = (int *)((char *)a1 + 40);
  v9 = 20;
  if ( *(_DWORD *)(v7 + 4) == 12 )
  {
    *v8 = 0;
    if ( *(_DWORD *)(v7 + 48) < 0x14u )
    {
      *(_DWORD *)(v7 + 68) = 20;
      v10 = -1073676268;
LABEL_8:
      v11 = *((_QWORD *)a1 + 4);
      *v8 = v10;
      *(_DWORD *)(v11 + 60) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v7 + 52) < 0x14u )
    {
      *(_DWORD *)(v7 + 68) = 20;
      v10 = -1073676266;
      goto LABEL_8;
    }
    v12 = v7;
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 40) + 1LL) == 2 )
    {
      v9 = 28;
      if ( *(_DWORD *)(v7 + 48) < 0x1Cu )
      {
        v13 = -1073676268;
LABEL_14:
        *(_DWORD *)(v12 + 68) = 28;
        *v8 = v13;
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
        goto LABEL_15;
      }
      if ( *(_DWORD *)(v7 + 52) < 0x1Cu )
      {
        v13 = -1073676266;
        goto LABEL_14;
      }
    }
    if ( !LOBYTE(v31[0]) )
    {
      v4 = 0;
      goto LABEL_15;
    }
    *v8 = -1073741637;
    if ( *((_QWORD *)&v32 + 1) )
    {
      v15 = *(_QWORD *)(v7 + 40);
      *(_DWORD *)(v7 + 60) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v9;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v31[1], &NewIrql);
      if ( *(_BYTE *)(v15 + 1) >= 2u && (*(_DWORD *)(v15 + 20) & 1) != 0 )
      {
        VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v31[1], *(_DWORD *)(v15 + 24));
        v3 = VPortByVPortIdInternal;
        if ( !VPortByVPortIdInternal )
        {
          v31[1]->MiniportThread = 0LL;
LABEL_25:
          KeReleaseSpinLock(&v31[1]->Lock, NewIrql);
          *((_DWORD *)a1 + 10) = -1073741811;
          goto LABEL_15;
        }
        NumFilters = VPortByVPortIdInternal->NumFilters;
      }
      else
      {
        v20 = *(_DWORD *)(v15 + 4);
        if ( v20 )
          ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v31[1], v20, v16, v17);
        else
          ReceiveQueueByQueueId = (struct _NDIS_MINIPORT_BLOCK *)v31[1]->DefaultReceiveQueue;
        if ( !ReceiveQueueByQueueId )
        {
          v31[1]->MiniportThread = 0LL;
          goto LABEL_25;
        }
        NumFilters = HIDWORD(ReceiveQueueByQueueId->Reserved29);
      }
      v21 = 16 * NumFilters + 28;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 68LL) = v21;
      if ( v21 <= *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) )
      {
        *(_DWORD *)v15 = 1835392;
        if ( v3 )
        {
          Flink = ($B86B21B9CD3D320E9D12224C3EB689D6 *)v3->FilterList.Flink;
          *(_DWORD *)(v15 + 24) = v3->VPortParams.VPortId;
        }
        else
        {
          Flink = *($B86B21B9CD3D320E9D12224C3EB689D6 **)&ReceiveQueueByQueueId->Reserved4.Length;
          *(_DWORD *)(v15 + 4) = ReceiveQueueByQueueId->PcwDatapathEventMask;
        }
        *(_DWORD *)(v15 + 8) = 28;
        v24 = 0;
        *(_DWORD *)(v15 + 12) = NumFilters;
        *(_DWORD *)(v15 + 16) = 16;
        for ( i = v15 + 28; v24 < NumFilters; Flink = *($B86B21B9CD3D320E9D12224C3EB689D6 **)&Flink->Reserved4.Length )
        {
          if ( v3 )
          {
            if ( Flink == ($B86B21B9CD3D320E9D12224C3EB689D6 *)&v3->FilterList )
              break;
            p_PcwDataBlock = &Flink[6].PcwDataBlock;
            v27 = (_DWORD *)&Flink[6].PcwDataBlock + 1;
            v28 = Flink + 1;
          }
          else
          {
            if ( Flink == &ReceiveQueueByQueueId->32 )
              break;
            p_PcwDataBlock = &Flink[7].PcwDataBlock;
            v27 = (_DWORD *)&Flink[7].PcwDataBlock + 1;
            v28 = Flink + 2;
          }
          ++v24;
          *(_OWORD *)i = 0LL;
          *(_DWORD *)i = 1048960;
          *(_DWORD *)(i + 4) = *(_DWORD *)p_PcwDataBlock;
          *(_DWORD *)(i + 8) = *v27;
          *(_DWORD *)(i + 12) = *(_DWORD *)&v28->Reserved4.Length;
          i += 16LL;
        }
        v29 = NewIrql;
        v31[1]->MiniportThread = 0LL;
        KeReleaseSpinLock(&v31[1]->Lock, v29);
        v30 = *((_QWORD *)a1 + 4);
        *((_DWORD *)a1 + 10) = 0;
        *(_DWORD *)(v30 + 60) = v21;
      }
      else
      {
        v22 = NewIrql;
        v31[1]->MiniportThread = 0LL;
        KeReleaseSpinLock(&v31[1]->Lock, v22);
        *((_DWORD *)a1 + 10) = -1073676266;
      }
      v4 = 1;
    }
  }
  else
  {
    *v8 = -1073741637;
  }
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Fu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v31[1],
      *((_DWORD *)a1 + 10));
  return v4;
}
