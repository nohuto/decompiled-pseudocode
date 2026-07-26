/*
 * XREFs of NdisAllocateNetBufferList @ 0x1400258C0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x140028220 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x14002AEB0 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x140026FE0 (ndisGenerateCorrelationIds.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill)
{
  int v3; // r12d
  USHORT v4; // r13
  unsigned int Number; // esi
  unsigned int v7; // r15d
  char *v8; // rsi
  PFREE_FUNCTION_EX *v9; // rbx
  KIRQL v10; // r13
  PSLIST_ENTRY v11; // rbx
  __int16 v12; // si
  _QWORD *p_Next; // rcx
  unsigned int v14; // edx
  __int64 v15; // rax
  int v16; // eax
  bool v17; // zf
  _SLIST_ENTRY *v18; // rax
  struct _NET_BUFFER_LIST *v19; // rsi
  unsigned __int16 v20; // ax
  __int64 v21; // rax
  struct _MDL *v22; // r14
  _NET_BUFFER *FirstNetBuffer; // rcx
  unsigned int v24; // eax
  _SLIST_ENTRY *i; // r9
  __int64 v27; // rax
  __int64 CorrelationIds; // r8
  _NET_BUFFER *v29; // rax
  unsigned int v30; // r14d
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v32; // r8
  int v33; // edx
  PSLIST_ENTRY v34; // rax
  unsigned __int16 v35; // dx
  __int64 v36; // r9
  unsigned __int64 v37; // r8
  __int16 v38; // dx
  int v39; // edx
  unsigned __int64 v40; // rax
  KIRQL v41; // al
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v45; // al
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // r8
  unsigned __int16 v49; // si
  __int64 v50; // rax
  _SLIST_ENTRY *v51; // rax
  unsigned int v52; // [rsp+80h] [rbp+8h]

  v3 = ContextSize;
  v4 = ContextBackFill;
  if ( !PoolHandle || (ContextSize & 7) != 0 || (ContextBackFill & 7) != 0 )
    return 0LL;
  if ( (*((_DWORD *)PoolHandle + 1) & 1) == 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    v7 = 1;
    v52 = Number;
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v8 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
      if ( !v8[216] )
      {
        v9 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26);
        if ( !v8[216] )
        {
          ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)v8,
            ndisAllocateFromNPagedPool,
            *(v9 - 25),
            NonPagedPoolNx,
            0,
            *((unsigned int *)v9 - 53),
            *((_DWORD *)v9 - 54),
            0x400u);
          v8[216] = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v10);
      }
      _InterlockedIncrement((volatile signed __int32 *)v8 + 5);
      v11 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v8 + 24));
      if ( v11 )
        goto LABEL_11;
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v8 + 25)) >= 0xAu )
      {
        v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26);
        v42 = *((_QWORD *)v8 + 24);
        *((_QWORD *)v8 + 24) = *((_QWORD *)v8 + 25);
        *((_QWORD *)v8 + 25) = v42;
        KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v41);
        v11 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v8 + 24));
        if ( v11 )
          goto LABEL_11;
      }
      _InterlockedIncrement((volatile signed __int32 *)v8 + 6);
      Number = v52;
    }
    _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 37);
    v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
    if ( v11 )
      goto LABEL_81;
    _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 38);
    v43 = *((unsigned int *)PoolHandle + 43);
    if ( v43 + 32 >= v43
      && (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v43 + 32, *((unsigned int *)PoolHandle + 42))) != 0LL )
    {
      v11 = Pool2 + 2;
      Pool2->Next = 0LL;
      if ( Pool2 != (_SLIST_ENTRY *)-32LL )
      {
        Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
        v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v46 = *((_QWORD *)PoolHandle + 2);
        v47 = (char *)PoolHandle + 16;
        v48 = &v11[-2].Next + 1;
        if ( *(NDIS_HANDLE *)(v46 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        *v48 = v46;
        v48[1] = v47;
        *(_QWORD *)(v46 + 8) = v48;
        *v47 = v48;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v45);
        v7 = 0;
LABEL_81:
        *((_DWORD *)&v11[-1].Next + 2) = Number;
LABEL_11:
        v4 = ContextBackFill;
        goto LABEL_12;
      }
    }
    else
    {
      v11 = 0LL;
    }
    v7 = 0;
    goto LABEL_11;
  }
  v40 = *((unsigned int *)PoolHandle + 8);
  v7 = 0;
  if ( v40 + 32 >= v40 )
  {
    v51 = (_SLIST_ENTRY *)ExAllocatePool2(0x100000042LL, v40 + 32, *((unsigned int *)PoolHandle + 9));
    if ( v51 )
    {
      v51->Next = (_SLIST_ENTRY *)PoolHandle;
      v11 = v51 + 2;
    }
    else
    {
      v11 = 0LL;
    }
  }
  else
  {
    v11 = 0LL;
  }
LABEL_12:
  if ( !v11 )
    return 0LL;
  v12 = *((_WORD *)&v11[3].Next + 5);
  memset(v11, 0, 8 * (v7 ^ 1LL) + 368);
  v11[2].Next = (_SLIST_ENTRY *)PoolHandle;
  *((_DWORD *)&v11[8].Next + 2) = 256;
  if ( v7 )
    *((_WORD *)&v11[3].Next + 5) = v12;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    p_Next = &v11->Next;
    if ( *((__int64 *)&v11[15].Next + 1) > 0 )
    {
      for ( i = v11->Next; i; i = i->Next )
      {
        v27 = *((_QWORD *)&i[15].Next + 1);
        if ( !v27 || v27 < 0 )
        {
          CorrelationIds = (unsigned int)ndisGenerateCorrelationIds(1LL);
          *((_QWORD *)&i[15].Next + 1) = CorrelationIds;
        }
      }
    }
    else
    {
      v14 = _InterlockedExchangeAdd(&dword_14011CE68, 1u);
      if ( v14 + 1 < v14 )
        v14 = _InterlockedExchangeAdd(&dword_14011CE68, 1u);
      do
      {
        if ( (__int64)p_Next[31] <= 0 )
        {
          v15 = v14++;
          p_Next[31] = v15;
        }
        p_Next = (_QWORD *)*p_Next;
      }
      while ( p_Next );
    }
  }
  *((_BYTE *)&v11[12].Next + 8) = *((_BYTE *)PoolHandle + 40);
  v16 = *((_DWORD *)PoolHandle + 11);
  if ( (v16 & 2) == 0 )
    goto LABEL_54;
  v17 = (v16 & 1) == 0;
  v18 = v11 + 35;
  if ( v17 )
    v18 = v11 + 24;
  v11[1].Next = v18;
  v18->Next = 0LL;
  *((_WORD *)&v11[1].Next->Next + 4) = *((_WORD *)PoolHandle + 21);
  *((_WORD *)&v11[1].Next->Next + 5) = *((_WORD *)PoolHandle + 21);
  if ( *((_WORD *)PoolHandle + 21) < (unsigned __int16)v3 )
  {
LABEL_54:
    if ( (_WORD)v3 )
    {
      v30 = *((_DWORD *)PoolHandle + 9);
      Next = v11[1].Next;
      v32 = v11[23].Next;
      v33 = *((_DWORD *)&v11[2].Next[2].Next + 3);
      if ( (v33 & 2) == 0 )
        goto LABEL_59;
      v34 = v11 + 35;
      if ( (v33 & 1) == 0 )
        v34 = v11 + 24;
      if ( Next != v34 || *((_WORD *)&Next->Next + 5) < (unsigned __int16)v3 )
      {
LABEL_59:
        v35 = *((_WORD *)&v11[3].Next + 4) + v3;
        *((_WORD *)&v11[3].Next + 4) = v35;
        if ( v35 <= ndisMaxCachedNblContextSize )
        {
          if ( v35 <= *((_WORD *)&v11[3].Next + 5) )
            v35 = *((_WORD *)&v11[3].Next + 5);
          *((_WORD *)&v11[3].Next + 5) = v35;
        }
      }
      if ( Next )
      {
        v20 = *((_WORD *)&Next->Next + 5);
        if ( v20 >= (unsigned __int16)v3 )
        {
          *((_WORD *)&Next->Next + 5) = v20 - v3;
LABEL_31:
          *((_DWORD *)&v11[8].Next + 2) |= 0x400u;
          goto LABEL_32;
        }
      }
      if ( v32 && *((_WORD *)&v32->Next + 4) >= (unsigned __int16)v3 )
      {
        *((_WORD *)&v32->Next + 5) -= v3;
        v32->Next = v11[1].Next;
        v11[1].Next = v32;
        v11[23].Next = 0LL;
        goto LABEL_31;
      }
      v49 = v3 + v4;
      if ( *((unsigned __int16 *)&v11[3].Next + 4) <= ndisMaxCachedNblContextSize )
      {
        if ( v32 )
        {
          v11[23].Next = 0LL;
          ExFreePoolWithTag(v32, 0);
        }
        if ( v49 <= v3 + *((unsigned __int16 *)&v11[3].Next + 5) - *((unsigned __int16 *)&v11[3].Next + 4) )
          v49 = v3 + *((_WORD *)&v11[3].Next + 5) - *((_WORD *)&v11[3].Next + 4);
        if ( v49 > v3 + (unsigned int)v4 )
          v30 = 1668170830;
      }
      v50 = ExAllocatePool2(64LL, v49 + 16LL, v30);
      if ( v50 )
      {
        *(_WORD *)(v50 + 8) = v49;
        *(_WORD *)(v50 + 10) = v49 - v3;
        *(_QWORD *)v50 = v11[1].Next;
        v11[1].Next = (_SLIST_ENTRY *)v50;
        goto LABEL_31;
      }
      *((_WORD *)&v11[3].Next + 4) -= v3;
      NdisFreeNetBufferList((PNET_BUFFER_LIST)v11);
      v11 = 0LL;
    }
LABEL_32:
    v19 = (struct _NET_BUFFER_LIST *)v11;
    if ( !v11 )
      return (PNET_BUFFER_LIST)v11;
    goto LABEL_33;
  }
  v19 = (struct _NET_BUFFER_LIST *)v11;
  *((_WORD *)&v11[1].Next->Next + 5) -= v3;
LABEL_33:
  if ( (*((_DWORD *)PoolHandle + 11) & 1) != 0 )
    v19->Link.Region = (unsigned __int64)&v19[1];
  if ( (*((_DWORD *)PoolHandle + 11) & 4) != 0 )
  {
    v21 = *((unsigned __int16 *)PoolHandle + 21);
    if ( (_WORD)v21 )
      v22 = (struct _MDL *)((char *)&v19[1].NetBufferListInfo[6] + v21);
    else
      v22 = (struct _MDL *)&v19[1].NetBufferListInfo[4];
    if ( v7 )
    {
      v22->ByteCount = *((_DWORD *)PoolHandle + 22);
      v22->Next = 0LL;
    }
    else
    {
      v36 = *((unsigned int *)PoolHandle + 22);
      v37 = (unsigned __int64)v22 + *((unsigned int *)PoolHandle + 23);
      v38 = (_WORD)v22 + *((_DWORD *)PoolHandle + 23);
      v22->Next = 0LL;
      v22->MdlFlags = 0;
      v22->ByteCount = v36;
      v22->StartVa = (PVOID)(v37 & 0xFFFFFFFFFFFFF000uLL);
      v39 = v38 & 0xFFF;
      v22->ByteOffset = v39;
      v22->Size = 8 * ((((unsigned __int64)(unsigned __int16)v39 + v36 + 4095) >> 12) + 6);
      MmBuildMdlForNonPagedPool(v22);
    }
    FirstNetBuffer = v19->FirstNetBuffer;
    if ( FirstNetBuffer )
    {
      v24 = *((_DWORD *)PoolHandle + 22);
      FirstNetBuffer->Link.Alignment = 0LL;
      FirstNetBuffer->NdisPoolHandle = PoolHandle;
      FirstNetBuffer->Link.Region = (unsigned __int64)v22;
      FirstNetBuffer->CurrentMdlOffset = v24;
      FirstNetBuffer->MdlChain = v22;
      FirstNetBuffer->DataOffset = v24;
      FirstNetBuffer->DataLength = 0;
      *(_DWORD *)&FirstNetBuffer->ChecksumBias = 0;
      FirstNetBuffer->NdisReserved[1] = 0LL;
      FirstNetBuffer->NdisReserved[0] = 0LL;
      FirstNetBuffer->MiniportReserved[1] = 0LL;
      FirstNetBuffer->MiniportReserved[0] = 0LL;
      FirstNetBuffer->SharedMemoryInfo = 0LL;
    }
  }
  else
  {
    v29 = v19->FirstNetBuffer;
    if ( v29 )
    {
      v29->Link.Alignment = 0LL;
      v29->NdisPoolHandle = PoolHandle;
      v29->Link.Region = 0LL;
      v29->CurrentMdlOffset = 0;
      v29->MdlChain = 0LL;
      v29->DataOffset = 0;
      v29->DataLength = 0;
      *(_DWORD *)&v29->ChecksumBias = 0;
      v29->NdisReserved[1] = 0LL;
      v29->NdisReserved[0] = 0LL;
      v29->MiniportReserved[1] = 0LL;
      v29->MiniportReserved[0] = 0LL;
      v29->SharedMemoryInfo = 0LL;
    }
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v19, 0LL, 2u, 0LL, 0);
  return (PNET_BUFFER_LIST)v11;
}
