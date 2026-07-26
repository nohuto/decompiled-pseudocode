/*
 * XREFs of NdisFreeNetBufferList @ 0x14002AC10
 * Callers:
 *     NdisAllocateNetBufferList @ 0x1400258C0 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140027B00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140028C70 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140029030 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     NdisFreeFragmentNetBufferList @ 0x14002B350 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x14002BAB0 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x14002BD10 (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ndisFreePeriodicReceives @ 0x14002FA50 (ndisFreePeriodicReceives.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x14002FCF0 (ndisCopyPeriodicReceiveNbl.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisReturnNetBufferLists @ 0x14003B6A0 (NdisReturnNetBufferLists.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140056AF0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     NdisFreeReassembledNetBufferList @ 0x1400CC6A0 (NdisFreeReassembledNetBufferList.c)
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1400DAF24 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisPplLazyInitializeLookaside @ 0x140063DE0 (ndisPplLazyInitializeLookaside.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeNetBufferList(PNET_BUFFER_LIST NetBufferList)
{
  __int64 v1; // rdx
  _DWORD *NdisPoolHandle; // rsi
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  unsigned int *v5; // rcx
  unsigned __int64 v6; // rax
  char *v7; // rdi
  _SLIST_HEADER *v8; // r14
  char *v9; // rsi
  USHORT v10; // di
  _SLIST_HEADER *v11; // rcx
  unsigned __int16 Size; // di
  _NET_BUFFER_LIST_CONTEXT *v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  unsigned __int16 Offset; // di
  int v17; // r8d
  unsigned __int16 *v18; // rcx

  NdisPoolHandle = NetBufferList->NdisPoolHandle;
  Context = NetBufferList->Context;
  if ( Context )
  {
    if ( (NetBufferList->Flags & 0x400) != 0 )
    {
      Size = Context->Size - Context->Offset;
      while ( Size )
      {
        v13 = NetBufferList->Context;
        v13->Offset += Size;
        v1 = *((unsigned int *)NetBufferList->NdisPoolHandle + 11);
        if ( (v1 & 2) != 0 )
        {
          v14 = 560LL;
          if ( (v1 & 1) == 0 )
            v14 = 384LL;
          if ( NetBufferList->Context == (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v14) )
            break;
        }
        if ( Size >= v13->Size )
          Size = v13->Size;
        LOWORD(NetBufferList->NdisReserved[1]) -= Size;
        v15 = v13->Size;
        Offset = v13->Offset;
        if ( Offset < v15 )
          break;
        Size = Offset - v15;
        NetBufferList->Context = v13->Next;
        v1 = v13->Size;
        v13->Offset = v1;
        v13->Next = 0LL;
        v17 = LOWORD(NetBufferList->NdisReserved[1]);
        if ( (int)v1 + v17 > ndisMaxCachedNblContextSize )
        {
          ExFreePoolWithTag(v13, 0);
        }
        else if ( (int)v1 < WORD1(NetBufferList->NdisReserved[1]) - v17 )
        {
          ExFreePoolWithTag(v13, 0);
          v18 = (unsigned __int16 *)NetBufferList->NetBufferListInfo[28];
          if ( v18 )
          {
            v1 = WORD1(NetBufferList->NdisReserved[1]) - (unsigned int)LOWORD(NetBufferList->NdisReserved[1]);
            if ( v18[4] < (int)v1 )
            {
              ExFreePoolWithTag(v18, 0);
              NetBufferList->NetBufferListInfo[28] = 0LL;
            }
          }
        }
        else
        {
          NetBufferList->NetBufferListInfo[28] = v13;
        }
      }
    }
  }
  NetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)NetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(v1) = 1;
    WfpNblInfoCleanup(NetBufferList, v1);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 4u, 0LL, 0);
  v5 = (unsigned int *)&NetBufferList[-1].NetBufferListInfo[26];
  if ( (NdisPoolHandle[1] & 1) != 0 )
  {
    if ( (unsigned __int64)NetBufferList < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)NetBufferList, 0LL);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v6 = (unsigned __int64)v5[6] << 8;
      v7 = (char *)NdisPoolHandle + v6 + 384;
      if ( !v7[216] )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)NdisPoolHandle + v6 + 384));
      if ( LODWORD(NetBufferList[-1].NetBufferListInfo[29]) == KeGetPcr()->Prcb.Number )
        v8 = (_SLIST_HEADER *)*((_QWORD *)v7 + 24);
      else
        v8 = (_SLIST_HEADER *)*((_QWORD *)v7 + 25);
      _InterlockedIncrement((volatile signed __int32 *)v7 + 7);
      if ( ExQueryDepthSList(v8) < *((_WORD *)v7 + 8) )
      {
        v11 = v8;
        goto LABEL_17;
      }
      _InterlockedIncrement((volatile signed __int32 *)v7 + 8);
    }
    v9 = (char *)(NdisPoolHandle + 32);
    _InterlockedIncrement((volatile signed __int32 *)v9 + 7);
    v10 = *((_WORD *)v9 + 8);
    if ( ExQueryDepthSList((PSLIST_HEADER)v9) < v10 )
    {
      v11 = (_SLIST_HEADER *)v9;
LABEL_17:
      ExpInterlockedPushEntrySList(v11, (PSLIST_ENTRY)NetBufferList);
      return;
    }
    _InterlockedIncrement((volatile signed __int32 *)v9 + 8);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v9 + 7))(NetBufferList, v9);
  }
}
