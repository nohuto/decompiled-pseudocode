/*
 * XREFs of ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140029030
 * Callers:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 * Callees:
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1400160A0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140027B00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14002A520 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x140040ED0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisDoLoopbackNetBufferList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned int a4,
        char a5)
{
  SIZE_T DataLength; // rsi
  SIZE_T v7; // rbx
  struct _MDL *Pool2; // rax
  struct _MDL *v9; // r12
  unsigned __int64 v10; // r8
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v12; // rbp
  __int64 v13; // rax
  char *v14; // r15
  _MDL *CurrentMdl; // r14
  char *MappedSystemVa; // rax
  __int64 CurrentMdlOffset; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rbx
  ULONG v20; // esi
  struct _MDL *Next; // r14
  char *i; // r15
  unsigned int Flags; // ecx
  int v24; // ecx
  char v25; // r13
  __int64 v26; // r15
  __int64 v27; // r14
  struct _NET_BUFFER_LIST *Alignment; // rsi
  char v29; // r12
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r14
  char v37; // r13
  __int64 v38; // r15
  struct _NET_BUFFER_LIST *v39; // rsi
  char v40; // r12
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  unsigned __int64 v43; // r14
  __int64 v44; // rcx
  PVOID v45; // rax
  ULONG ByteCount; // ecx
  __int64 v47; // rbx
  struct _MDL *P; // [rsp+98h] [rbp+10h]

  DataLength = a2->DataLength;
  v7 = (MmSizeOfMdl((PVOID)0xFFF, DataLength) + 7) & 0xFFFFFFF8;
  if ( (v7 + DataLength) >> 32 )
    return;
  Pool2 = (struct _MDL *)ExAllocatePool2(64LL, (unsigned int)(v7 + DataLength), 1886143566LL);
  P = Pool2;
  v9 = Pool2;
  if ( !Pool2 )
    return;
  v10 = (unsigned __int64)Pool2 + v7;
  if ( (struct _MDL *)((char *)Pool2 + v7) < Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return;
  }
  Pool2->ByteCount = DataLength;
  Pool2->Next = 0LL;
  Pool2->Size = 8 * (((DataLength + (v10 & 0xFFF) + 4095) >> 12) + 6);
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(v10 & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = v10 & 0xFFF;
  MmBuildMdlForNonPagedPool(Pool2);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, v9, 0, DataLength);
  v12 = NetBufferAndNetBufferList;
  if ( !NetBufferAndNetBufferList )
    goto LABEL_91;
  v13 = *(_QWORD *)(NetBufferAndNetBufferList->Link.Region + 32);
  if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
    v14 = *(char **)(v13 + 24);
  else
    v14 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000000u);
  if ( !v14
    || ((CurrentMdl = a2->CurrentMdl, (CurrentMdl->MdlFlags & 5) == 0)
      ? (MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u))
      : (MappedSystemVa = (char *)CurrentMdl->MappedSystemVa),
        !MappedSystemVa) )
  {
    NdisFreeNetBufferList(v12);
LABEL_91:
    if ( (v9->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v9->MappedSystemVa, v9);
    ExFreePoolWithTag(v9, 0);
    return;
  }
  CurrentMdlOffset = a2->CurrentMdlOffset;
  v18 = DataLength;
  if ( CurrentMdl->ByteCount - (int)CurrentMdlOffset <= (unsigned int)DataLength )
    v18 = CurrentMdl->ByteCount - CurrentMdlOffset;
  v19 = v18;
  v20 = DataLength - v18;
  memmove(v14, &MappedSystemVa[CurrentMdlOffset], v18);
  Next = CurrentMdl->Next;
  for ( i = &v14[v19]; Next; i += v47 )
  {
    if ( !v20 )
      break;
    v45 = (Next->MdlFlags & 5) != 0
        ? Next->MappedSystemVa
        : MmMapLockedPagesSpecifyCache(Next, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !v45 )
      break;
    ByteCount = v20;
    if ( v20 >= Next->ByteCount )
      ByteCount = Next->ByteCount;
    v47 = ByteCount;
    v20 -= ByteCount;
    memmove(i, v45, ByteCount);
    Next = Next->Next;
  }
  Flags = v12->Flags;
  v12->NblFlags |= 0x8000u;
  v24 = Flags | 0x80;
  v12->Flags = v24;
  v12->SourceHandle = a3->SourceHandle;
  v12->NetBufferListInfo[5] = a3->SourceHandle;
  if ( (a5 & 2) != 0 )
    v12->Flags = v24 | 0x200;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v25 = 0;
    v26 = 0LL;
    v27 = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v12, 0xA8uLL, 0x9Bu, 0LL, 0);
    Alignment = v12;
    v29 = 0;
    while ( 1 )
    {
      v30 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == (void *)v30 )
      {
        if ( v30 )
        {
          if ( (v30 & 4) != 0 )
            goto LABEL_85;
        }
        else if ( !Alignment->SourceHandle )
        {
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(168LL);
        }
        if ( ndisNblTrackerCanNblBeTracked(Alignment) )
        {
          if ( Alignment->SourceHandle || Alignment->ParentNetBufferList )
          {
            ++v26;
            v31 = 0LL;
          }
          else
          {
            ++v26;
            v31 = 24LL;
          }
          goto LABEL_27;
        }
LABEL_85:
        v31 = 4LL;
LABEL_27:
        Alignment->NetBufferListInfo[27] = (void *)v31;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v32 = v27 - v26;
      if ( (v30 & 1) != 0 && v32 )
      {
        if ( v25 || v29 )
        {
          v33 = 16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( v25 )
            goto LABEL_69;
LABEL_34:
          _InterlockedAdd64((volatile signed __int64 *)(v33 + 8), v32);
        }
        else
        {
          v29 = 1;
          if ( KeGetCurrentIrql() != 2 )
          {
            v33 = 16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            goto LABEL_34;
          }
          v25 = 1;
          v33 = 16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_69:
          v44 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v44 + *(_QWORD *)v33) += v32;
        }
      }
      v27 = v26;
      if ( !Alignment )
      {
        v9 = P;
        break;
      }
    }
  }
  ndisInvokeNextReceiveHandler(
    v12,
    a4,
    1u,
    2u,
    a1->Next.IndicateNetBufferListsObject,
    a1->Next.IndicateNetBufferListsContext,
    (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))a1->Next.IndicateNetBufferListsHandler);
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v37 = 0;
    v38 = 0LL;
    v36 = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v12, 0LL, 0x9Cu, (void *)0xA8, 0);
    v39 = v12;
    v40 = 0;
    while ( 1 )
    {
      v41 = (unsigned __int64)v39->NetBufferListInfo[27];
      while ( v39->NetBufferListInfo[27] == (void *)v41 )
      {
        if ( v41 )
        {
          if ( (v41 & 4) != 0 )
            goto LABEL_67;
        }
        else if ( !v39->SourceHandle )
        {
          v39->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL);
        }
        if ( ndisNblTrackerCanNblBeTracked(v39) )
        {
          if ( v39->SourceHandle != (void *)168 || v39->ParentNetBufferList )
          {
            ++v38;
            v42 = 168LL;
          }
          else
          {
            ++v38;
            v42 = 24LL;
          }
          goto LABEL_54;
        }
LABEL_67:
        v42 = 172LL;
LABEL_54:
        v39->NetBufferListInfo[27] = (void *)v42;
        v39 = (struct _NET_BUFFER_LIST *)v39->Link.Alignment;
        if ( !v39 )
          break;
      }
      v43 = v36 - v38;
      if ( (v41 & 1) == 0 || !v43 )
        goto LABEL_37;
      if ( v37 || v40 )
      {
        v34 = 16 * ((v41 >> 1) & 1) + (v41 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v37 )
          goto LABEL_61;
        goto LABEL_36;
      }
      v40 = 1;
      if ( KeGetCurrentIrql() == 2 )
      {
        v37 = 1;
        v34 = 16 * ((v41 >> 1) & 1) + (v41 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_36:
        v35 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v35 + *(_QWORD *)v34) += v43;
        goto LABEL_37;
      }
      v34 = 16 * ((v41 >> 1) & 1) + (v41 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_61:
      _InterlockedAdd64((volatile signed __int64 *)(v34 + 8), v43);
LABEL_37:
      v36 = v38;
      if ( !v39 )
      {
        v9 = P;
        break;
      }
    }
  }
  if ( (v9->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(v9->MappedSystemVa, v9);
  ExFreePoolWithTag(v9, 0);
  NdisFreeNetBufferList(v12);
}
