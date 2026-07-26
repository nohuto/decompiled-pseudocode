/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x140027B00
 * Callers:
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140028C70 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140029030 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     NdisAllocateFragmentNetBufferList @ 0x14002AEB0 (NdisAllocateFragmentNetBufferList.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x14002FCF0 (ndisCopyPeriodicReceiveNbl.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140056AF0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1400577A0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1400CC340 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x140026FE0 (ndisGenerateCorrelationIds.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  int v6; // r14d
  USHORT v8; // r15
  unsigned int Number; // r13d
  char *v11; // rdi
  PFREE_FUNCTION_EX *v12; // rbx
  KIRQL v13; // r15
  PSLIST_ENTRY v14; // rbx
  unsigned int v15; // ebp
  __int16 v16; // di
  _QWORD *p_Next; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  int v20; // eax
  bool v21; // zf
  _SLIST_ENTRY *v22; // rax
  unsigned __int16 v23; // ax
  ULONG v24; // ecx
  ULONG ByteCount; // eax
  _SLIST_ENTRY *i; // r9
  __int64 v28; // rax
  unsigned int CorrelationIds; // eax
  unsigned int v30; // ebp
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v32; // r8
  int v33; // edx
  PSLIST_ENTRY v34; // rax
  unsigned __int16 v35; // dx
  unsigned __int64 v36; // rax
  KIRQL v37; // al
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _SLIST_ENTRY *v40; // rax
  KIRQL v41; // al
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  _QWORD *v44; // r8
  unsigned __int16 v45; // di
  __int64 v46; // rax
  _SLIST_ENTRY *Pool2; // rax
  int v48; // [rsp+80h] [rbp+8h]

  v6 = ContextSize;
  v8 = ContextBackFill;
  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 11) & 5) == 1 )
    {
      if ( (ContextSize & 7) != 0 || (ContextBackFill & 7) != 0 )
        return 0LL;
      if ( (*((_DWORD *)PoolHandle + 1) & 1) != 0 )
      {
        v36 = *((unsigned int *)PoolHandle + 8);
        v15 = 0;
        if ( v36 + 32 >= v36 )
        {
          Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x100000042LL, v36 + 32, *((unsigned int *)PoolHandle + 9));
          if ( Pool2 )
          {
            Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
            v14 = Pool2 + 2;
          }
          else
          {
            v14 = 0LL;
          }
        }
        else
        {
          v14 = 0LL;
        }
LABEL_13:
        if ( !v14 )
          return 0LL;
        v16 = *((_WORD *)&v14[3].Next + 5);
        memset(v14, 0, 8 * (v15 ^ 1LL) + 368);
        v14[2].Next = (_SLIST_ENTRY *)PoolHandle;
        *((_DWORD *)&v14[8].Next + 2) = 256;
        if ( v15 )
          *((_WORD *)&v14[3].Next + 5) = v16;
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
        {
          p_Next = &v14->Next;
          if ( *((__int64 *)&v14[15].Next + 1) > 0 )
          {
            for ( i = v14->Next; i; i = i->Next )
            {
              v28 = *((_QWORD *)&i[15].Next + 1);
              if ( !v28 || v28 < 0 )
              {
                CorrelationIds = ndisGenerateCorrelationIds(1u);
                *((_QWORD *)&i[15].Next + 1) = CorrelationIds;
              }
            }
          }
          else
          {
            v18 = _InterlockedExchangeAdd(&dword_14011CE68, 1u);
            if ( v18 + 1 < v18 )
              v18 = _InterlockedExchangeAdd(&dword_14011CE68, 1u);
            do
            {
              if ( (__int64)p_Next[31] <= 0 )
              {
                v19 = v18++;
                p_Next[31] = v19;
              }
              p_Next = (_QWORD *)*p_Next;
            }
            while ( p_Next );
          }
        }
        *((_BYTE *)&v14[12].Next + 8) = *((_BYTE *)PoolHandle + 40);
        v20 = *((_DWORD *)PoolHandle + 11);
        if ( (v20 & 2) != 0 )
        {
          v21 = (v20 & 1) == 0;
          v22 = v14 + 35;
          if ( v21 )
            v22 = v14 + 24;
          v14[1].Next = v22;
          v22->Next = 0LL;
          *((_WORD *)&v14[1].Next->Next + 4) = *((_WORD *)PoolHandle + 21);
          *((_WORD *)&v14[1].Next->Next + 5) = *((_WORD *)PoolHandle + 21);
          if ( *((_WORD *)PoolHandle + 21) >= (unsigned __int16)v6 )
          {
            *((_WORD *)&v14[1].Next->Next + 5) -= v6;
LABEL_34:
            memset(&v14[24], 0, 0xB0uLL);
            v24 = DataOffset;
            *((_DWORD *)&v14[26].Next + 2) = DataOffset;
            *((_DWORD *)&v14[25].Next + 2) = DataLength;
            v14[26].Next = (_SLIST_ENTRY *)MdlChain;
            for ( *((_QWORD *)&v14[27].Next + 1) = PoolHandle; MdlChain; v24 -= ByteCount )
            {
              ByteCount = MdlChain->ByteCount;
              if ( v24 < ByteCount )
                break;
              MdlChain = MdlChain->Next;
            }
            *((_QWORD *)&v14[24].Next + 1) = MdlChain;
            LODWORD(v14[25].Next) = v24;
            *((_QWORD *)&v14->Next + 1) = v14 + 24;
            if ( *(int *)ndisNblTrackerMode >= 3 )
              ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v14, 0LL, 3u, 0LL, 0);
            return (PNET_BUFFER_LIST)v14;
          }
        }
        if ( (_WORD)v6 )
        {
          v30 = *((_DWORD *)PoolHandle + 9);
          Next = v14[1].Next;
          v32 = v14[23].Next;
          v33 = *((_DWORD *)&v14[2].Next[2].Next + 3);
          if ( (v33 & 2) == 0 )
            goto LABEL_50;
          v34 = v14 + 35;
          if ( (v33 & 1) == 0 )
            v34 = v14 + 24;
          if ( Next != v34 || *((_WORD *)&Next->Next + 5) < (unsigned __int16)v6 )
          {
LABEL_50:
            v35 = *((_WORD *)&v14[3].Next + 4) + v6;
            *((_WORD *)&v14[3].Next + 4) = v35;
            if ( v35 <= ndisMaxCachedNblContextSize )
            {
              if ( v35 <= *((_WORD *)&v14[3].Next + 5) )
                v35 = *((_WORD *)&v14[3].Next + 5);
              *((_WORD *)&v14[3].Next + 5) = v35;
            }
          }
          if ( Next )
          {
            v23 = *((_WORD *)&Next->Next + 5);
            if ( v23 >= (unsigned __int16)v6 )
            {
              *((_WORD *)&Next->Next + 5) = v23 - v6;
LABEL_32:
              *((_DWORD *)&v14[8].Next + 2) |= 0x400u;
              goto LABEL_33;
            }
          }
          if ( v32 && *((_WORD *)&v32->Next + 4) >= (unsigned __int16)v6 )
          {
            *((_WORD *)&v32->Next + 5) -= v6;
            v32->Next = v14[1].Next;
            v14[1].Next = v32;
            v14[23].Next = 0LL;
            goto LABEL_32;
          }
          v45 = v8 + v6;
          if ( *((unsigned __int16 *)&v14[3].Next + 4) <= ndisMaxCachedNblContextSize )
          {
            if ( v32 )
            {
              v14[23].Next = 0LL;
              ExFreePoolWithTag(v32, 0);
            }
            if ( v45 <= v6 + *((unsigned __int16 *)&v14[3].Next + 5) - *((unsigned __int16 *)&v14[3].Next + 4) )
              v45 = v6 + *((_WORD *)&v14[3].Next + 5) - *((_WORD *)&v14[3].Next + 4);
            if ( v45 > v6 + (unsigned int)v8 )
              v30 = 1668170830;
          }
          v46 = ExAllocatePool2(64LL, v45 + 16LL, v30);
          if ( v46 )
          {
            *(_WORD *)(v46 + 8) = v45;
            *(_WORD *)(v46 + 10) = v45 - v6;
            *(_QWORD *)v46 = v14[1].Next;
            v14[1].Next = (_SLIST_ENTRY *)v46;
            goto LABEL_32;
          }
          *((_WORD *)&v14[3].Next + 4) -= v6;
          NdisFreeNetBufferList((PNET_BUFFER_LIST)v14);
          v14 = 0LL;
        }
