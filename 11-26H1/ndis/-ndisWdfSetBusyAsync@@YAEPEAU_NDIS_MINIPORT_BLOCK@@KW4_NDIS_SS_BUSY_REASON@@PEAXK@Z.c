/*
 * XREFs of ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0
 * Callers:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140042E50 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140052D40 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14007AE20 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140008200 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140008430 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140008FF0 (McTemplateK0qq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140038F90 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008F300 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1400C60F0 (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1400C61BC (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6304 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

bool __fastcall ndisWdfSetBusyAsync(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  struct _NET_BUFFER_LIST *v7; // r14
  unsigned int v9; // r15d
  unsigned int v11; // edi
  unsigned __int64 (*v12)(void *, struct _NET_BUFFER_LIST *); // rdx
  KIRQL v13; // r11
  char v14; // bl
  char v16; // bl
  _QWORD *v17; // rdx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rdi
  __int64 v20; // r10
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  _QWORD *v23; // r13
  unsigned __int64 v24; // rdi
  char *v25; // rax
  char v26; // r8
  __int64 v27; // rax
  __int64 v28; // r10
  _QWORD *v29; // r8
  __int64 v30; // rcx
  char *v31; // rdx
  _QWORD *v32; // r8
  __int64 v33; // rcx
  _QWORD *v34; // rax
  char v35; // r12
  __int64 v36; // rcx
  int v37; // r8d
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  KIRQL v40; // r11
  struct _NET_BUFFER_LIST *v41; // rcx
  _QWORD *v42; // rcx
  KIRQL v43; // [rsp+41h] [rbp-30h]
  _QWORD *v44; // [rsp+48h] [rbp-29h]
  __int64 v45; // [rsp+50h] [rbp-21h] BYREF
  __int64 *v46; // [rsp+58h] [rbp-19h]
  unsigned __int64 v47; // [rsp+60h] [rbp-11h]
  struct _LIST_ENTRY v48; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v49[9]; // [rsp+78h] [rbp+7h] BYREF

  v5 = *(_QWORD *)(a1 + 4448);
  v48.Blink = &v48;
  v6 = a1;
  v7 = 0LL;
  v48.Flink = &v48;
  v9 = a3;
  v11 = 0;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  v43 = v13;
  if ( *(_DWORD *)(v5 + 512)
    || *(_DWORD *)(v5 + 516)
    || *(_DWORD *)(v5 + 528)
    || *(_DWORD *)(v5 + 532)
    || *(_DWORD *)(v5 + 520)
    || *(_DWORD *)(v5 + 524)
    || *(_DWORD *)(v5 + 576)
    || *(_DWORD *)(v5 + 508) )
  {
    if ( KeReadStateEvent((PRKEVENT)(v5 + 272)) )
    {
      v14 = ndisIncrementAsyncIdleCountersLocked(v5, a2, v9);
      ndisSelectiveSuspendSetResumeBusyReason(v5, 0LL, v9, 0LL);
      KeReleaseSpinLock((PKSPIN_LOCK)v5, v43);
      return v14;
    }
    v13 = v43;
  }
  if ( v9 == 54 )
    goto LABEL_48;
  v16 = 0;
  v48.Blink = &v48;
  v48.Flink = &v48;
  if ( v9 == 49 )
    goto LABEL_65;
  if ( v9 != 51 )
  {
    if ( v9 != 53 )
    {
      if ( v9 == 52 )
      {
        v17 = 0LL;
        if ( *(_DWORD *)ndisNblTrackerMode )
        {
          v18 = ndisNblTrackerEpoch;
          v19 = *(_QWORD *)(v5 + 608);
          v20 = 0LL;
          LODWORD(v47) = ndisNblTrackerEpoch;
          v44 = 0LL;
          v49[0] = 0LL;
          v45 = 0LL;
          if ( *(int *)ndisNblTrackerMode >= 3 )
          {
            ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)a4, 0LL, 1u, (void *)v19, 1u);
            v18 = v47;
            v17 = 0LL;
            v20 = 0LL;
          }
          v21 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
          v47 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
          v22 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (v19 & 1) != 0 )
          {
            v22 = (2LL * v18) ^ (v19 ^ (2LL * v18)) & 0xFFFFFFFFFFFFFFFDuLL;
            v21 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            v47 = v21;
          }
          if ( a4 )
          {
            v23 = (_QWORD *)a4;
            while ( 1 )
            {
              v24 = v23[45];
              while ( v23[45] == v24 )
              {
                if ( v24 )
                {
                  if ( (v24 & 4) != 0 )
                    goto LABEL_71;
                }
                else if ( !v23[15] )
                {
                  v23[15] = 0LL;
                }
                v25 = (char *)v23[15];
                if ( v25 )
                {
                  v26 = *v25;
                  if ( *v25 == 17 || v26 == 5 || v26 == 18 )
                  {
                    if ( v25 != (char *)v21 || v23[3] )
                    {
                      v17 = (_QWORD *)((char *)v17 + 1);
                      v27 = v22;
                      v44 = v17;
                    }
                    else
                    {
                      ++v20;
                      v27 = 24LL;
                      v17 = (_QWORD *)((char *)v17 + 1);
                      v45 = v20;
                      v44 = v17;
                    }
                    goto LABEL_35;
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v17) = 3;
                    WPP_RECORDER_SF_qD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      (int)v17,
                      27,
                      12,
                      (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                      (char)v23,
                      v26);
LABEL_76:
                    v21 = v47;
                    v17 = v44;
                    v20 = v45;
                  }
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v17) = 3;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v17,
                    27,
                    11,
                    (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                    (char)v23);
                  goto LABEL_76;
                }
LABEL_71:
                v27 = v22 | 4;
LABEL_35:
                v23[45] = v27;
                v23 = (_QWORD *)*v23;
                if ( !v23 )
                  break;
              }
              v28 = v49[0] - (_QWORD)v17;
              v49[0] -= v17;
              if ( (v24 & 1) != 0 && v28 )
              {
                v29 = (_QWORD *)(16 * ((v24 >> 1) & 1) + (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
                v30 = KeGetPcr()->Prcb.Number << 12;
                *(_QWORD *)(v30 + *v29) += v28;
              }
              v21 = v47;
              v20 = v45;
              v49[0] = v17;
              if ( !v23 )
              {
                v9 = a3;
                v6 = a1;
                break;
              }
            }
          }
          v31 = (char *)v17 - v20;
          if ( (v22 & 1) != 0 && v31 )
          {
            v32 = (_QWORD *)(16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
            v33 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(v33 + *v32) += v31;
          }
          v17 = 0LL;
          v11 = 0;
        }
        v34 = (_QWORD *)a4;
        if ( a4 )
        {
          do
          {
            v34[14] = a5;
            v17 = v34;
            v34 = (_QWORD *)*v34;
          }
          while ( v34 );
        }
        **(_QWORD **)(v5 + 552) = a4;
        *(_QWORD *)(v5 + 552) = v17;
        *(_DWORD *)(v5 + 632) = 0;
      }
      else if ( v9 == 50 )
      {
        v38 = *(_QWORD **)(v5 + 592);
        v39 = (_QWORD *)(a4 + 72);
        if ( *v38 != v5 + 584 )
          __fastfail(3u);
        *v39 = v5 + 584;
        *(_QWORD *)(a4 + 80) = v38;
        *v38 = v39;
        *(_QWORD *)(v5 + 592) = v39;
        *(_DWORD *)(v5 + 632) = *(_DWORD *)(a4 + 32);
      }
LABEL_48:
      v16 = 1;
      if ( *(_DWORD *)(v5 + 512)
        || *(_DWORD *)(v5 + 516)
        || *(_DWORD *)(v5 + 528)
        || *(_DWORD *)(v5 + 532)
        || *(_DWORD *)(v5 + 520)
        || *(_DWORD *)(v5 + 524)
        || *(_DWORD *)(v5 + 576)
        || *(_DWORD *)(v5 + 508) )
      {
        v35 = 0;
      }
      else
      {
        v35 = 1;
        KeClearEvent((PRKEVENT)(v5 + 272));
        v11 = v9;
      }
      ndisIncrementAsyncIdleCountersLocked(v5, a2, v9);
      v13 = v43;
LABEL_58:
      KeReleaseSpinLock((PKSPIN_LOCK)v5, v13);
      if ( v16 && v35 )
        ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)v6, 0, 1u);
LABEL_61:
      if ( v7 )
      {
        if ( byte_14011F740 && (*(_DWORD *)(v6 + 5872) & 2) != 0 )
          PktMonClientNblDropNdis(v6 + 5816, (_DWORD)v7, v37, 2, -1071448017, -536866804);
        NdisSetStatusInNblChain(v7, -1071448052);
        ndisMSendNetBufferListsCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)v6, v7, 0, 0);
      }
      goto LABEL_62;
    }
    v41 = *(struct _NET_BUFFER_LIST **)(v5 + 544);
    if ( v41 )
    {
      v45 = 0LL;
      v46 = &v45;
      v49[0] = 0LL;
      v49[1] = v49;
      NdisClassifyNblChain2(v41, v12, (void *)a4, (struct NBL_QUEUE_t *)&v45, (struct NBL_QUEUE_t *)v49);
      v42 = (_QWORD *)(v5 + 544);
      if ( *(_QWORD *)(v5 + 544) != v45 )
      {
        if ( v45 )
        {
          *v42 = v45;
          *(_QWORD *)(v5 + 552) = v46;
          v46 = &v45;
          v45 = 0LL;
        }
        else
        {
          *v42 = 0LL;
          *(_QWORD *)(v5 + 552) = v5 + 544;
        }
      }
      v7 = (struct _NET_BUFFER_LIST *)v49[0];
      KeReleaseSpinLock((PKSPIN_LOCK)v5, v43);
      goto LABEL_61;
    }
LABEL_65:
    v35 = 0;
    goto LABEL_58;
  }
  ndisDequeueDirectOidsByRequestId((struct _NDIS_SELECTIVE_SUSPEND *)v5, (void *)a4, &v48);
  KeReleaseSpinLock((PKSPIN_LOCK)v5, v40);
LABEL_62:
  if ( v48.Flink != &v48 )
    ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)v6, &v48);
  if ( v11 )
  {
    if ( (byte_14011D041 & 8) != 0 )
      McTemplateK0qq_EtwWriteTransfer(v36, ">(", v6 + 4008, (*(_QWORD *)(v6 + 4024) >> 24) & 0xFFFFFFLL, v11);
  }
  return v9 == 54;
}
