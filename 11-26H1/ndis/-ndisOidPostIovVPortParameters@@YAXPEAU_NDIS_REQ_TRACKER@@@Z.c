/*
 * XREFs of ?ndisOidPostIovVPortParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E0C0C (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovVPortParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  __int64 v5; // rbx
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rcx
  int v7; // eax
  __int64 v8; // r8
  _LIST_ENTRY *p_PacketList; // rdx
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY v11; // xmm1
  __int64 v12; // rdx
  _DWORD *p_Reserved30; // r8
  KIRQL v14; // dl
  __int128 v15; // [rsp+40h] [rbp-98h]
  __int64 v16; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext((__int64)&v16, a1);
  v15 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x42u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  if ( *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) == 1 && (_BYTE)v15 && !*((_DWORD *)a1 + 10) )
  {
    v5 = *(_QWORD *)(v1 + 40);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
    VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v4, *(_DWORD *)(v5 + 12));
    if ( VPortByVPortIdInternal )
    {
      v7 = *(_DWORD *)(v5 + 4);
      if ( (v7 & 0x10000) != 0 )
        HIDWORD(VPortByVPortIdInternal->Interrupt) = (unsigned __int16)v7;
      if ( (*(_DWORD *)(v5 + 4) & 0x40000) != 0 )
        HIDWORD(VPortByVPortIdInternal->Reserved30) = *(_DWORD *)(v5 + 540);
      if ( (*(_DWORD *)(v5 + 4) & 0x80000) != 0 )
        LODWORD(VPortByVPortIdInternal->NextSendNetBufferListsHandler) = *(_DWORD *)(v5 + 544);
      if ( (*(_DWORD *)(v5 + 4) & 0x100000) != 0 )
        *(_OWORD *)&VPortByVPortIdInternal->EthRxCompleteHandler = *(_OWORD *)(v5 + 552);
      if ( (*(_DWORD *)(v5 + 4) & 0x20000) != 0 )
      {
        v8 = 4LL;
        p_PacketList = &VPortByVPortIdInternal->PacketList;
        v10 = (_LIST_ENTRY *)(v5 + 16);
        do
        {
          *p_PacketList = *v10;
          p_PacketList[1] = v10[1];
          p_PacketList[2] = v10[2];
          p_PacketList[3] = v10[3];
          p_PacketList[4] = v10[4];
          p_PacketList[5] = v10[5];
          p_PacketList[6] = v10[6];
          p_PacketList += 8;
          v11 = v10[7];
          v10 += 8;
          p_PacketList[-1] = v11;
          --v8;
        }
        while ( v8 );
        LODWORD(p_PacketList->Flink) = v10->Flink;
      }
      if ( (*(_DWORD *)(v5 + 4) & 0x400000) != 0 )
        LODWORD(VPortByVPortIdInternal->WorkQueue[4].Next) = *(_DWORD *)(v5 + 744);
      if ( (*(_DWORD *)(v5 + 4) & 0x800000) != 0 )
      {
        v12 = *(_QWORD *)&VPortByVPortIdInternal->LinkStateIndicationFlags;
        if ( v12 )
        {
          p_Reserved30 = &VPortByVPortIdInternal->Reserved30;
          if ( *(_DWORD *)(v5 + 12) )
          {
            *(_DWORD *)(v12 + 96) -= *p_Reserved30;
            *(_DWORD *)(*(_QWORD *)&VPortByVPortIdInternal->LinkStateIndicationFlags + 96LL) += *(_DWORD *)(v5 + 536);
          }
          else
          {
            *(_DWORD *)(v12 + 648) = *(_DWORD *)(v5 + 536);
          }
          *p_Reserved30 = *(_DWORD *)(v5 + 536);
        }
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    v14 = NewIrql;
    v4->MiniportThread = 0LL;
    KeReleaseSpinLock(&v4->Lock, v14);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x43u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
}
