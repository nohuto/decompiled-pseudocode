/*
 * XREFs of ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0
 * Callers:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007930 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14002C240 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14002C330 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C63CC (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140075E00 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteInternal(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        char a4)
{
  struct _NDIS_FILTER_BLOCK *v4; // r12
  unsigned int v5; // r13d
  struct _NET_BUFFER_LIST *v6; // r15
  unsigned __int64 v7; // rbx
  unsigned int v8; // r13d
  NDIS_NBL_TRACKER_HANDLE__ *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rsi
  _UNKNOWN **v16; // rdx
  unsigned __int64 v17; // rbx
  NDIS_NBL_TRACKER_HANDLE__ *v18; // r13
  unsigned __int64 v19; // rax
  unsigned __int8 *SourceHandle; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int8 v24; // al
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  _SLIST_HEADER *v28; // rax
  unsigned __int64 v29; // rbx
  void (__fastcall *v30)(void *, _NET_BUFFER_LIST *, unsigned int); // rsi
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r14
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // ecx
  unsigned __int64 *p_LowLimit; // rdi
  bool v39; // zf
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r15
  __int64 v42; // r14
  unsigned __int64 v43; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v51; // rax
  __int64 v52; // r8
  unsigned __int64 v53; // rdi
  unsigned int v54; // eax
  char *v55; // r8
  unsigned __int64 v56; // rax
  __int64 v57; // [rsp+30h] [rbp-98h]
  char v58; // [rsp+40h] [rbp-88h]
  KIRQL v59; // [rsp+41h] [rbp-87h]
  unsigned int v60; // [rsp+44h] [rbp-84h]
  int v61; // [rsp+48h] [rbp-80h]
  unsigned int Number; // [rsp+4Ch] [rbp-7Ch]
  wchar_t *p_Length; // [rsp+50h] [rbp-78h]
  unsigned __int64 LowLimit; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 HighLimit; // [rsp+60h] [rbp-68h] BYREF
  void (__fastcall *v66)(void *, _NET_BUFFER_LIST *, unsigned int); // [rsp+68h] [rbp-60h]
  struct _NET_BUFFER_LIST *v67; // [rsp+70h] [rbp-58h]
  __int64 v68; // [rsp+78h] [rbp-50h]
  unsigned int v69; // [rsp+80h] [rbp-48h]
  int v70; // [rsp+84h] [rbp-44h]
  NDIS_NBL_TRACKER_HANDLE__ *v71; // [rsp+88h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  v4 = a1;
  v5 = a3;
  Number = -1;
  v6 = a2;
  p_Length = 0LL;
  LOWORD(v61) = 0;
  if ( LODWORD(a1->FilterFriendlyName) || *(_DWORD *)&a1->Ref.ReferenceCount )
  {
    v61 = *(_DWORD *)&a1->Ref.ReferenceCount;
    p_Length = &a1->FilterInstanceName.__ptr_.__value_->Length;
    if ( !p_Length )
      p_Length = &a1->FilterInstanceName.__ptr_.__value_->Length;
  }
  v59 = 2;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_58;
  v7 = *(_QWORD *)&a1[1].NicSwitchCurrentCapabilities.NdisReserved4;
  v8 = a3 & 1;
  v60 = v8;
  if ( a4 )
    v9 = *(NDIS_NBL_TRACKER_HANDLE__ **)&a1[2].NicSwitchCurrentCapabilities.MaxNumRssCapableNonDefaultPFVPorts;
  else
    v9 = 0LL;
  v10 = ndisNblTrackerEpoch;
  v11 = 0LL;
  v58 = 0;
  v12 = 0LL;
  v71 = v9;
  LowLimit = 0LL;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a2, (unsigned __int64)v9, 0x93u, (void *)v7, v8);
  v13 = v7 & 0xFFFFFFFFFFFFFFFDuLL;
  v14 = v7 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v7 & 1) != 0 )
  {
    v14 = (2 * v10) ^ (v7 ^ (2 * v10)) & 0xFFFFFFFFFFFFFFFDuLL;
    v13 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  Alignment = a2;
  if ( !a2 )
    goto LABEL_47;
  v16 = &WPP_RECORDER_INITIALIZED;
  do
  {
    v17 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    v18 = v71;
    while ( Alignment->NetBufferListInfo[27] == (void *)v17 )
    {
      if ( v17 )
      {
        if ( (v17 & 4) != 0 )
          goto LABEL_27;
      }
      else if ( !Alignment->SourceHandle )
      {
        v19 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( ((unsigned __int8)v18 & 1) != 0 )
          v19 = *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        Alignment->SourceHandle = (void *)v19;
      }
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        v24 = *SourceHandle;
        if ( *SourceHandle == 17 || v24 == 5 || v24 == 18 )
        {
          if ( SourceHandle != (unsigned __int8 *)v13 || Alignment->ParentNetBufferList )
          {
            ++v11;
            v21 = v14;
          }
          else
          {
            ++v12;
            v21 = 24LL;
            ++v11;
          }
          goto LABEL_28;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v57) = *SourceHandle;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)Alignment,
            v57);
          goto LABEL_26;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v16,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)Alignment);
LABEL_26:
        v16 = &WPP_RECORDER_INITIALIZED;
      }
LABEL_27:
      v21 = v14 | 4;
LABEL_28:
      Alignment->NetBufferListInfo[27] = (void *)v21;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    v8 = v60;
    v22 = LowLimit - v11;
    if ( (v17 & 1) != 0 && v22 )
    {
      if ( (_BYTE)v60 || v58 )
      {
        v23 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !(_BYTE)v60 )
          goto LABEL_45;
LABEL_54:
        v27 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v27 + *(_QWORD *)v23) += v22;
      }
      else
      {
        v58 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          LOBYTE(v8) = 1;
          v60 = v8;
          v23 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_54;
        }
        LOBYTE(v8) = 0;
        v60 = v8;
        v23 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_45:
        _InterlockedAdd64((volatile signed __int64 *)(v23 + 8), v22);
      }
    }
    LowLimit = v11;
    v16 = &WPP_RECORDER_INITIALIZED;
  }
  while ( Alignment );
LABEL_47:
  v25 = v11 - v12;
  if ( (v14 & 1) != 0 && v25 )
  {
    if ( (_BYTE)v8 || v58 )
    {
      v26 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v8 )
        goto LABEL_56;
LABEL_78:
      v36 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v36 + *(_QWORD *)v26) += v25;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v26 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_78;
      }
      v26 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_56:
      _InterlockedAdd64((volatile signed __int64 *)(v26 + 8), v25);
    }
  }
  v5 = a3;
  v4 = a1;
  v6 = a2;
LABEL_58:
  if ( byte_14011F740 )
  {
    v28 = (_SLIST_HEADER *)v6;
    if ( v6 )
    {
      do
      {
        v28[15].Region = 0LL;
        v28 = (_SLIST_HEADER *)v28->Alignment;
      }
      while ( v28 );
    }
  }
  if ( (v61 & 0x100) != 0 )
  {
    if ( (v5 & 1) == 0 )
      v59 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)((char *)p_Length + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 368) = __rdtsc();
  }
  v29 = *(_QWORD *)&v4[1].NicSwitchCurrentCapabilities.MaxNumQueuePairs;
  v30 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))&v4[1].NicSwitchCurrentCapabilities.NdisReserved9;
  v31 = *(_QWORD *)&v4[1].NicSwitchCurrentCapabilities.MaxNumSwitches;
  if ( *(_BYTE *)v29 == 17 )
    goto LABEL_111;
  if ( (v5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    p_LowLimit = &LowLimit;
    v6->ChildRefCount = v5;
    v6->Scratch = 0LL;
    v39 = *(_BYTE *)v29 == 5;
    v66 = 0LL;
    LowLimit = (unsigned __int64)v6;
    HighLimit = (unsigned __int64)v6;
    if ( v39 )
    {
      do
      {
        v40 = *p_LowLimit;
        if ( !*p_LowLimit )
          break;
        v41 = v29;
        v42 = *(_QWORD *)(v29 + 424) + 96LL * (_QWORD)v4;
        if ( *(_BYTE *)(v42 + 40) )
        {
          *p_LowLimit = 0LL;
          do
          {
            v47 = ndisVerifierNdisDispatch;
            v48 = *(unsigned int *)(v40 + 132);
            v49 = *(_QWORD *)(v40 + 112);
            *(_DWORD *)(v40 + 132) = 0;
            if ( v47 && *(_BYTE *)v29 == 5 && *(_QWORD *)(v29 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v47 + 13))(v31, v40, 0LL);
            else
              v30((void *)v31, (_NET_BUFFER_LIST *)v40, v48);
            v40 = v49;
          }
          while ( v49 );
          break;
        }
        *(_BYTE *)(v42 + 40) = 1;
        v43 = *p_LowLimit;
        *p_LowLimit = 0LL;
        if ( v43 )
        {
          do
          {
            v44 = ndisVerifierNdisDispatch;
            v45 = *(unsigned int *)(v43 + 132);
            v46 = *(_QWORD *)(v43 + 112);
            *(_DWORD *)(v43 + 132) = 0;
            if ( v44 && *(_BYTE *)v29 == 5 && *(_QWORD *)(v29 + 776) )
              (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v44 + 13))(v31, v43, 0LL);
            else
              v30((void *)v31, (_NET_BUFFER_LIST *)v43, v45);
            v43 = v46;
          }
          while ( v46 );
        }
        *(_BYTE *)(v42 + 40) = 0;
        p_LowLimit = (unsigned __int64 *)(v42 + 24);
        v29 = *(_QWORD *)(v29 + 488);
        v30 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))(v41 + 464);
        v31 = *(_QWORD *)(v41 + 472);
      }
      while ( *(_BYTE *)v29 == 5 );
    }
    v50 = *p_LowLimit;
    if ( *p_LowLimit )
    {
      *p_LowLimit = 0LL;
      do
      {
        v51 = ndisVerifierNdisDispatch;
        v52 = *(unsigned int *)(v50 + 132);
        v53 = *(_QWORD *)(v50 + 112);
        *(_DWORD *)(v50 + 132) = 0;
        if ( v51 && *(_BYTE *)v29 == 5 && *(_QWORD *)(v29 + 776) )
          (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v51 + 13))(v31, v50, 0LL);
        else
          v30((void *)v31, (_NET_BUFFER_LIST *)v50, v52);
        v50 = v53;
      }
      while ( v53 );
    }
  }
  else
  {
    if ( v4->Header.Type != 5 )
      goto LABEL_111;
    v32 = (unsigned int)Size;
    v33 = KeGetPcr()->Prcb.Number << 12;
    v34 = *(_QWORD *)(v33 + qword_14011EF88);
    LowLimit = v34;
    v35 = *(_QWORD *)(v33 + qword_14011EF80);
    HighLimit = v35;
    if ( v34 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v35 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v34 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v34 < v32 )
    {
      v37 = 24576;
      v70 = 0;
      LowLimit = v29;
      HighLimit = v31;
      v66 = v30;
      v67 = v6;
      v68 = 0LL;
      v69 = v5;
      if ( (unsigned int)Size > 0x6000 )
        v37 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             &LowLimit,
             v37,
             0,
             0LL) < 0 )
        ndisQueueStackExpansionFallbackNbls(v4, v6, 1u);
    }
    else
    {
      if ( ndisVerifierNdisDispatch && *(_BYTE *)v29 == 5 && *(_QWORD *)(v29 + 776) )
      {
        (*((void (__fastcall **)(unsigned __int64, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 13))(
          v31,
          v6,
          0LL);
        goto LABEL_112;
      }
LABEL_111:
      v30((void *)v31, v6, v5);
    }
  }
LABEL_112:
  if ( (v61 & 0x100) != 0 )
  {
    v54 = Number;
    if ( Number == -1 )
      v54 = KeGetPcr()->Prcb.Number;
    v55 = (char *)p_Length + ndisPcwPerCpuDataStride * v54 + ndisPcwOffsetToPerCpuData;
    v56 = __rdtsc();
    *((_QWORD *)v55 + 21) += (((unsigned __int64)HIDWORD(v56) << 32) | (unsigned int)v56) - *((_QWORD *)v55 + 46);
    *((_QWORD *)v55 + 46) = 0LL;
    if ( v59 != 2 )
      KeLowerIrql(v59);
  }
}