LABEL_33:
        if ( v14 )
          goto LABEL_34;
        return (PNET_BUFFER_LIST)v14;
      }
      Number = KeGetPcr()->Prcb.Number;
      v48 = 1;
      if ( ndisMaxNumberOfProcessors != 1 )
      {
        v11 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
        if ( !v11[216] )
        {
          v12 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 26);
          if ( !v11[216] )
          {
            ExInitializeLookasideListEx(
              (PLOOKASIDE_LIST_EX)v11,
              ndisAllocateFromNPagedPool,
              *(v12 - 25),
              NonPagedPoolNx,
              0,
              *((unsigned int *)v12 - 53),
              *((_DWORD *)v12 - 54),
              0x400u);
            v11[216] = 1;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v11 + 26, v13);
        }
        _InterlockedIncrement((volatile signed __int32 *)v11 + 5);
        v14 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v11 + 24));
        if ( v14 )
          goto LABEL_12;
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v11 + 25)) >= 0xAu )
        {
          v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 26);
          v38 = *((_QWORD *)v11 + 24);
          *((_QWORD *)v11 + 24) = *((_QWORD *)v11 + 25);
          *((_QWORD *)v11 + 25) = v38;
          KeReleaseSpinLock((PKSPIN_LOCK)v11 + 26, v37);
          v14 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v11 + 24));
          if ( v14 )
            goto LABEL_12;
        }
        _InterlockedIncrement((volatile signed __int32 *)v11 + 6);
      }
      _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 37);
      v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
      if ( v14 )
        goto LABEL_71;
      _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 38);
      v39 = *((unsigned int *)PoolHandle + 43);
      if ( v39 + 32 >= v39
        && (v40 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v39 + 32, *((unsigned int *)PoolHandle + 42))) != 0LL )
      {
        v40->Next = 0LL;
        v14 = v40 + 2;
        if ( v40 != (_SLIST_ENTRY *)-32LL )
        {
          v40->Next = (_SLIST_ENTRY *)PoolHandle;
          v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
          v42 = *((_QWORD *)PoolHandle + 2);
          v43 = (char *)PoolHandle + 16;
          v44 = &v14[-2].Next + 1;
          if ( *(NDIS_HANDLE *)(v42 + 8) != (char *)PoolHandle + 16 )
            __fastfail(3u);
          *v44 = v42;
          v44[1] = v43;
          *(_QWORD *)(v42 + 8) = v44;
          *v43 = v44;
          KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v41);
          v48 = 0;
LABEL_71:
          *((_DWORD *)&v14[-1].Next + 2) = Number;
LABEL_12:
          v15 = v48;
          v8 = ContextBackFill;
          goto LABEL_13;
        }
      }
      else
      {
        v14 = 0LL;
      }
      v48 = 0;
      goto LABEL_12;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", PoolHandle);
    return 0LL;
  }
  else
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
    return 0LL;
  }
}
