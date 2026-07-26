/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1400179F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14001BD40 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1400756A0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C8844 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // rsi
  unsigned int Number; // r12d
  __int64 v4; // rax
  __int64 v5; // rdi
  char v6; // r14
  char v7; // r14
  ULONG v8; // r15d
  unsigned __int64 v9; // rdx
  struct _NDIS_MINIPORT_BLOCK *v10; // r8
  wchar_t *Buffer; // r13
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD); // r11
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  int v16; // esi
  __int64 v17; // rcx
  char *v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  KIRQL v21; // al
  ULONG_PTR v22; // r8
  KIRQL v23; // si
  __int64 v24; // r9
  unsigned __int8 i; // cl
  _BYTE *v26; // rdx
  char v27; // al
  int v28; // edi
  int v29; // edx
  struct _KEVENT *v30; // rcx
  ULONG_PTR v31; // rdi
  unsigned int v32; // edx
  int v33; // ecx
  struct _NDIS_MINIPORT_BLOCK *v34; // rsi
  unsigned int v35; // r13d
  int PcwDatapathEventMask; // eax
  wchar_t *v37; // rdx
  char *v38; // rax
  KIRQL v39; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  int v41; // ecx
  __int64 v42; // rbx
  char *v43; // rdi
  __int64 *v44; // rax
  LARGE_INTEGER v45; // rdx
  struct _KDPC *v46; // r8
  __int64 v47; // rcx
  __int64 Clock; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+30h] [rbp-B8h]
  KIRQL v51; // [rsp+40h] [rbp-A8h]
  char v52; // [rsp+41h] [rbp-A7h]
  KIRQL v53; // [rsp+42h] [rbp-A6h]
  char v54; // [rsp+43h] [rbp-A5h]
  _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+50h] [rbp-98h]
  __int64 v57; // [rsp+58h] [rbp-90h]
  __int64 v58; // [rsp+60h] [rbp-88h]
  struct _NDIS_MINIPORT_BLOCK *v59; // [rsp+68h] [rbp-80h]
  char v60[8]; // [rsp+70h] [rbp-78h]
  void (__fastcall *v61)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp-70h]
  void (__fastcall *v62)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+80h] [rbp-68h]
  __int64 v63; // [rsp+88h] [rbp-60h]
  _GROUP_AFFINITY Affinity; // [rsp+90h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+A0h] [rbp-48h] BYREF

  v53 = 0;
  PreviousAffinity = 0LL;
  v1 = 0;
  v2 = a1;
  Affinity = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v7 = v6 & 2;
  v8 = *(_DWORD *)(a1 + 64);
  v63 = v4;
  *(_QWORD *)v60 = *(_QWORD *)(v5 + 96);
  v56 = *(_QWORD *)(a1 + 48);
  v57 = *(_QWORD *)(a1 + 56);
  if ( Number != v8 )
  {
    ProcNumber[0] = 0;
    KeGetProcessorNumberFromIndex(v8, ProcNumber);
    Affinity.Group = ProcNumber[0].Group;
    Affinity.Mask = 1LL << ProcNumber[0].Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v7 )
    v53 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 72));
  *(_DWORD *)(v2 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 72));
  v10 = *(struct _NDIS_MINIPORT_BLOCK **)(v5 + 96);
  Buffer = 0LL;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v5 + 24);
  LOBYTE(v2) = 0;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v5 + 184);
  v14 = -1;
  *(_QWORD *)&ProcNumber[0].Group = 0LL;
  v59 = v10;
  v62 = v12;
  v61 = v13;
  v58 = 0LL;
  if ( v10->PcwDatapathEventMask || v10->PcwDatapathCycleMask )
  {
    Buffer = v10->Reserved4.Buffer;
    LODWORD(v2) = v10->PcwDatapathCycleMask;
    if ( !Buffer )
      Buffer = v10->Reserved4.Buffer;
  }
  if ( HIBYTE(dword_14011EFA0) )
  {
    v52 = 1;
    ndisTraceDpcStart(v10, 1u);
    Clock = WmiGetClock(0LL, 0LL);
    v10 = v59;
    v13 = v61;
    v12 = v62;
    v58 = Clock;
  }
  else
  {
    v52 = 0;
  }
  if ( *(_BYTE *)(v5 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF) == 1 )
