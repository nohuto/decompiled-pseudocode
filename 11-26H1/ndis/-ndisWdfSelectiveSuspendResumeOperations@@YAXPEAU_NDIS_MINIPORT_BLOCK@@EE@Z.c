/*
 * XREFs of ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300
 * Callers:
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140088080 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C6EE4 (-ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWdfAsyncPowerReferenceCompleteNotification @ 0x140167E50 (NdisWdfAsyncPowerReferenceCompleteNotification.c)
 * Callees:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140052D40 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008F300 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6364 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisWdfSelectiveSuspendResumeOperations(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, char a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // r14
  KIRQL v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // rsi
  struct _NET_BUFFER_LIST *v10; // rdi
  struct _LIST_ENTRY *v11; // rax
  int v12; // r8d
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v14; // rcx
  struct _NDIS_OID_REQUEST *p_Blink; // rbx
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rbp
  struct _NET_BUFFER_LIST *v19; // r13
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  __int64 v21; // r14
  __int64 v22; // rdx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rbx
  _QWORD *v25; // r14
  unsigned __int64 v26; // rdi
  char *v27; // rax
  char v28; // cl
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  char v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // ebx
  struct _NET_BUFFER_LIST *v38; // rdx
  __int64 v39; // [rsp+40h] [rbp-88h]
  __int64 v40; // [rsp+48h] [rbp-80h]
  unsigned __int64 v41; // [rsp+48h] [rbp-80h]
  struct _NET_BUFFER_LIST *v42; // [rsp+50h] [rbp-78h]
  struct _LIST_ENTRY v43; // [rsp+68h] [rbp-60h] BYREF
  char v45; // [rsp+D8h] [rbp+10h]
  char v46; // [rsp+E0h] [rbp+18h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = a1;
  v43 = 0LL;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 272), 0, 0);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v7 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82)) / 10000LL;
  *((_QWORD *)SelectiveSuspend + 84) += v7;
  *((_QWORD *)SelectiveSuspend + 83) = v7;
  v8 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81)) / 10000LL;
  *((_QWORD *)SelectiveSuspend + 86) += v8;
  *((_QWORD *)SelectiveSuspend + 85) = v8;
  v9 = (__int64 *)*((_QWORD *)SelectiveSuspend + 68);
  *((_QWORD *)SelectiveSuspend + 68) = 0LL;
  *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
  v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
  *((_QWORD *)SelectiveSuspend + 70) = 0LL;
  *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
  v11 = (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584);
  v42 = v10;
  if ( v11->Flink == v11 )
  {
    v43.Blink = &v43;
    v43.Flink = &v43;
  }
  else
  {
    v43 = *v11;
    *((_QWORD *)SelectiveSuspend + 74) = (char *)SelectiveSuspend + 584;
    v11->Flink = v11;
    v43.Flink->Blink = &v43;
    v43.Blink->Flink = &v43;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  if ( !v9 )
    goto LABEL_4;
  if ( a3 )
  {
    if ( byte_14011F740 && (*((_DWORD *)&v4->PktMonComp + 14) & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)v4 + 5816, (_DWORD)v9, v12, 2, -1071448017, -536866806);
    NdisSetStatusInNblChain((struct _NET_BUFFER_LIST *)v9, -1073676271);
    ndisMSendNetBufferListsCompleteInternal(v4, (struct _NET_BUFFER_LIST *)v9, 0, 0);
    goto LABEL_4;
  }
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_47;
  NblTracker = v4->NblTracker;
  v21 = ndisNblTrackerEpoch;
  v22 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v45 = 0;
  v46 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v9, 0LL, 0x92u, NblTracker, 0);
    v22 = 0LL;
  }
  v23 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
  v24 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( ((unsigned __int8)NblTracker & 1) != 0 )
  {
    v24 = (2 * v21) ^ ((unsigned __int64)NblTracker ^ (2 * v21)) & 0xFFFFFFFFFFFFFFFDuLL;
    v23 = *(_QWORD *)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  }
  v25 = v9;
  do
  {
    v26 = v25[45];
    while ( v25[45] == v26 )
    {
      if ( v26 )
      {
        if ( (v26 & 4) != 0 )
          goto LABEL_63;
      }
      else if ( !v25[15] )
      {
        v25[15] = 0LL;
      }
      v27 = (char *)v25[15];
      if ( v27 )
      {
        v28 = *v27;
        if ( *v27 == 17 || v28 == 5 || v28 == 18 )
        {
          if ( v27 != (char *)v23 || v25[3] )
          {
            ++v18;
            v29 = v24;
          }
          else
          {
            ++v22;
            v29 = 24LL;
            v39 = v22;
            ++v18;
          }
          goto LABEL_30;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v22,
            27,
            12,
            (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
            (char)v25,
            v28);
LABEL_76:
          v22 = v39;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          27,
          11,
          (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
          (char)v25);
        goto LABEL_76;
      }
LABEL_63:
      v29 = v24 | 4;
LABEL_30:
      v25[45] = v29;
      v25 = (_QWORD *)*v25;
      if ( !v25 )
        break;
    }
    v30 = v40 - v18;
    v31 = v45;
    v41 = v40 - v18;
    if ( (v26 & 1) != 0 && v30 )
    {
      if ( v45 || v46 )
      {
        v32 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( v45 )
          goto LABEL_39;
LABEL_37:
        _InterlockedAdd64((volatile signed __int64 *)(v32 + 8), v30);
      }
      else
      {
        v46 = 1;
        if ( KeGetCurrentIrql() != 2 )
        {
          v30 = v41;
          v31 = 0;
          v45 = 0;
          v32 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_37;
        }
        v31 = 1;
        v45 = 1;
        v32 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_39:
        v33 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v33 + *(_QWORD *)v32) += v41;
      }
    }
    v22 = v39;
    v40 = v18;
  }
  while ( v25 );
  v19 = 0LL;
  v34 = v18 - v39;
  if ( (v24 & 1) == 0 || !v34 )
    goto LABEL_46;
  if ( v31 || v46 )
  {
    v35 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    if ( !v31 )
      goto LABEL_55;
    goto LABEL_45;
  }
  if ( KeGetCurrentIrql() == 2 )
  {
    v35 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_45:
    v36 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v36 + *(_QWORD *)v35) += v34;
    goto LABEL_46;
  }
  v35 = 16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_55:
  _InterlockedAdd64((volatile signed __int64 *)(v35 + 8), v34);
LABEL_46:
  v4 = a1;
  LODWORD(v18) = 0;
  v10 = v42;
  v17 = 0LL;
  do
  {
LABEL_47:
    v37 = *((_DWORD *)v9 + 28);
    if ( v19 && v37 != (_DWORD)v18 )
    {
      *v17 = 0LL;
      ndisMSendNBLToMiniportInternal(v4, v19, v18, 0, 1u);
      v19 = 0LL;
    }
    v38 = (struct _NET_BUFFER_LIST *)v9;
    v17 = v9;
    v9 = (__int64 *)*v9;
    if ( v19 )
    {
      v38 = v19;
      v37 = v18;
    }
    LODWORD(v18) = v37;
    v19 = v38;
  }
  while ( v9 );
  ndisMSendNBLToMiniportInternal(v4, v38, v37, 0, 1u);
LABEL_4:
  if ( v10 )
    ndisReplayRecvNbls(v4, v10);
  if ( a3 )
  {
    ndisCancelDequeuedDirectOidRequests(v4, &v43);
  }
  else
  {
    while ( 1 )
    {
      Flink = v43.Flink;
      if ( v43.Flink == &v43 )
        break;
      if ( v43.Flink->Blink != &v43 || (v14 = v43.Flink->Flink, v43.Flink->Flink->Blink != v43.Flink) )
        __fastfail(3u);
      v43.Flink = v43.Flink->Flink;
      v14->Blink = &v43;
      p_Blink = (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink;
      v16 = ndisMDoDirectOidRequest(v4, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink, 1u);
      if ( v16 != 259 )
        ndisMOidRequestCompleteInternal(v4, p_Blink, v16, 0LL);
    }
  }
}
