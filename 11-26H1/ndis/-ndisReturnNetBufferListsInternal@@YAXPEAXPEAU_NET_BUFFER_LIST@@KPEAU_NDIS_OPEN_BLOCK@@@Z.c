/*
 * XREFs of ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0
 * Callers:
 *     ?ndisSynchReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14002CDC0 (-ndisSynchReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400339F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x14006ED90 (ndisEmptyPeriodicReceivesQueue.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14007C740 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008F390 (ndisReturnPacketToNetBufferList.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnNetBufferListsInternal(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct _NDIS_OPEN_BLOCK *a4)
{
  struct _NDIS_FILTER_BLOCK *v4; // r12
  struct _NET_BUFFER_LIST *v6; // r13
  struct _NET_BUFFER_LIST *i; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v9; // r14
  _QWORD *p_Alignment; // rsi
  struct _NET_BUFFER_LIST *v11; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v13; // rdi
  _MDL *CurrentMdl; // rbx
  unsigned __int64 v15; // rbx
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // r14
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdi
  _SLIST_HEADER *v22; // rsi
  _UNKNOWN **v23; // rdx
  unsigned __int64 Region; // rbx
  NDIS_NBL_TRACKER_HANDLE__ *v25; // r13
  unsigned __int64 v26; // rax
  unsigned __int8 *v27; // rcx
  __int64 v28; // rax
  int v29; // r13d
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  void (__fastcall *v37)(unsigned __int64, unsigned __int64, __int64); // rsi
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // r14
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // rcx
  int v44; // ecx
  unsigned __int64 *p_LowLimit; // rdi
  bool v46; // zf
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r15
  __int64 v49; // r14
  unsigned __int64 v50; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v51; // rax
  __int64 v52; // r8
  unsigned __int64 v53; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v54; // rax
  __int64 v55; // r8
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v58; // rax
  __int64 v59; // r8
  unsigned __int64 v60; // rdi
  unsigned int v61; // eax
  char *v62; // r8
  unsigned __int64 v63; // rax
  __int64 v64; // [rsp+30h] [rbp-98h]
  char v65; // [rsp+40h] [rbp-88h]
  KIRQL v66; // [rsp+41h] [rbp-87h]
  int v67; // [rsp+44h] [rbp-84h]
  int v68; // [rsp+48h] [rbp-80h]
  unsigned int Number; // [rsp+4Ch] [rbp-7Ch]
  Rtl::KString *value; // [rsp+50h] [rbp-78h]
  unsigned __int64 LowLimit; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 HighLimit; // [rsp+60h] [rbp-68h] BYREF
  void (__fastcall *v73)(unsigned __int64, unsigned __int64, __int64); // [rsp+68h] [rbp-60h]
  struct _NET_BUFFER_LIST *v74; // [rsp+70h] [rbp-58h]
  __int64 v75; // [rsp+78h] [rbp-50h]
  unsigned int v76; // [rsp+80h] [rbp-48h]
  int v77; // [rsp+84h] [rbp-44h]
  NDIS_NBL_TRACKER_HANDLE__ *v78; // [rsp+88h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  struct _NET_BUFFER_LIST *v81; // [rsp+D8h] [rbp+10h]
  unsigned int v82; // [rsp+E0h] [rbp+18h]

  v82 = a3;
  v81 = a2;
  v4 = a1;
  v66 = 2;
  Number = -1;
  v6 = a2;
  value = 0LL;
  LOBYTE(v68) = 0;
  if ( LODWORD(a1->FilterFriendlyName) || *(_DWORD *)&a1->Ref.ReferenceCount )
  {
    v68 = *(_DWORD *)&a1->Ref.ReferenceCount;
    value = a1->FilterInstanceName.__ptr_.__value_;
    if ( !value )
      value = a1->FilterInstanceName.__ptr_.__value_;
  }
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011F740 )
  {
    Alignment = a2;
    if ( a2 )
    {
      if ( byte_14011F740 )
      {
        do
        {
          Alignment->NetBufferListInfo[13] = 0LL;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
      else
      {
        do
        {
          Alignment->NetBufferListInfo[13] = (void *)((unsigned __int64)Alignment->NetBufferListInfo[13] | 0x8000000000000000uLL);
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
    }
  }
  if ( *(_DWORD *)&v4[2].XState )
  {
    v9 = 0LL;
    p_Alignment = 0LL;
    if ( a2 )
    {
      do
      {
        v11 = (struct _NET_BUFFER_LIST *)v6->Link.Alignment;
        v6->Link.Alignment = 0LL;
        if ( v6->NdisPoolHandle == PoolHandle )
        {
          _InterlockedDecrement((volatile signed __int32 *)&v4[2].XState);
          FirstNetBuffer = v6->FirstNetBuffer;
          v13 = (struct _NPAGED_LOOKASIDE_LIST *)v6->MiniportReserved[1];
          CurrentMdl = FirstNetBuffer->CurrentMdl;
          if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
          if ( v13 )
            ExFreeToNPagedLookasideList(v13, CurrentMdl);
          else
            ExFreePoolWithTag(CurrentMdl, 0);
          NdisFreeNetBufferList(v6);
        }
        else
        {
          if ( v9 )
            *p_Alignment = v6;
          else
            v9 = v6;
          p_Alignment = &v6->Link.Alignment;
        }
        v6 = v11;
      }
      while ( v11 );
      LOBYTE(a3) = v82;
    }
    v6 = v9;
    v81 = v9;
  }
  if ( !v6 )
    return;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_83;
  v15 = *(_QWORD *)&v4[1].NicSwitchHwCapabilities.MaxNumQueuePairsForDefaultVPort;
  v67 = a3 & 1;
  if ( a4 )
    NblTracker = a4->NblTracker;
  else
    NblTracker = 0LL;
  v17 = ndisNblTrackerEpoch;
  v18 = 0LL;
  v78 = NblTracker;
  v19 = 0LL;
  LowLimit = 0LL;
  v65 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v6, (unsigned __int64)NblTracker, 0x87u, (void *)v15, a3 & 1);
  v20 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  v21 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v15 & 1) != 0 )
  {
    v21 = (2 * v17) ^ (v15 ^ (2 * v17)) & 0xFFFFFFFFFFFFFFFDuLL;
    v20 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v22 = (_SLIST_HEADER *)v6;
  v23 = &WPP_RECORDER_INITIALIZED;
  do
  {
    Region = v22[22].Region;
    v25 = v78;
    while ( v22[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_52;
      }
      else if ( !v22[7].Region )
      {
        v26 = (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( ((unsigned __int8)v25 & 1) != 0 )
          v26 = *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v22[7].Region = v26;
      }
      v27 = (unsigned __int8 *)v22[7].Region;
      if ( v27 )
      {
        v32 = *v27;
        if ( *v27 == 17 || v32 == 5 || v32 == 18 )
        {
          if ( v27 != (unsigned __int8 *)v20 || v22[1].Region )
          {
            ++v18;
            v28 = v21;
          }
          else
          {
            ++v19;
            v28 = 24LL;
            ++v18;
          }
          goto LABEL_53;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v64) = *v27;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v22,
            v64);
          goto LABEL_51;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v23,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)v22);
LABEL_51:
        v23 = &WPP_RECORDER_INITIALIZED;
      }
LABEL_52:
      v28 = v21 | 4;
LABEL_53:
      v22[22].Region = v28;
      v22 = (_SLIST_HEADER *)v22->Alignment;
      if ( !v22 )
        break;
    }
    v29 = v67;
    v30 = LowLimit - v18;
    if ( (Region & 1) != 0 && v30 )
    {
      if ( (_BYTE)v67 || v65 )
      {
        v31 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !(_BYTE)v67 )
          goto LABEL_70;
LABEL_79:
        v35 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v35 + *(_QWORD *)v31) += v30;
      }
      else
      {
        v65 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          LOBYTE(v29) = 1;
          v67 = v29;
          v31 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_79;
        }
        LOBYTE(v29) = 0;
        v67 = v29;
        v31 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_70:
        _InterlockedAdd64((volatile signed __int64 *)(v31 + 8), v30);
      }
    }
    LowLimit = v18;
    v23 = &WPP_RECORDER_INITIALIZED;
  }
  while ( v22 );
  v6 = v81;
  v33 = v18 - v19;
  if ( (v21 & 1) != 0 && v33 )
  {
    if ( (_BYTE)v67 || v65 )
    {
      v34 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v67 )
        goto LABEL_81;
LABEL_100:
      v43 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v43 + *(_QWORD *)v34) += v33;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v34 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_100;
      }
      v34 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_81:
      _InterlockedAdd64((volatile signed __int64 *)(v34 + 8), v33);
    }
  }
  v4 = a1;
LABEL_83:
  if ( (v68 & 0x20) != 0 )
  {
    if ( (v82 & 1) == 0 )
      v66 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    *(wchar_t **)((char *)&value[21].Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData) = (wchar_t *)__rdtsc();
  }
  v36 = *(_QWORD *)&v4[1].NicSwitchCurrentCapabilities.Flags;
  v37 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))&v4[1].NicSwitchCurrentCapabilities.NdisReserved14;
  v38 = *(_QWORD *)&v4[1].NicSwitchHwCapabilities.NumberOfIndirectionTableEntriesForDefaultVPort;
  if ( *(_BYTE *)v36 == 17 )
    goto LABEL_133;
  if ( (v82 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    p_LowLimit = &LowLimit;
    v6->ChildRefCount = v82;
    v6->Scratch = 0LL;
    v46 = *(_BYTE *)v36 == 5;
    v73 = 0LL;
    LowLimit = (unsigned __int64)v6;
    HighLimit = (unsigned __int64)v6;
    if ( v46 )
    {
      do
      {
        v47 = *p_LowLimit;
        if ( !*p_LowLimit )
          break;
        v48 = v36;
        v49 = *(_QWORD *)(v36 + 424) + 96LL * (_QWORD)v4;
        if ( *(_BYTE *)(v49 + 88) )
        {
          *p_LowLimit = 0LL;
          do
          {
            v54 = ndisVerifierNdisDispatch;
            v55 = *(unsigned int *)(v47 + 132);
            v56 = *(_QWORD *)(v47 + 112);
            *(_DWORD *)(v47 + 132) = 0;
            if ( v54 && *(_BYTE *)v36 == 5 && *(_QWORD *)(v36 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v54 + 17))(v38, v47, v55);
            else
              v37(v38, v47, v55);
            v47 = v56;
          }
          while ( v56 );
          break;
        }
        *(_BYTE *)(v49 + 88) = 1;
        v50 = *p_LowLimit;
        *p_LowLimit = 0LL;
        if ( v50 )
        {
          do
          {
            v51 = ndisVerifierNdisDispatch;
            v52 = *(unsigned int *)(v50 + 132);
            v53 = *(_QWORD *)(v50 + 112);
            *(_DWORD *)(v50 + 132) = 0;
            if ( v51 && *(_BYTE *)v36 == 5 && *(_QWORD *)(v36 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v51 + 17))(v38, v50, v52);
            else
              v37(v38, v50, v52);
            v50 = v53;
          }
          while ( v53 );
        }
        *(_BYTE *)(v49 + 88) = 0;
        p_LowLimit = (unsigned __int64 *)(v49 + 72);
        v36 = *(_QWORD *)(v36 + 552);
        v37 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(v48 + 528);
        v38 = *(_QWORD *)(v48 + 536);
      }
      while ( *(_BYTE *)v36 == 5 );
    }
    v57 = *p_LowLimit;
    if ( *p_LowLimit )
    {
      *p_LowLimit = 0LL;
      do
      {
        v58 = ndisVerifierNdisDispatch;
        v59 = *(unsigned int *)(v57 + 132);
        v60 = *(_QWORD *)(v57 + 112);
        *(_DWORD *)(v57 + 132) = 0;
        if ( v58 && *(_BYTE *)v36 == 5 && *(_QWORD *)(v36 + 776) )
          (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v58 + 17))(v38, v57, v59);
        else
          v37(v38, v57, v59);
        v57 = v60;
      }
      while ( v60 );
    }
  }
  else
  {
    if ( v4->Header.Type != 5 )
      goto LABEL_133;
    v39 = (unsigned int)Size;
    v40 = KeGetPcr()->Prcb.Number << 12;
    v41 = *(_QWORD *)(v40 + qword_14011EF88);
    LowLimit = v41;
    v42 = *(_QWORD *)(v40 + qword_14011EF80);
    HighLimit = v42;
    if ( v41 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v42 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v41 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v41 >= v39 )
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v36 == 5 && *(_QWORD *)(v36 + 776) )
      {
        (*((void (__fastcall **)(unsigned __int64, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 17))(
          v38,
          v6,
          v82);
        goto LABEL_134;
      }
LABEL_133:
      v37(v38, (unsigned __int64)v6, v82);
      goto LABEL_134;
    }
    v44 = 24576;
    v77 = 0;
    LowLimit = v36;
    HighLimit = v38;
    v73 = v37;
    v74 = v6;
    v75 = 0LL;
    v76 = v82;
    if ( (unsigned int)Size > 0x6000 )
      v44 = Size;
    if ( KeExpandKernelStackAndCalloutEx(
           ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
           &LowLimit,
           v44,
           0,
           0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls(v4, v6, 0);
  }
LABEL_134:
  if ( (v68 & 0x20) != 0 )
  {
    v61 = Number;
    if ( Number == -1 )
      v61 = KeGetPcr()->Prcb.Number;
    v62 = (char *)value + ndisPcwPerCpuDataStride * v61 + ndisPcwOffsetToPerCpuData;
    v63 = __rdtsc();
    *((_QWORD *)v62 + 18) += (((unsigned __int64)HIDWORD(v63) << 32) | (unsigned int)v63) - *((_QWORD *)v62 + 43);
    *((_QWORD *)v62 + 43) = 0LL;
    if ( v66 != 2 )
      KeLowerIrql(v66);
  }
}
