/*
 * XREFs of NdisFReturnNetBufferLists @ 0x14002DCC0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009D4F0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400A5420 (-ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferListContext @ 0x140042540 (NdisFreeNetBufferListContext.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140076C50 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A53B8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  PNET_BUFFER_LIST v3; // r15
  __int64 v4; // r12
  NDIS_HANDLE v5; // r13
  const struct _NDIS_OBJECT_HEADER *v6; // rcx
  PNET_BUFFER_LIST Alignment; // rdi
  char v8; // si
  unsigned int Flags; // eax
  unsigned int v10; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rbx
  int v12; // eax
  struct _NET_BUFFER_LIST *j; // rbx
  _SLIST_HEADER *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdi
  _SLIST_HEADER *v23; // rsi
  _UNKNOWN **v24; // rdx
  unsigned __int64 Region; // rbx
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rax
  unsigned __int8 *v28; // rcx
  __int64 v29; // rax
  int v30; // r13d
  unsigned __int64 v31; // rdx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // r12d
  __int64 v38; // rcx
  PNET_BUFFER_LIST *v39; // rcx
  _QWORD *v40; // rax
  unsigned __int64 v41; // rbx
  void (__fastcall *v42)(unsigned __int64, unsigned __int64, __int64); // rsi
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // r14
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r8
  int v48; // ecx
  unsigned __int64 *p_LowLimit; // rdi
  bool v50; // zf
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r15
  __int64 v53; // r14
  unsigned __int64 v54; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v55; // rax
  __int64 v56; // r8
  unsigned __int64 v57; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v58; // rax
  __int64 v59; // r8
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v62; // rax
  __int64 v63; // r8
  unsigned __int64 v64; // rdi
  __int64 v65; // [rsp+30h] [rbp-98h]
  int v66; // [rsp+40h] [rbp-88h]
  __int64 v67; // [rsp+48h] [rbp-80h]
  unsigned __int64 v68; // [rsp+48h] [rbp-80h]
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 HighLimit; // [rsp+58h] [rbp-70h] BYREF
  void (__fastcall *v71)(unsigned __int64, unsigned __int64, __int64); // [rsp+60h] [rbp-68h]
  PNET_BUFFER_LIST v72; // [rsp+68h] [rbp-60h]
  __int64 v73; // [rsp+70h] [rbp-58h]
  int v74; // [rsp+78h] [rbp-50h]
  int v75; // [rsp+7Ch] [rbp-4Ch]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  char v80; // [rsp+E8h] [rbp+20h]

  v3 = NetBufferLists;
  v4 = ReturnFlags;
  v5 = NdisFilterHandle;
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 512) )
  {
    ndisNblVerifyRxCompletion(v3, v4, v6);
    Alignment = v3;
    if ( v3 )
    {
      v8 = byte_14011EDF0;
      do
      {
        Flags = Alignment->Flags;
        Alignment->Scratch = MmBadPointer;
        Alignment->ChildRefCount = -892679478;
        if ( v8 )
        {
          v8 = 0;
          v10 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v8 = 1;
          v10 = Flags | 0xF0000;
        }
        byte_14011EDF0 = v8;
        Alignment->Flags = v10;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v5 )
  {
    switch ( *(_BYTE *)v5 )
    {
      case 5:
        LOBYTE(v12) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v5, 1024);
        break;
      case 0x11:
        LOBYTE(v12) = (*((_DWORD *)v5 + 922) & 0x1000) != 0;
        break;
      case 0x12:
        v12 = *((_DWORD *)v5 + 56) >> 31;
        break;
      default:
        goto LABEL_23;
    }
    if ( (_BYTE)v12 )
    {
      for ( j = v3; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
      {
        if ( *(NDIS_HANDLE *)&j->Context->ContextData[j->Context->Offset] != v5 )
          NblContextVerifierBugcheckContextCorruption(j, v3, v5);
        NdisFreeNetBufferListContext(j, 8u);
      }
    }
  }
LABEL_23:
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011F740 )
  {
    v14 = (_SLIST_HEADER *)v3;
    if ( v3 )
    {
      if ( byte_14011F740 )
      {
        do
        {
          v14[15].Region = 0LL;
          v14 = (_SLIST_HEADER *)v14->Alignment;
        }
        while ( v14 );
      }
      else
      {
        do
        {
          v14[15].Region |= 0x8000000000000000uLL;
          v14 = (_SLIST_HEADER *)v14->Alignment;
        }
        while ( v14 );
      }
    }
  }
  v15 = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v16 = *((_QWORD *)v5 + 81);
    v17 = 0LL;
    v18 = *((_QWORD *)v5 + 68);
    v19 = ndisNblTrackerEpoch;
    LowLimit = v16;
    v20 = 0LL;
    v66 = v4 & 1;
    v67 = 0LL;
    v80 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v3, v16, 0x8Au, (void *)v18, v4 & 1);
    v21 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
    v22 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v18 & 1) != 0 )
    {
      v15 = 2 * v19;
      v22 = (2 * v19) ^ (v18 ^ (2 * v19)) & 0xFFFFFFFFFFFFFFFDuLL;
      v21 = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    v23 = (_SLIST_HEADER *)v3;
    if ( v3 )
    {
      v24 = &WPP_RECORDER_INITIALIZED;
      while ( 1 )
      {
        Region = v23[22].Region;
        v26 = LowLimit;
        while ( v23[22].Region == Region )
        {
          if ( Region )
          {
            if ( (Region & 4) != 0 )
              goto LABEL_49;
          }
          else if ( !v23[7].Region )
          {
            v27 = v26 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (v26 & 1) != 0 )
              v27 = *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v23[7].Region = v27;
          }
          v28 = (unsigned __int8 *)v23[7].Region;
          if ( v28 )
          {
            v32 = *v28;
            if ( *v28 == 17 || v32 == 5 || v32 == 18 )
            {
              if ( v28 != (unsigned __int8 *)v21 || v23[1].Region )
              {
                ++v17;
                v29 = v22;
              }
              else
              {
                ++v20;
                v29 = 24LL;
                ++v17;
              }
              goto LABEL_50;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v65) = *v28;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                (char)v23,
                v65);
              goto LABEL_48;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v24,
              27,
              11,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)v23);
LABEL_48:
            v24 = &WPP_RECORDER_INITIALIZED;
          }
LABEL_49:
          v29 = v22 | 4;
LABEL_50:
          v23[22].Region = v29;
          v23 = (_SLIST_HEADER *)v23->Alignment;
          if ( !v23 )
            break;
        }
        v30 = v66;
        v15 = v67 - v17;
        v68 = v67 - v17;
        if ( (Region & 1) != 0 && v15 )
        {
          if ( (_BYTE)v66 || v80 )
          {
            v15 = 16 * ((Region >> 1) & 1);
            v31 = v15 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !(_BYTE)v66 )
              goto LABEL_67;
LABEL_77:
            v35 = KeGetPcr()->Prcb.Number << 12;
            v15 = *(_QWORD *)v31;
            *(_QWORD *)(v35 + *(_QWORD *)v31) += v68;
          }
          else
          {
            v80 = 1;
            if ( KeGetCurrentIrql() == 2 )
            {
              LOBYTE(v30) = 1;
              v66 = v30;
              v31 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              goto LABEL_77;
            }
            LOBYTE(v30) = 0;
            v15 = 16 * ((Region >> 1) & 1);
            v66 = v30;
            v31 = v15 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_67:
            _InterlockedAdd64((volatile signed __int64 *)(v31 + 8), v68);
          }
        }
        v67 = v17;
        v24 = &WPP_RECORDER_INITIALIZED;
        if ( !v23 )
        {
          v3 = NetBufferLists;
          v5 = NdisFilterHandle;
          break;
        }
      }
    }
    v33 = v17 - v20;
    if ( (v22 & 1) == 0 || !v33 )
      goto LABEL_80;
    if ( (_BYTE)v66 || v80 )
    {
      v15 = 16 * ((v22 >> 1) & 1);
      v34 = v15 + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( (_BYTE)v66 )
        goto LABEL_87;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v34 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_87:
        v38 = KeGetPcr()->Prcb.Number << 12;
        v15 = *(_QWORD *)v34;
        *(_QWORD *)(v38 + *(_QWORD *)v34) += v33;
        goto LABEL_80;
      }
      v15 = 16 * ((v22 >> 1) & 1);
      v34 = v15 + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v34 + 8), v33);
LABEL_80:
    v4 = ReturnFlags;
  }
  LODWORD(v15) = KeGetPcr()->Prcb.Number;
  v36 = *((_QWORD *)v5 + 53) + 96 * v15;
  if ( (v4 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v36 + 88) )
  {
    v41 = *((_QWORD *)v5 + 69);
    v42 = (void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))*((_QWORD *)v5 + 66);
    v43 = *((_QWORD *)v5 + 67);
    if ( *(_BYTE *)v41 != 17 )
    {
      if ( (v4 & 1) != 0 || KeGetCurrentIrql() == 2 )
      {
        LODWORD(v4) = KeGetPcr()->Prcb.Number;
        p_LowLimit = &LowLimit;
        v3->Scratch = 0LL;
        v3->ChildRefCount = ReturnFlags;
        v50 = *(_BYTE *)v41 == 5;
        v71 = 0LL;
        LowLimit = (unsigned __int64)v3;
        HighLimit = (unsigned __int64)v3;
        if ( v50 )
        {
          do
          {
            v51 = *p_LowLimit;
            if ( !*p_LowLimit )
              break;
            v52 = v41;
            v53 = *(_QWORD *)(v41 + 424) + 96 * v4;
            if ( *(_BYTE *)(v53 + 88) )
            {
              *p_LowLimit = 0LL;
              do
              {
                v58 = ndisVerifierNdisDispatch;
                v59 = *(unsigned int *)(v51 + 132);
                v60 = *(_QWORD *)(v51 + 112);
                *(_DWORD *)(v51 + 132) = 0;
                if ( v58 && *(_BYTE *)v41 == 5 && *(_QWORD *)(v41 + 776) )
                  (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v58 + 17))(v43, v51, v59);
                else
                  v42(v43, v51, v59);
                v51 = v60;
              }
              while ( v60 );
              break;
            }
            *(_BYTE *)(v53 + 88) = 1;
            v54 = *p_LowLimit;
            *p_LowLimit = 0LL;
            if ( v54 )
            {
              do
              {
                v55 = ndisVerifierNdisDispatch;
                v56 = *(unsigned int *)(v54 + 132);
                v57 = *(_QWORD *)(v54 + 112);
                *(_DWORD *)(v54 + 132) = 0;
                if ( v55 && *(_BYTE *)v41 == 5 && *(_QWORD *)(v41 + 776) )
                  (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v55 + 17))(v43, v54, v56);
                else
                  v42(v43, v54, v56);
                v54 = v57;
              }
              while ( v57 );
            }
            *(_BYTE *)(v53 + 88) = 0;
            p_LowLimit = (unsigned __int64 *)(v53 + 72);
            v41 = *(_QWORD *)(v41 + 552);
            v42 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(v52 + 528);
            v43 = *(_QWORD *)(v52 + 536);
          }
          while ( *(_BYTE *)v41 == 5 );
        }
        v61 = *p_LowLimit;
        if ( *p_LowLimit )
        {
          *p_LowLimit = 0LL;
          do
          {
            v62 = ndisVerifierNdisDispatch;
            v63 = *(unsigned int *)(v61 + 132);
            v64 = *(_QWORD *)(v61 + 112);
            *(_DWORD *)(v61 + 132) = 0;
            if ( v62 && *(_BYTE *)v41 == 5 && *(_QWORD *)(v41 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v62 + 17))(v43, v61, v63);
            else
              v42(v43, v61, v63);
            v61 = v64;
          }
          while ( v64 );
        }
        return;
      }
      if ( *(_BYTE *)v5 == 5 )
      {
        v44 = (unsigned int)Size;
        v45 = KeGetPcr()->Prcb.Number << 12;
        v46 = *(_QWORD *)(v45 + qword_14011EF88);
        LowLimit = v46;
        v47 = *(_QWORD *)(v45 + qword_14011EF80);
        HighLimit = v47;
        if ( v46 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v47 )
        {
          IoGetStackLimits(&LowLimit, &HighLimit);
          v46 = LowLimit;
        }
        if ( (unsigned __int64)&retaddr - v46 < v44 )
        {
          v48 = 24576;
          v75 = 0;
          LowLimit = v41;
          HighLimit = v43;
          v71 = v42;
          v72 = v3;
          v73 = 0LL;
          v74 = v4;
          if ( (unsigned int)Size > 0x6000 )
            v48 = Size;
          if ( KeExpandKernelStackAndCalloutEx(
                 ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
                 &LowLimit,
                 v48,
                 0,
                 0LL) < 0 )
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, v3, 0);
          return;
        }
        if ( ndisVerifierNdisDispatch && *(_BYTE *)v41 == 5 && *(_QWORD *)(v41 + 776) )
        {
          (*((void (__fastcall **)(unsigned __int64, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 17))(
            v43,
            v3,
            (unsigned int)v4);
          return;
        }
      }
    }
    v42(v43, (unsigned __int64)v3, (unsigned int)v4);
    return;
  }
  v37 = v4 | 1;
  if ( !*(_QWORD *)(v36 + 72) )
  {
    *(_QWORD *)(v36 + 72) = v3;
LABEL_94:
    *(_QWORD *)(v36 + 80) = v3;
    v3->Scratch = 0LL;
    v3->ChildRefCount = v37;
    return;
  }
  v39 = *(PNET_BUFFER_LIST **)(v36 + 80);
  if ( v37 != *((_DWORD *)v39 + 33) || (v37 & 6) != 0 )
  {
    v39[14] = v3;
    goto LABEL_94;
  }
  v40 = *v39;
  if ( *v39 )
  {
    do
    {
      v39 = (PNET_BUFFER_LIST *)v40;
      v40 = (_QWORD *)*v40;
    }
    while ( v40 );
  }
  *v39 = v3;
}
