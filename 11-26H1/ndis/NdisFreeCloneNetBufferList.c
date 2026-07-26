/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x140027210
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x140028220 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBuffer @ 0x140028B10 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferListContext @ 0x140042540 (NdisFreeNetBufferListContext.c)
 *     ndisPplLazyInitializeLookaside @ 0x140063DE0 (ndisPplLazyInitializeLookaside.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  unsigned __int64 v2; // rbp
  ULONG v3; // edx
  PNET_BUFFER_LIST v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  char v7; // r12
  char v8; // r13
  _SLIST_HEADER *Alignment; // rsi
  _UNKNOWN **v10; // rdx
  unsigned __int64 Region; // rbx
  unsigned __int8 *v12; // rax
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR v18; // rsi
  char v19; // r15
  struct _MDL *v20; // rcx
  struct _MDL *Next; // rbx
  ULONG_PTR v22; // r12
  __int64 v23; // r14
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r13
  _SLIST_HEADER *v28; // rax
  USHORT v29; // bx
  _SLIST_HEADER *v30; // rcx
  _NET_BUFFER_LIST_CONTEXT *Context; // rdx
  _DWORD *NdisPoolHandle; // rsi
  unsigned int *v33; // rcx
  unsigned __int64 v34; // rax
  char *v35; // rbx
  _SLIST_HEADER *v36; // r14
  char *v37; // rsi
  USHORT v38; // bx
  _SLIST_HEADER *v39; // rcx
  __int64 v40; // [rsp+30h] [rbp-50h]
  _QWORD v41[14]; // [rsp+80h] [rbp+0h] BYREF
  ULONG v43; // [rsp+108h] [rbp+88h]

  v2 = (unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = FreeCloneFlags & 2;
  *(_QWORD *)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFC0uLL) = CloneNetBufferList->NdisPoolHandle;
  v4 = CloneNetBufferList;
  CloneNetBufferList->Link.Alignment = 0LL;
  v43 = v3;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0;
    v8 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
    Alignment = (_SLIST_HEADER *)v4;
    v10 = &WPP_RECORDER_INITIALIZED;
    while ( 1 )
    {
      Region = Alignment[22].Region;
      while ( Alignment[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_74;
        }
        else if ( !Alignment[7].Region )
        {
          Alignment[7].Region = 0LL;
        }
        v12 = (unsigned __int8 *)Alignment[7].Region;
        if ( v12 )
        {
          v13 = *v12;
          if ( *v12 == 17 || v13 == 5 || v13 == 18 )
          {
            if ( v12 != (unsigned __int8 *)136 || Alignment[1].Region )
            {
              ++v5;
              v14 = 136LL;
            }
            else
            {
              ++v5;
              v14 = 24LL;
            }
            goto LABEL_13;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v40) = *v12;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)Alignment,
              v40);
LABEL_89:
            v10 = &WPP_RECORDER_INITIALIZED;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v10,
            27,
            11,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)Alignment);
          goto LABEL_89;
        }
LABEL_74:
        v14 = 140LL;
LABEL_13:
        Alignment[22].Region = v14;
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        if ( !Alignment )
          break;
      }
      v15 = v6 - v5;
      if ( (Region & 1) == 0 || !v15 )
        goto LABEL_20;
      if ( v7 || v8 )
      {
        v16 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v7 )
          goto LABEL_64;
        goto LABEL_18;
      }
      v8 = 1;
      if ( KeGetCurrentIrql() == 2 )
      {
        v7 = 1;
        v16 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_18:
        v17 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v17 + *(_QWORD *)v16) += v15;
        goto LABEL_19;
      }
      v7 = 0;
      v16 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_64:
      _InterlockedAdd64((volatile signed __int64 *)(v16 + 8), v15);
LABEL_19:
      v10 = &WPP_RECORDER_INITIALIZED;
