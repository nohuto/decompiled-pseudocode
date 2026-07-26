/*
 * XREFs of NdisAllocateReassembledNetBufferList @ 0x1400CC340
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140027B00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisRetreatNetBufferListDataStart @ 0x14003FDD0 (NdisRetreatNetBufferListDataStart.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x140042E80 (NetioCopyOpaqueNetBufferListInformation.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x140058800 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     NdisFreeReassembledNetBufferList @ 0x1400CC6A0 (NdisFreeReassembledNetBufferList.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateReassembledNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        NDIS_HANDLE NetBufferAndNetBufferListPoolHandle,
        ULONG StartOffset,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateReassembleFlags)
{
  ULONG v6; // r14d
  NDIS_HANDLE v7; // r10
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v10; // rdi
  _NET_BUFFER *i; // rbx
  struct _NET_BUFFER_LIST *v12; // rcx
  _NET_BUFFER *FirstNetBuffer; // rsi
  unsigned int v15; // r15d
  ULONG v16; // r15d
  ULONG v17; // edx
  struct _MDL *MdlChain; // r14
  ULONG ByteCount; // eax
  ULONG v20; // eax
  ULONG v21; // r10d
  struct _MDL *Mdl; // rax
  struct _MDL *v23; // r12
  bool v24; // zf
  ULONG v25; // r15d
  ULONG v26; // r12d
  struct _MDL *v27; // rax
  struct _MDL **v28; // rcx
  unsigned int v29; // eax
  NDIS_STATUS v30; // eax
  const struct _EVENT_DESCRIPTOR *v31; // rdx
  void *v32; // rax
  struct _GUID v33; // xmm0
  void *v34; // rax
  unsigned __int8 DataOffset; // [rsp+20h] [rbp-A8h]
  const struct _GUID *DataLength; // [rsp+28h] [rbp-A0h]
  ULONG Length; // [rsp+48h] [rbp-80h]
  struct _MDL *Lengtha; // [rsp+48h] [rbp-80h]
  PVOID VirtualAddress[2]; // [rsp+60h] [rbp-68h] BYREF
  struct _GUID v42; // [rsp+70h] [rbp-58h] BYREF

  v6 = StartOffset;
  v7 = NetBufferAndNetBufferListPoolHandle;
  if ( !NetBufferAndNetBufferListPoolHandle || (*((_DWORD *)NetBufferAndNetBufferListPoolHandle + 11) & 1) == 0 )
    v7 = ndisNetBufferListPool;
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(v7, 0, 0, 0LL, 0, 0LL);
  v10 = NetBufferAndNetBufferList;
  if ( NetBufferAndNetBufferList )
  {
    for ( i = FragmentNetBufferList->FirstNetBuffer; ; i = (_NET_BUFFER *)i->Link.Alignment )
    {
      if ( !i )
      {
LABEL_9:
        v12 = v10;
LABEL_10:
        NdisFreeReassembledNetBufferList(v12, 0, 0);
        return 0LL;
      }
      if ( i->DataLength > v6 )
        break;
    }
    FirstNetBuffer = NetBufferAndNetBufferList->FirstNetBuffer;
    *(_QWORD *)&v42.Data1 = 0LL;
    while ( i )
    {
      v15 = i->DataLength;
      if ( v15 > v6 )
      {
        v16 = v15 - v6;
        v17 = v6 + i->DataOffset;
        MdlChain = i->MdlChain;
        while ( 1 )
        {
          if ( !MdlChain )
            goto LABEL_34;
          ByteCount = MdlChain->ByteCount;
          if ( v17 < ByteCount )
            break;
          MdlChain = MdlChain->Next;
          v17 -= ByteCount;
        }
        v20 = ByteCount - v17;
        v21 = v16;
        if ( v16 >= v20 )
          v21 = v20;
        Length = v21;
        VirtualAddress[0] = (char *)MdlChain->StartVa + MdlChain->ByteOffset + v17;
        Mdl = IoAllocateMdl(VirtualAddress[0], v21, 0, 0, 0LL);
        v23 = Mdl;
        if ( Mdl )
        {
          IoBuildPartialMdl(MdlChain, Mdl, VirtualAddress[0], Length);
          v23->Next = 0LL;
          if ( FirstNetBuffer->MdlChain )
          {
            **(_QWORD **)&v42.Data1 = v23;
          }
          else
          {
            FirstNetBuffer->Link.Region = (unsigned __int64)v23;
            FirstNetBuffer->MdlChain = v23;
            FirstNetBuffer->CurrentMdlOffset = 0;
            FirstNetBuffer->DataOffset = 0;
          }
          FirstNetBuffer->DataLength += Length;
          v25 = v16 - Length;
          v24 = v25 == 0;
          *(_QWORD *)&v42.Data1 = v23;
          while ( !v24 )
          {
            MdlChain = MdlChain->Next;
            if ( !MdlChain )
              break;
            v26 = v25;
            if ( v25 >= MdlChain->ByteCount )
              v26 = MdlChain->ByteCount;
            VirtualAddress[0] = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
            v27 = IoAllocateMdl(VirtualAddress[0], v26, 0, 0, 0LL);
            Lengtha = v27;
            if ( !v27 )
              goto LABEL_9;
            IoBuildPartialMdl(MdlChain, v27, VirtualAddress[0], v26);
            v28 = *(struct _MDL ***)&v42.Data1;
            *(_QWORD *)&v42.Data1 = Lengtha;
            Lengtha->Next = 0LL;
            *v28 = Lengtha;
            v29 = FirstNetBuffer->DataLength;
            if ( v29 + v26 < v29 )
            {
              FirstNetBuffer->DataLength = -1;
              goto LABEL_9;
            }
            FirstNetBuffer->DataLength = v29 + v26;
            v25 -= v26;
            v24 = v25 == 0;
          }
LABEL_34:
          i = (_NET_BUFFER *)i->Link.Alignment;
          v6 = StartOffset;
          continue;
        }
        goto LABEL_9;
      }
      i = (_NET_BUFFER *)i->Link.Alignment;
    }
    v30 = NdisRetreatNetBufferListDataStart(
            v10,
            DataOffsetDelta,
            DataBackFill,
            (NET_BUFFER_ALLOCATE_MDL_HANDLER)ndisAllocateMdlInternal,
            (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdlInternal);
    v12 = v10;
    if ( v30 )
      goto LABEL_10;
    NetioCopyOpaqueNetBufferListInformation((__int64)v10, (__int64)FragmentNetBufferList);
    if ( byte_14011F740 )
    {
      v10->NetBufferListInfo[13] = FragmentNetBufferList->NetBufferListInfo[13];
    }
    else if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v32 = (void *)((__int64)FragmentNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
      VirtualAddress[1] = 0LL;
      VirtualAddress[0] = v32;
      v33 = (struct _GUID)(unsigned __int64)v32;
      v34 = (void *)((__int64)v10->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
      VirtualAddress[1] = 0LL;
      VirtualAddress[0] = v34;
      v42 = v33;
      EtwEx_tidActivityInfoTransfer(
        0x7FFFFFFFFFFFFFFFLL,
        v31,
        &v42,
        (const struct _GUID *)VirtualAddress,
        DataOffset,
        DataLength,
        3u);
    }
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v10, 0LL, 9u, FragmentNetBufferList, 0);
  }
  return v10;
}
