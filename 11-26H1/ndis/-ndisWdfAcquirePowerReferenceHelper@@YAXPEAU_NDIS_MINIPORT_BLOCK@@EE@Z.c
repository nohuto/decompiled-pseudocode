/*
 * XREFs of ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140088080 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088490 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C67A4 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C6EE4 (-ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140052D40 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     WPP_RECORDER_SF_sq @ 0x140058DC0 (WPP_RECORDER_SF_sq.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008F300 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6364 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisWdfAcquirePowerReferenceHelper(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rbp
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int64 v7; // rcx
  int v8; // edx
  int v9; // esi
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned int v11; // esi
  KIRQL v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct _NET_BUFFER_LIST *Alignment; // r14
  struct _NET_BUFFER_LIST *v16; // rdi
  struct _LIST_ENTRY *v17; // rax
  int v18; // r8d
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v20; // rcx
  struct _NDIS_OID_REQUEST *p_Blink; // rbx
  int v22; // eax
  KSPIN_LOCK *v23; // rbx
  KIRQL v24; // al
  KSPIN_LOCK v25; // rdx
  struct _NET_BUFFER_LIST *v26; // rcx
  __int64 v27; // rdx
  _SLIST_HEADER *v28; // r8
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  __int64 v30; // r12
  __int64 v31; // r15
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rbx
  _SLIST_HEADER *v34; // r15
  unsigned __int64 Region; // rdi
  char *v36; // rax
  char v37; // cl
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  char v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  int Scratch; // ebx
  __int64 CurrentProcess; // rax
  int v48; // edx
  int v49; // r8d
  int v50; // r9d
  char v51; // [rsp+40h] [rbp-88h]
  struct _LIST_ENTRY v52; // [rsp+48h] [rbp-80h] BYREF
  __int64 v53; // [rsp+58h] [rbp-70h]
  unsigned __int64 v54; // [rsp+60h] [rbp-68h]
  struct _NET_BUFFER_LIST *v55; // [rsp+68h] [rbp-60h]
  struct _NET_BUFFER_LIST *v56; // [rsp+70h] [rbp-58h]
  struct _NET_BUFFER_LIST *v57; // [rsp+80h] [rbp-48h]
  char v59; // [rsp+E8h] [rbp+20h]

  v5 = a1;
  CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
  v9 = ((__int64 (__fastcall *)(_QWORD))CxBlockFromMiniport->Chars.EvtCxPowerReference)(*(_QWORD *)(v7 + 24));
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        15,
        32,
        (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
        (char)v5,
        v9);
    }
LABEL_3:
    if ( !a2 && !a3 )
      return;
    SelectiveSuspend = v5->SelectiveSuspend;
    v11 = (unsigned int)v9 >> 31;
    v52 = 0LL;
    KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 272), 0, 0);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    v13 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82)) / 10000LL;
    *((_QWORD *)SelectiveSuspend + 84) += v13;
    *((_QWORD *)SelectiveSuspend + 83) = v13;
    v14 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81)) / 10000LL;
    *((_QWORD *)SelectiveSuspend + 86) += v14;
    *((_QWORD *)SelectiveSuspend + 85) = v14;
    Alignment = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 68);
    *((_QWORD *)SelectiveSuspend + 68) = 0LL;
    *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
    v16 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
    *((_QWORD *)SelectiveSuspend + 70) = 0LL;
    *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
    v17 = (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584);
    v57 = Alignment;
    v55 = v16;
    if ( v17->Flink == v17 )
    {
      v52.Blink = &v52;
      v52.Flink = &v52;
    }
    else
    {
      v52 = *v17;
      *((_QWORD *)SelectiveSuspend + 74) = (char *)SelectiveSuspend + 584;
      v17->Flink = v17;
      v52.Flink->Blink = &v52;
      v52.Blink->Flink = &v52;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v12);
    if ( !Alignment )
      goto LABEL_8;
    if ( (_BYTE)v11 )
    {
      if ( byte_14011F740 && (*((_DWORD *)&v5->PktMonComp + 14) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)v5 + 5816, (_DWORD)Alignment, v18, 2, -1071448017, -536866806);
      NdisSetStatusInNblChain(Alignment, -1073676271);
      ndisMSendNetBufferListsCompleteInternal(v5, Alignment, 0, 0);
LABEL_8:
      if ( v16 )
        ndisReplayRecvNbls(v5, v16);
      if ( (_BYTE)v11 )
      {
        ndisCancelDequeuedDirectOidRequests(v5, &v52);
      }
      else
      {
        while ( 1 )
        {
          Flink = v52.Flink;
          if ( v52.Flink == &v52 )
            break;
          if ( v52.Flink->Blink != &v52 || (v20 = v52.Flink->Flink, v52.Flink->Flink->Blink != v52.Flink) )
            __fastfail(3u);
          v52.Flink = v52.Flink->Flink;
          v20->Blink = &v52;
          p_Blink = (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink;
          v22 = ndisMDoDirectOidRequest(v5, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink, 1u);
          if ( v22 != 259 )
            ndisMOidRequestCompleteInternal(v5, p_Blink, v22, 0LL);
        }
      }
      return;
    }
    v26 = 0LL;
    v56 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_53;
    NblTracker = v5->NblTracker;
    v30 = 0LL;
    v31 = ndisNblTrackerEpoch;
    v54 = 0LL;
    v53 = 0LL;
    v59 = 0;
    v51 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(Alignment, 0LL, 0x92u, NblTracker, 0);
      v27 = 0LL;
    }
    v32 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    v33 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)NblTracker & 1) != 0 )
    {
      v33 = (2 * v31) ^ ((unsigned __int64)NblTracker ^ (2 * v31)) & 0xFFFFFFFFFFFFFFFDuLL;
      v32 = *(_QWORD *)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    v34 = (_SLIST_HEADER *)Alignment;
LABEL_28:
    Region = v34[22].Region;
    while ( 1 )
    {
      if ( v34[22].Region != Region )
      {
LABEL_37:
        v39 = v54 - v30;
        v40 = v59;
        v54 -= v30;
        if ( (Region & 1) != 0 && v39 )
        {
          if ( v59 || v51 )
          {
            v41 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( v59 )
              goto LABEL_45;
LABEL_43:
            _InterlockedAdd64((volatile signed __int64 *)(v41 + 8), v39);
          }
          else
          {
            v51 = 1;
            if ( KeGetCurrentIrql() != 2 )
            {
              v39 = v54;
              v40 = 0;
              v59 = 0;
              v41 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              goto LABEL_43;
            }
            v40 = 1;
            v59 = 1;
            v41 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_45:
            v42 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(v42 + *(_QWORD *)v41) += v54;
          }
        }
        v27 = v53;
        v54 = v30;
        if ( !v34 )
        {
          v43 = v30 - v53;
          Alignment = v57;
          v5 = a1;
          if ( (v33 & 1) == 0 || !v43 )
            goto LABEL_52;
          if ( v40 || v51 )
          {
            v44 = 16 * ((v33 >> 1) & 1) + (v33 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !v40 )
              goto LABEL_60;
          }
          else
          {
            if ( KeGetCurrentIrql() != 2 )
            {
              v44 = 16 * ((v33 >> 1) & 1) + (v33 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_60:
              _InterlockedAdd64((volatile signed __int64 *)(v44 + 8), v43);
LABEL_52:
              v26 = v56;
              v16 = v55;
              v28 = (_SLIST_HEADER *)v56;
              LODWORD(v27) = (_DWORD)v56;
LABEL_53:
              while ( 2 )
              {
                Scratch = (int)Alignment->Scratch;
                if ( v26 )
                {
                  if ( Scratch != (_DWORD)v27 )
                  {
                    v28->Alignment = 0LL;
                    ndisMSendNBLToMiniportInternal(v5, v26, v27, 0, 1u);
                    goto LABEL_54;
                  }
                }
                else
                {
LABEL_54:
                  v26 = Alignment;
                  LODWORD(v27) = Scratch;
                }
                v28 = (_SLIST_HEADER *)Alignment;
                Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
                if ( !Alignment )
                {
                  ndisMSendNBLToMiniportInternal(v5, v26, v27, 0, 1u);
                  goto LABEL_8;
                }
                continue;
              }
            }
            v44 = 16 * ((v33 >> 1) & 1) + (v33 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          }
          v45 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v45 + *(_QWORD *)v44) += v43;
          goto LABEL_52;
        }
        goto LABEL_28;
      }
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_68;
      }
      else if ( !v34[7].Region )
      {
        v34[7].Region = 0LL;
      }
      v36 = (char *)v34[7].Region;
      if ( v36 )
      {
        v37 = *v36;
        if ( *v36 == 17 || v37 == 5 || v37 == 18 )
        {
          if ( v36 != (char *)v32 || v34[1].Region )
          {
            ++v30;
            v38 = v33;
          }
          else
          {
            ++v27;
            v38 = 24LL;
            v53 = v27;
            ++v30;
          }
          goto LABEL_36;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v27,
            27,
            12,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v34,
            v37);
LABEL_85:
          v27 = v53;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v27,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)v34);
        goto LABEL_85;
      }
LABEL_68:
      v38 = v33 | 4;
LABEL_36:
      v34[22].Region = v38;
      v34 = (_SLIST_HEADER *)v34->Alignment;
      if ( !v34 )
        goto LABEL_37;
    }
  }
  if ( v9 != 259 )
    goto LABEL_3;
  v23 = (KSPIN_LOCK *)v5->SelectiveSuspend;
  v24 = KeAcquireSpinLockRaiseToDpc(v23);
  v25 = v23[68];
  if ( v25 )
    *(_DWORD *)(v25 + 128) |= 0x20000u;
  KeReleaseSpinLock(v23, v24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    CurrentProcess = PsGetCurrentProcess();
    PsGetProcessImageFileName(CurrentProcess);
    WPP_RECORDER_SF_sq(*((_QWORD *)WPP_GLOBAL_Control + 8), v48, v49, v50);
  }
}