LABEL_20:
      v6 = v5;
      if ( !Alignment )
      {
        v4 = CloneNetBufferList;
        v3 = v43;
        break;
      }
    }
  }
  v18 = v4->Link.Region;
  v19 = *(_BYTE *)(*(_QWORD *)v2 + 44LL) & 1;
  if ( v18 )
  {
    while ( 1 )
    {
      if ( !v3 )
      {
        v20 = *(struct _MDL **)(v18 + 32);
        if ( v20 )
        {
          do
          {
            Next = v20->Next;
            IoFreeMdl(v20);
            v20 = Next;
          }
          while ( Next );
        }
      }
      v22 = *(_QWORD *)v18;
      if ( v18 == v4->Link.Region )
      {
        if ( v19 )
          goto LABEL_42;
        v23 = *(_QWORD *)(v18 + 56);
        if ( (*(_DWORD *)(v23 + 80) & 1) != 0 )
        {
          v24 = *(_QWORD *)(v18 + 32);
          if ( (*(_BYTE *)(v24 + 10) & 0x20) != 0 )
            MmUnmapLockedPages(*(PVOID *)(v24 + 24), *(PMDL *)(v18 + 32));
        }
        if ( (*(_DWORD *)(v23 + 4) & 1) != 0 )
        {
          if ( v18 < 0x20 )
            ndisBugCheckEx(0x31uLL, 3uLL, v18, 0LL);
          ExFreePoolWithTag((PVOID)(v18 - 32), 0);
        }
        else
        {
          if ( ndisMaxNumberOfProcessors != 1 )
          {
            v25 = (unsigned __int64)*(unsigned int *)(v18 - 8) << 8;
            v26 = v23 + v25;
            v27 = v23 + v25 + 384;
            if ( !*(_BYTE *)(v23 + v25 + 600) )
              ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)(v23 + v25 + 384));
            if ( *(_DWORD *)(v18 - 8) == KeGetPcr()->Prcb.Number )
              v28 = *(_SLIST_HEADER **)(v27 + 192);
            else
              v28 = *(_SLIST_HEADER **)(v27 + 200);
            *(_QWORD *)v2 = v28;
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 28));
            v29 = *(_WORD *)(v26 + 400);
            if ( ExQueryDepthSList(v28) < v29 )
            {
              v30 = *(_SLIST_HEADER **)v2;
              goto LABEL_41;
            }
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 32));
          }
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 156));
          if ( ExQueryDepthSList((PSLIST_HEADER)(v23 + 128)) < *(_WORD *)(v23 + 144) )
          {
            v30 = (_SLIST_HEADER *)(v23 + 128);
LABEL_41:
            ExpInterlockedPushEntrySList(v30, (PSLIST_ENTRY)v18);
            goto LABEL_42;
          }
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 160));
          (*(void (__fastcall **)(ULONG_PTR, __int64))(v23 + 184))(v18, v23 + 128);
        }
      }
      else
      {
        NdisFreeNetBuffer((PNET_BUFFER)v18);
      }
LABEL_42:
      v18 = v22;
      if ( !v22 )
        break;
      v3 = v43;
    }
  }
  Context = v4->Context;
  NdisPoolHandle = v4->NdisPoolHandle;
  if ( Context && (v4->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(v4, Context->Size - Context->Offset);
  v4->Flags &= ~0x100u;
  if ( ((unsigned __int64)v4->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(Context) = 1;
    WfpNblInfoCleanup(v4, Context);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v4, 0LL, 4u, 0LL, 0);
  v33 = (unsigned int *)&v4[-1].NetBufferListInfo[26];
  if ( (NdisPoolHandle[1] & 1) != 0 )
  {
    if ( (unsigned __int64)v4 < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)v4, 0LL);
    ExFreePoolWithTag(v33, 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v34 = (unsigned __int64)v33[6] << 8;
      v35 = (char *)NdisPoolHandle + v34 + 384;
      if ( !v35[216] )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)NdisPoolHandle + v34 + 384));
      if ( LODWORD(v4[-1].NetBufferListInfo[29]) == KeGetPcr()->Prcb.Number )
        v36 = (_SLIST_HEADER *)*((_QWORD *)v35 + 24);
      else
        v36 = (_SLIST_HEADER *)*((_QWORD *)v35 + 25);
      _InterlockedIncrement((volatile signed __int32 *)v35 + 7);
      if ( ExQueryDepthSList(v36) < *((_WORD *)v35 + 8) )
      {
        v39 = v36;
        goto LABEL_60;
      }
      _InterlockedIncrement((volatile signed __int32 *)v35 + 8);
    }
    v37 = (char *)(NdisPoolHandle + 32);
    _InterlockedIncrement((volatile signed __int32 *)v37 + 7);
    v38 = *((_WORD *)v37 + 8);
    if ( ExQueryDepthSList((PSLIST_HEADER)v37) < v38 )
    {
      v39 = (_SLIST_HEADER *)v37;
LABEL_60:
      ExpInterlockedPushEntrySList(v39, (PSLIST_ENTRY)v4);
      return;
    }
    _InterlockedIncrement((volatile signed __int32 *)v37 + 8);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v37 + 7))(v4, v37);
  }
}
