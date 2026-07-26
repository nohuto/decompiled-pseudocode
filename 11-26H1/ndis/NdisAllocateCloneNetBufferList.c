/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x140028220
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1400258C0 (NdisAllocateNetBufferList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x140026FE0 (ndisGenerateCorrelationIds.c)
 *     NdisFreeCloneNetBufferList @ 0x140027210 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x140029EB0 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z @ 0x14002A200 (-ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z.c)
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x14002A4D0 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  char *v5; // rsi
  _DWORD *v6; // rdi
  ULONG v7; // r14d
  int v9; // eax
  struct _MDL *v10; // r15
  unsigned int Number; // edi
  unsigned int v12; // r14d
  bool v13; // zf
  char *v14; // rdi
  KIRQL v15; // r12
  struct _NET_BUFFER_LIST *NetBufferList; // rbx
  __int16 v17; // di
  _SLIST_HEADER *v18; // rcx
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  int v21; // eax
  _SLIST_HEADER *v22; // rax
  struct _NET_BUFFER *FirstNetBuffer; // r14
  _NET_BUFFER *v24; // rdi
  ULONG DataLength; // r13d
  unsigned int DataOffset; // edx
  struct _MDL *MdlChain; // r12
  ULONG ByteCount; // esi
  ULONG v29; // esi
  char *v30; // rcx
  struct _MDL *Mdl; // rax
  ULONG v32; // r13d
  PNET_BUFFER NetBuffer; // rax
  _QWORD *v34; // r13
  _QWORD *Alignment; // r9
  __int64 v37; // rax
  unsigned int CorrelationIds; // eax
  struct _NET_BUFFER *NetBufferInternal; // rax
  __int64 v40; // rax
  __int128 v41; // xmm0
  __int64 v42; // rax
  int v43; // eax
  const GUID *v44; // r9
  REGHANDLE v45; // rcx
  const GUID *v46; // r8
  const EVENT_DESCRIPTOR *v47; // rdx
  KIRQL v48; // al
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  char **Pool2; // rax
  KIRQL v52; // al
  char **v53; // rdx
  void ***v54; // rcx
  void **v55; // r8
  ULONG v56; // eax
  ULONG v57; // ecx
  char *v58; // r10
  struct _MDL *v59; // rax
  struct _MDL *v60; // r12
  struct _MDL *i; // rsi
  int Flags; // [rsp+20h] [rbp-60h]
  ULONG Length; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 16) = AllocateCloneFlags;
  *(_QWORD *)(v4 + 48) = OriginalNetBufferList;
  *(_DWORD *)(v4 + 8) = AllocateCloneFlags & 2;
  v5 = (char *)NetBufferListPoolHandle;
  v6 = NetBufferPoolHandle;
  if ( !NetBufferListPoolHandle )
    v5 = (char *)ndisNetBufferListPool;
  v7 = AllocateCloneFlags;
  if ( !NetBufferPoolHandle )
    v6 = ndisNetBufferPool;
  v9 = *((_DWORD *)v5 + 11);
  *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v6;
  if ( (v9 & 1) == 0 )
  {
    NetBufferList = NdisAllocateNetBufferList(v5, 0, 0);
    if ( !NetBufferList )
      return NetBufferList;
    v10 = 0LL;
    *(_DWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
    if ( v6 )
    {
      if ( (v6[20] & 1) != 0 )
      {
        DbgPrint("NdisAllocateNetBuffer: Pool %p wrong pool type.\n", v6);
        NdisFreeCloneNetBufferList(NetBufferList, v7);
        return 0LL;
      }
      NetBufferInternal = ndisAllocateNetBufferInternal(v6, (unsigned int *)(v4 + 24));
      FirstNetBuffer = NetBufferInternal;
      if ( NetBufferInternal )
      {
        NetBufferInternal->NdisReserved[1] = 0LL;
        NetBufferInternal->NdisReserved[0] = 0LL;
        NetBufferInternal->MiniportReserved[1] = 0LL;
        NetBufferInternal->MiniportReserved[0] = 0LL;
        NetBufferInternal->MdlChain = 0LL;
        NetBufferInternal->DataOffset = 0;
        NetBufferInternal->DataLength = 0;
        NetBufferInternal->Link.Region = 0LL;
        NetBufferInternal->CurrentMdlOffset = 0;
        NetBufferInternal->Link.Alignment = 0LL;
        NetBufferInternal->NdisPoolHandle = v6;
        *(_DWORD *)&NetBufferInternal->ChecksumBias = 0;
        NetBufferInternal->SharedMemoryInfo = 0LL;
        NetBufferList->Link.Region = (unsigned __int64)NetBufferInternal;
        goto LABEL_32;
      }
LABEL_63:
      v7 = *(_DWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    NdisFreeCloneNetBufferList(NetBufferList, v7);
    return 0LL;
  }
  if ( (v9 & 4) != 0 )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v5);
    return 0LL;
  }
  v10 = 0LL;
  if ( (*((_DWORD *)v5 + 1) & 1) == 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    v12 = 1;
    v13 = ndisMaxNumberOfProcessors == 1;
    *(_DWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = Number;
    if ( !v13 )
    {
      v14 = &v5[256 * (unsigned __int64)Number + 384];
      if ( !v14[216] )
      {
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14 + 26);
        if ( !v14[216] )
        {
          ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)v14,
            ndisAllocateFromNPagedPool,
            *((PFREE_FUNCTION_EX *)v5 + 23),
            NonPagedPoolNx,
            0,
            *((unsigned int *)v5 + 43),
            *((_DWORD *)v5 + 42),
            0x400u);
          v14[216] = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v14 + 26, v15);
      }
      _InterlockedIncrement((volatile signed __int32 *)v14 + 5);
      NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v14 + 24));
      if ( NetBufferList )
        goto LABEL_14;
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v14 + 25)) >= 0xAu )
      {
        v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14 + 26);
        v49 = *((_QWORD *)v14 + 24);
        *((_QWORD *)v14 + 24) = *((_QWORD *)v14 + 25);
        *((_QWORD *)v14 + 25) = v49;
        KeReleaseSpinLock((PKSPIN_LOCK)v14 + 26, v48);
        NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v14 + 24));
        if ( NetBufferList )
          goto LABEL_14;
      }
      _InterlockedIncrement((volatile signed __int32 *)v14 + 6);
      Number = *(_DWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    }
    _InterlockedIncrement((volatile signed __int32 *)v5 + 37);
    NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v5 + 8);
    if ( NetBufferList )
      goto LABEL_86;
    _InterlockedIncrement((volatile signed __int32 *)v5 + 38);
    v50 = *((unsigned int *)v5 + 43);
    if ( v50 + 32 >= v50 && (Pool2 = (char **)ExAllocatePool2(66LL, v50 + 32, *((unsigned int *)v5 + 42))) != 0LL )
    {
      NetBufferList = (struct _NET_BUFFER_LIST *)(Pool2 + 4);
      *Pool2 = 0LL;
      if ( Pool2 != (char **)-32LL )
      {
        *Pool2 = v5;
        v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 1);
        v53 = (char **)*((_QWORD *)v5 + 2);
        v54 = (void ***)(v5 + 16);
        v55 = &NetBufferList[-1].NetBufferListInfo[27];
        if ( v53[1] != v5 + 16 )
          __fastfail(3u);
        *v55 = v53;
        v55[1] = v54;
        v53[1] = (char *)v55;
        *v54 = v55;
        KeReleaseSpinLock((PKSPIN_LOCK)v5 + 1, v52);
        v12 = 0;
LABEL_86:
        LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
        goto LABEL_14;
      }
    }
    else
    {
      NetBufferList = 0LL;
    }
    v12 = 0;
    goto LABEL_14;
  }
  v12 = 0;
  NetBufferList = (struct _NET_BUFFER_LIST *)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)v5);
