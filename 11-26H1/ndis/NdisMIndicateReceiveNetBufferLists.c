/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x14002E710
 * Callers:
 *     ?IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x14002E650 (-IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140024860 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x140026FE0 (ndisGenerateCorrelationIds.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x140040600 (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 *     ?ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z @ 0x140040860 (-ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x140050860 (-NdisNumNblsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140052660 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400637B0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140075B60 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400775C0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1400792C0 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140079C20 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  NDIS_HANDLE v5; // rsi
  ULONG v6; // r14d
  NDIS_PORT_NUMBER v7; // r12d
  PNET_BUFFER_LIST v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r8
  int v11; // eax
  struct _NET_BUFFER_LIST *v12; // rax
  int v13; // r8d
  struct _NET_BUFFER_LIST *v14; // rbx
  ULONG v15; // r13d
  LARGE_INTEGER *v16; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v18; // r9
  unsigned int CorrelationIds; // eax
  unsigned int v20; // edx
  _SLIST_HEADER *Alignment; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  int v24; // r8d
  unsigned __int64 v25; // rbx
  __int64 v26; // rsi
  struct _NET_BUFFER_LIST *v27; // r14
  __int64 v28; // r15
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rdi
  PNET_BUFFER_LIST v31; // rsi
  int v32; // edx
  unsigned __int64 v33; // rbx
  __int64 v34; // r12
  unsigned __int64 v35; // rax
  unsigned __int8 *SourceHandle; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rdx
  unsigned __int8 v40; // al
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  PNET_BUFFER_LIST v45; // r13
  unsigned int v46; // ebx
  bool v47; // zf
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  struct _NET_BUFFER_LIST *v51; // r14
  __int64 v52; // r15
  unsigned int v53; // ebx
  __int64 v54; // rax
  __int64 *v55; // rsi
  unsigned __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rbx
  unsigned int v61; // esi
  __int64 v62; // r15
  int v63; // r12d
  unsigned int v64; // r13d
  __int64 v65; // rax
  unsigned int v66; // r14d
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r15
  struct _NET_BUFFER_LIST *v70; // rsi
  unsigned int v71; // r14d
  __int64 v72; // r15
  int v73; // r12d
  unsigned int v74; // r13d
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rbx
  unsigned int v78; // esi
  __int64 v79; // r15
  int v80; // r12d
  unsigned int v81; // r13d
  __int64 v82; // rax
  unsigned int v83; // r14d
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned __int64 v86; // rsi
  ULONG v87; // r9d
  __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // r8
  int v91; // ecx
  int v92; // r8d
  ULONG v93; // ecx
  struct _NET_BUFFER_LIST *v94; // rbx
  unsigned int v95; // ebx
  __int64 v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // r8
  unsigned __int64 v99; // rax
  char v100[8]; // [rsp+30h] [rbp-D0h]
  char v101; // [rsp+40h] [rbp-C0h]
  ULONG v102; // [rsp+44h] [rbp-BCh]
  KIRQL v103; // [rsp+48h] [rbp-B8h]
  __int64 *v104; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v105; // [rsp+58h] [rbp-A8h] BYREF
  struct _NET_BUFFER_LIST *v106; // [rsp+60h] [rbp-A0h] BYREF
  PNET_BUFFER_LIST NetBufferLista; // [rsp+68h] [rbp-98h]
  unsigned int v108[2]; // [rsp+70h] [rbp-90h] BYREF
  NDIS_HANDLE v109; // [rsp+78h] [rbp-88h]
  int v110; // [rsp+80h] [rbp-80h]
  __int128 Parameter; // [rsp+88h] [rbp-78h] BYREF
  __int128 v112; // [rsp+98h] [rbp-68h]
  unsigned __int64 v113; // [rsp+A8h] [rbp-58h]
  ULONG v114; // [rsp+B0h] [rbp-50h]
  int v115; // [rsp+B4h] [rbp-4Ch]
  unsigned int Number; // [rsp+B8h] [rbp-48h]
  __int64 v117; // [rsp+C0h] [rbp-40h]
  __int64 v118; // [rsp+C8h] [rbp-38h] BYREF
  PNET_BUFFER_LIST v119; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 LowLimit; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 HighLimit; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v122; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v123; // [rsp+F8h] [rbp-8h]
  __int64 v124; // [rsp+108h] [rbp+8h]
  __int64 v125; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v126[3]; // [rsp+118h] [rbp+18h] BYREF
  union _LARGE_INTEGER v127; // [rsp+130h] [rbp+30h] BYREF
  int v128; // [rsp+138h] [rbp+38h]
  _UNKNOWN *retaddr; // [rsp+198h] [rbp+98h] BYREF

  v109 = MiniportAdapterHandle;
  v5 = MiniportAdapterHandle;
  v102 = NumberOfNetBufferLists;
  LODWORD(v105) = PortNumber;
  v6 = NumberOfNetBufferLists;
  NetBufferLista = NetBufferList;
  v7 = PortNumber;
  v106 = NetBufferList;
  v8 = NetBufferList;
  v108[0] = NumberOfNetBufferLists;
  v9 = 0LL;
  v103 = 2;
  v117 = 0LL;
  v110 = 0;
  Number = -1;
  if ( *((_DWORD *)MiniportAdapterHandle + 12) || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    v9 = *((_QWORD *)MiniportAdapterHandle + 5);
    v110 = *((_DWORD *)MiniportAdapterHandle + 20);
    v117 = v9;
    if ( !v9 )
    {
      v9 = *((_QWORD *)MiniportAdapterHandle + 5);
      v117 = v9;
    }
  }
  v10 = *((_QWORD *)MiniportAdapterHandle + 314);
  if ( !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 || !v10 )
    goto LABEL_24;
  switch ( *(_BYTE *)v10 )
  {
    case 5:
      LOBYTE(v11) = FILTER_TEST_FLAG(*((const struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 314), 1024);
      break;
    case 0x11:
      LOBYTE(v11) = (*(_DWORD *)(v10 + 3688) & 0x1000) != 0;
      break;
    case 0x12:
      v11 = *(_DWORD *)(v10 + 224) >> 31;
      break;
    default:
      goto LABEL_24;
  }
  if ( (_BYTE)v11 )
  {
    v12 = ndisAddNblContextTerminator(&v106, v108, *((struct _NDIS_OBJECT_HEADER **)v5 + 314));
    v14 = v12;
    if ( v12 )
    {
      if ( byte_14011F740 && (*((_DWORD *)v5 + 1468) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)v5 + 5816, (_DWORD)v12, v13, 1, -1073741670, -536866800);
      v15 = ReceiveFlags;
      if ( (ReceiveFlags & 2) == 0 )
        ndisCallPreviousReturnHandler((struct _NDIS_OBJECT_HEADER *)v5, v14, ReceiveFlags);
      v8 = v106;
      NetBufferLista = v106;
      if ( !v106 )
        return;
      v6 = v108[0];
      v102 = v108[0];
      goto LABEL_25;
    }
    v8 = v106;
    v6 = v108[0];
    NetBufferLista = v106;
    v102 = v108[0];
  }
LABEL_24:
  v15 = ReceiveFlags;
LABEL_25:
  if ( (*((_DWORD *)v5 + 922) & 0x800) != 0 )
  {
    ndisNblVerifyRxIndication(v8, v7, v6, v15, (const struct _NDIS_OBJECT_HEADER *)v5, *((enum _NDIS_MEDIUM *)v5 + 459));
    ndisNblPoisonScratchFields(v8);
  }
  v127.LowPart = v110 & 4;
  if ( (v110 & 4) != 0 )
  {
    if ( (v15 & 1) == 0 )
      v103 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v9 + ndisPcwPerCpuDataStride * Number + 320) = __rdtsc();
  }
  if ( (*((_DWORD *)v5 + 670) & 1) != 0 )
  {
    v16 = (LARGE_INTEGER *)v8;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v8 )
    {
      do
      {
        v16[44] = PerformanceCounter;
        v16 = (LARGE_INTEGER *)v16->QuadPart;
      }
      while ( v16 );
    }
  }
  if ( !*((_BYTE *)v5 + 2664) )
  {
    if ( byte_14011F740 )
    {
      if ( (*((_DWORD *)v5 + 1468) & 2) != 0 )
      {
        v95 = *((_DWORD *)v5 + 1467);
        HIDWORD(v112) = 0;
        v47 = (v8->NblFlags & 0x8000) == 0;
        *(_DWORD *)((char *)&Parameter + 2) = 0;
        WORD3(Parameter) = 0;
        HIWORD(v127.u.LowPart) = 0;
        if ( v47 )
        {
          if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
          {
            v96 = *((_QWORD *)v5 + 732);
            *((_QWORD *)&Parameter + 1) = v8;
            LOWORD(Parameter) = 40;
            LOWORD(v127.LowPart) = 12;
            LODWORD(v112) = 1;
            *(_QWORD *)((char *)&v112 + 4) = v95 | 0x100000000LL;
            v113 = 0LL;
            v127.HighPart = 5;
            v128 = -536866808;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, union _LARGE_INTEGER *, _QWORD))(*((_QWORD *)&xmmword_14011F760
                                                                                                  + 1)
                                                                                                + 48LL))(
              xmmword_14011F760,
              v96,
              &Parameter,
              &v127,
              0LL);
            ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
          }
        }
      }
    }
    if ( (v15 & 2) == 0 )
      (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))v5 + 307))(*((_QWORD *)v5 + 293), v8, v15 & 1);
    goto LABEL_203;
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    if ( (__int64)v8->NetBufferListInfo[13] <= 0 )
    {
      v20 = _InterlockedExchangeAdd(&dword_14011CE68, v6);
      if ( v6 + v20 < v20 )
        v20 = _InterlockedExchangeAdd(&dword_14011CE68, v6);
      Alignment = (_SLIST_HEADER *)v8;
      do
      {
        if ( (__int64)Alignment[15].Region <= 0 )
        {
          v22 = v20++;
          Alignment[15].Region = v22;
        }
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      }
      while ( Alignment );
    }
    else
    {
      v18 = (_QWORD *)v8->Link.Alignment;
      if ( v8->Link.Alignment )
      {
        do
        {
          if ( (__int64)v18[31] <= 0 )
          {
            CorrelationIds = ndisGenerateCorrelationIds(1u);
            v18[31] = CorrelationIds;
          }
          v18 = (_QWORD *)*v18;
        }
        while ( v18 );
      }
    }
  }
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_98;
  v23 = *((_QWORD *)v5 + 510);
  v24 = 0;
  v25 = *((_QWORD *)v5 + 313);
  v26 = ndisNblTrackerEpoch;
  *(_QWORD *)v108 = v23;
  LODWORD(v104) = v15 & 1;
  v106 = 0LL;
  v27 = 0LL;
  v101 = 0;
  v28 = 0LL;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    LOBYTE(v24) = (v15 & 2) != 0;
    ndisNblTrackerRecordEventInternal(v8, v23, v24 + 128, (void *)v25, v15 & 1);
  }
  v29 = v25 & 0xFFFFFFFFFFFFFFFDuLL;
  v30 = v25 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v25 & 1) != 0 )
  {
    v30 = (2 * v26) ^ (v25 ^ (2 * v26)) & 0xFFFFFFFFFFFFFFFDuLL;
    v29 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v31 = NetBufferLista;
  if ( !NetBufferLista )
    goto LABEL_87;
  v32 = 12;
  do
  {
    v33 = (unsigned __int64)v31->NetBufferListInfo[27];
    v34 = *(_QWORD *)v108;
    while ( v31->NetBufferListInfo[27] == (void *)v33 )
    {
      if ( v33 )
      {
        if ( (v33 & 4) != 0 )
          goto LABEL_67;
      }
      else if ( !v31->SourceHandle )
      {
        v35 = v34 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v34 & 1) != 0 )
          v35 = *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v31->SourceHandle = (void *)v35;
      }
      SourceHandle = (unsigned __int8 *)v31->SourceHandle;
      if ( SourceHandle )
      {
        v40 = *SourceHandle;
        if ( *SourceHandle == 17 || v40 == 5 || v40 == 18 )
        {
          if ( SourceHandle != (unsigned __int8 *)v29 || v31->ParentNetBufferList )
          {
            v27 = (struct _NET_BUFFER_LIST *)((char *)v27 + 1);
            v37 = v30;
          }
          else
          {
            ++v28;
            v37 = 24LL;
            v27 = (struct _NET_BUFFER_LIST *)((char *)v27 + 1);
          }
          goto LABEL_68;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v100 = *SourceHandle;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v31,
            *(_QWORD *)v100);
          goto LABEL_66;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v32,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)v31);
