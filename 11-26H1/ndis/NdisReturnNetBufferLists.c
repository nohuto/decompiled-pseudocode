/*
 * XREFs of NdisReturnNetBufferLists @ 0x14003B6A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBufferListContext @ 0x140042540 (NdisFreeNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140076C50 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A53B8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  __int64 v3; // r12
  PNET_BUFFER_LIST v4; // r13
  KIRQL v5; // si
  unsigned int Number; // edi
  char v7; // r14
  int v9; // ebp
  PNET_BUFFER_LIST Alignment; // rdi
  char v11; // si
  unsigned int Flags; // eax
  unsigned int v13; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rbx
  int v15; // eax
  struct _NET_BUFFER_LIST *j; // rbx
  unsigned int v17; // r8d
  _SLIST_HEADER *v18; // rax
  PNET_BUFFER_LIST k; // rcx
  _SLIST_HEADER *v20; // rax
  struct _NET_BUFFER_LIST *v21; // r14
  _QWORD *p_Alignment; // rsi
  struct _NET_BUFFER_LIST *v23; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v25; // rdi
  _MDL *CurrentMdl; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  unsigned int v29; // ecx
  __int64 v30; // rsi
  __int64 v31; // rbp
  __int64 v32; // r14
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rdi
  _SLIST_HEADER *v35; // rsi
  _UNKNOWN **v36; // rdx
  unsigned __int64 Region; // rbx
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rax
  unsigned __int8 *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // r13d
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rdx
  unsigned __int8 v45; // al
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rbx
  void (__fastcall *v50)(unsigned __int64, unsigned __int64, __int64); // rsi
  unsigned __int64 v51; // rbp
  unsigned __int64 v52; // r14
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  int v57; // ecx
  unsigned __int64 *p_LowLimit; // rdi
  bool v59; // zf
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r15
  __int64 v62; // r14
  unsigned __int64 v63; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v64; // rax
  __int64 v65; // r8
  unsigned __int64 v66; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v67; // rax
  __int64 v68; // r8
  unsigned __int64 v69; // r14
  unsigned __int64 v70; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v71; // rax
  __int64 v72; // r8
  unsigned __int64 v73; // rdi
  unsigned int v74; // eax
  __int64 v75; // r8
  unsigned __int64 v76; // rax
  unsigned int v77; // eax
  __int64 v78; // r8
  unsigned __int64 v79; // rax
  __int64 v80; // [rsp+30h] [rbp-C8h]
  KIRQL v81; // [rsp+40h] [rbp-B8h]
  int v82; // [rsp+44h] [rbp-B4h]
  unsigned int v83; // [rsp+48h] [rbp-B0h]
  int v84; // [rsp+4Ch] [rbp-ACh]
  int v85; // [rsp+50h] [rbp-A8h]
  unsigned int v86; // [rsp+54h] [rbp-A4h]
  __int64 v87; // [rsp+58h] [rbp-A0h]
  __int64 v88; // [rsp+60h] [rbp-98h]
  __int64 v89; // [rsp+68h] [rbp-90h]
  unsigned __int64 LowLimit; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 HighLimit; // [rsp+78h] [rbp-80h] BYREF
  void (__fastcall *v92)(unsigned __int64, unsigned __int64, __int64); // [rsp+80h] [rbp-78h]
  PNET_BUFFER_LIST v93; // [rsp+88h] [rbp-70h]
  __int64 v94; // [rsp+90h] [rbp-68h]
  ULONG v95; // [rsp+98h] [rbp-60h]
  int v96; // [rsp+9Ch] [rbp-5Ch]
  __int64 v97; // [rsp+A0h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h] BYREF
  char v99; // [rsp+100h] [rbp+8h]
  PNET_BUFFER_LIST v100; // [rsp+108h] [rbp+10h]
  KIRQL v102; // [rsp+118h] [rbp+20h]

  v100 = NetBufferLists;
  v3 = *((_QWORD *)NdisBindingHandle + 2);
  v4 = NetBufferLists;
  v88 = v3;
  v5 = 2;
  v87 = 0LL;
  Number = -1;
  v81 = 2;
  v7 = ReturnFlags;
  LOBYTE(v84) = 0;
  v82 = -1;
  v9 = 0;
  if ( *(_DWORD *)(v3 + 48) || *(_DWORD *)(v3 + 80) )
  {
    v9 = *(_DWORD *)(v3 + 48);
    v84 = *(_DWORD *)(v3 + 80);
    v87 = *(_QWORD *)(v3 + 40);
    if ( !v87 )
      v87 = *(_QWORD *)(v3 + 40);
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyRxCompletion(NetBufferLists, ReturnFlags, (const struct _NDIS_OBJECT_HEADER *)NdisBindingHandle);
    Alignment = v4;
    if ( v4 )
    {
      v11 = byte_14011EDF0;
      do
      {
        Flags = Alignment->Flags;
        Alignment->Scratch = MmBadPointer;
        Alignment->ChildRefCount = -892679478;
        if ( v11 )
        {
          v11 = 0;
          v13 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v11 = 1;
          v13 = Flags | 0xF0000;
        }
        byte_14011EDF0 = v11;
        Alignment->Flags = v13;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v5 = 2;
    }
    Number = -1;
  }
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
    goto LABEL_28;
  switch ( *(_BYTE *)NdisBindingHandle )
  {
    case 5:
      LOBYTE(v15) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisBindingHandle, 1024);
      goto LABEL_24;
    case 0x11:
      LOBYTE(v15) = (*((_DWORD *)NdisBindingHandle + 922) & 0x1000) != 0;
      goto LABEL_24;
    case 0x12:
      v15 = *((_DWORD *)NdisBindingHandle + 56) >> 31;
LABEL_24:
      if ( (_BYTE)v15 )
      {
        for ( j = v4; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
        {
          if ( *(NDIS_HANDLE *)&j->Context->ContextData[j->Context->Offset] != NdisBindingHandle )
            NblContextVerifierBugcheckContextCorruption(j, v4, NdisBindingHandle);
          NdisFreeNetBufferListContext(j, 8u);
        }
      }
      break;
  }
LABEL_28:
  if ( (v9 & 0x180028) != 0 || (v84 & 0x10) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      v5 = KfRaiseIrql(2u);
      v81 = v5;
    }
    if ( (v9 & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v82 = Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v87 + ndisPcwPerCpuDataStride * Number + 24);
    }
    if ( !v5 && (v9 & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v82 = Number;
      }
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v87 + ndisPcwPerCpuDataStride * Number + 216);
    }
    if ( (v9 & 0x100020) != 0 )
    {
      v17 = 0;
      v18 = (_SLIST_HEADER *)v4;
      if ( v4 )
      {
        do
        {
          v18 = (_SLIST_HEADER *)v18->Alignment;
          ++v17;
        }
        while ( v18 );
      }
      if ( (v9 & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v82 = Number;
        }
        *(_QWORD *)(v87 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 40) += v17;
      }
      if ( !v5 && (v9 & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v82 = Number;
        }
        *(_QWORD *)(v87 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 224) += v17;
      }
    }
    if ( (v84 & 0x10) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v82 = Number;
      }
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v87 + ndisPcwPerCpuDataStride * Number + 336) = __rdtsc();
    }
    else if ( v5 != 2 )
    {
      KeLowerIrql(v5);
    }
  }
  v102 = 2;
  v89 = 0LL;
  LOBYTE(v85) = 0;
  v86 = -1;
  if ( *(_DWORD *)(v3 + 48) || *(_DWORD *)(v3 + 80) )
  {
    v85 = *(_DWORD *)(v3 + 80);
    v89 = *(_QWORD *)(v3 + 40);
    if ( !v89 )
      v89 = *(_QWORD *)(v3 + 40);
  }
  for ( k = v4; k; k = (PNET_BUFFER_LIST)k->Link.Alignment )
    k->Flags = k->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011F740 )
  {
    v20 = (_SLIST_HEADER *)v4;
    if ( v4 )
    {
      if ( byte_14011F740 )
      {
        do
        {
          v20[15].Region = 0LL;
          v20 = (_SLIST_HEADER *)v20->Alignment;
        }
        while ( v20 );
      }
      else
      {
        do
        {
          v20[15].Region |= 0x8000000000000000uLL;
          v20 = (_SLIST_HEADER *)v20->Alignment;
        }
        while ( v20 );
      }
    }
  }
  if ( *(_DWORD *)(v3 + 3224) )
  {
    v21 = 0LL;
    p_Alignment = 0LL;
    if ( v4 )
    {
      do
      {
        v23 = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
        v4->Link.Alignment = 0LL;
        if ( v4->NdisPoolHandle == PoolHandle )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v3 + 3224));
          FirstNetBuffer = v4->FirstNetBuffer;
          v25 = (struct _NPAGED_LOOKASIDE_LIST *)v4->MiniportReserved[1];
          CurrentMdl = FirstNetBuffer->CurrentMdl;
          if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
          if ( v25 )
            ExFreeToNPagedLookasideList(v25, CurrentMdl);
          else
            ExFreePoolWithTag(CurrentMdl, 0);
          NdisFreeNetBufferList(v4);
        }
        else
        {
          if ( v21 )
            *p_Alignment = v4;
          else
            v21 = v4;
          p_Alignment = &v4->Link.Alignment;
        }
        v4 = v23;
      }
      while ( v23 );
    }
    v4 = v21;
    v100 = v21;
    v7 = ReturnFlags;
  }
  if ( !v4 )
    goto LABEL_191;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_135;
  v27 = *((_QWORD *)NdisBindingHandle + 73);
  v28 = *(_QWORD *)(v3 + 2536);
  v29 = v7 & 1;
  v30 = ndisNblTrackerEpoch;
  v31 = 0LL;
  v83 = v29;
  v32 = 0LL;
  LowLimit = v27;
  v97 = 0LL;
  v99 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v4, v27, 0x87u, (void *)v28, v29);
  v33 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
  v34 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v28 & 1) != 0 )
  {
    v34 = (2 * v30) ^ (v28 ^ (2 * v30)) & 0xFFFFFFFFFFFFFFFDuLL;
    v33 = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v35 = (_SLIST_HEADER *)v4;
  v36 = &WPP_RECORDER_INITIALIZED;
  do
  {
    Region = v35[22].Region;
    v38 = LowLimit;
    while ( v35[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_104;
      }
      else if ( !v35[7].Region )
      {
        v39 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v38 & 1) != 0 )
          v39 = *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v35[7].Region = v39;
      }
      v40 = (unsigned __int8 *)v35[7].Region;
      if ( v40 )
      {
        v45 = *v40;
        if ( *v40 == 17 || v45 == 5 || v45 == 18 )
        {
          if ( v40 != (unsigned __int8 *)v33 || v35[1].Region )
          {
            ++v31;
            v41 = v34;
          }
          else
          {
            ++v32;
            v41 = 24LL;
            ++v31;
          }
          goto LABEL_105;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v80) = *v40;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v35,
            v80);
          goto LABEL_103;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v36,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)v35);
LABEL_103:
        v36 = &WPP_RECORDER_INITIALIZED;
      }
LABEL_104:
      v41 = v34 | 4;
LABEL_105:
      v35[22].Region = v41;
      v35 = (_SLIST_HEADER *)v35->Alignment;
      if ( !v35 )
        break;
    }
    v42 = v83;
    v43 = v97 - v31;
    if ( (Region & 1) != 0 && v43 )
    {
      if ( (_BYTE)v83 || v99 )
      {
        v44 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !(_BYTE)v83 )
          goto LABEL_122;
LABEL_131:
        v48 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v48 + *(_QWORD *)v44) += v43;
      }
      else
      {
        v99 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          LOBYTE(v42) = 1;
          v83 = v42;
          v44 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_131;
        }
        LOBYTE(v42) = 0;
        v83 = v42;
        v44 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_122:
        _InterlockedAdd64((volatile signed __int64 *)(v44 + 8), v43);
      }
    }
    v97 = v31;
    v36 = &WPP_RECORDER_INITIALIZED;
  }
  while ( v35 );
  v4 = v100;
  v46 = v31 - v32;
  if ( (v34 & 1) != 0 && v46 )
  {
    if ( (_BYTE)v83 || v99 )
    {
      v47 = 16 * ((v34 >> 1) & 1) + (v34 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v83 )
        goto LABEL_133;
LABEL_152:
      v56 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v56 + *(_QWORD *)v47) += v46;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v47 = 16 * ((v34 >> 1) & 1) + (v34 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_152;
      }
      v47 = 16 * ((v34 >> 1) & 1) + (v34 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_133:
      _InterlockedAdd64((volatile signed __int64 *)(v47 + 8), v46);
    }
  }
  v3 = v88;
LABEL_135:
  if ( (v85 & 0x20) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
      v102 = KfRaiseIrql(2u);
    v86 = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v86 + v89 + 344) = __rdtsc();
  }
  v49 = *(_QWORD *)(v3 + 2544);
  v50 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(v3 + 2640);
  v51 = *(_QWORD *)(v3 + 2528);
  if ( *(_BYTE *)v49 == 17 )
    goto LABEL_185;
  if ( (ReturnFlags & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v3) = KeGetPcr()->Prcb.Number;
    p_LowLimit = &LowLimit;
    v4->ChildRefCount = ReturnFlags;
    v4->Scratch = 0LL;
    v59 = *(_BYTE *)v49 == 5;
    v92 = 0LL;
    LowLimit = (unsigned __int64)v4;
    HighLimit = (unsigned __int64)v4;
    if ( v59 )
    {
      do
      {
        v60 = *p_LowLimit;
        if ( !*p_LowLimit )
          break;
        v61 = v49;
        v62 = *(_QWORD *)(v49 + 424) + 96 * v3;
        if ( *(_BYTE *)(v62 + 88) )
        {
          *p_LowLimit = 0LL;
          do
          {
            v67 = ndisVerifierNdisDispatch;
            v68 = *(unsigned int *)(v60 + 132);
            v69 = *(_QWORD *)(v60 + 112);
            *(_DWORD *)(v60 + 132) = 0;
            if ( v67 && *(_BYTE *)v49 == 5 && *(_QWORD *)(v49 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v67 + 17))(v51, v60, v68);
            else
              v50(v51, v60, v68);
            v60 = v69;
          }
          while ( v69 );
          break;
        }
        *(_BYTE *)(v62 + 88) = 1;
        v63 = *p_LowLimit;
        *p_LowLimit = 0LL;
        if ( v63 )
        {
          do
          {
            v64 = ndisVerifierNdisDispatch;
            v65 = *(unsigned int *)(v63 + 132);
            v66 = *(_QWORD *)(v63 + 112);
            *(_DWORD *)(v63 + 132) = 0;
            if ( v64 && *(_BYTE *)v49 == 5 && *(_QWORD *)(v49 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v64 + 17))(v51, v63, v65);
            else
              v50(v51, v63, v65);
            v63 = v66;
          }
          while ( v66 );
        }
        *(_BYTE *)(v62 + 88) = 0;
        p_LowLimit = (unsigned __int64 *)(v62 + 72);
        v49 = *(_QWORD *)(v49 + 552);
        v50 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(v61 + 528);
        v51 = *(_QWORD *)(v61 + 536);
      }
      while ( *(_BYTE *)v49 == 5 );
    }
    v70 = *p_LowLimit;
    if ( *p_LowLimit )
    {
      *p_LowLimit = 0LL;
      do
      {
        v71 = ndisVerifierNdisDispatch;
        v72 = *(unsigned int *)(v70 + 132);
        v73 = *(_QWORD *)(v70 + 112);
        *(_DWORD *)(v70 + 132) = 0;
        if ( v71 && *(_BYTE *)v49 == 5 && *(_QWORD *)(v49 + 776) )
          (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v71 + 17))(v51, v70, v72);
        else
          v50(v51, v70, v72);
        v70 = v73;
      }
      while ( v73 );
    }
  }
  else
  {
    if ( *(_BYTE *)v3 != 5 )
      goto LABEL_185;
    v52 = (unsigned int)Size;
    v53 = KeGetPcr()->Prcb.Number << 12;
    v54 = *(_QWORD *)(qword_14011EF88 + v53);
    LowLimit = v54;
    v55 = *(_QWORD *)(qword_14011EF80 + v53);
    HighLimit = v55;
    if ( v54 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v55 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v54 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v54 >= v52 )
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v49 == 5 && *(_QWORD *)(v49 + 776) )
      {
        (*((void (__fastcall **)(unsigned __int64, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 17))(
          v51,
          v4,
          ReturnFlags);
        goto LABEL_186;
      }
LABEL_185:
      v50(v51, (unsigned __int64)v4, ReturnFlags);
      goto LABEL_186;
    }
    v57 = 24576;
    v96 = 0;
    LowLimit = v49;
    HighLimit = v51;
    v92 = v50;
    v93 = v4;
    v94 = 0LL;
    v95 = ReturnFlags;
    if ( (unsigned int)Size > 0x6000 )
      v57 = Size;
    if ( KeExpandKernelStackAndCalloutEx(
           ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
           &LowLimit,
           v57,
           0,
           0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v3, v4, 0);
  }
LABEL_186:
  if ( (v85 & 0x20) != 0 )
  {
    v74 = v86;
    if ( v86 == -1 )
      v74 = KeGetPcr()->Prcb.Number;
    v75 = v89 + ndisPcwPerCpuDataStride * v74 + ndisPcwOffsetToPerCpuData;
    v76 = __rdtsc();
    *(_QWORD *)(v75 + 144) += (((unsigned __int64)HIDWORD(v76) << 32) | (unsigned int)v76) - *(_QWORD *)(v75 + 344);
    *(_QWORD *)(v75 + 344) = 0LL;
    if ( v102 != 2 )
      KeLowerIrql(v102);
  }
LABEL_191:
  if ( (v84 & 0x10) != 0 )
  {
    v77 = v82;
    if ( v82 == -1 )
      v77 = KeGetPcr()->Prcb.Number;
    v78 = v87 + ndisPcwPerCpuDataStride * v77 + ndisPcwOffsetToPerCpuData;
    v79 = __rdtsc();
    *(_QWORD *)(v78 + 136) += (((unsigned __int64)HIDWORD(v79) << 32) | (unsigned int)v79) - *(_QWORD *)(v78 + 336);
    *(_QWORD *)(v78 + 336) = 0LL;
    if ( v81 != 2 )
      KeLowerIrql(v81);
  }
}