LABEL_14:
  if ( NetBufferList )
  {
    v17 = WORD1(NetBufferList->NdisReserved[1]);
    memset(NetBufferList, 0, 8 * (v12 ^ 1LL) + 368);
    NetBufferList->NdisPoolHandle = v5;
    NetBufferList->Flags = 256;
    if ( v12 )
      WORD1(NetBufferList->NdisReserved[1]) = v17;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v18 = (_SLIST_HEADER *)NetBufferList;
      if ( (__int64)NetBufferList->NetBufferListInfo[13] > 0 )
      {
        Alignment = (_QWORD *)NetBufferList->Link.Alignment;
        if ( NetBufferList->Link.Alignment )
        {
          do
          {
            v37 = Alignment[31];
            if ( !v37 || v37 < 0 )
            {
              CorrelationIds = ndisGenerateCorrelationIds(1u);
              Alignment[31] = CorrelationIds;
            }
            Alignment = (_QWORD *)*Alignment;
          }
          while ( Alignment );
        }
      }
      else
      {
        v19 = _InterlockedExchangeAdd(&dword_14011CE68, 1u);
        if ( v19 + 1 < v19 )
          v19 = _InterlockedExchangeAdd(&dword_14011CE68, 1u);
        do
        {
          if ( (__int64)v18[15].Region <= 0 )
          {
            v20 = v19++;
            v18[15].Region = v20;
          }
          v18 = (_SLIST_HEADER *)v18->Alignment;
        }
        while ( v18 );
      }
    }
    LOBYTE(NetBufferList->NetBufferListInfo[7]) = v5[40];
    v21 = *((_DWORD *)v5 + 11);
    if ( (v21 & 2) != 0 )
    {
      v13 = (v21 & 1) == 0;
      v22 = (_SLIST_HEADER *)&NetBufferList[1].NetBufferListInfo[4];
      if ( v13 )
        v22 = (_SLIST_HEADER *)&NetBufferList[1];
      NetBufferList->Context = (_NET_BUFFER_LIST_CONTEXT *)v22;
      v22->Alignment = 0LL;
      NetBufferList->Context->Size = *((_WORD *)v5 + 21);
      NetBufferList->Context->Offset = *((_WORD *)v5 + 21);
    }
    memset(&NetBufferList[1], 0, 0xB0uLL);
    NetBufferList[1].NdisReserved[1] = v5;
    NetBufferList->Link.Region = (unsigned __int64)&NetBufferList[1];
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 3u, 0LL, 0);
  }
  else
  {
    NetBufferList = 0LL;
  }
  if ( !NetBufferList )
    return NetBufferList;
  FirstNetBuffer = NetBufferList->FirstNetBuffer;