LABEL_66:
        v32 = 12;
      }
LABEL_67:
      v37 = v30 | 4;
LABEL_68:
      v31->NetBufferListInfo[27] = (void *)v37;
      v31 = (PNET_BUFFER_LIST)v31->Link.Alignment;
      if ( !v31 )
        break;
    }
    v38 = (char *)v106 - (char *)v27;
    if ( (v33 & 1) != 0 && v38 )
    {
      if ( (_BYTE)v104 || v101 )
      {
        v39 = 16 * ((v33 >> 1) & 1) + (v33 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !(_BYTE)v104 )
          goto LABEL_85;
LABEL_94:
        v43 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v43 + *(_QWORD *)v39) += v38;
      }
      else
      {
        v101 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          LOBYTE(v104) = 1;
          v39 = 16 * ((v33 >> 1) & 1) + (v33 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_94;
        }
        LOBYTE(v104) = 0;
        v39 = 16 * ((v33 >> 1) & 1) + (v33 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_85:
        _InterlockedAdd64((volatile signed __int64 *)(v39 + 8), v38);
      }
    }
    v106 = v27;
    v32 = 12;
  }
  while ( v31 );
LABEL_87:
  v41 = (unsigned __int64)v27 - v28;
  if ( (v30 & 1) != 0 && v41 )
  {
    if ( (_BYTE)v104 || v101 )
    {
      v42 = 16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v104 )
        goto LABEL_96;
LABEL_105:
      v49 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v49 + *(_QWORD *)v42) += v41;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v42 = 16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_105;
      }
      v42 = 16 * ((v30 >> 1) & 1) + (v30 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_96:
      _InterlockedAdd64((volatile signed __int64 *)(v42 + 8), v41);
    }
  }
  v5 = v109;
  v7 = v105;
