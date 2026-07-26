/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x140036740
 * Callers:
 *     ??$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1400035BC (--$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisStatusToDropReason @ 0x14002F7E0 (NdisStatusToDropReason.c)
 *     PktMonClientNblDrop @ 0x14002F8C0 (PktMonClientNblDrop.c)
 *     NdisFreeNetBufferListContext @ 0x140042540 (NdisFreeNetBufferListContext.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140042CF0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1400784C0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A53B8 (NblContextVerifierBugcheckContextCorruption.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 v3; // r12
  PNET_BUFFER_LIST v4; // r13
  NDIS_HANDLE v5; // r15
  PNET_BUFFER_LIST Alignment; // rdi
  char v7; // si
  unsigned int Flags; // eax
  unsigned int v9; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rbx
  int v11; // eax
  struct _NET_BUFFER_LIST *j; // rbx
  _SLIST_HEADER *v13; // rax
  __int64 v14; // rdx
  int Status; // ecx
  int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // r14
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rdi
  _SLIST_HEADER *v25; // rsi
  _UNKNOWN **v26; // rdx
  unsigned __int64 Region; // rbx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rax
  unsigned __int8 *v30; // rcx
  __int64 v31; // rax
  int v32; // r15d
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  _SLIST_HEADER *v39; // rax
  unsigned __int64 v40; // rbx
  void (__fastcall *v41)(unsigned __int64, unsigned __int64, __int64); // rsi
  unsigned __int64 v42; // rbp
  unsigned __int64 v43; // r14
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
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
  unsigned int v65; // eax
  __int64 v66; // r8
  unsigned __int64 v67; // rax
  PVOID Context; // [rsp+20h] [rbp-B8h]
  __int64 v69; // [rsp+30h] [rbp-A8h]
  KIRQL v70; // [rsp+40h] [rbp-98h]
  int v71; // [rsp+44h] [rbp-94h]
  int v72; // [rsp+48h] [rbp-90h]
  unsigned int Number; // [rsp+4Ch] [rbp-8Ch]
  __int64 v74; // [rsp+50h] [rbp-88h]
  unsigned __int64 v75; // [rsp+50h] [rbp-88h]
  __int64 v76; // [rsp+58h] [rbp-80h]
  unsigned __int64 LowLimit; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 HighLimit; // [rsp+68h] [rbp-70h] BYREF
  void (__fastcall *v79)(unsigned __int64, unsigned __int64, __int64); // [rsp+70h] [rbp-68h]
  PNET_BUFFER_LIST v80; // [rsp+78h] [rbp-60h]
  __int64 v81; // [rsp+80h] [rbp-58h]
  int v82; // [rsp+88h] [rbp-50h]
  int v83; // [rsp+8Ch] [rbp-4Ch]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF
  char v88; // [rsp+F8h] [rbp+20h]

  v3 = SendCompleteFlags;
  v4 = NetBufferList;
  v5 = MiniportAdapterHandle;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
  {
    ndisNblVerifyTxCompletion(
      NetBufferList,
      SendCompleteFlags,
      (const struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle);
    Alignment = v4;
    if ( v4 )
    {
      v7 = byte_14011EDF0;
      do
      {
        Flags = Alignment->Flags;
        Alignment->Scratch = MmBadPointer;
        Alignment->ChildRefCount = -892679478;
        if ( v7 )
        {
          v7 = 0;
          v9 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v7 = 1;
          v9 = Flags | 0xF0000;
        }
        byte_14011EDF0 = v7;
        Alignment->Flags = v9;
        for ( i = Alignment->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
    goto LABEL_22;
  switch ( *(_BYTE *)v5 )
  {
    case 5:
      LOBYTE(v11) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v5, 1024);
      goto LABEL_18;
    case 0x11:
      LOBYTE(v11) = (*((_DWORD *)v5 + 922) & 0x1000) != 0;
      goto LABEL_18;
    case 0x12:
      v11 = *((_DWORD *)v5 + 56) >> 31;
LABEL_18:
      if ( (_BYTE)v11 )
      {
        for ( j = v4; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
        {
          if ( *(NDIS_HANDLE *)&j->Context->ContextData[j->Context->Offset] != v5 )
            NblContextVerifierBugcheckContextCorruption(j, v4, v5);
          NdisFreeNetBufferListContext(j, 8u);
        }
      }
      break;
  }
LABEL_22:
  if ( *((_QWORD *)v5 + 556) )
  {
    v13 = (_SLIST_HEADER *)v4;
    v14 = 0LL;
    if ( v4 )
    {
      do
      {
        v13 = (_SLIST_HEADER *)v13->Alignment;
        v14 = (unsigned int)(v14 + 1);
      }
      while ( v13 );
    }
    ndisClearBusy(v5, v14, 52LL);
  }
  Status = v4->Status;
  if ( Status && byte_14011F740 && (*((_DWORD *)v5 + 1468) & 2) != 0 )
  {
    v16 = NdisStatusToDropReason(Status);
    PktMonClientNblDrop(
      (__int64)v5 + 5816,
      (__int64)v4,
      *((_DWORD *)v5 + 1467),
      v17,
      (__int64)Context,
      2,
      v16,
      -536866803);
  }
  v76 = 0LL;
  Number = -1;
  LOWORD(v72) = 0;
  if ( *((_DWORD *)v5 + 12) || *((_DWORD *)v5 + 20) )
  {
    v72 = *((_DWORD *)v5 + 20);
    v76 = *((_QWORD *)v5 + 5);
    if ( !v76 )
      v76 = *((_QWORD *)v5 + 5);
  }
  v70 = 2;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_83;
  v18 = *((_QWORD *)v5 + 510);
  v19 = *((_QWORD *)v5 + 323);
  v20 = ndisNblTrackerEpoch;
  v71 = v3 & 1;
  v21 = 0LL;
  LowLimit = v18;
  v22 = 0LL;
  v74 = 0LL;
  v88 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v4, v18, 0x93u, (void *)v19, v3 & 1);
  v23 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  v24 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v19 & 1) != 0 )
  {
    v24 = (2 * v20) ^ (v19 ^ (2 * v20)) & 0xFFFFFFFFFFFFFFFDuLL;
    v23 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v25 = (_SLIST_HEADER *)v4;
  v26 = &WPP_RECORDER_INITIALIZED;
  do
  {
    Region = v25[22].Region;
    v28 = LowLimit;
    while ( v25[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_52;
      }
      else if ( !v25[7].Region )
      {
        v29 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v28 & 1) != 0 )
          v29 = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v25[7].Region = v29;
      }
      v30 = (unsigned __int8 *)v25[7].Region;
      if ( v30 )
      {
        v35 = *v30;
        if ( *v30 == 17 || v35 == 5 || v35 == 18 )
        {
          if ( v30 != (unsigned __int8 *)v23 || v25[1].Region )
          {
            ++v21;
            v31 = v24;
          }
          else
          {
            ++v22;
            v31 = 24LL;
            ++v21;
          }
          goto LABEL_53;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v69) = *v30;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v25,
            v69);
          goto LABEL_51;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v26,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)v25);
LABEL_51:
        v26 = &WPP_RECORDER_INITIALIZED;
      }
LABEL_52:
      v31 = v24 | 4;
LABEL_53:
      v25[22].Region = v31;
      v25 = (_SLIST_HEADER *)v25->Alignment;
      if ( !v25 )
        break;
    }
    v32 = v71;
    v33 = v74 - v21;
    v75 = v74 - v21;
    if ( (Region & 1) != 0 && v33 )
    {
      if ( (_BYTE)v71 || v88 )
      {
        v34 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !(_BYTE)v71 )
          goto LABEL_70;
LABEL_79:
        v38 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v38 + *(_QWORD *)v34) += v75;
      }
      else
      {
        v88 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          LOBYTE(v32) = 1;
          v71 = v32;
          v34 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_79;
        }
        LOBYTE(v32) = 0;
        v71 = v32;
        v34 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_70:
        _InterlockedAdd64((volatile signed __int64 *)(v34 + 8), v75);
      }
    }
    v74 = v21;
    v26 = &WPP_RECORDER_INITIALIZED;
  }
  while ( v25 );
  v5 = MiniportAdapterHandle;
  v36 = v21 - v22;
  v4 = NetBufferList;
  if ( (v24 & 1) != 0 && v36 )
  {
    if ( (_BYTE)v71 || v88 )
    {
      v37 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v71 )
        goto LABEL_81;
LABEL_103:
      v47 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v47 + *(_QWORD *)v37) += v36;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v37 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_103;
      }
      v37 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_81:
      _InterlockedAdd64((volatile signed __int64 *)(v37 + 8), v36);
    }
  }
  v3 = SendCompleteFlags;
