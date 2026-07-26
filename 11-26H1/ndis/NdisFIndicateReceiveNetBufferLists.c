/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x140037E00
 * Callers:
 *     ?IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400A5350 (-IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140024860 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x140026FE0 (ndisGenerateCorrelationIds.c)
 *     PktMonClientNblDrop @ 0x14002F8C0 (PktMonClientNblDrop.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14003DFA0 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x140040600 (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 *     NdisAllocateNetBufferListContext @ 0x140040EF0 (NdisAllocateNetBufferListContext.c)
 *     ?NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x140050860 (-NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140052660 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400637B0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140075B60 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NblContextVerifierBugcheckInternalError @ 0x14008C300 (NblContextVerifierBugcheckInternalError.c)
 *     TrackNblContextVerifierFailure @ 0x1400A5520 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  const struct _NDIS_FILTER_BLOCK *v5; // r10
  ULONG v6; // r13d
  NDIS_PORT_NUMBER v7; // r14d
  PNET_BUFFER_LIST Alignment; // r15
  NDIS_HANDLE v9; // rdi
  int Type; // r11d
  int v11; // eax
  __int64 v12; // rdi
  struct _NET_BUFFER_LIST *v13; // rsi
  __int64 v14; // r9
  PNET_BUFFER_LIST v15; // r14
  _SLIST_HEADER *v16; // rbx
  _SLIST_HEADER *v17; // rax
  ULONG v18; // r12d
  ULONG v19; // edx
  __int64 v20; // r8
  unsigned __int64 CorrelationIds; // r8
  PNET_BUFFER_LIST v22; // rdi
  char v23; // si
  unsigned int Flags; // eax
  unsigned int v25; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rbx
  _SLIST_HEADER *v27; // rcx
  _QWORD *v28; // r9
  unsigned int v29; // edx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // ebx
  bool v33; // zf
  __int64 v34; // rdx
  void (*v35)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  __int64 v36; // rsi
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rbx
  __int64 v39; // rsi
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // r14
  __int64 v43; // r12
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdi
  _SLIST_HEADER *v46; // rsi
  __int64 v47; // r15
  unsigned __int64 Region; // rbx
  unsigned __int64 v49; // rax
  unsigned __int8 *v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // r13d
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int8 v55; // al
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  char v59; // bl
  ULONG v60; // edi
  __int64 v61; // rax
  ULONG v62; // ebx
  __int64 v63; // rcx
  __int64 v64; // rdx
  PNET_BUFFER_LIST v65; // rcx
  ULONG v66; // r8d
  PNET_BUFFER_LIST *p_Next; // rax
  NDIS_HANDLE v68; // rbx
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  __int128 v71; // rdi
  void (__fastcall *v72)(unsigned __int64, PNET_BUFFER_LIST, __int64, _QWORD, ULONG); // r13
  unsigned __int64 *p_LowLimit; // r14
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // r14
  ULONG v80; // r15d
  unsigned int v81; // r12d
  unsigned int v82; // esi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r15
  ULONG v86; // edx
  __int64 v87; // r8
  unsigned __int64 v88; // r12
  unsigned int v89; // r15d
  __int64 v90; // rax
  __int64 v91; // rcx
  unsigned __int64 v92; // rbx
  __int64 v93; // r14
  unsigned int v94; // edx
  unsigned __int64 v95; // r15
  ULONG v96; // r12d
  unsigned int v97; // r14d
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned __int64 v100; // r14
  ULONG v101; // r9d
  NDIS_PORT_NUMBER v102; // r10d
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  unsigned __int64 v105; // r8
  int v106; // ecx
  __int64 v107; // r8
  const struct _NDIS_FILTER_BLOCK *v108; // rcx
  PVOID Context; // [rsp+20h] [rbp-E0h]
  unsigned int Contexta; // [rsp+20h] [rbp-E0h]
  char v111[8]; // [rsp+30h] [rbp-D0h]
  char v112; // [rsp+40h] [rbp-C0h]
  unsigned int v113; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v114; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v115; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v116; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v117; // [rsp+60h] [rbp-A0h] BYREF
  struct _NET_BUFFER_LIST *v118; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *p_Alignment; // [rsp+70h] [rbp-90h]
  __int128 Parameter; // [rsp+78h] [rbp-88h] BYREF
  __int128 v121; // [rsp+88h] [rbp-78h]
  unsigned __int64 v122; // [rsp+98h] [rbp-68h]
  ULONG v123; // [rsp+A0h] [rbp-60h]
  int v124; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 LowLimit; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 HighLimit[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v127; // [rsp+C0h] [rbp-40h] BYREF
  void (__fastcall *v128)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // [rsp+C8h] [rbp-38h] BYREF
  __int64 v129; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v130[56]; // [rsp+E0h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+2A8h] [rbp+1A8h] BYREF
  PNET_BUFFER_LIST NetBufferList; // [rsp+2B8h] [rbp+1B8h]
  ULONG v135; // [rsp+2C8h] [rbp+1C8h]

  v135 = NumberOfNetBufferLists;
  NetBufferList = NetBufferLists;
  v5 = (const struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 65);
  v6 = NumberOfNetBufferLists;
  v7 = PortNumber;
  Alignment = NetBufferLists;
  v9 = NdisFilterHandle;
  Type = v5->Header.Type;
  if ( (_BYTE)Type == 17 || !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 || !v5 )
    goto LABEL_35;
  if ( Type == 5 )
  {
    LOBYTE(v11) = FILTER_TEST_FLAG(v5, 1024);
  }
  else
  {
    if ( Type != 18 )
    {
LABEL_35:
      v18 = ReceiveFlags;
      goto LABEL_38;
    }
    v11 = *(_DWORD *)&v5->StackExpansionFallback.WorkItemQueued >> 31;
  }
  if ( !(_BYTE)v11 )
    goto LABEL_35;
  v12 = *((_QWORD *)v9 + 65);
  p_Alignment = &v118;
  v118 = 0LL;
  v13 = 0LL;
  memset(&v130[1], 0, 0x178uLL);
  v130[0] = Alignment;
  v15 = Alignment;
  v16 = (_SLIST_HEADER *)v130;
  if ( Alignment )
  {
    do
    {
      if ( NdisAllocateNetBufferListContext(Alignment, 8u, 0, 0x6376444Eu) )
      {
        TrackNblContextVerifierFailure(Alignment, v12);
        v16->Alignment = Alignment->Link.Alignment;
        Alignment->Link.Alignment = 0LL;
        *p_Alignment = Alignment;
        p_Alignment = &Alignment->Link.Alignment;
        Alignment = (PNET_BUFFER_LIST)v16->Alignment;
      }
      else
      {
        v16 = (_SLIST_HEADER *)Alignment;
        *(_QWORD *)&Alignment->Context->ContextData[Alignment->Context->Offset] = v12;
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
    }
    while ( Alignment );
    v13 = v118;
    v15 = (PNET_BUFFER_LIST)v130[0];
  }
  v135 = 0;
  v17 = (_SLIST_HEADER *)v15;
  v6 = 0;
  if ( v15 )
  {
    do
    {
      v17 = (_SLIST_HEADER *)v17->Alignment;
      ++v6;
    }
    while ( v17 );
    v135 = v6;
  }
  v9 = NdisFilterHandle;
  p_Alignment = &v118;
  Alignment = v15;
  NetBufferList = v15;
  v118 = 0LL;
  if ( v13 )
  {
    if ( byte_14011F740 && (*((_DWORD *)NdisFilterHandle + 210) & 2) != 0 )
      PktMonClientNblDrop(
        (__int64)NdisFilterHandle + 784,
        (__int64)v13,
        *((_DWORD *)NdisFilterHandle + 209),
        v14,
        (__int64)Context,
        1,
        3,
        -536866800);
    v18 = ReceiveFlags;
    if ( (ReceiveFlags & 2) == 0 )
    {
      v19 = ReceiveFlags & 1;
      if ( *(_BYTE *)NdisFilterHandle == 5 )
      {
        v20 = *((_QWORD *)NdisFilterHandle + 65);
      }
      else
      {
        if ( *(_BYTE *)NdisFilterHandle != 17 )
          goto LABEL_227;
        v20 = *((_QWORD *)NdisFilterHandle + 314);
      }
      if ( !v20 )
LABEL_227:
        NblContextVerifierBugcheckInternalError((ULONG_PTR)NdisFilterHandle, (ULONG_PTR)v13);
      if ( *(_BYTE *)v20 != 5 )
      {
        if ( *(_BYTE *)v20 == 17 )
        {
          ndisInvokeNextReceiveCompleteHandler(
            v13,
            v19,
            (struct _NDIS_OBJECT_HEADER *)v20,
            *(struct _NDIS_OBJECT_HEADER **)(v20 + 2544),
            *(void **)(v20 + 2528),
            *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v20 + 2640));
          goto LABEL_32;
        }
        goto LABEL_227;
      }
      ndisInvokeNextReceiveCompleteHandler(
        v13,
        v19,
        (struct _NDIS_OBJECT_HEADER *)v20,
        *(struct _NDIS_OBJECT_HEADER **)(v20 + 552),
        *(void **)(v20 + 536),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v20 + 528));
    }
LABEL_32:
    if ( !v15 )
      return;
    goto LABEL_37;
  }
  v18 = ReceiveFlags;
LABEL_37:
  v7 = PortNumber;
LABEL_38:
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v9, 512) )
  {
    ndisNblVerifyRxIndication(
      Alignment,
      v7,
      v6,
      v18,
      (const struct _NDIS_OBJECT_HEADER *)v9,
      *((enum _NDIS_MEDIUM *)v9 + 84));
    v22 = Alignment;
    if ( Alignment )
    {
      v23 = byte_14011EDF0;
      do
      {
        Flags = v22->Flags;
        v22->Scratch = MmBadPointer;
        v22->ChildRefCount = -892679478;
        if ( v23 )
        {
          v23 = 0;
          v25 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v23 = 1;
          v25 = Flags | 0xF0000;
        }
        byte_14011EDF0 = v23;
        v22->Flags = v25;
        for ( i = v22->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        v22 = (PNET_BUFFER_LIST)v22->Link.Alignment;
      }
      while ( v22 );
    }
    v9 = NdisFilterHandle;
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v27 = (_SLIST_HEADER *)Alignment;
    if ( (__int64)Alignment->NetBufferListInfo[13] <= 0 )
    {
      v29 = _InterlockedExchangeAdd(&dword_14011CE68, v6);
      if ( v29 + v6 < v29 )
        v29 = _InterlockedExchangeAdd(&dword_14011CE68, v6);
      do
      {
        if ( (__int64)v27[15].Region <= 0 )
        {
          v30 = v29++;
          v27[15].Region = v30;
        }
        v27 = (_SLIST_HEADER *)v27->Alignment;
      }
      while ( v27 );
    }
    else
    {
      v28 = (_QWORD *)Alignment->Link.Alignment;
      if ( Alignment->Link.Alignment )
      {
        do
        {
          if ( (__int64)v28[31] <= 0 )
          {
            CorrelationIds = (unsigned int)ndisGenerateCorrelationIds(1u);
            v28[31] = CorrelationIds;
          }
          v28 = (_QWORD *)*v28;
        }
        while ( v28 );
      }
    }
  }
  if ( byte_14011F740 )
  {
    v31 = *((_QWORD *)v9 + 114);
    if ( v31 )
    {
      if ( (*(_DWORD *)(v31 + 56) & 1) != 0 )
      {
        v32 = *((_DWORD *)v9 + 230);
        v33 = (Alignment->NblFlags & 0x8000) == 0;
        Parameter = 0LL;
        LODWORD(v122) = 0;
        v121 = 0LL;
        if ( v33 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v34 = *((_QWORD *)v9 + 113);
            LOWORD(Parameter) = 40;
            *((_QWORD *)&Parameter + 1) = Alignment;
            LODWORD(v121) = 1;
            *(_QWORD *)((char *)&v121 + 4) = v32 | 0x100000000LL;
            v122 = 0LL;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1) + 40LL))(
              xmmword_14011F760,
              v34,
              &Parameter,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
  }
  v35 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))*((_QWORD *)v9 + 79);
  if ( v35 == ndisFilterIndicateReceiveNetBufferLists )
  {
    LODWORD(v35) = KeGetPcr()->Prcb.Number;
    v36 = *((_QWORD *)v9 + 53) + 96LL * (_QWORD)v35;
    v116 = v36;
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_118;
    v37 = *((_QWORD *)v9 + 81);
    CorrelationIds = 0LL;
    v38 = *((_QWORD *)v9 + 64);
    v39 = ndisNblTrackerEpoch;
    v40 = v18 & 1;
    v117 = v37;
    v41 = v18 & 2;
    v113 = v40;
    v42 = 0LL;
    v115 = 0LL;
    v43 = 0LL;
    v112 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      LOBYTE(CorrelationIds) = v41 != 0;
      ndisNblTrackerRecordEventInternal(Alignment, v37, CorrelationIds + 130, (void *)v38, v40);
    }
    v44 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
    v114 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
    v45 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v38 & 1) != 0 )
    {
      v45 = (2 * v39) ^ ((2 * v39) ^ v38) & 0xFFFFFFFFFFFFFFFDuLL;
      v44 = *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v114 = v44;
    }
    v46 = (_SLIST_HEADER *)Alignment;
    if ( Alignment )
    {
      v47 = v117;
      while ( 1 )
      {
        Region = v46[22].Region;
        while ( v46[22].Region == Region )
        {
          if ( Region )
          {
            if ( (Region & 4) != 0 )
              goto LABEL_86;
          }
          else if ( !v46[7].Region )
          {
            v49 = v47 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (v47 & 1) != 0 )
              v49 = *(_QWORD *)((v47 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v46[7].Region = v49;
          }
          v50 = (unsigned __int8 *)v46[7].Region;
          if ( v50 )
          {
            v55 = *v50;
            if ( *v50 == 17 || v55 == 5 || v55 == 18 )
            {
              if ( v50 != (unsigned __int8 *)v44 || v46[1].Region )
              {
                ++v42;
                v51 = v45;
              }
              else
              {
                ++v43;
                v51 = 24LL;
                ++v42;
              }
              goto LABEL_87;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v111 = *v50;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                (char)v46,
                *(_QWORD *)v111);
              goto LABEL_85;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v44) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v44,
              27,
              11,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)v46);
LABEL_85:
            v44 = v114;
          }
LABEL_86:
          v51 = v45 | 4;
LABEL_87:
          v46[22].Region = v51;
          v46 = (_SLIST_HEADER *)v46->Alignment;
          if ( !v46 )
            break;
        }
        v52 = v113;
        v53 = v115 - v42;
        v115 -= v42;
        if ( (Region & 1) != 0 && v53 )
        {
          if ( (_BYTE)v113 || v112 )
          {
            v54 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !(_BYTE)v113 )
              goto LABEL_104;
LABEL_114:
            v58 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(v58 + *(_QWORD *)v54) += v115;
          }
          else
          {
            v112 = 1;
            if ( KeGetCurrentIrql() == 2 )
            {
              LOBYTE(v52) = 1;
              v113 = v52;
              v54 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              goto LABEL_114;
            }
            LOBYTE(v52) = 0;
            v113 = v52;
            v54 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_104:
            _InterlockedAdd64((volatile signed __int64 *)(v54 + 8), v115);
          }
        }
        v44 = v114;
        CorrelationIds = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
        v115 = v42;
        if ( !v46 )
        {
          Alignment = NetBufferList;
          v6 = v135;
          break;
        }
      }
    }
    v56 = v42 - v43;
    if ( (v45 & 1) != 0 && v56 )
    {
      if ( (_BYTE)v113 || v112 )
      {
        v57 = 16 * ((v45 >> 1) & 1) + (v45 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( (_BYTE)v113 )
          goto LABEL_125;
      }
      else
      {
        if ( KeGetCurrentIrql() == 2 )
        {
          v57 = 16 * ((v45 >> 1) & 1) + (v45 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_125:
          v63 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v63 + *(_QWORD *)v57) += v56;
          goto LABEL_117;
        }
        v57 = 16 * ((v45 >> 1) & 1) + (v45 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      }
      _InterlockedAdd64((volatile signed __int64 *)(v57 + 8), v56);
    }
LABEL_117:
    v36 = v116;
LABEL_118:
    v59 = ReceiveFlags;
    v60 = ReceiveFlags & 2;
    if ( (ReceiveFlags & 2) == 0 && ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v36 + 64) )
    {
      v61 = v36 + 56;
      v62 = ReceiveFlags | 1;
      if ( !*(_QWORD *)(v36 + 48) )
      {
        *(_QWORD *)(v36 + 48) = Alignment;
        goto LABEL_136;
      }
      v64 = *(_QWORD *)v61;
      if ( PortNumber != *(_DWORD *)(*(_QWORD *)v61 + 140LL)
        || v62 != *(_DWORD *)(v64 + 132)
        || (ReceiveFlags & 0xCB00) != 0 )
      {
        *(_QWORD *)(v64 + 112) = Alignment;
LABEL_136:
        *(_QWORD *)v61 = Alignment;
        Alignment->Status = PortNumber;
        v69 = Alignment->Link.Alignment;
        Alignment->ChildRefCount = v62;
        v68 = NdisFilterHandle;
        Alignment->Scratch = 0LL;
        if ( v69 )
        {
          Alignment = NetBufferList;
          *(_QWORD *)(v69 + 112) = v6;
          goto LABEL_219;
        }
        goto LABEL_201;
      }
      v65 = *(PNET_BUFFER_LIST *)v64;
      if ( *(_QWORD *)v64 )
      {
        v66 = v6 + LODWORD(v65->Scratch);
        do
        {
          p_Next = &v65->Next;
          v65 = (PNET_BUFFER_LIST)v65->Link.Alignment;
        }
        while ( v65 );
      }
      else
      {
        v66 = v6 + 1;
        p_Next = *(PNET_BUFFER_LIST **)v61;
      }
      v68 = NdisFilterHandle;
      *p_Next = Alignment;
      if ( *(_QWORD *)v64 )
      {
        Alignment = NetBufferList;
        *(_QWORD *)(*(_QWORD *)v64 + 112LL) = v66;
        goto LABEL_219;
      }
LABEL_201:
      Alignment = NetBufferList;
      goto LABEL_219;
    }
    HIDWORD(v70) = HIDWORD(NdisFilterHandle);
    *(_QWORD *)&v71 = *((_QWORD *)NdisFilterHandle + 65);
    *((_QWORD *)&v71 + 1) = *((_QWORD *)NdisFilterHandle + 63);
    v72 = (void (__fastcall *)(unsigned __int64, PNET_BUFFER_LIST, __int64, _QWORD, ULONG))*((_QWORD *)NdisFilterHandle
                                                                                           + 62);
    v115 = *((_QWORD *)&v71 + 1);
    if ( *(_BYTE *)v71 == 17 )
    {
      v72(*((_QWORD *)&v71 + 1), Alignment, PortNumber, v135, ReceiveFlags);
    }
    else
    {
      if ( (ReceiveFlags & 2) == 0 && ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        LODWORD(v70) = KeGetPcr()->Prcb.Number;
        p_LowLimit = &LowLimit;
        Alignment->Status = PortNumber;
        v74 = Alignment->Link.Alignment;
        LODWORD(v116) = v70;
        HighLimit[1] = 0LL;
        LowLimit = (unsigned __int64)Alignment;
        HighLimit[0] = (unsigned __int64)Alignment;
        Alignment->Scratch = 0LL;
        Alignment->ChildRefCount = ReceiveFlags;
        if ( v74 )
        {
          *(_QWORD *)(v74 + 112) = v135;
          v70 = (unsigned int)v116;
        }
        if ( *(_BYTE *)v71 == 5 )
        {
          do
          {
            v75 = *p_LowLimit;
            if ( !*p_LowLimit )
              break;
            v76 = v71;
            v77 = 96 * v70 + *(_QWORD *)(v71 + 424) + 48LL;
            v117 = v77;
            if ( *(_BYTE *)(v77 + 16) )
            {
              *p_LowLimit = 0LL;
              do
              {
                v85 = *(_QWORD *)v75;
                v86 = *(_DWORD *)(v75 + 132);
                v87 = *(unsigned int *)(v75 + 140);
                v88 = *(_QWORD *)(v75 + 112);
                LODWORD(v116) = v86;
                LODWORD(v114) = v87;
                if ( v85 )
                  v89 = *(_DWORD *)(v85 + 112);
                else
                  v89 = 1;
                *(_DWORD *)(v75 + 132) = 0;
                if ( byte_14011F740 )
                {
                  if ( *(_BYTE *)v71 == 5 )
                  {
                    v90 = *(_QWORD *)(v71 + 872);
                    if ( v90 )
                    {
                      if ( (*(_DWORD *)(v90 + 56) & 1) != 0 )
                      {
                        PktMonClientNblLogNdis(v71 + 848, v75, v87, 1LL);
                        v86 = v116;
                        v87 = (unsigned int)v114;
                      }
                    }
                  }
                }
                if ( ndisVerifierNdisDispatch && *(_BYTE *)v71 == 5 && (v91 = *(_QWORD *)(v71 + 776)) != 0 )
                  (*((void (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, ULONG, __int64, void (__fastcall *)(unsigned __int64, PNET_BUFFER_LIST, __int64, _QWORD, ULONG)))ndisVerifierNdisDispatch
                   + 14))(
                    *((_QWORD *)&v71 + 1),
                    v75,
                    v87,
                    v89,
                    v86,
                    v91,
                    v72);
                else
                  v72(*((_QWORD *)&v71 + 1), (PNET_BUFFER_LIST)v75, v87, v89, v86);
                v75 = v88;
              }
              while ( v88 );
              break;
            }
            *(_BYTE *)(v77 + 16) = 1;
            v78 = *p_LowLimit;
            *p_LowLimit = 0LL;
            if ( v78 )
            {
              do
              {
                v79 = *(_QWORD *)(v78 + 112);
                v80 = *(_DWORD *)(v78 + 132);
                v81 = *(_DWORD *)(v78 + 140);
                if ( *(_QWORD *)v78 )
                  v82 = *(_DWORD *)(*(_QWORD *)v78 + 112LL);
                else
                  v82 = 1;
                *(_DWORD *)(v78 + 132) = 0;
                if ( byte_14011F740 )
                {
                  if ( *(_BYTE *)v71 == 5 )
                  {
                    v83 = *(_QWORD *)(v71 + 872);
                    if ( v83 )
                    {
                      if ( (*(_DWORD *)(v83 + 56) & 1) != 0 )
                        PktMonClientNblLogNdis(v71 + 848, v78, CorrelationIds, 1LL);
                    }
                  }
                }
                if ( ndisVerifierNdisDispatch && *(_BYTE *)v71 == 5 && (v84 = *(_QWORD *)(v71 + 776)) != 0 )
                  (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, ULONG, __int64, void (__fastcall *)(unsigned __int64, PNET_BUFFER_LIST, __int64, _QWORD, ULONG)))ndisVerifierNdisDispatch
                   + 14))(
                    v115,
                    v78,
                    v81,
                    v82,
                    v80,
                    v84,
                    v72);
                else
                  v72(v115, (PNET_BUFFER_LIST)v78, v81, v82, v80);
                v78 = v79;
              }
              while ( v79 );
              v77 = v117;
              v76 = v71;
            }
            *(_BYTE *)(v77 + 16) = 0;
            p_LowLimit = (unsigned __int64 *)v77;
            *(_QWORD *)&v71 = *(_QWORD *)(v71 + 520);
            *((_QWORD *)&v71 + 1) = *(_QWORD *)(v76 + 504);
            v72 = *(void (__fastcall **)(unsigned __int64, PNET_BUFFER_LIST, __int64, _QWORD, ULONG))(v76 + 496);
            v70 = (unsigned int)v116;
            v33 = *(_BYTE *)v71 == 5;
            v115 = *((_QWORD *)&v71 + 1);
          }
          while ( v33 );
        }
        v92 = *p_LowLimit;
        if ( *p_LowLimit )
        {
          *p_LowLimit = 0LL;
          do
          {
            v93 = *(_QWORD *)v92;
            v94 = *(_DWORD *)(v92 + 140);
            v95 = *(_QWORD *)(v92 + 112);
            v96 = *(_DWORD *)(v92 + 132);
            LODWORD(v114) = v94;
            if ( v93 )
              v97 = *(_DWORD *)(v93 + 112);
            else
              v97 = 1;
            *(_DWORD *)(v92 + 132) = 0;
            if ( byte_14011F740 )
            {
              if ( *(_BYTE *)v71 == 5 )
              {
                v98 = *(_QWORD *)(v71 + 872);
                if ( v98 )
                {
                  if ( (*(_DWORD *)(v98 + 56) & 1) != 0 )
                  {
                    PktMonClientNblLogNdis(v71 + 848, v92, CorrelationIds, 1LL);
                    v94 = v114;
                  }
                }
              }
            }
            if ( ndisVerifierNdisDispatch && *(_BYTE *)v71 == 5 && (v99 = *(_QWORD *)(v71 + 776)) != 0 )
              (*((void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, ULONG, __int64, void (__fastcall *)(unsigned __int64, PNET_BUFFER_LIST, __int64, _QWORD, ULONG)))ndisVerifierNdisDispatch
               + 14))(
                *((_QWORD *)&v71 + 1),
                v92,
                v94,
                v97,
                v96,
                v99,
                v72);
            else
              v72(*((_QWORD *)&v71 + 1), (PNET_BUFFER_LIST)v92, v94, v97, v96);
            v92 = v95;
          }
          while ( v95 );
        }
        v60 = 0;
        goto LABEL_200;
      }
      v100 = (unsigned int)Size;
      v101 = v135;
      v102 = PortNumber;
      v103 = KeGetPcr()->Prcb.Number << 12;
      LODWORD(v114) = ReceiveFlags;
      v128 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v72;
      v127 = *((_QWORD *)&v71 + 1);
      v104 = *(_QWORD *)(v103 + qword_14011EF88);
      LowLimit = v104;
      v129 = v71;
      LODWORD(v116) = v135;
      v105 = *(_QWORD *)(v103 + qword_14011EF80);
      HighLimit[0] = v105;
      LODWORD(v115) = PortNumber;
      v117 = (__int64)Alignment;
      if ( v104 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v105 )
      {
        IoGetStackLimits(&LowLimit, HighLimit);
        v104 = LowLimit;
        v101 = v135;
        v102 = PortNumber;
      }
      if ( (unsigned __int64)&retaddr - v104 < v100 )
      {
        v59 = ReceiveFlags;
        v106 = 24576;
        v124 = 0;
        Parameter = v71;
        *(_QWORD *)&v121 = v72;
        *((_QWORD *)&v121 + 1) = Alignment;
        v122 = __PAIR64__(v101, v102);
        v123 = ReceiveFlags;
        if ( (unsigned int)Size > 0x6000 )
          v106 = Size;
        if ( KeExpandKernelStackAndCalloutEx(
               ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
               &Parameter,
               v106,
               0,
               0LL) < 0 )
        {
          if ( byte_14011F740 && (*(_DWORD *)(v71 + 840) & 2) != 0 )
            PktMonClientNblDropNdis(v71 + 784, (__int64)Alignment, v107, 1LL, -1073741670, -536866813);
          NdisSetStatusInNblChain(Alignment, -1073741670);
          _InterlockedAdd((volatile signed __int32 *)(v71 + 292), NdisNumNblsInNblChain(Alignment));
          if ( (ReceiveFlags & 2) == 0 )
          {
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v71, Alignment, 0);
            v68 = NdisFilterHandle;
            v60 = 0;
            Alignment = NetBufferList;
            goto LABEL_219;
          }
          v60 = ReceiveFlags & 2;
LABEL_216:
          if ( *(_DWORD *)ndisNblTrackerMode )
          {
            Contexta = v59 & 1;
            v68 = NdisFilterHandle;
            ndisNblTrackerTransferOwnershipInternal(
              Alignment,
              *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 64),
              *((_QWORD *)NdisFilterHandle + 81),
              0x8Cu,
              Contexta);
            Alignment = NetBufferList;
            goto LABEL_219;
          }
LABEL_200:
          v68 = NdisFilterHandle;
          goto LABEL_201;
        }
      }
      else
      {
        ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
          (unsigned int)&v129,
          (unsigned int)&v128,
          (unsigned int)&v127,
          (unsigned int)&v117,
          (__int64)&v115,
          (__int64)&v116,
          (__int64)&v114);
        v59 = ReceiveFlags;
      }
    }
    v60 = ReceiveFlags & 2;
    if ( (ReceiveFlags & 2) == 0 )
      goto LABEL_200;
    goto LABEL_216;
  }
  ((void (__fastcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))v35)(v9, Alignment, v7, v6, v18);
  v68 = NdisFilterHandle;
  v60 = v18 & 2;
LABEL_219:
  if ( v60 )
  {
    if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_14011F740 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(Alignment);
    v108 = (const struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v68 + 65);
    if ( v108->Header.Type != 17 && ndisIsNblContextVeriferEnabled(v108) )
      ndisRemoveNblContextTerminator(Alignment, *((struct _NDIS_OBJECT_HEADER **)v68 + 65));
  }
}
