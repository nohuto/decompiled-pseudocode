/*
 * XREFs of ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1400099A0 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x140024390 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisFSendNetBufferLists @ 0x140025020 (NdisFSendNetBufferLists.c)
 *     NdisAllocateNetBufferList @ 0x1400258C0 (NdisAllocateNetBufferList.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeCloneNetBufferList @ 0x140027210 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140027B00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x140028220 (NdisAllocateCloneNetBufferList.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140029030 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x14002AEB0 (NdisAllocateFragmentNetBufferList.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x14002BAB0 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x14002BD10 (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14002C330 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x14002C840 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002D010 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x14002D870 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     NdisFReturnNetBufferLists @ 0x14002DCC0 (NdisFReturnNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x140036740 (NdisMSendNetBufferListsComplete.c)
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140038FC0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039C00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisReturnNetBufferLists @ 0x14003B6A0 (NdisReturnNetBufferLists.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     NdisFSendNetBufferListsComplete @ 0x14003D660 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x14004B850 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140056AF0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1400577A0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400A4A70 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1400A4BD0 (NdisNblTrackerRecordEvent.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1400CC340 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x140006C40 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1400669D0 (-ndisReleaseStackTrace@@YAXK@Z.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x14008EA40 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerHitBreakNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAXK@Z @ 0x1400A46F0 (-ndisNblTrackerHitBreakNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAXK@Z.c)
 */

void __fastcall ndisNblTrackerRecordEventInternal(
        struct _NET_BUFFER_LIST *a1,
        unsigned __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  struct _NET_BUFFER_LIST *v10; // r9
  struct _NET_BUFFER_LIST **v11; // r9
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  unsigned __int64 v14; // rbp
  unsigned int v15; // r15d
  int v16; // r8d
  unsigned int v17; // r11d
  unsigned int v18; // edi
  unsigned __int32 v19; // r13d
  unsigned int v20; // r12d
  int v21; // ecx
  ULONG_PTR v22; // rcx
  unsigned int Number; // edx
  int v24; // edx
  unsigned int v25; // eax
  unsigned __int64 *v26; // r10
  unsigned int v27; // r8d
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  struct _NET_BUFFER_LIST *v30; // r12
  __int64 v31; // rbp
  unsigned __int64 v32; // r13
  void *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  int v39; // [rsp+28h] [rbp-70h]
  unsigned int v40; // [rsp+30h] [rbp-68h]
  unsigned __int32 v41; // [rsp+34h] [rbp-64h]
  __int128 v43; // [rsp+40h] [rbp-58h] BYREF
  __int64 v44; // [rsp+50h] [rbp-48h]
  struct _NET_BUFFER_LIST *v45; // [rsp+58h] [rbp-40h]

  v44 = 0LL;
  v5 = (__int64)a1;
  v45 = ndisBreakNbl;
  v39 = 0;
  v6 = 0;
  v7 = a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v8 = (unsigned __int64)a4;
  v9 = a2 | 0x8000000000000002uLL;
  v10 = a1;
  v43 = 0LL;
  while ( v10 )
  {
    v6 += ((unsigned __int8)ndisIsPossibleSmuggling(v7, v10->NetBufferListInfo[27], v10->SourceHandle) != 0) + 1;
    if ( v6 > v13 )
      return;
    if ( v12 < 0x1F )
      break;
    v10 = *v11;
  }
  v14 = v8 & 0xFFFFFFFFFFFFF000uLL;
  v15 = 8;
  if ( (v8 & 0xFFFFFFFFFFFFF000uLL) != 0 )
    v15 = 16;
  if ( *(int *)ndisNblTrackerMode < 4 )
  {
    v16 = 0;
  }
  else
  {
    v16 = ndisCaptureStackTrace();
    v39 = v16;
  }
  v17 = v15 + 8 * v6;
  v40 = v17;
  v18 = v17 >> 3;
  v19 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v17 >> 3)
      % ndisNblTrackerHistorySize;
  v41 = v19;
  if ( *(int *)ndisNblTrackerMode >= 4 )
  {
    v20 = 0;
    if ( v18 )
    {
      do
      {
        v21 = HIDWORD(ndisNblTrackerHistoryBuffer[(v20 + v19) % ndisNblTrackerHistorySize]);
        if ( v21 >= 0 )
        {
          v22 = v21 & 0x3FFFFFF;
          if ( (_DWORD)v22 )
            ndisReleaseStackTrace(v22);
        }
        ++v20;
      }
      while ( v20 < v18 );
      v17 = v40;
      v16 = v39;
    }
    v8 = (unsigned __int64)a4;
  }
  Number = KeGetPcr()->Prcb.Number;
  LOBYTE(v43) = a3;
  v24 = v43 & 0xFFFFF | (Number << 20);
  LODWORD(v43) = v24;
  v25 = DWORD1(v43) ^ (DWORD1(v43) ^ (a5 << 26)) & 0x3C000000 ^ (v16 ^ DWORD1(v43) ^ (DWORD1(v43) ^ (a5 << 26)) & 0x3C000000) & 0x3FFFFFF;
  if ( v14 )
  {
    DWORD1(v43) = v25 & 0xBFFFFFFF;
    *((_QWORD *)&v43 + 1) = v8 | 0x8000000000000000uLL;
  }
  else
  {
    DWORD1(v43) = v25 | 0x40000000;
    LODWORD(v43) = v24 ^ (v24 ^ ((_DWORD)v8 << 8)) & 0xFFF00;
  }
  v26 = (unsigned __int64 *)&v43;
  v27 = 0;
  do
  {
    v28 = *v26++;
    v29 = (v27 + v19) % ndisNblTrackerHistorySize;
    ++v27;
    ndisNblTrackerHistoryBuffer[v29] = v28;
  }
  while ( v27 < v15 >> 3 );
  while ( v15 < v17 )
  {
    v30 = 0LL;
    v31 = v5;
    v32 = (v19 + ((unsigned __int64)v15 >> 3)) % ndisNblTrackerHistorySize;
    if ( v5 )
    {
      v33 = *(void **)(v5 + 360);
      if ( (struct _NET_BUFFER_LIST *)v5 == v45 )
        ndisNblTrackerHitBreakNbl(v45, a4, a3);
      if ( a3 < 0x1F || (v30 = *(struct _NET_BUFFER_LIST **)v5) == 0LL )
        v31 = v5 | 1;
      v34 = v31 | 4;
      if ( !*(_DWORD *)(v5 + 140) )
        v34 = v31;
      v31 = v34;
      if ( (unsigned __int8)ndisIsPossibleSmuggling(v7, v33, *(_QWORD *)(v5 + 120)) )
      {
        v15 += 8;
        v36 = (unsigned int)v32;
        if ( v15 >= v17 )
        {
          ndisNblTrackerHistoryBuffer[v36] = 0LL;
          return;
        }
        ndisNblTrackerHistoryBuffer[v36] = v9;
        LODWORD(v32) = (v35 + ((unsigned __int64)v15 >> 3)) % ndisNblTrackerHistorySize;
      }
    }
    v5 = (__int64)v30;
    v37 = (unsigned int)v32;
    v15 += 8;
    v19 = v41;
    ndisNblTrackerHistoryBuffer[v37] = v31;
  }
}