LABEL_98:
  if ( byte_14011F740 && (v44 = *((_QWORD *)v5 + 738)) != 0 )
  {
    v45 = NetBufferLista;
    if ( (*(_DWORD *)(v44 + 56) & 1) != 0 )
    {
      v46 = *((_DWORD *)v5 + 1478);
      v47 = (NetBufferLista->NblFlags & 0x8000) == 0;
      v122 = 0LL;
      LODWORD(v124) = 0;
      v123 = 0LL;
      if ( v47 )
      {
        if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          v48 = *((_QWORD *)v5 + 737);
          LOWORD(v122) = 40;
          *((_QWORD *)&v122 + 1) = v45;
          LODWORD(v123) = 1;
          *(_QWORD *)((char *)&v123 + 4) = v46 | 0x100000000LL;
          v124 = 0LL;
          (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1) + 40LL))(
            xmmword_14011F760,
            v48,
            &v122,
            0LL);
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
      }
    }
  }
  else
  {
    v45 = NetBufferLista;
  }
  v50 = *((_QWORD *)v5 + 314);
  v51 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v5 + 328);
  v52 = *((_QWORD *)v5 + 312);
  v127.QuadPart = MEMORY[0xFFFFF78000000320];
  v47 = *(_BYTE *)v50 == 17;
  v106 = v51;
  v105 = v52;
  if ( v47 )
  {
    v53 = v102;
    ((void (__fastcall *)(__int64, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))v51)(v52, v45, v7, v102, ReceiveFlags);
  }
  else
  {
    v54 = ReceiveFlags & 2;
    if ( (ReceiveFlags & 2) == 0 && ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
    {
      LODWORD(v54) = KeGetPcr()->Prcb.Number;
      v55 = v126;
      v56 = v45->Link.Alignment;
      v108[0] = v54;
      v126[2] = 0LL;
      v104 = v126;
      v126[0] = v45;
      v126[1] = v45;
      v45->Scratch = 0LL;
      v45->ChildRefCount = ReceiveFlags;
      v45->Status = v7;
      if ( v56 )
      {
        *(_QWORD *)(v56 + 112) = v102;
        v54 = v108[0];
      }
      if ( *(_BYTE *)v50 == 5 )
      {
        do
        {
          v57 = *v55;
          if ( !*v55 )
            break;
          v58 = v50;
          v59 = 96 * v54 + *(_QWORD *)(v50 + 424) + 48LL;
          v118 = v59;
          if ( *(_BYTE *)(v59 + 16) )
          {
            *v55 = 0LL;
            v70 = v106;
            do
            {
              v71 = 1;
              v72 = *(_QWORD *)(v57 + 112);
              v73 = *(_DWORD *)(v57 + 132);
              v74 = *(_DWORD *)(v57 + 140);
              if ( *(_QWORD *)v57 )
                v71 = *(_DWORD *)(*(_QWORD *)v57 + 112LL);
              *(_DWORD *)(v57 + 132) = 0;
              if ( byte_14011F740 )
              {
                if ( *(_BYTE *)v50 == 5 )
                {
                  v75 = *(_QWORD *)(v50 + 872);
                  if ( v75 )
                  {
                    if ( (*(_DWORD *)(v75 + 56) & 1) != 0 )
                      PktMonClientNblLogNdis(v50 + 848, v57, 0LL, 1LL);
                  }
                }
              }
              if ( ndisVerifierNdisDispatch && *(_BYTE *)v50 == 5 && (v76 = *(_QWORD *)(v50 + 776)) != 0 )
                (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, struct _NET_BUFFER_LIST *))ndisVerifierNdisDispatch
                 + 14))(
                  v105,
                  v57,
                  v74,
                  v71,
                  v73,
                  v76,
                  v70);
              else
                ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int))v70)(v105, v57, v74, v71, v73);
              v57 = v72;
            }
            while ( v72 );
            v55 = v104;
            break;
          }
          *(_BYTE *)(v59 + 16) = 1;
          v60 = *v55;
          *v55 = 0LL;
          if ( v60 )
          {
            do
            {
              v61 = 1;
              v62 = *(_QWORD *)(v60 + 112);
              v63 = *(_DWORD *)(v60 + 132);
              v64 = *(_DWORD *)(v60 + 140);
              if ( *(_QWORD *)v60 )
                v61 = *(_DWORD *)(*(_QWORD *)v60 + 112LL);
              *(_DWORD *)(v60 + 132) = 0;
              if ( byte_14011F740 )
              {
                if ( *(_BYTE *)v50 == 5 )
                {
                  v65 = *(_QWORD *)(v50 + 872);
                  if ( v65 )
                  {
                    if ( (*(_DWORD *)(v65 + 56) & 1) != 0 )
                    {
                      v66 = *(_DWORD *)(v50 + 880);
                      v47 = (*(_DWORD *)(v60 + 128) & 0x8000) == 0;
                      Parameter = 0LL;
                      LODWORD(v113) = 0;
                      v112 = 0LL;
                      if ( v47 && ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                      {
                        v67 = *(_QWORD *)(v50 + 864);
                        LOWORD(Parameter) = 40;
                        *((_QWORD *)&Parameter + 1) = v60;
                        LODWORD(v112) = 1;
                        *(_QWORD *)((char *)&v112 + 4) = v66 | 0x100000000LL;
                        v113 = 0LL;
                        (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1)
                                                                                    + 40LL))(
                          xmmword_14011F760,
                          v67,
                          &Parameter,
                          0LL);
                        ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                      }
                      v51 = v106;
                    }
                  }
                }
              }
              if ( ndisVerifierNdisDispatch && *(_BYTE *)v50 == 5 && (v68 = *(_QWORD *)(v50 + 776)) != 0 )
                (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, struct _NET_BUFFER_LIST *))ndisVerifierNdisDispatch
                 + 14))(
                  v105,
                  v60,
                  v64,
                  v61,
                  v63,
                  v68,
                  v51);
              else
                ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int))v51)(v105, v60, v64, v61, v63);
              v60 = v62;
            }
            while ( v62 );
            v59 = v118;
            v58 = v50;
          }
          *(_BYTE *)(v59 + 16) = 0;
          v55 = (__int64 *)v59;
          v50 = *(_QWORD *)(v50 + 520);
          v51 = *(struct _NET_BUFFER_LIST **)(v58 + 496);
          v69 = *(_QWORD *)(v58 + 504);
          v104 = (__int64 *)v59;
          v47 = *(_BYTE *)v50 == 5;
          v54 = v108[0];
          v106 = v51;
          v105 = v69;
        }
        while ( v47 );
      }
      v77 = *v55;
      if ( *v55 )
      {
        *v55 = 0LL;
        do
        {
          v78 = 1;
          v79 = *(_QWORD *)(v77 + 112);
          v80 = *(_DWORD *)(v77 + 132);
          v81 = *(_DWORD *)(v77 + 140);
          if ( *(_QWORD *)v77 )
            v78 = *(_DWORD *)(*(_QWORD *)v77 + 112LL);
          *(_DWORD *)(v77 + 132) = 0;
          if ( byte_14011F740 )
          {
            if ( *(_BYTE *)v50 == 5 )
            {
              v82 = *(_QWORD *)(v50 + 872);
              if ( v82 )
              {
                if ( (*(_DWORD *)(v82 + 56) & 1) != 0 )
                {
                  v83 = *(_DWORD *)(v50 + 880);
                  v47 = (*(_DWORD *)(v77 + 128) & 0x8000) == 0;
                  Parameter = 0LL;
                  LODWORD(v113) = 0;
                  v112 = 0LL;
                  if ( v47 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                    {
                      v84 = *(_QWORD *)(v50 + 864);
                      LOWORD(Parameter) = 40;
                      *((_QWORD *)&Parameter + 1) = v77;
                      LODWORD(v112) = 1;
                      *(_QWORD *)((char *)&v112 + 4) = v83 | 0x100000000LL;
                      v113 = 0LL;
                      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1)
                                                                                  + 40LL))(
                        xmmword_14011F760,
                        v84,
                        &Parameter,
                        0LL);
                      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                    }
                  }
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && *(_BYTE *)v50 == 5 && (v85 = *(_QWORD *)(v50 + 776)) != 0 )
            (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, struct _NET_BUFFER_LIST *))ndisVerifierNdisDispatch
             + 14))(
              v105,
              v77,
              v81,
              v78,
              v80,
              v85,
              v106);
          else
            ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int))v106)(v105, v77, v81, v78, v80);
          v77 = v79;
        }
        while ( v79 );
      }
    }
    else
    {
      v86 = (unsigned int)Size;
      v87 = v102;
      v88 = KeGetPcr()->Prcb.Number << 12;
      v108[0] = ReceiveFlags;
      v106 = v51;
      v118 = v52;
      v89 = *(_QWORD *)(v88 + qword_14011EF88);
      LowLimit = v89;
      v125 = v50;
      LODWORD(v105) = v102;
      v90 = *(_QWORD *)(v88 + qword_14011EF80);
      HighLimit = v90;
      LODWORD(v104) = v7;
      v119 = v45;
      if ( v89 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v90 )
      {
        IoGetStackLimits(&LowLimit, &HighLimit);
        v89 = LowLimit;
        v87 = v102;
      }
      if ( (unsigned __int64)&retaddr - v89 < v86 )
      {
        v91 = 24576;
        v115 = 0;
        *(_QWORD *)&Parameter = v50;
        *((_QWORD *)&Parameter + 1) = v52;
        *(_QWORD *)&v112 = v51;
        *((_QWORD *)&v112 + 1) = v45;
        v113 = __PAIR64__(v87, v7);
        v114 = ReceiveFlags;
        if ( (unsigned int)Size > 0x6000 )
          v91 = Size;
        if ( KeExpandKernelStackAndCalloutEx(
               ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
               &Parameter,
               v91,
               0,
               0LL) < 0 )
        {
          if ( byte_14011F740 && (*(_DWORD *)(v50 + 840) & 2) != 0 )
            PktMonClientNblDropNdis(v50 + 784, (_DWORD)v45, v92, 1, -1073741670, -536866813);
          NdisSetStatusInNblChain(v45, -1073741670);
          _InterlockedAdd((volatile signed __int32 *)(v50 + 292), NdisNumNblsInNblChain(v45));
          if ( (ReceiveFlags & 2) == 0 )
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v50, v45, 0);
        }
      }
      else
      {
        ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
          (unsigned int)&v125,
          (unsigned int)&v106,
          (unsigned int)&v118,
          (unsigned int)&v119,
          (__int64)&v104,
          (__int64)&v105,
          (__int64)v108);
      }
    }
    v53 = v102;
    v5 = v109;
  }
  LOBYTE(v15) = ReceiveFlags;
  v127.QuadPart = (MEMORY[0xFFFFF78000000320] - v127.QuadPart) * ndisTimeIncrement / 10000;
  if ( (ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2 )
    ndisPeriodicReceivesLearning((struct _NDIS_MINIPORT_BLOCK *)v5, v53, &v127);
  v93 = ReceiveFlags & 2;
  if ( (ReceiveFlags & 2) != 0 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLista,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 313),
        *((_QWORD *)v5 + 510),
        0x8Eu,
        ReceiveFlags & 1);
    v93 = ReceiveFlags & 2;
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
LABEL_194:
    v94 = NetBufferLista;
    if ( v93 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLista);
  }
  else
  {
    if ( byte_14011F740 )
    {
      v93 = ReceiveFlags & 2;
      goto LABEL_194;
    }
LABEL_203:
    v94 = NetBufferLista;
  }
  if ( (v110 & 4) != 0 )
  {
    v97 = Number;
    if ( Number == -1 )
      v97 = KeGetPcr()->Prcb.Number;
    v98 = v117 + ndisPcwPerCpuDataStride * v97 + ndisPcwOffsetToPerCpuData;
    v99 = __rdtsc();
    *(_QWORD *)(v98 + 120) += (((unsigned __int64)HIDWORD(v99) << 32) | (unsigned int)v99) - *(_QWORD *)(v98 + 320);
    *(_QWORD *)(v98 + 320) = 0LL;
    if ( v103 != 2 )
      KeLowerIrql(v103);
  }
  if ( (v15 & 2) != 0 && ndisIsNblContextVeriferEnabled(*((const struct _NDIS_FILTER_BLOCK **)v5 + 314)) )
    ndisRemoveNblContextTerminator(v94, *((struct _NDIS_OBJECT_HEADER **)v5 + 314));
}
