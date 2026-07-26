/*
 * XREFs of NdisFSendNetBufferLists @ 0x140025020
 * Callers:
 *     ?SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400A54C0 (-SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400257A0 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140026740 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14002C9F0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     PktMonClientNblDrop @ 0x14002F8C0 (PktMonClientNblDrop.c)
 *     NdisAllocateNetBufferListContext @ 0x140040EF0 (NdisAllocateNetBufferListContext.c)
 *     NblContextVerifierBugcheckInternalError @ 0x14008C300 (NblContextVerifierBugcheckInternalError.c)
 *     TrackNblContextVerifierFailure @ 0x1400A5520 (TrackNblContextVerifierFailure.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  char *v4; // r12
  __int64 v5; // rcx
  ULONG v6; // r13d
  PNET_BUFFER_LIST v7; // r10
  unsigned int v8; // r11d
  struct NDIS_NBL_TRACKER_HANDLE__ *v9; // rcx
  unsigned int v10; // r13d
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  _SLIST_HEADER *v17; // r14
  unsigned __int64 Region; // rdi
  struct NDIS_NBL_TRACKER_HANDLE__ *v19; // r12
  unsigned __int8 *v20; // rax
  unsigned __int8 v21; // cl
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  struct _NET_BUFFER_LIST *v29; // rbx
  void (*v30)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  PNET_BUFFER_LIST v31; // rbx
  char v32; // si
  int v33; // eax
  __int64 v34; // r15
  struct _NET_BUFFER_LIST *v35; // rdi
  int v36; // r9d
  PNET_BUFFER_LIST Alignment; // rbx
  _SLIST_HEADER *v38; // r14
  struct _NET_BUFFER_LIST *v39; // rsi
  char v40; // al
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  int v43; // edi
  bool v44; // zf
  __int64 v45; // rdx
  struct _NDIS_OBJECT_HEADER *v46; // r9
  void *v47; // rax
  void (*v48)(void *, struct _NET_BUFFER_LIST *, unsigned int); // rcx
  NDIS_HANDLE v49; // r8
  unsigned int Flags; // eax
  unsigned int v51; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rdi
  __int64 v53; // [rsp+30h] [rbp-D0h]
  char v54; // [rsp+40h] [rbp-C0h]
  unsigned int v55; // [rsp+44h] [rbp-BCh]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v58; // [rsp+50h] [rbp-B0h]
  struct _NET_BUFFER_LIST *v59; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *p_Alignment; // [rsp+60h] [rbp-A0h]
  __int16 v61; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+6Ah] [rbp-96h]
  __int16 v63; // [rsp+6Eh] [rbp-92h]
  PNET_BUFFER_LIST v64; // [rsp+70h] [rbp-90h]
  int v65; // [rsp+78h] [rbp-88h]
  int v66; // [rsp+7Ch] [rbp-84h]
  int v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+84h] [rbp-7Ch]
  __int64 v69; // [rsp+88h] [rbp-78h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v70; // [rsp+90h] [rbp-70h]
  _QWORD v71[56]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = (char *)NdisFilterHandle;
  v5 = *((_QWORD *)NdisFilterHandle + 57);
  v6 = SendFlags;
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && v5 )
  {
    switch ( *(_BYTE *)v5 )
    {
      case 5:
        LOBYTE(v33) = FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v5, 0x400u) != 0;
        break;
      case 0x11:
        LOBYTE(v33) = (*(_DWORD *)(v5 + 3688) & 0x1000) != 0;
        break;
      case 0x12:
        v33 = *(_DWORD *)(v5 + 224) >> 31;
        break;
      default:
        goto LABEL_2;
    }
    if ( (_BYTE)v33 )
    {
      v34 = *((_QWORD *)v4 + 57);
      v35 = 0LL;
      p_Alignment = &v59;
      v59 = 0LL;
      memset(&v71[1], 0, 0x178uLL);
      Alignment = NetBufferList;
      v38 = (_SLIST_HEADER *)v71;
      v71[0] = NetBufferList;
      v39 = NetBufferList;
      if ( NetBufferList )
      {
        do
        {
          if ( NdisAllocateNetBufferListContext(Alignment, 8u, 0, 0x6376444Eu) )
          {
            TrackNblContextVerifierFailure(Alignment, v34);
            v38->Alignment = Alignment->Link.Alignment;
            Alignment->Link.Alignment = 0LL;
            *p_Alignment = Alignment;
            p_Alignment = &Alignment->Link.Alignment;
            Alignment = (PNET_BUFFER_LIST)v38->Alignment;
          }
          else
          {
            v38 = (_SLIST_HEADER *)Alignment;
            *(_QWORD *)&Alignment->Context->ContextData[Alignment->Context->Offset] = v34;
            Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          }
        }
        while ( Alignment );
        v35 = v59;
        v39 = (struct _NET_BUFFER_LIST *)v71[0];
      }
      NetBufferList = v39;
      v59 = 0LL;
      p_Alignment = &v59;
      if ( v35 )
      {
        if ( byte_14011F740 && (*((_DWORD *)v4 + 210) & 2) != 0 )
          PktMonClientNblDrop((_DWORD)v4 + 784, (_DWORD)v35, *((_DWORD *)v4 + 209), v36);
        v40 = *v4;
        if ( *v4 == 5 )
        {
          v49 = (NDIS_HANDLE)*((_QWORD *)v4 + 57);
        }
        else
        {
          if ( v40 != 17 )
            goto LABEL_64;
          v49 = (NDIS_HANDLE)*((_QWORD *)v4 + 321);
        }
        if ( v49 )
        {
          if ( *(_BYTE *)v49 != 5 )
          {
            if ( *(_BYTE *)v49 == 17 )
            {
              v46 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)v49 + 324);
              v47 = (void *)*((_QWORD *)v49 + 322);
              v48 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v49 + 327);
              goto LABEL_82;
            }
LABEL_64:
            NblContextVerifierBugcheckInternalError((ULONG_PTR)v4, (ULONG_PTR)v35);
          }
          v46 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)v49 + 61);
          v47 = (void *)*((_QWORD *)v49 + 59);
          v48 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v49 + 58);
        }
        else
        {
          if ( v40 != 17 )
            goto LABEL_64;
          v46 = (struct _NDIS_OBJECT_HEADER *)*((_QWORD *)v4 + 301);
          v49 = v4;
          v47 = (void *)*((_QWORD *)v4 + 299);
          v48 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v4 + 304);
        }
LABEL_82:
        ndisInvokeNextSendCompleteHandler(v35, v6 & 1, (struct _NDIS_OBJECT_HEADER *)v49, v46, v47, v48);
        if ( !v39 )
          return;
      }
    }
  }
LABEL_2:
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v4, 0x200u) )
  {
    ndisNblVerifyTxIndication(v7, v8, v6, (const struct _NDIS_OBJECT_HEADER *)v4);
    v7 = NetBufferList;
    v31 = NetBufferList;
    if ( NetBufferList )
    {
      v32 = byte_14011EDF0;
      do
      {
        Flags = v31->Flags;
        v31->Scratch = MmBadPointer;
        v31->ChildRefCount = -892679478;
        if ( v32 )
        {
          v32 = 0;
          v51 = Flags & 0xFFF0FFFF;
        }
        else
        {
          v32 = 1;
          v51 = Flags | 0xF0000;
        }
        byte_14011EDF0 = v32;
        v31->Flags = v51;
        for ( i = v31->Context; i; i = i->Next )
          memset(i->ContextData, 202, i->Offset);
        v31 = (PNET_BUFFER_LIST)v31->Link.Alignment;
      }
      while ( v31 );
      v7 = NetBufferList;
    }
  }
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_31;
  v9 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v4 + 81);
  v10 = v6 & 1;
  v11 = *((_QWORD *)v4 + 56);
  v12 = 0LL;
  v13 = ndisNblTrackerEpoch;
  v14 = 0LL;
  v55 = v10;
  v70 = v9;
  v57 = 0LL;
  v56 = 0LL;
  v54 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v7, v9, 0x90u, (void *)v11, v10);
    v7 = NetBufferList;
    v12 = 0LL;
  }
  v15 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
  v16 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v11 & 1) != 0 )
  {
    v16 = (2 * v13) ^ (v11 ^ (2 * v13)) & 0xFFFFFFFFFFFFFFFDuLL;
    v15 = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v17 = (_SLIST_HEADER *)v7;
  if ( v7 )
  {
    while ( 1 )
    {
      Region = v17[22].Region;
      v19 = v70;
      while ( v17[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_70;
        }
        else if ( !v17[7].Region )
        {
          v41 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( ((unsigned __int8)v19 & 1) != 0 )
            v41 = *(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
          v17[7].Region = v41;
        }
        v20 = (unsigned __int8 *)v17[7].Region;
        if ( v20 )
        {
          v21 = *v20;
          if ( *v20 == 17 || v21 == 5 || v21 == 18 )
          {
            if ( v20 != (unsigned __int8 *)v15 || v17[1].Region )
            {
              ++v14;
              v22 = v16;
            }
            else
            {
              ++v12;
              v22 = 24LL;
              v56 = v12;
              ++v14;
            }
            goto LABEL_17;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v53) = *v20;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)v17,
              v53);
LABEL_107:
            v12 = v56;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v12,
            27,
            11,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v17);
          goto LABEL_107;
        }
LABEL_70:
        v22 = v16 | 4;
LABEL_17:
        v17[22].Region = v22;
        v17 = (_SLIST_HEADER *)v17->Alignment;
        if ( !v17 )
          break;
      }
      v10 = v55;
      v23 = v57 - v14;
      v58 = v57 - v14;
      if ( (Region & 1) == 0 || !v23 )
        goto LABEL_23;
      if ( (_BYTE)v55 || v54 )
      {
        v24 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !(_BYTE)v55 )
          goto LABEL_39;
        goto LABEL_22;
      }
      v54 = 1;
      if ( KeGetCurrentIrql() == 2 )
      {
        LOBYTE(v10) = 1;
        v55 = v10;
        v24 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_22:
        v25 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v25 + *(_QWORD *)v24) += v58;
        goto LABEL_23;
      }
      LOBYTE(v10) = 0;
      v55 = v10;
      v24 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_39:
      _InterlockedAdd64((volatile signed __int64 *)(v24 + 8), v58);
LABEL_23:
      v12 = v56;
      v57 = v14;
      if ( !v17 )
      {
        v4 = (char *)NdisFilterHandle;
        break;
      }
    }
  }
  v26 = v14 - v12;
  if ( (v16 & 1) != 0 && v26 )
  {
    if ( (_BYTE)v10 || v54 )
    {
      v27 = (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v16 >> 1) & 1) + 40;
      if ( !(_BYTE)v10 )
      {
LABEL_43:
        _InterlockedAdd64((volatile signed __int64 *)(v27 + 8), v26);
        goto LABEL_30;
      }
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v27 = (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v16 >> 1) & 1) + 40;
        goto LABEL_43;
      }
      v27 = (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v16 >> 1) & 1) + 40;
    }
    v28 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v28 + *(_QWORD *)v27) += v26;
  }
LABEL_30:
  v6 = SendFlags;
LABEL_31:
  if ( byte_14011F740 && (v42 = *((_QWORD *)v4 + 109)) != 0 )
  {
    v29 = NetBufferList;
    if ( (*(_DWORD *)(v42 + 56) & 1) != 0 )
    {
      v43 = *((_DWORD *)v4 + 220);
      v68 = 0;
      v44 = (NetBufferList->NblFlags & 0x8000) == 0;
      v62 = 0;
      v63 = 0;
      if ( v44 )
      {
        if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          v45 = *((_QWORD *)v4 + 108);
          v61 = 40;
          v64 = NetBufferList;
          v65 = 1;
          v66 = v43;
          v67 = 2;
          v69 = 0LL;
          (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1) + 40LL))(
            xmmword_14011F760,
            v45,
            &v61,
            0LL);
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
      }
    }
  }
  else
  {
    v29 = NetBufferList;
  }
  v30 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)v4 + 78);
  if ( v30 == ndisFilterSendNetBufferLists )
    ndisFilterSendNetBufferLists(v4, v29, PortNumber, v6);
  else
    ((void (__fastcall *)(char *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))v30)(v4, v29, PortNumber, v6);
}