LABEL_83:
  if ( byte_14011F740 )
  {
    v39 = (_SLIST_HEADER *)v4;
    do
    {
      v39[15].Region = 0LL;
      v39 = (_SLIST_HEADER *)v39->Alignment;
    }
    while ( v39 );
  }
  if ( (v72 & 0x100) != 0 )
  {
    if ( (v3 & 1) == 0 )
      v70 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * Number + v76 + 368) = __rdtsc();
  }
  v40 = *((_QWORD *)v5 + 324);
  v41 = (void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))*((_QWORD *)v5 + 327);
  v42 = *((_QWORD *)v5 + 322);
  if ( *(_BYTE *)v40 == 17 )
    goto LABEL_136;
  if ( (v3 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v3) = KeGetPcr()->Prcb.Number;
    p_LowLimit = &LowLimit;
    v4->Scratch = 0LL;
    v4->ChildRefCount = SendCompleteFlags;
    v50 = *(_BYTE *)v40 == 5;
    v79 = 0LL;
    LowLimit = (unsigned __int64)v4;
    HighLimit = (unsigned __int64)v4;
    if ( v50 )
    {
      do
      {
        v51 = *p_LowLimit;
        if ( !*p_LowLimit )
          break;
        v52 = v40;
        v53 = *(_QWORD *)(v40 + 424) + 96 * v3;
        if ( *(_BYTE *)(v53 + 40) )
        {
          *p_LowLimit = 0LL;
          do
          {
            v58 = ndisVerifierNdisDispatch;
            v59 = *(unsigned int *)(v51 + 132);
            v60 = *(_QWORD *)(v51 + 112);
            *(_DWORD *)(v51 + 132) = 0;
            if ( v58 && *(_BYTE *)v40 == 5 && *(_QWORD *)(v40 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v58 + 13))(v42, v51, 0LL);
            else
              v41(v42, v51, v59);
            v51 = v60;
          }
          while ( v60 );
          break;
        }
        *(_BYTE *)(v53 + 40) = 1;
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
            if ( v55 && *(_BYTE *)v40 == 5 && *(_QWORD *)(v40 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v55 + 13))(v42, v54, 0LL);
            else
              v41(v42, v54, v56);
            v54 = v57;
          }
          while ( v57 );
        }
        *(_BYTE *)(v53 + 40) = 0;
        p_LowLimit = (unsigned __int64 *)(v53 + 24);
        v40 = *(_QWORD *)(v40 + 488);
        v41 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(v52 + 464);
        v42 = *(_QWORD *)(v52 + 472);
      }
      while ( *(_BYTE *)v40 == 5 );
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
        if ( v62 && *(_BYTE *)v40 == 5 && *(_QWORD *)(v40 + 776) )
          (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v62 + 13))(v42, v61, 0LL);
        else
          v41(v42, v61, v63);
        v61 = v64;
      }
      while ( v64 );
    }
  }
  else
  {
    if ( *(_BYTE *)v5 != 5 )
      goto LABEL_136;
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
      v48 = 24576;
      v83 = 0;
      LowLimit = v40;
      HighLimit = v42;
      v79 = v41;
      v80 = v4;
      v81 = 0LL;
      v82 = v3;
      if ( (unsigned int)Size > 0x6000 )
        v48 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             &LowLimit,
             v48,
             0,
             0LL) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, v4, 1u);
    }
    else
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v40 == 5 && *(_QWORD *)(v40 + 776) )
      {
        (*((void (__fastcall **)(unsigned __int64, PNET_BUFFER_LIST, _QWORD))ndisVerifierNdisDispatch + 13))(
          v42,
          v4,
          0LL);
        goto LABEL_137;
      }
LABEL_136:
      v41(v42, (unsigned __int64)v4, (unsigned int)v3);
    }
  }
LABEL_137:
  if ( (v72 & 0x100) != 0 )
  {
    v65 = Number;
    if ( Number == -1 )
      v65 = KeGetPcr()->Prcb.Number;
    v66 = v76 + ndisPcwPerCpuDataStride * v65 + ndisPcwOffsetToPerCpuData;
    v67 = __rdtsc();
    *(_QWORD *)(v66 + 168) += (((unsigned __int64)HIDWORD(v67) << 32) | (unsigned int)v67) - *(_QWORD *)(v66 + 368);
    *(_QWORD *)(v66 + 368) = 0LL;
    if ( v70 != 2 )
      KeLowerIrql(v70);
  }
}