LABEL_32:
  v24 = OriginalNetBufferList->FirstNetBuffer;
  while ( v24 )
  {
    DataLength = v24->DataLength;
    DataOffset = v24->DataOffset;
    MdlChain = v24->MdlChain;
    if ( *(_DWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    {
      FirstNetBuffer->MdlChain = MdlChain;
      FirstNetBuffer->Link.Region = v24->Link.Region;
      FirstNetBuffer->DataLength = v24->DataLength;
      FirstNetBuffer->DataOffset = DataOffset;
      FirstNetBuffer->CurrentMdlOffset = v24->CurrentMdlOffset;
    }
    else if ( MdlChain )
    {
      while ( 1 )
      {
        ByteCount = MdlChain->ByteCount;
        if ( DataOffset < ByteCount )
          break;
        MdlChain = MdlChain->Next;
        DataOffset -= ByteCount;
        if ( !MdlChain )
          goto LABEL_44;
      }
      v29 = ByteCount - DataOffset;
      if ( v29 >= DataLength )
        v29 = v24->DataLength;
      if ( v29 )
      {
        v30 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + DataOffset;
        *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v30;
        Mdl = IoAllocateMdl(v30, v29, 0, 0, 0LL);
        v10 = Mdl;
        if ( !Mdl )
          goto LABEL_63;
        IoBuildPartialMdl(MdlChain, Mdl, *(PVOID *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x18), v29);
        v10->Next = 0LL;
      }
      FirstNetBuffer->Link.Region = (unsigned __int64)v10;
      FirstNetBuffer->MdlChain = v10;
      FirstNetBuffer->DataLength = v24->DataLength;
      FirstNetBuffer->CurrentMdlOffset = 0;
      FirstNetBuffer->DataOffset = 0;
      v32 = DataLength - v29;
      if ( v32 )
      {
        for ( i = MdlChain->Next; i; i = i->Next )
        {
          v56 = i->ByteCount;
          v57 = v32;
          v58 = (char *)i->StartVa + i->ByteOffset;
          *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v58;
          if ( v56 <= v32 )
            v57 = v56;
          *(_DWORD *)v4 = v57;
          v59 = IoAllocateMdl(v58, v57, 0, 0, 0LL);
          v60 = v59;
          if ( !v59 )
            goto LABEL_63;
          IoBuildPartialMdl(
            i,
            v59,
            *(PVOID *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
            *(_DWORD *)v4);
          v10->Next = v60;
          v10 = v60;
          v60->Next = 0LL;
          v32 -= *(_DWORD *)v4;
          if ( !v32 )
            break;
        }
      }
      v10 = 0LL;
    }
LABEL_44:
    v24 = (_NET_BUFFER *)v24->Link.Alignment;
    if ( !v24 )
      break;
    NetBuffer = NdisAllocateNetBuffer(
                  *(NDIS_HANDLE *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
                  0LL,
                  0,
                  0LL);
    if ( !NetBuffer )
      goto LABEL_63;
    FirstNetBuffer->Link.Alignment = (unsigned __int64)NetBuffer;
    FirstNetBuffer = NetBuffer;
  }
  v34 = *(_QWORD **)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  NetBufferList->SourceHandle = (void *)v34[15];
  NetBufferList->NetBufferListInfo[16] = (void *)v34[34];
  if ( (v34[28] & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (v34[28] & 1) == 0 )
  {
    LOBYTE(Flags) = 1;
    WfpNblInfoClone(v34, NetBufferList, 0LL, 0LL, Flags);
  }
  if ( byte_14011F740 )
  {
    NetBufferList->NetBufferListInfo[13] = (void *)v34[31];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v40 = v34[31] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
    *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v40;
    v41 = *(_OWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v42 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
    *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v42;
    LODWORD(v42) = Microsoft_Windows_Networking_CorrelationEnabled;
    *(_OWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v41;
    *(_OWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x30);
    if ( (_DWORD)v42 )
    {
      v43 = Microsoft_Windows_Networking_CorrelationTraceActivityPayload;
      v44 = (const GUID *)(v4 + 48);
      v45 = Microsoft_Windows_Networking_CorrelationHandle;
      v46 = (const GUID *)(v4 + 64);
      *(_DWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
      v47 = (const EVENT_DESCRIPTOR *)(v4 + 24);
      *(_OWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = ActivityTransfer;
      if ( v43 )
      {
        *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 16LL;
        *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = &Microsoft_Windows_Networking_ProviderId;
        *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = ((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                + 8;
        *(_QWORD *)(((unsigned __int64)&Length & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 4LL;
        EtwWriteTransfer(v45, v47, v46, v44, 2u, (PEVENT_DATA_DESCRIPTOR)(v4 + 128));
      }
      else
      {
        EtwWriteTransfer(v45, v47, v46, v44, 0, 0LL);
      }
    }
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 5u, v34, 0);
  return NetBufferList;
}
