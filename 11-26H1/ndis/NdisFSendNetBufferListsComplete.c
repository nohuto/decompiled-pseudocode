/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x14003D660
 * Callers:
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140057020 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009D4F0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400A5470 (-SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferListContext @ 0x140042540 (NdisFreeNetBufferListContext.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400426C0 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1400784C0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A53B8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
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
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r14
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdi
  _SLIST_HEADER *v22; // rsi
  _UNKNOWN **v23; // rdx
  unsigned __int64 Region; // rbx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rax
  unsigned __int8 *v27; // rcx
  __int64 v28; // rax
  int v29; // r13d
  unsigned __int64 v30; // rdx
  unsigned __int8 v31; // al
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  int v36; // r12d
  __int64 v37; // rcx
  PNET_BUFFER_LIST *v38; // rcx
  _QWORD *v39; // rax
  struct _NDIS_FILTER_BLOCK *v40; // rbx
  void (__fastcall *NextSendNetBufferListsCompleteHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rsi
  unsigned __int64 NextSendNetBufferListsCompleteContext; // rbp
  unsigned __int64 v43; // r14
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  int v47; // ecx
  unsigned __int64 *p_LowLimit; // rdi
  bool v49; // zf
  unsigned __int64 v50; // rdx
  struct _NDIS_FILTER_BLOCK *v51; // r15
  __int64 v52; // r14
  unsigned __int64 v53; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v54; // rax
  __int64 v55; // r8
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // r14
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v60; // rax
  __int64 v61; // r8
  unsigned __int64 v62; // rdi
  __int64 v63; // [rsp+30h] [rbp-98h]
  int v64; // [rsp+40h] [rbp-88h]
  __int64 v65; // [rsp+48h] [rbp-80h]
  unsigned __int64 v66; // [rsp+48h] [rbp-80h]
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 HighLimit; // [rsp+58h] [rbp-70h] BYREF
  void (__fastcall *v69)(void *, _NET_BUFFER_LIST *, unsigned int); // [rsp+60h] [rbp-68h]
  PNET_BUFFER_LIST v70; // [rsp+68h] [rbp-60h]
  __int64 v71; // [rsp+70h] [rbp-58h]
  int v72; // [rsp+78h] [rbp-50h]
  int v73; // [rsp+7Ch] [rbp-4Ch]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  char v78; // [rsp+E8h] [rbp+20h]

  v3 = NetBufferList;
  v4 = SendCompleteFlags;
  v5 = NdisFilterHandle;
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, 512) )
  {
    ndisNblVerifyTxCompletion(v3, v4, v6);
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
  v14 = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v15 = *((_QWORD *)v5 + 81);
    v16 = 0LL;
    v17 = *((_QWORD *)v5 + 60);
    v18 = ndisNblTrackerEpoch;
    LowLimit = v15;
    v19 = 0LL;
    v64 = v4 & 1;
    v65 = 0LL;
    v78 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v3, v15, 0x94u, (void *)v17, v4 & 1);
    v20 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
    v21 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v17 & 1) != 0 )
    {
      v14 = 2 * v18;
      v21 = (2 * v18) ^ (v17 ^ (2 * v18)) & 0xFFFFFFFFFFFFFFFDuLL;
      v20 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    v22 = (_SLIST_HEADER *)v3;
    if ( v3 )
    {
      v23 = &WPP_RECORDER_INITIALIZED;
      while ( 1 )
      {
        Region = v22[22].Region;
        v25 = LowLimit;
        while ( v22[22].Region == Region )
        {
          if ( Region )
          {
            if ( (Region & 4) != 0 )
              goto LABEL_42;
          }
          else if ( !v22[7].Region )
          {
            v26 = v25 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (v25 & 1) != 0 )
              v26 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v22[7].Region = v26;
          }
          v27 = (unsigned __int8 *)v22[7].Region;
          if ( v27 )
          {
            v31 = *v27;
            if ( *v27 == 17 || v31 == 5 || v31 == 18 )
            {
              if ( v27 != (unsigned __int8 *)v20 || v22[1].Region )
              {
                ++v16;
                v28 = v21;
              }
              else
              {
                ++v19;
                v28 = 24LL;
                ++v16;
              }
              goto LABEL_43;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v63) = *v27;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                (char)v22,
                v63);
              goto LABEL_41;
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
LABEL_41:
            v23 = &WPP_RECORDER_INITIALIZED;
          }
LABEL_42:
          v28 = v21 | 4;
LABEL_43:
          v22[22].Region = v28;
          v22 = (_SLIST_HEADER *)v22->Alignment;
          if ( !v22 )
            break;
        }
        v29 = v64;
        v14 = v65 - v16;
        v66 = v65 - v16;
        if ( (Region & 1) != 0 && v14 )
        {
          if ( (_BYTE)v64 || v78 )
          {
            v14 = 16 * ((Region >> 1) & 1);
            v30 = v14 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !(_BYTE)v64 )
              goto LABEL_60;
LABEL_70:
            v34 = KeGetPcr()->Prcb.Number << 12;
            v14 = *(_QWORD *)v30;
            *(_QWORD *)(v34 + *(_QWORD *)v30) += v66;
          }
          else
          {
            v78 = 1;
            if ( KeGetCurrentIrql() == 2 )
            {
              LOBYTE(v29) = 1;
              v64 = v29;
              v30 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              goto LABEL_70;
            }
            LOBYTE(v29) = 0;
            v14 = 16 * ((Region >> 1) & 1);
            v64 = v29;
            v30 = v14 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_60:
            _InterlockedAdd64((volatile signed __int64 *)(v30 + 8), v66);
          }
        }
        v65 = v16;
        v23 = &WPP_RECORDER_INITIALIZED;
        if ( !v22 )
        {
          v3 = NetBufferList;
          v5 = NdisFilterHandle;
          break;
        }
      }
    }
    v32 = v16 - v19;
    if ( (v21 & 1) == 0 || !v32 )
      goto LABEL_73;
    if ( (_BYTE)v64 || v78 )
    {
      v14 = 16 * ((v21 >> 1) & 1);
      v33 = v14 + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( (_BYTE)v64 )
        goto LABEL_83;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v33 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_83:
        v37 = KeGetPcr()->Prcb.Number << 12;
        v14 = *(_QWORD *)v33;
        *(_QWORD *)(v37 + *(_QWORD *)v33) += v32;
        goto LABEL_73;
      }
      v14 = 16 * ((v21 >> 1) & 1);
      v33 = v14 + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v33 + 8), v32);
