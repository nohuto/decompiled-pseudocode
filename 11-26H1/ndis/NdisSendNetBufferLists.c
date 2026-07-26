/*
 * XREFs of NdisSendNetBufferLists @ 0x140037160
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140026740 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14002C240 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14002C9F0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140038E40 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003E480 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     NdisAllocateNetBufferListContext @ 0x140040EF0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140057020 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1400792C0 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     NblContextVerifierBugcheckInternalError @ 0x14008C300 (NblContextVerifierBugcheckInternalError.c)
 *     TrackNblContextVerifierFailure @ 0x1400A5520 (TrackNblContextVerifierFailure.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  ULONG_PTR v4; // r13
  PNET_BUFFER_LIST Alignment; // r12
  unsigned int Number; // r14d
  ULONG v7; // ebx
  NDIS_PORT_NUMBER v8; // r10d
  char *v9; // rdi
  int v10; // r15d
  ULONG_PTR v11; // rbx
  bool v12; // zf
  struct _NET_BUFFER_LIST *v13; // rsi
  struct _NET_BUFFER_LIST *v14; // rbp
  _SLIST_HEADER *v15; // rdi
  char v16; // cl
  unsigned int v17; // edx
  __int64 v18; // rax
  struct _NDIS_OBJECT_HEADER *v19; // r9
  void *v20; // rcx
  void (*v21)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r10
  unsigned __int64 v22; // rdx
  char v23; // cl
  unsigned __int64 v24; // rbx
  unsigned int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // r14
  unsigned __int64 v29; // rdi
  _SLIST_HEADER *v30; // rsi
  unsigned __int64 v31; // r12
  const struct _GUID *v32; // rdx
  unsigned __int64 Region; // rbx
  unsigned __int8 *v34; // r13
  unsigned __int64 v35; // rax
  unsigned __int8 *v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // r13d
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rdx
  unsigned __int8 v41; // al
  unsigned __int64 v42; // rbp
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // ebx
  KIRQL v47; // r10
  __int64 v48; // rcx
  unsigned int v49; // r8d
  _SLIST_HEADER *v50; // rdx
  _QWORD *v51; // rax
  int i; // ecx
  int v53; // r15d
  __int64 v54; // rcx
  __int64 v55; // r15
  char v56; // r14
  __int64 v57; // rdi
  int v58; // ebp
  KIRQL v59; // si
  unsigned int v60; // ebx
  __int64 v61; // r8
  unsigned __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v64; // r8
  unsigned __int64 v65; // rax
  __int64 v66; // [rsp+30h] [rbp-228h]
  char v67; // [rsp+40h] [rbp-218h]
  KIRQL v68; // [rsp+41h] [rbp-217h]
  int v69; // [rsp+44h] [rbp-214h]
  unsigned int v70; // [rsp+48h] [rbp-210h]
  int v71; // [rsp+4Ch] [rbp-20Ch]
  int v72; // [rsp+50h] [rbp-208h]
  int v73; // [rsp+54h] [rbp-204h]
  __int64 v74; // [rsp+58h] [rbp-200h]
  struct _NET_BUFFER_LIST *v75; // [rsp+60h] [rbp-1F8h] BYREF
  _QWORD *p_Alignment; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v77; // [rsp+70h] [rbp-1E8h]
  __int64 v78; // [rsp+78h] [rbp-1E0h]
  unsigned __int64 v79; // [rsp+80h] [rbp-1D8h]
  ULONG_PTR v80; // [rsp+88h] [rbp-1D0h]
  _QWORD v81[49]; // [rsp+90h] [rbp-1C8h] BYREF
  struct _NET_BUFFER_LIST *v82; // [rsp+260h] [rbp+8h] BYREF
  PNET_BUFFER_LIST v83; // [rsp+268h] [rbp+10h]
  unsigned int v84; // [rsp+270h] [rbp+18h]
  ULONG v85; // [rsp+278h] [rbp+20h]

  v85 = SendFlags;
  v84 = PortNumber;
  v83 = NetBufferLists;
  v82 = (struct _NET_BUFFER_LIST *)NdisBindingHandle;
  v4 = *((_QWORD *)NdisBindingHandle + 2);
  Alignment = NetBufferLists;
  v80 = v4;
  v73 = 0;
  Number = -1;
  LOBYTE(v72) = 0;
  v7 = SendFlags;
  v8 = PortNumber;
  v68 = 2;
  v9 = (char *)NdisBindingHandle;
  v74 = 0LL;
  v69 = -1;
  if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
  {
    v73 = *(_DWORD *)(v4 + 48);
    v72 = *(_DWORD *)(v4 + 80);
    v74 = *(_QWORD *)(v4 + 40);
    if ( !v74 )
      v74 = *(_QWORD *)(v4 + 40);
  }
  v10 = *(_DWORD *)(v4 + 2668);
  v71 = v10;
  if ( !v10 )
  {
    v11 = *(_QWORD *)(v4 + 2568);
    goto LABEL_10;
  }
  if ( v10 == 1 || v10 == 3 )
  {
    v11 = v4;
LABEL_10:
    if ( !v11 || !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
      goto LABEL_17;
    if ( *(_BYTE *)v11 == 5 )
    {
      v12 = !FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v11, 1024);
    }
    else
    {
      if ( *(_BYTE *)v11 != 17 )
      {
        if ( *(_BYTE *)v11 != 18 || *(int *)(v11 + 224) >= 0 )
          goto LABEL_17;
        goto LABEL_21;
      }
      v12 = (*(_DWORD *)(v11 + 3688) & 0x1000) == 0;
    }
    if ( v12 )
    {
LABEL_17:
      v7 = v85;
      goto LABEL_47;
    }
LABEL_21:
    v13 = 0LL;
    v75 = 0LL;
    p_Alignment = &v75;
    memset(&v81[1], 0, 0x178uLL);
    v81[0] = Alignment;
    v14 = Alignment;
    v15 = (_SLIST_HEADER *)v81;
    if ( Alignment )
    {
      do
      {
        if ( NdisAllocateNetBufferListContext(Alignment, 8u, 0, 0x6376444Eu) )
        {
          TrackNblContextVerifierFailure(Alignment, v11);
          v15->Alignment = Alignment->Link.Alignment;
          Alignment->Link.Alignment = 0LL;
          *p_Alignment = Alignment;
          p_Alignment = &Alignment->Link.Alignment;
          Alignment = (PNET_BUFFER_LIST)v15->Alignment;
        }
        else
        {
          v15 = (_SLIST_HEADER *)Alignment;
          *(_QWORD *)&Alignment->Context->ContextData[Alignment->Context->Offset] = v11;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        }
      }
      while ( Alignment );
      v13 = v75;
      v14 = (struct _NET_BUFFER_LIST *)v81[0];
    }
    v83 = v14;
    p_Alignment = &v75;
    Alignment = v14;
    v75 = 0LL;
    if ( !v13 )
    {
      v7 = v85;
LABEL_46:
      v8 = v84;
      v9 = (char *)v82;
      goto LABEL_47;
    }
    if ( byte_14011F740 && (*(_DWORD *)(v4 + 5872) & 2) != 0 )
      PktMonClientNblDropNdis(v4 + 5816, (__int64)v13, *(__int64 *)&PortNumber, 2LL, -1073741670, -536866800);
    v7 = v85;
    v16 = *(_BYTE *)v4;
    v17 = v85 & 1;
    if ( *(_BYTE *)v4 == 5 )
    {
      v18 = *(_QWORD *)(v4 + 456);
    }
    else
    {
      if ( v16 != 17 )
        goto LABEL_178;
      v18 = *(_QWORD *)(v4 + 2568);
    }
    if ( !v18 )
    {
      if ( v16 == 17 )
      {
        ndisInvokeNextSendCompleteHandler(
          v13,
          v17,
          (struct _NDIS_FILTER_BLOCK *)v4,
          *(struct _NDIS_OBJECT_HEADER **)(v4 + 2408),
          *(void **)(v4 + 2392),
          *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v4 + 2432));
        goto LABEL_43;
      }
LABEL_178:
      NblContextVerifierBugcheckInternalError(v4, (ULONG_PTR)v13);
    }
    if ( *(_BYTE *)v18 == 5 )
    {
      v19 = *(struct _NDIS_OBJECT_HEADER **)(v18 + 488);
      v20 = *(void **)(v18 + 472);
      v21 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v18 + 464);
    }
    else
    {
      if ( *(_BYTE *)v18 != 17 )
        goto LABEL_178;
      v19 = *(struct _NDIS_OBJECT_HEADER **)(v18 + 2592);
      v20 = *(void **)(v18 + 2576);
      v21 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v18 + 2616);
    }
    ndisInvokeNextSendCompleteHandler(v13, v17, (struct _NDIS_FILTER_BLOCK *)v18, v19, v20, v21);
LABEL_43:
    if ( !v14 )
      return;
    goto LABEL_46;
  }
LABEL_47:
  if ( (*((_DWORD *)v9 + 56) & 1) != 0 )
  {
    ndisNblVerifyTxIndication(Alignment, v8, v7, (const struct _NDIS_OBJECT_HEADER *)v9);
    ndisNblPoisonScratchFields(Alignment);
  }
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_100;
  v22 = *((_QWORD *)v9 + 73);
  v23 = v7;
  v24 = *(_QWORD *)(v4 + 2560);
  v25 = v23 & 1;
  v26 = ndisNblTrackerEpoch;
  v27 = 0LL;
  v70 = v25;
  v28 = 0LL;
  v79 = v22;
  v78 = 0LL;
  v67 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(Alignment, v22, 0x8Fu, (void *)v24, v25);
  v29 = v24 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v24 & 1) != 0 )
  {
    v77 = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v29 = (2 * v26) ^ (v24 ^ (2 * v26)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v77 = v24 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v30 = (_SLIST_HEADER *)Alignment;
  if ( Alignment )
  {
    v31 = v79;
    v32 = &WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids;
    while ( 1 )
    {
      Region = v30[22].Region;
      v34 = (unsigned __int8 *)v77;
      while ( v30[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_68;
        }
        else if ( !v30[7].Region )
        {
          v35 = v31 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (v31 & 1) != 0 )
            v35 = *(_QWORD *)((v31 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
          v30[7].Region = v35;
        }
        v36 = (unsigned __int8 *)v30[7].Region;
        if ( v36 )
        {
          v41 = *v36;
          if ( *v36 == 17 || v41 == 5 || v41 == 18 )
          {
            if ( v36 != v34 || v30[1].Region )
            {
              ++v27;
              v37 = v29;
            }
            else
            {
              ++v28;
              v37 = 24LL;
              ++v27;
            }
            goto LABEL_69;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v66) = *v36;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)v30,
              v66);
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v32,
            27,
            11,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v30);
        }
LABEL_68:
        v37 = v29 | 4;
LABEL_69:
        v30[22].Region = v37;
        v32 = &WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids;
        v30 = (_SLIST_HEADER *)v30->Alignment;
        if ( !v30 )
          break;
      }
      v38 = v70;
      v39 = v78 - v27;
      if ( (Region & 1) != 0 && v39 )
      {
        if ( (_BYTE)v70 || v67 )
        {
          v40 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !(_BYTE)v70 )
            goto LABEL_86;
LABEL_96:
          v44 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v44 + *(_QWORD *)v40) += v39;
        }
        else
        {
          v67 = 1;
          if ( KeGetCurrentIrql() == 2 )
          {
            LOBYTE(v38) = 1;
            v70 = v38;
            v40 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            goto LABEL_96;
          }
          LOBYTE(v38) = 0;
          v70 = v38;
          v40 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_86:
          _InterlockedAdd64((volatile signed __int64 *)(v40 + 8), v39);
        }
      }
      v78 = v27;
      v32 = &WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids;
      if ( !v30 )
      {
        Alignment = v83;
        v4 = v80;
        break;
      }
    }
  }
  v42 = v27 - v28;
  if ( (v29 & 1) != 0 && v42 )
  {
    if ( (_BYTE)v70 || v67 )
    {
      v43 = 16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( (_BYTE)v70 )
        goto LABEL_109;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v43 = 16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_109:
        v48 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v48 + *(_QWORD *)v43) += v42;
        goto LABEL_99;
      }
      v43 = 16 * ((v29 >> 1) & 1) + (v29 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v43 + 8), v42);
  }
LABEL_99:
  v9 = (char *)v82;
  v10 = v71;
  Number = -1;
LABEL_100:
  if ( byte_14011F740 )
  {
    v45 = *((_QWORD *)v9 + 126);
    if ( v45 )
    {
      if ( (*(_DWORD *)(v45 + 56) & 1) != 0 )
        PktMonClientNblLogNdis(v9 + 984, Alignment, *(_QWORD *)&PortNumber, 2LL);
    }
  }
  if ( (v73 & 0x200140) != 0 || (v72 & 0x40) != 0 )
  {
    v46 = v85;
    if ( (v85 & 1) != 0 )
    {
      v47 = 2;
    }
    else
    {
      v47 = KfRaiseIrql(2u);
      v68 = v47;
    }
    if ( (v73 & 0x40) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v69 = Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v74 + ndisPcwPerCpuDataStride * Number + 48);
    }
    if ( !v47 && (v73 & 0x200000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v69 = Number;
      }
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v74 + ndisPcwPerCpuDataStride * Number + 200);
    }
    if ( (v73 & 0x400100) != 0 )
    {
      v49 = 0;
      v50 = (_SLIST_HEADER *)Alignment;
      if ( Alignment )
      {
        do
        {
          v51 = (_QWORD *)v50->Region;
          for ( i = 0; v51; ++i )
            v51 = (_QWORD *)*v51;
          v50 = (_SLIST_HEADER *)v50->Alignment;
          v49 += i;
        }
        while ( v50 );
      }
      if ( (v73 & 0x100) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v69 = Number;
        }
        *(_QWORD *)(v74 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 64) += v49;
      }
      if ( !v47 && (v73 & 0x400000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v69 = Number;
        }
        *(_QWORD *)(v74 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 208) += v49;
      }
    }
    if ( (v72 & 0x40) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v69 = Number;
      }
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v74 + ndisPcwPerCpuDataStride * Number + 352) = __rdtsc();
    }
    else if ( v47 != 2 )
    {
      KeLowerIrql(v47);
    }
  }
  else
  {
    v46 = v85;
  }
  if ( v10 )
  {
    v53 = v10 - 1;
    if ( v53 )
    {
      if ( v53 == 1 )
        ndisMSendNetBufferListsToPackets((struct _NDIS_MINIPORT_BLOCK *)v4, Alignment, v84, v46);
      else
        ndisMFakeSendNetBufferLists((void *)v4, Alignment, v84, v46);
    }
    else
    {
      ndisMSendNBLToMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)v4, Alignment, v84, v46, 0);
    }
  }
  else
  {
    v54 = *(_QWORD *)(v4 + 2568);
    v82 = Alignment;
    if ( *(_BYTE *)v54 == 5
      && (*(_DWORD *)(v54 + 56) & 0x8000) != 0
      && !*(_DWORD *)(v54 + 336)
      && (*(_BYTE *)(v4 + 91) && (*(_WORD *)(v4 + 1820) > 1u || *(_BYTE *)(v4 + 1999))
       || (v46 & 2) != 0
       || (*(_DWORD *)(v4 + 120) & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v54, Alignment, v84, v46, &v82);
      Alignment = v82;
    }
    if ( Alignment )
    {
      v55 = *(_QWORD *)(v4 + 2552);
      v56 = 0;
      v57 = 0LL;
      LOBYTE(v58) = 0;
      v59 = 2;
      v60 = -1;
      if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
      {
        v57 = *(_QWORD *)(v4 + 40);
        v58 = *(_DWORD *)(v4 + 80);
        if ( !v57 )
          v57 = *(_QWORD *)(v4 + 40);
      }
      if ( v55 == v4 && (v58 & 0x80u) != 0 )
      {
        if ( (v85 & 1) == 0 )
        {
          v59 = KfRaiseIrql(2u);
          v56 = 1;
        }
        v60 = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v57 + ndisPcwPerCpuDataStride * v60 + 360) = __rdtsc();
      }
      ndisInvokeNextSendHandler(
        Alignment,
        v84,
        v85,
        *(struct _NDIS_OBJECT_HEADER **)(v4 + 2568),
        *(void **)(v4 + 2552),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))(v4 + 2648));
      if ( v55 == v4 )
      {
        if ( (v58 & 0x80u) != 0 )
        {
          if ( v60 == -1 )
            v60 = KeGetPcr()->Prcb.Number;
          v61 = v57 + ndisPcwPerCpuDataStride * v60 + ndisPcwOffsetToPerCpuData;
          v62 = __rdtsc();
          *(_QWORD *)(v61 + 160) += (((unsigned __int64)HIDWORD(v62) << 32) | (unsigned int)v62)
                                  - *(_QWORD *)(v61 + 360);
          *(_QWORD *)(v61 + 360) = 0LL;
        }
        if ( v56 && v59 != 2 )
          KeLowerIrql(v59);
      }
    }
  }
  if ( (v72 & 0x40) != 0 )
  {
    v63 = v69;
    if ( v69 == -1 )
      v63 = KeGetPcr()->Prcb.Number;
    v64 = v74 + ndisPcwPerCpuDataStride * v63 + ndisPcwOffsetToPerCpuData;
    v65 = __rdtsc();
    *(_QWORD *)(v64 + 152) += (((unsigned __int64)HIDWORD(v65) << 32) | (unsigned int)v65) - *(_QWORD *)(v64 + 352);
    *(_QWORD *)(v64 + 352) = 0LL;
    if ( v68 != 2 )
      KeLowerIrql(v68);
  }
}
