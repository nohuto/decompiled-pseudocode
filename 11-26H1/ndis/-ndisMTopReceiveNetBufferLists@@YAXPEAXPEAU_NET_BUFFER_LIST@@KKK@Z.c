/*
 * XREFs of ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14002CE00 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDrop @ 0x14002F8C0 (PktMonClientNblDrop.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1400325E0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14004A510 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140052660 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMTopReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v7; // r12
  struct _NDIS_FILTER_BLOCK *v8; // r13
  struct _NET_BUFFER_LIST *v9; // rsi
  char v10; // r15
  unsigned int Number; // edi
  struct _NDIS_RCV_TRACKER_ARRAY *v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  char *v15; // r14
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NDIS_OPEN_BLOCK *v18; // rdi
  __int64 v19; // r9
  struct _NDIS_OPEN_BLOCK *v20; // rdi
  unsigned int v21; // esi
  unsigned int v22; // ebp
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  __int64 v24; // rbx
  __int64 v25; // rcx
  struct _NDIS_OPEN_BLOCK *v26; // rdi
  unsigned int v27; // esi
  unsigned int v28; // r13d
  unsigned int v29; // ebp
  int v30; // r12d
  struct _NDIS_OPEN_BLOCK *i; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int j; // ebx
  __int64 v36; // rdx
  unsigned int v37; // r13d
  struct _NDIS_OPEN_BLOCK *v38; // rbp
  __int64 v39; // rbx
  __int64 v40; // rcx
  struct _NET_BUFFER_LIST *v41; // rcx
  struct _NET_BUFFER_LIST *v42; // r15
  _QWORD *p_Alignment; // rsi
  struct _NET_BUFFER_LIST *v44; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v46; // rdi
  _MDL *CurrentMdl; // rbx
  unsigned __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rbp
  __int64 v51; // r15
  unsigned __int64 v52; // r13
  unsigned __int64 v53; // rdi
  _SLIST_HEADER *v54; // rsi
  unsigned __int64 Region; // rbx
  unsigned __int8 *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int8 v59; // al
  unsigned __int64 v60; // rbp
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rbx
  void (__fastcall *v65)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64); // rsi
  struct _NET_BUFFER_LIST *v66; // rbp
  __int64 v67; // rcx
  int v68; // ecx
  struct _NET_BUFFER_LIST **p_Parameter; // rdi
  bool v70; // zf
  struct _NET_BUFFER_LIST *v71; // rdx
  __int64 v72; // r13
  __int64 v73; // r15
  struct _NET_BUFFER_LIST *v74; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v75; // rax
  __int64 v76; // r8
  struct _NET_BUFFER_LIST *v77; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v78; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // r15
  struct _NET_BUFFER_LIST *v81; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v82; // rax
  __int64 v83; // r8
  struct _NET_BUFFER_LIST *v84; // rdi
  unsigned int v85; // eax
  char *v86; // r8
  unsigned __int64 v87; // rax
  PVOID Context; // [rsp+20h] [rbp-B8h]
  __int64 v89; // [rsp+30h] [rbp-A8h]
  char v90; // [rsp+40h] [rbp-98h]
  char v91; // [rsp+41h] [rbp-97h]
  KIRQL v92; // [rsp+42h] [rbp-96h]
  char v93; // [rsp+43h] [rbp-95h]
  unsigned int v94; // [rsp+44h] [rbp-94h]
  int v95; // [rsp+48h] [rbp-90h]
  unsigned int v96; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v97; // [rsp+50h] [rbp-88h]
  __int64 v98; // [rsp+58h] [rbp-80h]
  unsigned __int64 v99; // [rsp+58h] [rbp-80h]
  Rtl::KString *value; // [rsp+60h] [rbp-78h]
  __int64 Pool2; // [rsp+68h] [rbp-70h]
  struct _NET_BUFFER_LIST *Parameter; // [rsp+70h] [rbp-68h] BYREF
  struct _NET_BUFFER_LIST *v103; // [rsp+78h] [rbp-60h]
  void (__fastcall *v104)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64); // [rsp+80h] [rbp-58h]
  struct _NET_BUFFER_LIST *v105; // [rsp+88h] [rbp-50h]
  __int64 v106; // [rsp+90h] [rbp-48h]
  int v107; // [rsp+98h] [rbp-40h]
  int v108; // [rsp+9Ch] [rbp-3Ch]
  unsigned int v110; // [rsp+E0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v111; // [rsp+E8h] [rbp+10h]

  v111 = a2;
  v7 = a2;
  v8 = a1;
  if ( (a2->NblFlags & 0x8000) != 0 )
  {
    ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *))a1[1].PMProtocolOffloadList.Next)(
      a1,
      a2);
    return;
  }
  if ( !BYTE1(a1[1].NicSwitchCurrentCapabilities.NumberOfIndirectionTableEntriesPerNonDefaultPFVPort) )
  {
    ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *))a1[1].WOLPatternList.Next)(a1);
    return;
  }
  v9 = 0LL;
  v10 = a5;
  v97 = 0;
  v93 = 0;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    if ( ndisPerProcRcvTrackers )
    {
      Number = KeGetPcr()->Prcb.Number;
      v12 = ndisPerProcRcvTrackers;
      v13 = 2096LL * Number;
      v97 = Number;
      v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13);
      if ( (unsigned int)v14 < 3 )
      {
        v93 = 1;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
        v15 = (char *)v12 + 696 * v14 + v13 + 8;
        Pool2 = (__int64)v15;
LABEL_9:
        RcvLinkSpeedIndicateUp = (_QWORD *)v8->RcvLinkSpeedIndicateUp;
        Alignment = v7;
        v15[692] = 0;
        if ( (a5 & 2) == 0 )
        {
          do
          {
            v9 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v18 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[41];
        if ( v18 && v18->ProtocolHandle->MajorNdisVersion >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v18, v7, a3, a4, a5);
          *((_QWORD *)v15 + 8) = 0LL;
          *((_DWORD *)v15 + 20) = 0;
        }
        else
        {
          *(_QWORD *)v15 = a1;
          *((_QWORD *)v15 + 3) = v7;
          *((_QWORD *)v15 + 1) = RcvLinkSpeedIndicateUp;
          *((_DWORD *)v15 + 4) = a5;
          *((_QWORD *)v15 + 4) = v9;
          *((_DWORD *)v15 + 10) = a3;
          *((_DWORD *)v15 + 11) = a4;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v15, v14, v13);
          if ( *((_QWORD *)v15 + 8) || *((_DWORD *)v15 + 172) )
          {
            if ( !*RcvLinkSpeedIndicateUp || a3 )
              v15[692] = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v15);
            if ( !v18 )
            {
              v20 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[1];
              if ( v20 )
              {
                v21 = *((_DWORD *)v15 + 172);
                v22 = *((_DWORD *)v15 + 4) | 2;
                do
                {
                  FilterNextOpen = v20->FilterNextOpen;
                  v24 = 0LL;
                  do
                  {
                    v25 = (unsigned int)v24;
                    v14 = *(_QWORD *)&v15[40 * v24 + 64];
                    v24 = (unsigned int)(v24 + 1);
                    if ( v14 )
                      ndisMIndicateNetBufferListsToOpen(
                        v20,
                        (struct _NET_BUFFER_LIST *)v14,
                        *((_DWORD *)v15 + 10),
                        *(_DWORD *)&v15[40 * v25 + 80],
                        v22);
                  }
                  while ( (unsigned int)v24 <= v21 );
                  v20 = FilterNextOpen;
                }
                while ( FilterNextOpen );
                v10 = a5;
              }
              v26 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
              if ( v26 )
              {
                v27 = *((_DWORD *)v15 + 172);
                v28 = *((_DWORD *)v15 + 4);
                if ( (v10 & 2) != 0 )
                {
                  v37 = v28 | 2;
                  do
                  {
                    v38 = v26->FilterNextOpen;
                    v39 = 0LL;
                    do
                    {
                      v40 = (unsigned int)v39;
                      v14 = *(_QWORD *)&v15[40 * v39 + 64];
                      v39 = (unsigned int)(v39 + 1);
                      if ( v14 )
                        ndisMIndicateNetBufferListsToOpen(
                          v26,
                          (struct _NET_BUFFER_LIST *)v14,
                          *((_DWORD *)v15 + 10),
                          *(_DWORD *)&v15[40 * v40 + 80],
                          v37);
                    }
                    while ( (unsigned int)v39 <= v27 );
                    v26 = v38;
                  }
                  while ( v38 );
                }
                else
                {
                  v29 = *((_DWORD *)v15 + 10);
                  v30 = *(_DWORD *)(*(_QWORD *)v15 + 2244LL);
                  if ( v30 )
                  {
                    for ( i = *(struct _NDIS_OPEN_BLOCK **)(*((_QWORD *)v15 + 1) + 16LL); i; i = i->FilterNextOpen )
                    {
                      if ( (i->OpenFlags & 4) != 0 )
                      {
                        v32 = 0LL;
                        do
                        {
                          v33 = 5 * v32;
                          v34 = (unsigned int)v32;
                          v14 = *(_QWORD *)&v15[40 * v32 + 64];
                          v32 = (unsigned int)(v32 + 1);
                          if ( v14 && *(struct _NDIS_OPEN_BLOCK **)&v15[8 * v33 + 56] != i )
                            ndisMIndicateNetBufferListsToOpen(
                              i,
                              (struct _NET_BUFFER_LIST *)v14,
                              v29,
                              *(_DWORD *)&v15[40 * v34 + 80],
                              v28 | 2);
                        }
                        while ( (unsigned int)v32 <= v27 );
                        if ( !--v30 )
                          break;
                      }
                    }
                    v10 = a5;
                  }
                  for ( j = 1; j <= v27; ++j )
                  {
                    v36 = j;
                    ndisMIndicateNetBufferListsToOpen(
                      *(struct _NDIS_OPEN_BLOCK **)&v15[40 * v36 + 56],
                      *(struct _NET_BUFFER_LIST **)&v15[40 * v36 + 64],
                      v29,
                      *(_DWORD *)&v15[40 * v36 + 80],
                      v28);
                  }
                }
              }
            }
          }
        }
        if ( !v15[692] )
          goto LABEL_184;
        v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v15 + 8);
        v8 = a1;
        v111 = v7;
        goto LABEL_56;
      }
    }
  }
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
  v15 = (char *)Pool2;
  if ( Pool2 )
    goto LABEL_9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      4,
      11,
      (struct _GUID *)&WPP_f4de16de262a370e16e06d291696dc3d_Traceguids);
  }
LABEL_56:
  if ( !v7 )
    goto LABEL_184;
  if ( byte_14011F740 && ((__int64)v8[4].PendingOidRequest & 2) != 0 )
    PktMonClientNblDrop(
      (__int64)&v8[4].HigherFilter,
      (__int64)v7,
      HIDWORD(v8[4].OidRequestList.Blink),
      v19,
      (__int64)Context,
      1,
      204,
      -536866809);
  if ( (v10 & 2) != 0 )
    goto LABEL_184;
  v92 = 2;
  v94 = v10 & 1;
  value = 0LL;
  LOBYTE(v95) = 0;
  v96 = -1;
  if ( LODWORD(v8->FilterFriendlyName) || *(_DWORD *)&v8->Ref.ReferenceCount )
  {
    v95 = *(_DWORD *)&v8->Ref.ReferenceCount;
    value = v8->FilterInstanceName.__ptr_.__value_;
    if ( !value )
      value = v8->FilterInstanceName.__ptr_.__value_;
  }
  v41 = v7;
  do
  {
    v41->Flags = v41->Flags & 0xFFFFFFF4 | 8;
    v41 = (struct _NET_BUFFER_LIST *)v41->Link.Alignment;
  }
  while ( v41 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled
    || byte_14011F740 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
  }
  if ( *(_DWORD *)&v8[2].XState )
  {
    v42 = 0LL;
    p_Alignment = 0LL;
    do
    {
      v44 = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
      v7->Link.Alignment = 0LL;
      if ( v7->NdisPoolHandle == PoolHandle )
      {
        _InterlockedDecrement((volatile signed __int32 *)&v8[2].XState);
        FirstNetBuffer = v7->FirstNetBuffer;
        v46 = (struct _NPAGED_LOOKASIDE_LIST *)v7->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v46 )
          ExFreeToNPagedLookasideList(v46, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v7);
      }
      else
      {
        if ( v42 )
          *p_Alignment = v7;
        else
          v42 = v7;
        p_Alignment = &v7->Link.Alignment;
      }
      v7 = v44;
    }
    while ( v44 );
    v111 = v42;
    v7 = v42;
    if ( !v42 )
      goto LABEL_184;
  }
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_131;
  v48 = *(_QWORD *)&v8[1].NicSwitchHwCapabilities.MaxNumQueuePairsForDefaultVPort;
  v49 = ndisNblTrackerEpoch;
  v50 = 0LL;
  v98 = 0LL;
  v51 = 0LL;
  v90 = v94;
  v91 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v7, 0LL, 0x87u, (void *)v48, v94);
  v52 = v48 & 0xFFFFFFFFFFFFFFFDuLL;
  v53 = v48 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v48 & 1) != 0 )
  {
    v111 = v7;
    v53 = (2 * v49) ^ (v48 ^ (2 * v49)) & 0xFFFFFFFFFFFFFFFDuLL;
    v52 = *(_QWORD *)((v48 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v54 = (_SLIST_HEADER *)v7;
  do
  {
    Region = v54[22].Region;
    while ( v54[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_100;
      }
      else if ( !v54[7].Region )
      {
        v54[7].Region = 0LL;
      }
      v56 = (unsigned __int8 *)v54[7].Region;
      if ( v56 )
      {
        v59 = *v56;
        if ( *v56 == 17 || v59 == 5 || v59 == 18 )
        {
          if ( v56 != (unsigned __int8 *)v52 || v54[1].Region )
          {
            ++v50;
            v57 = v53;
          }
          else
          {
            ++v51;
            v57 = 24LL;
            ++v50;
          }
          goto LABEL_101;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = *v56;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v54,
            v89);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)v54);
      }
LABEL_100:
      v57 = v53 | 4;
LABEL_101:
      v54[22].Region = v57;
      v54 = (_SLIST_HEADER *)v54->Alignment;
      if ( !v54 )
        break;
    }
    v58 = v98 - v50;
    v99 = v98 - v50;
    if ( (Region & 1) != 0 && v58 )
    {
      if ( v90 || v91 )
      {
        v14 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v90 )
          goto LABEL_118;
LABEL_127:
        v62 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v62 + *(_QWORD *)v14) += v99;
      }
      else
      {
        v91 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          v90 = 1;
          v14 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_127;
        }
        v90 = 0;
        v14 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_118:
        _InterlockedAdd64((volatile signed __int64 *)(v14 + 8), v99);
      }
    }
    v98 = v50;
  }
  while ( v54 );
  v15 = (char *)Pool2;
  v60 = v50 - v51;
  v7 = v111;
  if ( (v53 & 1) != 0 && v60 )
  {
    if ( v90 || v91 )
    {
      v61 = 16 * ((v53 >> 1) & 1) + (v53 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v90 )
        goto LABEL_129;
LABEL_145:
      v67 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v67 + *(_QWORD *)v61) += v60;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v61 = 16 * ((v53 >> 1) & 1) + (v53 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_145;
      }
      v61 = 16 * ((v53 >> 1) & 1) + (v53 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_129:
      _InterlockedAdd64((volatile signed __int64 *)(v61 + 8), v60);
    }
  }
  v8 = a1;
LABEL_131:
  v63 = v95 & 0x20;
  if ( (v95 & 0x20) != 0 )
  {
    if ( !v94 )
      v92 = KfRaiseIrql(2u);
    v96 = KeGetPcr()->Prcb.Number;
    v63 = __rdtsc();
    *(wchar_t **)((char *)&value[21].Buffer + ndisPcwPerCpuDataStride * v96 + ndisPcwOffsetToPerCpuData) = (wchar_t *)v63;
  }
  v64 = *(_QWORD *)&v8[1].NicSwitchCurrentCapabilities.Flags;
  v65 = *(void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))&v8[1].NicSwitchCurrentCapabilities.NdisReserved14;
  v66 = *(struct _NET_BUFFER_LIST **)&v8[1].NicSwitchHwCapabilities.NumberOfIndirectionTableEntriesForDefaultVPort;
  if ( *(_BYTE *)v64 == 17 )
    goto LABEL_178;
  if ( v94 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v63) = KeGetPcr()->Prcb.Number;
    p_Parameter = &Parameter;
    v7->ChildRefCount = v94;
    v7->Scratch = 0LL;
    v70 = *(_BYTE *)v64 == 5;
    v110 = v63;
    v104 = 0LL;
    Parameter = v7;
    v103 = v7;
    if ( v70 )
    {
      do
      {
        v71 = *p_Parameter;
        if ( !*p_Parameter )
          break;
        v72 = v64;
        v73 = *(_QWORD *)(v64 + 424) + 96 * v63;
        if ( *(_BYTE *)(v73 + 88) )
        {
          *p_Parameter = 0LL;
          do
          {
            v78 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v71->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v71->Scratch;
            v71->ChildRefCount = 0;
            if ( v78 && *(_BYTE *)v64 == 5 && *(_QWORD *)(v64 + 776) )
              (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))v78 + 17))(
                v66,
                v71,
                ChildRefCount);
            else
              v65(v66, v71, ChildRefCount);
            v71 = Scratch;
          }
          while ( Scratch );
          break;
        }
        *(_BYTE *)(v73 + 88) = 1;
        v74 = *p_Parameter;
        *p_Parameter = 0LL;
        if ( v74 )
        {
          do
          {
            v75 = ndisVerifierNdisDispatch;
            v76 = (unsigned int)v74->ChildRefCount;
            v77 = (struct _NET_BUFFER_LIST *)v74->Scratch;
            v74->ChildRefCount = 0;
            if ( v75 && *(_BYTE *)v64 == 5 && *(_QWORD *)(v64 + 776) )
              (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))v75 + 17))(
                v66,
                v74,
                v76);
            else
              v65(v66, v74, v76);
            v74 = v77;
          }
          while ( v77 );
        }
        v63 = v110;
        p_Parameter = (struct _NET_BUFFER_LIST **)(v73 + 72);
        *(_BYTE *)(v73 + 88) = 0;
        v64 = *(_QWORD *)(v64 + 552);
        v65 = *(void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))(v72 + 528);
        v66 = *(struct _NET_BUFFER_LIST **)(v72 + 536);
      }
      while ( *(_BYTE *)v64 == 5 );
    }
    v81 = *p_Parameter;
    if ( *p_Parameter )
    {
      *p_Parameter = 0LL;
      do
      {
        v82 = ndisVerifierNdisDispatch;
        v83 = (unsigned int)v81->ChildRefCount;
        v84 = (struct _NET_BUFFER_LIST *)v81->Scratch;
        v81->ChildRefCount = 0;
        if ( v82 && *(_BYTE *)v64 == 5 && *(_QWORD *)(v64 + 776) )
          (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, __int64))v82 + 17))(
            v66,
            v81,
            v83);
        else
          v65(v66, v81, v83);
        v81 = v84;
      }
      while ( v84 );
    }
  }
  else
  {
    if ( v8->Header.Type != 5 )
      goto LABEL_178;
    if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v64 == 5 && *(_QWORD *)(v64 + 776) )
      {
        (*((void (__fastcall **)(struct _NET_BUFFER_LIST *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch
         + 17))(
          v66,
          v7,
          0LL);
        goto LABEL_179;
      }
LABEL_178:
      v65(v66, v7, v94);
      goto LABEL_179;
    }
    Parameter = (struct _NET_BUFFER_LIST *)v64;
    v108 = 0;
    v68 = 24576;
    v106 = 0LL;
    v103 = v66;
    v104 = v65;
    v105 = v7;
    v107 = 0;
    if ( (unsigned int)Size > 0x6000 )
      v68 = Size;
    if ( KeExpandKernelStackAndCalloutEx(
           ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
           &Parameter,
           v68,
           0,
           0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls(v8, v7, 0);
  }
LABEL_179:
  if ( (v95 & 0x20) != 0 )
  {
    v85 = v96;
    if ( v96 == -1 )
      v85 = KeGetPcr()->Prcb.Number;
    v86 = (char *)value + ndisPcwPerCpuDataStride * v85 + ndisPcwOffsetToPerCpuData;
    v87 = __rdtsc();
    *((_QWORD *)v86 + 18) += (((unsigned __int64)HIDWORD(v87) << 32) | (unsigned int)v87) - *((_QWORD *)v86 + 43);
    *((_QWORD *)v86 + 43) = 0LL;
    if ( v92 != 2 )
      KeLowerIrql(v92);
  }
LABEL_184:
  if ( v93 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v97);
  }
  else if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
  }
}