LABEL_25:
      KeSetEvent((PRKEVENT)(v5 + 128), 0, 0);
  }
  else
  {
    if ( byte_14011D401 )
    {
      if ( dword_14011D40C )
      {
        v15 = dword_14011D404;
      }
      else
      {
        v15 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v10->PeriodicReceivesNblCountIndex
                                                            + (KeGetPcr()->Prcb.Number << 12))];
        if ( dword_14011D404 < v15 )
          v15 = dword_14011D404;
      }
    }
    else
    {
      v15 = -1;
    }
    ProcNumber[0] = (_PROCESSOR_NUMBER)v15;
    v16 = v2 & 1;
    if ( v16 )
    {
      v14 = KeGetPcr()->Prcb.Number;
      *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData + 304) = __rdtsc();
    }
    v17 = *(_QWORD *)(v5 + 8);
    if ( *(_BYTE *)(v5 + 193) == 1 )
      v13(v17, (unsigned int)v56, v57, ProcNumber, 0LL);
    else
      v12(v17, v57, ProcNumber, 0LL);
    if ( v16 )
    {
      if ( v14 == -1 )
        v14 = KeGetPcr()->Prcb.Number;
      v18 = (char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData;
      v19 = __rdtsc();
      v9 = (unsigned __int64)HIDWORD(v19) << 32;
      *((_QWORD *)v18 + 13) += (v9 | (unsigned int)v19) - *((_QWORD *)v18 + 38);
      *((_QWORD *)v18 + 38) = 0LL;
    }
    if ( (ProcNumber[1].Group & 1) != 0 )
    {
      v34 = *(struct _NDIS_MINIPORT_BLOCK **)(v5 + 96);
      v35 = KeGetPcr()->Prcb.Number;
      v54 = byte_14011D401;
      PcwDatapathEventMask = v34->PcwDatapathEventMask;
      if ( PcwDatapathEventMask || v34->PcwDatapathCycleMask )
      {
        v37 = v34->Reserved4.Buffer;
        if ( !v37 )
          v37 = v34->Reserved4.Buffer;
        if ( (PcwDatapathEventMask & 0x800000) != 0 )
        {
          v38 = (char *)v37 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)&v38[ndisPcwOffsetToPerCpuData + 288];
        }
      }
      v39 = KeAcquireSpinLockRaiseToDpc(&v34->Ref.SpinLock);
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v34->RefCountTracker;
      v51 = v39;
      if ( RefCountTracker )
      {
        NdisReferenceWithTag(RefCountTracker, 0x4Du);
        v39 = v51;
      }
      v41 = v34->Ref.ReferenceCount + 1;
      v34->Ref.ReferenceCount = v41;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0xDu,
          (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
          (char)v34,
          v41);
        v39 = v51;
      }
      KeReleaseSpinLock(&v34->Ref.SpinLock, v39);
      if ( *(_BYTE *)(v5 + 193) )
        v1 = v56;
      v42 = *(_QWORD *)(v5 + 216) + 80LL * (v35 + ndisMaxNumberOfProcessors * v1);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v42 + 72));
      if ( (*(_DWORD *)(v42 + 68) & 1) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 104));
        ndisDereferenceMiniport(v34, 0x4Du);
      }
      else
      {
        *(_QWORD *)(v42 + 32) = v63;
        *(_QWORD *)(v42 + 48) = v56;
        *(_QWORD *)(v42 + 56) = v57;
        *(_QWORD *)(v42 + 40) = v5;
        *(_DWORD *)(v42 + 64) = v35;
        *(_DWORD *)(v42 + 68) = 1;
        if ( v54 )
        {
          if ( HIBYTE(word_14011EFA4) )
            ndisTraceQueueWorkItem();
          *(_DWORD *)(v42 + 68) |= 2u;
          v43 = (char *)qword_14011D440 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v43 + 2);
          v44 = (__int64 *)*((_QWORD *)v43 + 1);
          if ( (char *)*v44 != v43 )
            __fastfail(3u);
          *(_QWORD *)v42 = v43;
          *(_QWORD *)(v42 + 8) = v44;
          *v44 = v42;
          *((_QWORD *)v43 + 1) = v42;
          ++*((_DWORD *)v43 + 6);
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v43 + 2);
          KeReleaseSemaphore((PRKSEMAPHORE)v43 + 1, 0, 1, 0);
          if ( !_InterlockedExchange((volatile __int32 *)qword_14011D438 + KeGetPcr()->Prcb.Number, 1) )
          {
            v45.QuadPart = -1LL;
            v46 = (struct _KDPC *)((char *)qword_14011D430 + 128 * (unsigned __int64)KeGetPcr()->Prcb.Number + 64);
            HIDWORD(v47) = DueTime.HighPart;
            if ( DueTime.QuadPart )
              v45 = DueTime;
            LODWORD(v47) = KeGetPcr()->Prcb.Number;
            KeSetTimer((PKTIMER)qword_14011D430 + 2 * v47, v45, v46);
          }
        }
        else
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v42, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
        }
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v42 + 72));
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF) == 1 && *(_BYTE *)(v5 + 4) )
    {
      goto LABEL_25;
    }
  }
  if ( v52 )
  {
    v49 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v59, 1u, v49 - v58);
  }
  if ( !v7 && v53 != 2 )
    KeLowerIrql(v53);
  if ( Number != v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  v20 = *(_QWORD *)v60;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      v60[0]);
  }
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 4432));
  v22 = *(_QWORD *)(v20 + 4896);
  v23 = v21;
  if ( v22 && v22 - 2 > 1 )
  {
    if ( v22 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v22 + 2) <= 0x4Du )
      ndisBugCheckEx(0x1EuLL, 2uLL, v22, 0x4DuLL);
    if ( *(_BYTE *)(v22 + 1) )
    {
      if ( *(_BYTE *)(v22 + 1) == 1 )
      {
        v31 = v22 + 4936;
        v32 = *(_DWORD *)(v22 + 4992);
        v33 = (unsigned __int16)v32 >> 1;
        if ( v32 >> 17 < 0x3FFE && v33 == (v32 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v22 + 4936));
          *(_DWORD *)(v31 + 56) &= 0x10001u;
        }
        else
        {
          if ( v33 == 0 && (v32 & 1) == 0 )
            ndisReportRefcountImbalance(*(_QWORD *)(v20 + 4896), 0x4Du);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 4936), 0);
        }
      }
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 8);
      if ( v24 )
      {
        for ( i = 0; i < *(_BYTE *)(v22 + 3); ++i )
        {
          v26 = (_BYTE *)(v24 + 2LL * i);
          if ( *v26 == 77 )
          {
            v27 = v26[1];
            if ( v27 )
            {
              v26[1] = v27 - 1;
              goto LABEL_48;
            }
          }
        }
      }
      if ( !_bittestandreset((signed __int32 *)(v22 + 24), 0xDu) )
        ndisReportRefcountImbalance(v22, 0x4Du);
    }
  }
LABEL_48:
  v28 = *(_DWORD *)(v20 + 4440) - 1;
  *(_DWORD *)(v20 + 4440) = v28;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v50) = v28;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      v20,
      v50);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 4432), v23);
  if ( !v28 )
  {
    v30 = *(struct _KEVENT **)(v20 + 1608);
    if ( v30 )
      KeSetEvent(v30, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v29) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v29,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      v20);
  }
}