LABEL_73:
    v4 = SendCompleteFlags;
  }
  if ( byte_14011F740 )
  {
    v14 = (__int64)v3;
    if ( v3 )
    {
      do
      {
        *(_QWORD *)(v14 + 248) = 0LL;
        v14 = *(_QWORD *)v14;
      }
      while ( v14 );
    }
  }
  LODWORD(v14) = KeGetPcr()->Prcb.Number;
  v35 = *((_QWORD *)v5 + 53) + 96 * v14;
  if ( (v4 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v35 + 40) )
  {
    v40 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v5 + 61);
    NextSendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v5 + 58);
    NextSendNetBufferListsCompleteContext = *((_QWORD *)v5 + 59);
    if ( v40->Header.Type != 17 )
    {
      if ( (v4 & 1) != 0 || KeGetCurrentIrql() == 2 )
      {
        LODWORD(v4) = KeGetPcr()->Prcb.Number;
        p_LowLimit = &LowLimit;
        v3->Scratch = 0LL;
        v3->ChildRefCount = SendCompleteFlags;
        v49 = v40->Header.Type == 5;
        v69 = 0LL;
        LowLimit = (unsigned __int64)v3;
        HighLimit = (unsigned __int64)v3;
        if ( v49 )
        {
          do
          {
            v50 = *p_LowLimit;
            if ( !*p_LowLimit )
              break;
            v51 = v40;
            v52 = (__int64)v40->IterativeDataPathTracker[v4];
            if ( *(_BYTE *)(v52 + 40) )
            {
              *p_LowLimit = 0LL;
              do
              {
                v57 = *(_QWORD *)(v50 + 112);
                *(_DWORD *)(v50 + 132) = 0;
                if ( ndisIsFilterVerified(v40) )
                  (*((void (__fastcall **)(unsigned __int64, __int64, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))ndisVerifierNdisDispatch
                   + 13))(
                    NextSendNetBufferListsCompleteContext,
                    v58,
                    0LL,
                    v40->VerifierContext,
                    NextSendNetBufferListsCompleteHandler);
                else
                  ((void (__fastcall *)(unsigned __int64))NextSendNetBufferListsCompleteHandler)(NextSendNetBufferListsCompleteContext);
                v50 = v57;
              }
              while ( v57 );
              break;
            }
            *(_BYTE *)(v52 + 40) = 1;
            v53 = *p_LowLimit;
            *p_LowLimit = 0LL;
            if ( v53 )
            {
              do
              {
                v54 = ndisVerifierNdisDispatch;
                v55 = *(unsigned int *)(v53 + 132);
                v56 = *(_QWORD *)(v53 + 112);
                *(_DWORD *)(v53 + 132) = 0;
                if ( v54 && v40->Header.Type == 5 && v40->VerifierContext )
                  (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v54 + 13))(
                    NextSendNetBufferListsCompleteContext,
                    v53,
                    0LL);
                else
                  NextSendNetBufferListsCompleteHandler(
                    (void *)NextSendNetBufferListsCompleteContext,
                    (_NET_BUFFER_LIST *)v53,
                    v55);
                v53 = v56;
              }
              while ( v56 );
            }
            *(_BYTE *)(v52 + 40) = 0;
            p_LowLimit = (unsigned __int64 *)(v52 + 24);
            v40 = (struct _NDIS_FILTER_BLOCK *)v40->NextSendNetBufferListsCompleteObject;
            NextSendNetBufferListsCompleteHandler = v51->NextSendNetBufferListsCompleteHandler;
            NextSendNetBufferListsCompleteContext = (unsigned __int64)v51->NextSendNetBufferListsCompleteContext;
          }
          while ( v40->Header.Type == 5 );
        }
        v59 = *p_LowLimit;
        if ( *p_LowLimit )
        {
          *p_LowLimit = 0LL;
          do
          {
            v60 = ndisVerifierNdisDispatch;
            v61 = *(unsigned int *)(v59 + 132);
            v62 = *(_QWORD *)(v59 + 112);
            *(_DWORD *)(v59 + 132) = 0;
            if ( v60 && v40->Header.Type == 5 && v40->VerifierContext )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v60 + 13))(
                NextSendNetBufferListsCompleteContext,
                v59,
                0LL);
            else
              NextSendNetBufferListsCompleteHandler(
                (void *)NextSendNetBufferListsCompleteContext,
                (_NET_BUFFER_LIST *)v59,
                v61);
            v59 = v62;
          }
          while ( v62 );
        }
        return;
      }
      if ( *(_BYTE *)v5 == 5 )
      {
        v43 = (unsigned int)Size;
        v44 = KeGetPcr()->Prcb.Number << 12;
        v45 = *(_QWORD *)(v44 + qword_14011EF88);
        LowLimit = v45;
        v46 = *(_QWORD *)(v44 + qword_14011EF80);
        HighLimit = v46;
        if ( v45 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v46 )
        {
          IoGetStackLimits(&LowLimit, &HighLimit);
          v45 = LowLimit;
        }
        if ( (unsigned __int64)&retaddr - v45 < v43 )
        {
          v47 = 24576;
          v73 = 0;
          LowLimit = (unsigned __int64)v40;
          HighLimit = NextSendNetBufferListsCompleteContext;
          v69 = NextSendNetBufferListsCompleteHandler;
          v70 = v3;
          v71 = 0LL;
          v72 = v4;
          if ( (unsigned int)Size > 0x6000 )
            v47 = Size;
          if ( KeExpandKernelStackAndCalloutEx(
                 ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
                 &LowLimit,
                 v47,
                 0,
                 0LL) < 0 )
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, v3, 1u);
          return;
        }
        if ( ndisVerifierNdisDispatch && v40->Header.Type == 5 && v40->VerifierContext )
        {
          (*((void (__fastcall **)(unsigned __int64, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 13))(
            NextSendNetBufferListsCompleteContext,
            v3,
            0LL);
          return;
        }
      }
    }
    NextSendNetBufferListsCompleteHandler((void *)NextSendNetBufferListsCompleteContext, v3, v4);
    return;
  }
  v36 = v4 | 1;
  if ( !*(_QWORD *)(v35 + 24) )
  {
    *(_QWORD *)(v35 + 24) = v3;
LABEL_90:
    *(_QWORD *)(v35 + 32) = v3;
    v3->Scratch = 0LL;
    v3->ChildRefCount = v36;
    return;
  }
  v38 = *(PNET_BUFFER_LIST **)(v35 + 32);
  if ( v36 != *((_DWORD *)v38 + 33) || (v36 & 6) != 0 )
  {
    v38[14] = v3;
    goto LABEL_90;
  }
  v39 = *v38;
  if ( *v38 )
  {
    do
    {
      v38 = (PNET_BUFFER_LIST *)v39;
      v39 = (_QWORD *)*v39;
    }
    while ( v39 );
  }
  *v38 = v3;
}
