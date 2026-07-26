/*
 * XREFs of ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140031600 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140031710 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1400160A0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140024860 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     PktMonClientNblDrop @ 0x14002F8C0 (PktMonClientNblDrop.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x140040ED0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     NdisAllocateNetBufferListContext @ 0x140040EF0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400426C0 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14004A510 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140052660 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400637B0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     TrackNblContextVerifierFailure @ 0x1400A5520 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  void *MiniportHandle; // rdi
  struct _NDIS_OPEN_BLOCK *v6; // r15
  unsigned int Number; // r12d
  struct _NET_BUFFER_LIST *Alignment; // r13
  unsigned __int64 Flags; // r8
  bool v10; // cl
  unsigned int v11; // edx
  char v12; // bl
  volatile unsigned int v13; // eax
  _SLIST_HEADER *v14; // rbx
  _QWORD *v15; // rax
  __int64 VerifierContext; // r9
  PNET_BUFFER_LIST v17; // r13
  unsigned int v18; // edx
  PNET_BUFFER_LIST v19; // rcx
  struct _NET_BUFFER_LIST *v20; // r12
  _QWORD *p_Alignment; // r15
  struct _NET_BUFFER_LIST *v22; // r14
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v24; // rdi
  _MDL *CurrentMdl; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // r12
  unsigned __int64 v31; // rdi
  struct _NET_BUFFER_LIST *v32; // r14
  void *v33; // r13
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  struct _NDIS_FILTER_BLOCK *v40; // rdi
  struct _NDIS_FILTER_BLOCK *v41; // rbx
  void (__fastcall *NextReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // r14
  __int64 NextReturnNetBufferListsContext; // r15
  bool IsFilterVerified; // al
  __int64 v45; // r8
  PNET_BUFFER_LIST v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  void **p_Parameter; // rdi
  bool v51; // zf
  _QWORD *v52; // rdx
  struct _NDIS_FILTER_BLOCK *v53; // r12
  __int64 v54; // r13
  _QWORD *v55; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v56; // rax
  __int64 v57; // r8
  _QWORD *v58; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v59; // rax
  __int64 v60; // r8
  _QWORD *v61; // r12
  _QWORD *v62; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v63; // rax
  __int64 v64; // r8
  _QWORD *v65; // rdi
  unsigned int v66; // eax
  unsigned __int64 v67; // rax
  char v68; // r14
  int v69; // edi
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  __int16 v71; // r10
  int v72; // ebx
  KIRQL v73; // al
  KIRQL v74; // r11
  unsigned int v75; // edi
  __int64 v76; // r8
  unsigned __int64 v77; // rax
  unsigned __int16 v78; // ax
  int v79; // eax
  PVOID Context; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v81; // [rsp+40h] [rbp-C0h]
  char v82; // [rsp+41h] [rbp-BFh]
  KIRQL v83; // [rsp+42h] [rbp-BEh]
  KIRQL v84; // [rsp+43h] [rbp-BDh]
  unsigned int v85; // [rsp+44h] [rbp-BCh]
  int v86; // [rsp+4Ch] [rbp-B4h]
  int v87; // [rsp+50h] [rbp-B0h]
  int v88; // [rsp+54h] [rbp-ACh]
  unsigned int v89; // [rsp+58h] [rbp-A8h]
  __int64 v90; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v91; // [rsp+60h] [rbp-A0h]
  __int64 v92; // [rsp+68h] [rbp-98h]
  __int64 v93; // [rsp+70h] [rbp-90h]
  PNET_BUFFER_LIST NetBufferList; // [rsp+78h] [rbp-88h] BYREF
  PNET_BUFFER_LIST *p_NetBufferList; // [rsp+80h] [rbp-80h]
  PNET_BUFFER_LIST v96; // [rsp+88h] [rbp-78h]
  struct _NDIS_FILTER_BLOCK *v97; // [rsp+90h] [rbp-70h]
  unsigned __int64 v98; // [rsp+98h] [rbp-68h]
  void *Parameter; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v100; // [rsp+A8h] [rbp-58h]
  void (__fastcall *v101)(void *, _NET_BUFFER_LIST *, unsigned int); // [rsp+B0h] [rbp-50h]
  GUID v102; // [rsp+B8h] [rbp-48h]
  int v103; // [rsp+C8h] [rbp-38h]
  int v104; // [rsp+CCh] [rbp-34h]
  int v105; // [rsp+D0h] [rbp-30h]
  unsigned int v106; // [rsp+D4h] [rbp-2Ch]
  __int64 v107; // [rsp+D8h] [rbp-28h]
  unsigned int v108; // [rsp+E0h] [rbp-20h]
  int v109; // [rsp+E4h] [rbp-1Ch]
  __int64 Clock; // [rsp+F0h] [rbp-10h]
  _QWORD v111[49]; // [rsp+100h] [rbp+0h] BYREF
  struct _NET_BUFFER_LIST *v113; // [rsp+2D8h] [rbp+1D8h]

  MiniportHandle = a1->MiniportHandle;
  v6 = a1;
  v97 = (struct _NDIS_FILTER_BLOCK *)MiniportHandle;
  Number = -1;
  Clock = 0LL;
  Alignment = a2;
  v92 = 0LL;
  LOWORD(v87) = 0;
  LOBYTE(v88) = 0;
  if ( *((_DWORD *)MiniportHandle + 12) || *((_DWORD *)MiniportHandle + 20) )
  {
    v87 = *((_DWORD *)MiniportHandle + 12);
    v88 = *((_DWORD *)MiniportHandle + 20);
    v92 = *((_QWORD *)MiniportHandle + 5);
    if ( !v92 )
      v92 = *((_QWORD *)MiniportHandle + 5);
  }
  Flags = a2->Flags;
  v10 = a2->SourceHandle == a1;
  v84 = 2;
  v11 = a2->Flags & 0x200;
  if ( (Alignment->NblFlags & 0x8000) != 0 && Alignment->NetBufferListInfo[5] == v6 )
  {
    v10 = 1;
  }
  else if ( !v10 )
  {
    goto LABEL_10;
  }
  if ( !v11 )
  {
LABEL_15:
    if ( (a5 & 2) == 0 )
      ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)MiniportHandle, Alignment, a5 & 1, 0LL);
    return;
  }
LABEL_10:
  if ( *((_BYTE *)MiniportHandle + 1998) && !v6->PacketFilters
    || (v6->PacketFilters & 0x10000) != 0 && !v10 && (Flags & 0x80u) != 0LL )
  {
    goto LABEL_15;
  }
  v12 = a5;
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
    goto LABEL_158;
  switch ( v6->Header.Type )
  {
    case 5u:
      LOBYTE(v13) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v6, 1024);
      break;
    case 0x11u:
      LOBYTE(v13) = ((__int64)v6[3].ReceivePacketHandler & 0x1000) != 0;
      break;
    case 0x12u:
      v13 = v6->OpenFlags >> 31;
      break;
    default:
      goto LABEL_158;
  }
  if ( !(_BYTE)v13 )
  {
LABEL_158:
    if ( (_BYTE)dword_14011EFA0 )
    {
      v68 = 1;
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v68 = 0;
    }
    v69 = v12 & 1;
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        Alignment,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20,
        (unsigned __int64)v6->NblTracker,
        (v12 & 2 | 0x108u) >> 1,
        v12 & 1);
    if ( byte_14011F740 )
    {
      CompContext = v6->PktMonEdge.CompContext;
      if ( CompContext )
      {
        if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
          PktMonClientNblLogNdis(&v6->PktMonEdge, Alignment, Flags, 1LL);
      }
    }
    v71 = v87;
    if ( (v87 & 0x3014) == 0 )
    {
      v72 = v88 & 8;
      if ( (v88 & 8) == 0 )
      {
        v75 = a4;
LABEL_196:
        LODWORD(Context) = a5;
        v6->ReceiveNetBufferLists(v6->ReceiveNetBufferListsContext, Alignment, a3, v75, (unsigned int)Context);
        if ( v72 )
        {
          if ( Number == -1 )
            Number = KeGetPcr()->Prcb.Number;
          v76 = v92 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
          v77 = __rdtsc();
          *(_QWORD *)(v76 + 128) += (((unsigned __int64)HIDWORD(v77) << 32) | (unsigned int)v77)
                                  - *(_QWORD *)(v76 + 328);
          *(_QWORD *)(v76 + 328) = 0LL;
          if ( v84 != 2 )
            KeLowerIrql(v84);
        }
        if ( (a5 & 2) != 0 )
        {
          if ( *(_DWORD *)ndisNblTrackerMode )
            ndisNblTrackerTransferOwnershipInternal(Alignment, v6->NblTracker, 0x20uLL, 0x88u, a5 & 1);
          if ( ndisIsNblContextVeriferEnabled((const struct _NDIS_FILTER_BLOCK *)v6) )
            ndisRemoveNblContextTerminator(Alignment, (struct _NDIS_OBJECT_HEADER *)v6);
        }
        if ( (_BYTE)dword_14011EFA0 )
          WmiGetClock(0LL, 0LL);
        if ( v68 )
        {
          v78 = v6->FrameTypeArray[0];
          if ( v78 == 0xDD86 || v78 == 1544 || v78 == 8 )
          {
            v107 = WmiGetClock(0LL, 0LL) - Clock;
            *(_WORD *)((char *)&Parameter + 5) = 0;
            HIBYTE(Parameter) = 0;
            v79 = (*(_QWORD *)&v97[2].NicSwitchCurrentCapabilities.NdisReserved6 >> 24) & 0xFFFFFF;
            v101 = 0LL;
            v105 = v79;
            v103 = 0;
            v109 = 0;
            v104 = 0x20000;
            v102 = EtwGuidNdisReceive;
            BYTE4(Parameter) = 16;
            v106 = v75;
            v108 = KeGetPcr()->Prcb.Number;
            LODWORD(Parameter) = 72;
            v100 = qword_14011EF98;
            IoWMIWriteEvent(&Parameter);
          }
        }
        return;
      }
      v12 = a5;
    }
    if ( v69 )
    {
      v74 = 2;
    }
    else
    {
      v73 = KfRaiseIrql(2u);
      v71 = v87;
      v74 = v73;
      v84 = v73;
    }
    if ( (v71 & 4) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v92 + ndisPcwPerCpuDataStride * Number + 16);
    }
    if ( (v71 & 0x10) != 0 )
    {
      v75 = a4;
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v92 + ndisPcwPerCpuDataStride * Number + 32) += a4;
    }
    else
    {
      v75 = a4;
    }
    if ( (v12 & 2) != 0 )
    {
      if ( (v71 & 0x1000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v92 + ndisPcwPerCpuDataStride * Number + 232);
      }
      if ( (v71 & 0x2000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v92 + ndisPcwPerCpuDataStride * Number + 240) += v75;
      }
    }
    v72 = v88 & 8;
    if ( (v88 & 8) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v92 + ndisPcwPerCpuDataStride * Number + 328) = __rdtsc();
    }
    else if ( v74 != 2 )
    {
      KeLowerIrql(v74);
    }
    goto LABEL_196;
  }
  NetBufferList = 0LL;
  p_NetBufferList = &NetBufferList;
  memset(&v111[1], 0, 0x178uLL);
  v111[0] = Alignment;
  v14 = (_SLIST_HEADER *)v111;
  do
  {
    if ( NdisAllocateNetBufferListContext(Alignment, 8u, 0, 0x6376444Eu) )
    {
      TrackNblContextVerifierFailure(Alignment, v6);
      v14->Alignment = Alignment->Link.Alignment;
      Alignment->Link.Alignment = 0LL;
      *p_NetBufferList = Alignment;
      p_NetBufferList = &Alignment->Next;
      Alignment = (struct _NET_BUFFER_LIST *)v14->Alignment;
    }
    else
    {
      v14 = (_SLIST_HEADER *)Alignment;
      *(_QWORD *)&Alignment->Context->ContextData[Alignment->Context->Offset] = v6;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
  }
  while ( Alignment );
  v15 = (_QWORD *)v111[0];
  VerifierContext = 0LL;
  v113 = (struct _NET_BUFFER_LIST *)v111[0];
  a4 = 0;
  if ( v111[0] )
  {
    do
    {
      v15 = (_QWORD *)*v15;
      VerifierContext = (unsigned int)(VerifierContext + 1);
    }
    while ( v15 );
    a4 = VerifierContext;
  }
  v17 = NetBufferList;
  v96 = NetBufferList;
  NetBufferList = 0LL;
  p_NetBufferList = &NetBufferList;
  if ( !v96 )
  {
    Alignment = (struct _NET_BUFFER_LIST *)v111[0];
    v12 = a5;
    goto LABEL_158;
  }
  if ( byte_14011F740 && (*((_DWORD *)MiniportHandle + 1468) & 2) != 0 )
    PktMonClientNblDrop(
      (__int64)MiniportHandle + 5816,
      (__int64)v17,
      *((_DWORD *)MiniportHandle + 1467),
      VerifierContext,
      (__int64)Context,
      1,
      3,
      -536866800);
  v12 = a5;
  if ( (a5 & 2) != 0 )
    goto LABEL_155;
  v83 = 2;
  v18 = a5 & 1;
  v93 = 0LL;
  LOBYTE(v86) = 0;
  v89 = -1;
  if ( *((_DWORD *)MiniportHandle + 12) || *((_DWORD *)MiniportHandle + 20) )
  {
    v86 = *((_DWORD *)MiniportHandle + 20);
    v93 = *((_QWORD *)MiniportHandle + 5);
    if ( !v93 )
      v93 = *((_QWORD *)MiniportHandle + 5);
  }
  v19 = v17;
  do
  {
    v19->Flags = v19->Flags & 0xFFFFFFF4 | 8;
    v19 = (PNET_BUFFER_LIST)v19->Link.Alignment;
  }
  while ( v19 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011F740 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v17);
  if ( *((_DWORD *)MiniportHandle + 806) )
  {
    v20 = 0LL;
    p_Alignment = 0LL;
    do
    {
      v22 = (struct _NET_BUFFER_LIST *)v17->Link.Alignment;
      v17->Link.Alignment = 0LL;
      if ( v17->NdisPoolHandle == PoolHandle )
      {
        _InterlockedDecrement((volatile signed __int32 *)MiniportHandle + 806);
        FirstNetBuffer = v17->FirstNetBuffer;
        v24 = (struct _NPAGED_LOOKASIDE_LIST *)v17->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v24 )
          ExFreeToNPagedLookasideList(v24, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v17);
        MiniportHandle = v97;
      }
      else
      {
        if ( v20 )
          *p_Alignment = v17;
        else
          v20 = v17;
        p_Alignment = &v17->Link.Alignment;
      }
      v17 = v22;
    }
    while ( v22 );
    v96 = v20;
    v17 = v20;
    if ( !v20 )
      goto LABEL_154;
    v18 = a5 & 1;
  }
  v26 = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_102;
  v27 = *((_QWORD *)MiniportHandle + 317);
  v28 = 0LL;
  v29 = ndisNblTrackerEpoch;
  v30 = 0LL;
  v90 = 0LL;
  v81 = v18;
  v82 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v17, 0LL, 0x87u, (void *)v27, v18);
  v98 = v27 & 0xFFFFFFFFFFFFFFFDuLL;
  v31 = v27 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v27 & 1) != 0 )
  {
    v96 = v17;
    v31 = (2 * v29) ^ ((2 * v29) ^ v27) & 0xFFFFFFFFFFFFFFFDuLL;
    v98 = *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v32 = v17;
  v33 = (void *)v98;
  do
  {
    v34 = (unsigned __int64)v32->NetBufferListInfo[27];
    while ( v32->NetBufferListInfo[27] == (void *)v34 )
    {
      if ( v34 )
      {
        if ( (v34 & 4) != 0 )
          goto LABEL_81;
      }
      else if ( !v32->SourceHandle )
      {
        v32->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL);
      }
      if ( ndisNblTrackerCanNblBeTracked(v32) )
      {
        if ( v32->SourceHandle != v33 || v32->ParentNetBufferList )
        {
          ++v28;
          v35 = v31;
        }
        else
        {
          ++v30;
          v35 = 24LL;
          ++v28;
        }
        goto LABEL_82;
      }
LABEL_81:
      v35 = v31 | 4;
LABEL_82:
      v32->NetBufferListInfo[27] = (void *)v35;
      v32 = (struct _NET_BUFFER_LIST *)v32->Link.Alignment;
      if ( !v32 )
        break;
    }
    VerifierContext = v81;
    v26 = v90 - v28;
    v91 = v90 - v28;
    if ( (v34 & 1) != 0 && v26 )
    {
      if ( v81 || v82 )
      {
        v26 = 16 * ((v34 >> 1) & 1);
        v36 = v26 + (v34 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v81 )
          goto LABEL_90;
LABEL_99:
        Flags = v91;
        v39 = KeGetPcr()->Prcb.Number << 12;
        v26 = *(_QWORD *)v36;
        *(_QWORD *)(v39 + *(_QWORD *)v36) += v91;
      }
      else
      {
        v82 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          LOBYTE(VerifierContext) = 1;
          v81 = 1;
          v36 = 16 * ((v34 >> 1) & 1) + (v34 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_99;
        }
        LOBYTE(VerifierContext) = 0;
        v26 = 16 * ((v34 >> 1) & 1);
        v81 = 0;
        v36 = v26 + (v34 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_90:
        Flags = v91;
        _InterlockedAdd64((volatile signed __int64 *)(v36 + 8), v91);
      }
    }
    v90 = v28;
  }
  while ( v32 );
  v17 = v96;
  v37 = v28 - v30;
  if ( (v31 & 1) != 0 && v37 )
  {
    if ( (_BYTE)VerifierContext || v82 )
    {
      v26 = 16 * ((v31 >> 1) & 1);
      v38 = v26 + (v31 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)VerifierContext )
        goto LABEL_101;
LABEL_114:
      v48 = KeGetPcr()->Prcb.Number << 12;
      v26 = *(_QWORD *)v38;
      *(_QWORD *)(v48 + *(_QWORD *)v38) += v37;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v38 = 16 * ((v31 >> 1) & 1) + (v31 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_114;
      }
      v26 = 16 * ((v31 >> 1) & 1);
      v38 = v26 + (v31 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_101:
      _InterlockedAdd64((volatile signed __int64 *)(v38 + 8), v37);
    }
  }
LABEL_102:
  if ( (v86 & 0x20) != 0 )
  {
    if ( (a5 & 1) == 0 )
      v83 = KfRaiseIrql(2u);
    v89 = KeGetPcr()->Prcb.Number;
    v26 = __rdtsc();
    Flags = ndisPcwOffsetToPerCpuData;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v89 + v93 + 344) = v26;
  }
  v40 = v97;
  v41 = *(struct _NDIS_FILTER_BLOCK **)&v97[1].NicSwitchCurrentCapabilities.Flags;
  NextReturnNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))&v97[1].NicSwitchCurrentCapabilities.NdisReserved14;
  NextReturnNetBufferListsContext = *(_QWORD *)&v97[1].NicSwitchHwCapabilities.NumberOfIndirectionTableEntriesForDefaultVPort;
  if ( v41->Header.Type == 17 )
    goto LABEL_147;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v26) = KeGetPcr()->Prcb.Number;
    p_Parameter = &Parameter;
    v17->Scratch = 0LL;
    v17->ChildRefCount = a5 & 1;
    v51 = v41->Header.Type == 5;
    v85 = v26;
    v101 = 0LL;
    Parameter = v17;
    v100 = (__int64)v17;
    if ( v51 )
    {
      do
      {
        v52 = *p_Parameter;
        if ( !*p_Parameter )
          break;
        v53 = v41;
        v54 = (__int64)v41->IterativeDataPathTracker[v26];
        if ( *(_BYTE *)(v54 + 88) )
        {
          *p_Parameter = 0LL;
          do
          {
            v59 = ndisVerifierNdisDispatch;
            v60 = *((unsigned int *)v52 + 33);
            v61 = (_QWORD *)v52[14];
            *((_DWORD *)v52 + 33) = 0;
            if ( v59 && v41->Header.Type == 5 && (VerifierContext = (__int64)v41->VerifierContext) != 0 )
            {
              HIDWORD(Context) = HIDWORD(NextReturnNetBufferListsHandler);
              (*((void (__fastcall **)(__int64, _QWORD *, __int64))v59 + 17))(NextReturnNetBufferListsContext, v52, v60);
            }
            else
            {
              ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64))NextReturnNetBufferListsHandler)(
                NextReturnNetBufferListsContext,
                v52,
                v60,
                VerifierContext);
            }
            v52 = v61;
          }
          while ( v61 );
          break;
        }
        *(_BYTE *)(v54 + 88) = 1;
        v55 = *p_Parameter;
        *p_Parameter = 0LL;
        if ( v55 )
        {
          do
          {
            v56 = ndisVerifierNdisDispatch;
            v57 = *((unsigned int *)v55 + 33);
            v58 = (_QWORD *)v55[14];
            *((_DWORD *)v55 + 33) = 0;
            if ( v56 && v41->Header.Type == 5 && (VerifierContext = (__int64)v41->VerifierContext) != 0 )
            {
              HIDWORD(Context) = HIDWORD(NextReturnNetBufferListsHandler);
              (*((void (__fastcall **)(__int64, _QWORD *, __int64))v56 + 17))(NextReturnNetBufferListsContext, v55, v57);
            }
            else
            {
              ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64))NextReturnNetBufferListsHandler)(
                NextReturnNetBufferListsContext,
                v55,
                v57,
                VerifierContext);
            }
            v55 = v58;
          }
          while ( v58 );
        }
        v26 = v85;
        p_Parameter = (void **)(v54 + 72);
        *(_BYTE *)(v54 + 88) = 0;
        v41 = (struct _NDIS_FILTER_BLOCK *)v41->NextReturnNetBufferListsObject;
        NextReturnNetBufferListsHandler = v53->NextReturnNetBufferListsHandler;
        NextReturnNetBufferListsContext = (__int64)v53->NextReturnNetBufferListsContext;
      }
      while ( v41->Header.Type == 5 );
    }
    v62 = *p_Parameter;
    if ( *p_Parameter )
    {
      *p_Parameter = 0LL;
      do
      {
        v63 = ndisVerifierNdisDispatch;
        v64 = *((unsigned int *)v62 + 33);
        v65 = (_QWORD *)v62[14];
        *((_DWORD *)v62 + 33) = 0;
        if ( v63 && v41->Header.Type == 5 && (VerifierContext = (__int64)v41->VerifierContext) != 0 )
        {
          HIDWORD(Context) = HIDWORD(NextReturnNetBufferListsHandler);
          (*((void (__fastcall **)(__int64, _QWORD *, __int64))v63 + 17))(NextReturnNetBufferListsContext, v62, v64);
        }
        else
        {
          ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64))NextReturnNetBufferListsHandler)(
            NextReturnNetBufferListsContext,
            v62,
            v64,
            VerifierContext);
        }
        v62 = v65;
      }
      while ( v65 );
    }
    goto LABEL_149;
  }
  if ( v40->Header.Type != 5 )
  {
LABEL_147:
    v45 = a5 & 1;
    v46 = v17;
    v47 = NextReturnNetBufferListsContext;
    goto LABEL_148;
  }
  if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
  {
    IsFilterVerified = ndisIsFilterVerified(v41);
    v45 = 0LL;
    v46 = v17;
    v47 = NextReturnNetBufferListsContext;
    if ( IsFilterVerified )
    {
      (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))ndisVerifierNdisDispatch
       + 17))(
        NextReturnNetBufferListsContext,
        v17,
        a5 & 1,
        v41->VerifierContext,
        NextReturnNetBufferListsHandler);
      goto LABEL_149;
    }
LABEL_148:
    NextReturnNetBufferListsHandler((void *)v47, v46, v45);
    goto LABEL_149;
  }
  v49 = 24576;
  v104 = 0;
  Parameter = v41;
  v100 = NextReturnNetBufferListsContext;
  v101 = NextReturnNetBufferListsHandler;
  v102 = (GUID)(unsigned __int64)v17;
  v103 = 0;
  if ( (unsigned int)Size > 0x6000 )
    v49 = Size;
  if ( KeExpandKernelStackAndCalloutEx(
         ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
         &Parameter,
         v49,
         0,
         0LL) < 0 )
    ndisQueueStackExpansionFallbackNbls(v40, v17, 0);
LABEL_149:
  if ( (v86 & 0x20) != 0 )
  {
    v66 = v89;
    if ( v89 == -1 )
      v66 = KeGetPcr()->Prcb.Number;
    Flags = v93 + ndisPcwPerCpuDataStride * v66 + ndisPcwOffsetToPerCpuData;
    v67 = __rdtsc();
    *(_QWORD *)(Flags + 144) += (((unsigned __int64)HIDWORD(v67) << 32) | (unsigned int)v67) - *(_QWORD *)(Flags + 344);
    *(_QWORD *)(Flags + 344) = 0LL;
    if ( v83 != 2 )
      KeLowerIrql(v83);
  }
LABEL_154:
  v12 = a5;
  Number = -1;
  v6 = a1;
LABEL_155:
  Alignment = v113;
  if ( v113 )
    goto LABEL_158;
}
