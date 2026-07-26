/*
 * XREFs of ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1400577A0
 * Callers:
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008B6D0 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D7CB4 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D87B0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140027B00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140043720 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?XlateReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x140057BA0 (-XlateReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 *     ndisIPsecPktInfoToNBLInfo @ 0x1400A5638 (ndisIPsecPktInfoToNBLInfo.c)
 */

_BOOL8 __fastcall ndisXlateRecvPacketArrayToNetBufferLists(struct _NDIS_PKT_ARRAY_TO_NBLS *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rax
  unsigned int v3; // r11d
  struct _NET_BUFFER_LIST *v4; // r13
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // r14d
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _NET_BUFFER_LIST *v12; // rsi
  char v13; // r12
  bool v14; // r10
  _BOOL8 result; // rax
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  _NET_BUFFER *FirstNetBuffer; // rcx
  __int64 **v18; // rax
  __int64 *v19; // r8
  unsigned int i; // edx
  __int64 v21; // rcx
  unsigned __int8 *v22; // rax
  __int64 v23; // rcx
  struct _NDIS_PKT_ARRAY_TO_NBLS *v24; // rax
  unsigned int Flags; // eax
  __int64 v26; // [rsp+30h] [rbp-58h]
  unsigned int v27; // [rsp+90h] [rbp+8h]
  int v28; // [rsp+98h] [rbp+10h]
  _QWORD *p_Alignment; // [rsp+A0h] [rbp+18h]
  struct _NDIS_MINIPORT_BLOCK *v30; // [rsp+A8h] [rbp+20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = 0;
  v4 = 0LL;
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_QWORD *)a1 + 1);
  v7 = *((unsigned int *)a1 + 8);
  v30 = v1;
  p_Alignment = 0LL;
  v27 = 0;
  v26 = v6;
  v8 = *(_DWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v7) + 42LL) + *(_QWORD *)(v6 + 8 * v7) + 32LL);
  while ( 1 )
  {
    v9 = (_DWORD)v7 == v5;
    if ( (unsigned int)v7 >= v5 )
      break;
    v10 = *(_QWORD *)(v6 + 8 * v7);
    v11 = *(unsigned __int16 *)(v10 + 42);
    v28 = *(_DWORD *)(v11 + v10 + 32);
    if ( v28 != v8 )
    {
      v9 = (_DWORD)v7 == v5;
      break;
    }
    if ( *(char *)(v10 + 41) >= 0 )
    {
      v13 = 0;
      v12 = 0LL;
    }
    else
    {
      v12 = *(struct _NET_BUFFER_LIST **)(v11 + v10 + 120);
      v13 = 1;
      if ( v12 )
      {
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v12, 0LL, 0x12u, (void *)v10, 0);
        v12->Link.Alignment = 0LL;
        goto LABEL_19;
      }
    }
    if ( ndisNetBufferListPool )
    {
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v3 = v27;
      v12 = NetBufferAndNetBufferList;
      if ( v13 )
        *(_QWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 120) = NetBufferAndNetBufferList;
    }
    if ( !v12 )
    {
      if ( v4 )
        v8 = -1073741670;
      v14 = v4 != 0LL;
      goto LABEL_11;
    }
LABEL_19:
    FirstNetBuffer = v12->FirstNetBuffer;
    FirstNetBuffer->MdlChain = *(_MDL **)(v10 + 8);
    FirstNetBuffer->DataOffset = 0;
    FirstNetBuffer->Link.Region = *(_QWORD *)(v10 + 8);
    FirstNetBuffer->CurrentMdlOffset = 0;
    v18 = *(__int64 ***)(v10 + 8);
    v19 = *v18;
    for ( i = *((_DWORD *)v18 + 10); v19; v19 = (__int64 *)*v19 )
      i += *((_DWORD *)v19 + 10);
    FirstNetBuffer->DataLength = i;
    v21 = *(_QWORD *)(v10 + 8);
    *(_DWORD *)(v10 + 4) = i;
    if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
      v22 = *(unsigned __int8 **)(v21 + 24);
    else
      v22 = (unsigned __int8 *)MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !*(_QWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 112) && (*(_BYTE *)(v10 + 41) & 2) == 0 )
      XlateReceivePacketStats(v30, v22, *(_DWORD *)(v10 + 4));
    v12->Flags |= 0x10u;
    v12->NdisReserved[0] = (void *)v10;
    v12->NetBufferListInfo[0] = *(void **)(*(unsigned __int16 *)(v10 + 42) + v10 + 40);
    v12->NetBufferListInfo[2] = *(void **)(*(unsigned __int16 *)(v10 + 42) + v10 + 56);
    v12->NetBufferListInfo[3] = *(void **)(*(unsigned __int16 *)(v10 + 42) + v10 + 64);
    v12->NetBufferListInfo[4] = *(void **)(*(unsigned __int16 *)(v10 + 42) + v10 + 88);
    v12->NetBufferListInfo[5] = *(void **)(*(unsigned __int16 *)(v10 + 42) + v10 + 104);
    v23 = *(_QWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 48);
    if ( v23 )
      ndisIPsecPktInfoToNBLInfo(v23, 2LL, &v12->NetBufferListInfo[1]);
    if ( (*(_DWORD *)(v10 + 36) & 0x100) != 0 )
    {
      v12->Flags |= 0x80u;
      v12->NblFlags |= 0x8000u;
      v24 = (struct _NDIS_PKT_ARRAY_TO_NBLS *)(v10 + *(unsigned __int16 *)(v10 + 42) + 72LL);
    }
    else
    {
      v24 = a1;
    }
    v12->SourceHandle = *(void **)v24;
    if ( (*(_DWORD *)(v10 + 36) & 0x80u) != 0 || (Flags = v12->Flags, (Flags & 0x80u) == 0) )
      v12->Flags &= ~0x200u;
    else
      v12->Flags = Flags | 0x200;
    v8 = v28;
    if ( v28 != -1073741670 )
      *(_DWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 32) = 259;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v12, 0LL, 0x1Bu, (void *)v10, 0);
    if ( v4 )
      *p_Alignment = v12;
    else
      v4 = v12;
    v7 = (unsigned int)(v7 + 1);
    v6 = v26;
    v3 = ++v27;
    p_Alignment = &v12->Link.Alignment;
  }
  v14 = !v9;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v4, v3);
LABEL_11:
  result = v14;
  *((_QWORD *)a1 + 3) = v4;
  *((_DWORD *)a1 + 8) = v7;
  *((_DWORD *)a1 + 9) = v3;
  if ( v8 == -1073741670 )
    *((_DWORD *)a1 + 10) |= 2u;
  return result;
}
