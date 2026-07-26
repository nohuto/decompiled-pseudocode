/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050
 * Callers:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140028C70 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     NdisFreeFragmentNetBufferList @ 0x14002B350 (NdisFreeFragmentNetBufferList.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039C00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140042AD0 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140056990 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14006C610 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400744A0 (-ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008B6D0 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009D4F0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     NdisNblTrackerTransferOwnership @ 0x1400A4C00 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6304 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6364 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  char v8; // r15
  struct NDIS_NBL_TRACKER_HANDLE__ *v9; // r11
  __int64 v10; // rdx
  struct _NET_BUFFER_LIST *Alignment; // r14
  __int64 v13; // r13
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  char v16; // r12
  unsigned __int64 v17; // rdi
  unsigned __int8 *SourceHandle; // rax
  unsigned __int8 v19; // cl
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+80h] [rbp+8h]
  char v31; // [rsp+A0h] [rbp+28h]

  v6 = 0LL;
  v7 = ndisNblTrackerEpoch;
  v8 = a5 & 1;
  v9 = a2;
  v10 = 0LL;
  v29 = 0LL;
  v31 = a5 & 1;
  Alignment = a1;
  v13 = 0LL;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(a1, v9, a4, (void *)a3, a5);
    v9 = a2;
    v10 = 0LL;
  }
  v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  v15 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (a3 & 1) != 0 )
  {
    v15 = (2 * v7) ^ (a3 ^ (2 * v7)) & 0xFFFFFFFFFFFFFFFDuLL;
    v14 = *(_QWORD *)((a3 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v16 = 0;
  if ( !Alignment )
    goto LABEL_21;
  do
  {
    v17 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == (void *)v17 )
    {
      if ( v17 )
      {
        if ( (v17 & 4) != 0 )
          goto LABEL_44;
      }
      else if ( !Alignment->SourceHandle )
      {
        v27 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( ((unsigned __int8)v9 & 1) != 0 )
          v27 = *(_QWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        Alignment->SourceHandle = (void *)v27;
      }
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        v19 = *SourceHandle;
        if ( *SourceHandle == 17 || v19 == 5 || v19 == 18 )
        {
          if ( SourceHandle != (unsigned __int8 *)v14 || Alignment->ParentNetBufferList )
          {
            ++v6;
            v20 = v15;
          }
          else
          {
            ++v10;
            v20 = 24LL;
            v29 = v10;
            ++v6;
          }
          goto LABEL_14;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v28) = *SourceHandle;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)Alignment,
            v28);
LABEL_50:
          v10 = v29;
          v9 = a2;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)Alignment);
        goto LABEL_50;
      }
LABEL_44:
      v20 = v15 | 4;
LABEL_14:
      Alignment->NetBufferListInfo[27] = (void *)v20;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    v8 = v31;
    v21 = v13 - v6;
    if ( (v17 & 1) == 0 || !v21 )
      goto LABEL_20;
    if ( v31 || v16 )
    {
      v22 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v31 )
        goto LABEL_31;
      goto LABEL_19;
    }
    v16 = 1;
    if ( KeGetCurrentIrql() == 2 )
    {
      v31 = 1;
      v8 = 1;
      v22 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_19:
      v23 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v23 + *(_QWORD *)v22) += v21;
      goto LABEL_20;
    }
    v8 = 0;
    v31 = 0;
    v22 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_31:
    _InterlockedAdd64((volatile signed __int64 *)(v22 + 8), v21);
LABEL_20:
    v10 = v29;
    v13 = v6;
    v9 = a2;
  }
  while ( Alignment );
LABEL_21:
  v24 = v6 - v10;
  if ( (v15 & 1) != 0 && v24 )
  {
    if ( v8 || v16 )
    {
      v25 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( v8 )
        goto LABEL_33;
LABEL_27:
      _InterlockedAdd64((volatile signed __int64 *)(v25 + 8), v24);
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v25 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_27;
      }
      v25 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_33:
      v26 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v26 + *(_QWORD *)v25) += v24;
    }
  }
}
