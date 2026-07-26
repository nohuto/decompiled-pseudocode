/*
 * XREFs of ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002D010
 * Callers:
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14002CE00 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140033B50 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D8A20 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisAllocatePacket @ 0x14002D4A0 (NdisAllocatePacket.c)
 */

unsigned __int8 __fastcall ndisXlateRecvNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1)
{
  struct _NET_BUFFER_LIST *Alignment; // rbx
  unsigned int v2; // eax
  unsigned int v3; // ebp
  int v4; // edi
  __int64 v6; // r13
  _NET_BUFFER *FirstNetBuffer; // rsi
  __int64 v8; // r15
  void **v9; // r14
  PNDIS_PACKET v10; // rcx
  _MDL *CurrentMdl; // rdx
  __int64 CurrentMdlOffset; // r8
  unsigned int DataLength; // r9d
  unsigned int v14; // r8d
  unsigned int ByteCount; // eax
  unsigned int v16; // r10d
  _DWORD *v17; // rdx
  __int64 v18; // r8
  char *v19; // r9
  unsigned int *v20; // rcx
  int v21; // eax
  unsigned int *v22; // rdx
  unsigned int v23; // eax
  _DWORD *v25; // rax
  unsigned int v26; // r8d
  int v27; // r10d
  int v28; // ecx
  int Status; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+78h] [rbp+10h]
  PNDIS_PACKET Packet; // [rsp+80h] [rbp+18h] BYREF

  Alignment = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 2);
  v2 = *((_DWORD *)a1 + 2);
  v3 = 0;
  v4 = 0;
  v6 = *(_QWORD *)a1;
  v30 = v2;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  if ( Alignment )
  {
    while ( 1 )
    {
      if ( v3 >= v2 )
        goto LABEL_22;
      if ( (Alignment->Flags & 0x10) != 0 && (Alignment->NblFlags & 2) != 0 )
        break;
      FirstNetBuffer = Alignment->FirstNetBuffer;
      v8 = v3;
      Status = 0;
      v9 = (void **)(v6 + 8LL * v3);
      *v9 = 0LL;
      if ( !ndisRecvPacketPool )
      {
        v4 = -1073741670;
        goto LABEL_22;
      }
      Packet = 0LL;
      NdisAllocatePacket(&Status, &Packet, ndisRecvPacketPool);
      v4 = Status;
      if ( Status )
        goto LABEL_22;
      v10 = Packet;
      Packet->Private.Head = 0LL;
      *(_DWORD *)v10->MiniportReserved = 0;
      *(_QWORD *)&v10->MacReserved[8] = 0LL;
      CurrentMdl = FirstNetBuffer->CurrentMdl;
      CurrentMdlOffset = FirstNetBuffer->CurrentMdlOffset;
      CurrentMdl->ByteOffset += CurrentMdlOffset;
      CurrentMdl->ByteCount -= CurrentMdlOffset;
      if ( (CurrentMdl->MdlFlags & 5) != 0 )
        CurrentMdl->MappedSystemVa = (char *)CurrentMdl->MappedSystemVa + CurrentMdlOffset;
      DataLength = FirstNetBuffer->DataLength;
      v14 = 0;
      if ( DataLength )
        v10->Private.Head = CurrentMdl;
      while ( v14 < DataLength && CurrentMdl )
      {
        ByteCount = CurrentMdl->ByteCount;
        v16 = DataLength - v14;
        if ( ByteCount >= DataLength - v14 )
        {
          *(_DWORD *)v10->MiniportReserved = ByteCount;
          v14 = DataLength;
          *(_QWORD *)&v10->MacReserved[8] = CurrentMdl->Next;
          CurrentMdl->ByteCount = v16;
          CurrentMdl->Next = 0LL;
          break;
        }
        CurrentMdl = CurrentMdl->Next;
        v14 += ByteCount;
      }
      v4 = 0;
      v10->Private.Head = FirstNetBuffer->CurrentMdl;
      v10->Private.Tail = CurrentMdl;
      v10->Private.TotalLength = v14;
      v10->Private.ValidCounts = 0;
      *v9 = v10;
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        v26 = 25;
LABEL_38:
        ndisNblTrackerRecordEventInternal(Alignment, 0LL, v26, *v9, 0);
      }
LABEL_15:
      v17 = *v9;
      *(_DWORD *)((char *)v17 + *((unsigned __int16 *)*v9 + 21) + 32) = *((_DWORD *)a1 + 3);
      *(_DWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 16) = 14;
      *(_QWORD *)((char *)*v9 + *((unsigned __int16 *)*v9 + 21) + 72) = 0LL;
      *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 40) = Alignment->NetBufferListInfo[0];
      *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 64) = Alignment->NetBufferListInfo[3];
      *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 88) = Alignment->NetBufferListInfo[4];
      *(_WORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 90) = 0;
      *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 104) = Alignment->NetBufferListInfo[5];
      v18 = *((unsigned __int16 *)v17 + 21);
      if ( Alignment->NetBufferListInfo[1] )
      {
        v19 = (char *)(v17 + 32);
        v27 = v17[32] ^ ((unsigned __int8)v17[32] ^ (unsigned __int8)Alignment->NetBufferListInfo[1]) & 1;
        v17[32] = v27;
        v28 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)LOWORD(Alignment->NetBufferListInfo[1])) & 2;
        v17[32] = v28;
        v17[32] = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)LOWORD(Alignment->NetBufferListInfo[1])) & 4;
        v17[33] = WORD1(Alignment->NetBufferListInfo[1]);
      }
      else
      {
        v19 = 0LL;
      }
      *(_QWORD *)((char *)v17 + v18 + 48) = v19;
      if ( (Alignment->Flags & 0x80u) != 0 )
      {
        v17[9] |= 0x100u;
        *((_BYTE *)v17 + 41) |= 2u;
        *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 72) = Alignment->SourceHandle;
      }
      v20 = v17 + 9;
      v21 = v17[9];
      v22 = v17 + 9;
      if ( (Alignment->Flags & 0x200) != 0 )
        v23 = v21 & 0xFFFFFF7F;
      else
        v23 = v21 | 0x80;
      *v20 = v23;
      ++v3;
      *v22 = v23 | 0x20000;
      *(_QWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v8) + 42LL) + *(_QWORD *)(v6 + 8 * v8) + 112LL) = Alignment;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_22;
      v2 = v30;
    }
    v25 = Alignment->NdisReserved[0];
    v8 = v3;
    v9 = (void **)(v6 + 8LL * v3);
    *v9 = v25;
    v25[9] |= 0x4000u;
    if ( *(int *)ndisNblTrackerMode < 3 )
      goto LABEL_15;
    v26 = 29;
    goto LABEL_38;
  }
LABEL_22:
  *((_DWORD *)a1 + 8) = v3;
  *((_QWORD *)a1 + 2) = Alignment;
  if ( Alignment )
    *((_QWORD *)a1 + 3) = Alignment->FirstNetBuffer;
  if ( v4 )
  {
    if ( v3 )
      return 1;
  }
  else if ( Alignment )
  {
    return 1;
  }
  return 0;
}
