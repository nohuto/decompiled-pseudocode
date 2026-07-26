/*
 * XREFs of ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140029700
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140027820 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x14004A820 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008F730 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008F860 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008F990 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008FAC0 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 *     IsOidInFilterList @ 0x1400E6A00 (IsOidInFilterList.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  unsigned int v7; // r14d
  __int64 Pool2; // rax
  int v9; // r8d
  struct _WORK_QUEUE_ITEM *v10; // r15
  _ULONG_REFERENCE *p_Ref; // rdi
  bool v12; // bl
  KIRQL v13; // r12
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  struct _NDIS_MINIPORT_BLOCK *v16; // r13
  void **p_DeferredContext; // rdi
  KIRQL v18; // al
  KIRQL v19; // r12
  int v20; // ebx
  unsigned __int16 v21; // ax
  struct _NDIS_REFCOUNT_BLOCK *v22; // rcx
  UCHAR *NdisReserved; // rdi
  KIRQL v24; // r9
  _LIST_ENTRY *p_OidRequestList; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY **p_Flink; // rax
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v29; // dl
  __int64 v30; // rbx
  unsigned int *p_RequestBuffer; // rbx
  UCHAR *v32; // rax
  int v33; // eax
  char v34; // cl
  unsigned int v35; // eax
  UCHAR **Reserved26; // rax
  __int64 v37; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v39; // rcx
  KIRQL v40; // bl
  KIRQL v42; // [rsp+98h] [rbp+20h]
  KIRQL v43; // [rsp+98h] [rbp+20h]

  v5 = a1;
  v6 = 0LL;
  v7 = -1073741823;
  Pool2 = ExAllocatePool2(64LL, 80LL, 1769423950LL);
  v10 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        v9,
        0x10u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)v5,
        a3,
        a2);
    return (unsigned int)-1073741670;
  }
  if ( a3 != 17 )
  {
    if ( a3 != 5 )
      goto LABEL_72;
    *(_QWORD *)(Pool2 + 56) = v5;
    v16 = v5;
    if ( !v5 )
      goto LABEL_72;
    p_DeferredContext = &v5->WakeUpDpcTimer.Dpc.DeferredContext;
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
    if ( !a2 )
    {
      v39 = (struct _NDIS_REFCOUNT_BLOCK *)p_DeferredContext[2];
      ++*((_WORD *)p_DeferredContext + 4);
      v40 = v18;
      NdisReferenceWithTag(v39, 0xCu);
      KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v40);
LABEL_76:
      v5 = a1;
      goto LABEL_77;
    }
    v19 = v18;
    v20 = 1;
    if ( !*((_BYTE *)p_DeferredContext + 10) )
    {
      v21 = *((_WORD *)p_DeferredContext + 4);
      if ( v21 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v20 = 2;
      }
      else
      {
        v22 = (struct _NDIS_REFCOUNT_BLOCK *)p_DeferredContext[2];
        *((_WORD *)p_DeferredContext + 4) = v21 + 1;
        NdisReferenceWithTag(v22, 0xCu);
        v20 = 0;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v19);
    v12 = v20 == 0;
    goto LABEL_26;
  }
  *(_QWORD *)(Pool2 + 56) = v5;
  v6 = v5;
  if ( !v5 )
    goto LABEL_72;
  if ( a2 )
  {
    p_Ref = &v5->Ref;
    v12 = 1;
    v13 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    if ( !p_Ref->Closing )
    {
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v6->RefCountTracker;
      if ( RefCountTracker )
        NdisReferenceWithTag(RefCountTracker, 0x47u);
      ReferenceCount = p_Ref->ReferenceCount;
      p_Ref->ReferenceCount = ReferenceCount + 1;
      if ( ReferenceCount != -1 )
        goto LABEL_14;
      p_Ref->ReferenceCount = -1;
    }
    v12 = 0;
LABEL_14:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xCu,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        (char)v6,
        v6->Ref.ReferenceCount);
    KeReleaseSpinLock(&p_Ref->SpinLock, v13);
    v16 = 0LL;
LABEL_26:
    if ( v12 )
    {
      NdisReserved = a2->NdisReserved;
      if ( v6 )
      {
        v24 = KeAcquireSpinLockRaiseToDpc(&v6->Lock);
        v42 = v24;
        v6->MiniportThread = KeGetCurrentThread();
        *(_QWORD *)NdisReserved = 0LL;
        *(_QWORD *)&a2->NdisReserved[8] = 0LL;
        if ( (v6->PnPFlags & 0x100) == 0 )
        {
          p_OidRequestList = &v6->OidRequestList;
          Flink = v6->OidRequestList.Flink;
          if ( Flink == &v6->OidRequestList )
          {
LABEL_32:
            if ( ShouldEnableOidTracing(a2) )
            {
              if ( *(_QWORD *)&a2->NdisReserved[24] )
                TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_MINIPORT_BLOCK>(v6, a2);
              else
                TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_MINIPORT_BLOCK>(v6, a2);
              v24 = v42;
            }
            p_Flink = &v6->OidRequestList.Blink->Flink;
            v7 = 0;
            if ( *p_Flink != p_OidRequestList )
              __fastfail(3u);
            *(_QWORD *)NdisReserved = p_OidRequestList;
            *(_QWORD *)&a2->NdisReserved[8] = p_Flink;
            *p_Flink = (_LIST_ENTRY *)NdisReserved;
            v6->OidRequestList.Blink = (_LIST_ENTRY *)NdisReserved;
          }
          else
          {
            while ( Flink != (_LIST_ENTRY *)NdisReserved )
            {
              Flink = Flink->Flink;
              if ( Flink == p_OidRequestList )
                goto LABEL_32;
            }
          }
        }
        v6->MiniportThread = 0LL;
        p_Lock = &v6->Lock;
        v29 = v24;
LABEL_67:
        KeReleaseSpinLock(p_Lock, v29);
        if ( !v7 )
          goto LABEL_76;
        goto LABEL_70;
      }
      v30 = *(_QWORD *)&v16->Reserved4.Length;
      v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 96));
      *(_QWORD *)(v30 + 520) = KeGetCurrentThread();
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v16->FirstPendingPacket);
      v16->ReturnPacketsQueue = (_NDIS_PACKET *)KeGetCurrentThread();
      *(_QWORD *)NdisReserved = 0LL;
      *(_QWORD *)&a2->NdisReserved[8] = 0LL;
      if ( (*(_DWORD *)(*(_QWORD *)&v16->Reserved4.Length + 124LL) & 0x100) != 0 )
      {
LABEL_66:
        v16->ReturnPacketsQueue = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v16->FirstPendingPacket);
        v37 = *(_QWORD *)&v16->Reserved4.Length;
        v29 = v43;
        *(_QWORD *)(v37 + 520) = 0LL;
        p_Lock = (KSPIN_LOCK *)(v37 + 96);
        goto LABEL_67;
      }
      p_RequestBuffer = &v16->RequestBuffer;
      v32 = *(UCHAR **)&v16->RequestBuffer;
      if ( v32 != (UCHAR *)&v16->RequestBuffer )
      {
        while ( v32 != NdisReserved )
        {
          v32 = *(UCHAR **)v32;
          if ( v32 == (UCHAR *)p_RequestBuffer )
            goto LABEL_45;
        }
        goto LABEL_66;
      }
LABEL_45:
      if ( (unsigned int)dword_14011C6C0 > 4
        && (qword_14011C6D0 & 0x400) != 0
        && (qword_14011C6D8 & 0x400) == qword_14011C6D8 )
      {
        v33 = *(_DWORD *)&a2->NdisReserved[16] & 0x30000000;
        if ( v33 != 0x10000000 )
        {
          if ( v33 )
          {
            if ( v33 != 0x20000000 )
              goto LABEL_63;
          }
          else
          {
            if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
            {
              v34 = 1;
              v35 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
            }
            else if ( (ndisAzOidTelemetryFilter & 2) != 0
                   && (unsigned __int8)IsOidInFilterList(a2->DATA.QUERY_INFORMATION.Oid) )
            {
              v34 = 1;
              v35 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
            }
            else
            {
              v34 = 0;
              v35 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
            }
            *(_DWORD *)&a2->NdisReserved[16] = v35;
            if ( !v34 )
              goto LABEL_63;
          }
          if ( *(_QWORD *)&a2->NdisReserved[24] )
            TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_FILTER_BLOCK>(v16, a2);
          else
            TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_FILTER_BLOCK>(v16, a2);
        }
      }
LABEL_63:
      Reserved26 = (UCHAR **)v16->Reserved26;
      v7 = 0;
      if ( *Reserved26 != (UCHAR *)p_RequestBuffer )
        __fastfail(3u);
      *(_QWORD *)NdisReserved = p_RequestBuffer;
      *(_QWORD *)&a2->NdisReserved[8] = Reserved26;
      *Reserved26 = NdisReserved;
      v16->Reserved26 = NdisReserved;
      goto LABEL_66;
    }
    if ( v12 )
    {
LABEL_70:
      if ( v6 )
        ndisDereferenceMiniport(v6, 0x47u);
      else
        ndisDereferenceRef((PKSPIN_LOCK)&v16->WakeUpDpcTimer.Dpc.DeferredContext, 0xCu);
    }
LABEL_72:
    ExFreePoolWithTag(v10, 0);
    return v7;
  }
  ndisReferenceMiniportNoCheck(v5, 0x47u);
LABEL_77:
  RtlGetCallersAddress((PVOID *)&v10[1].List.Flink, (PVOID *)&v10[1].List.Blink);
  v10->Parameter = v10;
  v10->WorkerRoutine = ndisDoOidRequests;
  v10->List.Flink = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a2,
      v5);
  ExQueueWorkItem(v10, (WORK_QUEUE_TYPE)40);
  return 259;
}
