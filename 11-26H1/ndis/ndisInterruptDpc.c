/*
 * XREFs of ndisInterruptDpc @ 0x140019F90
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001A8C0 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueueDpcWorkItem @ 0x14001AA60 (ndisQueueDpcWorkItem.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14001BD40 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1400756A0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C8844 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  const struct _NDIS_MINIPORT_BLOCK *v5; // r9
  unsigned int Number; // r8d
  int PcwDatapathEventMask; // r10d
  __int64 v10; // rsi
  unsigned int v11; // ebp
  char v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  KIRQL v16; // al
  struct _NDIS_REFCOUNT_BLOCK *v17; // rcx
  KIRQL v18; // r15
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rbx
  int v22; // edx
  char *v23; // rdi
  __int64 *v24; // rax
  KIRQL v25; // al
  ULONG_PTR v26; // r9
  KIRQL v27; // r14
  NTSTATUS v28; // ecx
  ULONG v29; // eax
  struct _NDIS_MINIPORT_BLOCK *v30; // r14
  int PcwDatapathCycleMask; // ebp
  void (__fastcall *v32)(_QWORD, _QWORD, _QWORD, _QWORD); // r11
  wchar_t *v33; // r15
  void (__fastcall *v34)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v35; // ebx
  char v36; // r13
  unsigned int v37; // ecx
  int v38; // ebp
  __int64 v39; // rcx
  char *v40; // r10
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  LARGE_INTEGER v44; // rdx
  struct _KDPC *v45; // r8
  __int64 v46; // rcx
  wchar_t *Buffer; // r11
  char *v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int8 i; // cl
  _BYTE *v52; // rdx
  char v53; // al
  int v54; // ebp
  int v55; // edx
  struct _KEVENT *v56; // rcx
  ULONG_PTR v57; // rbp
  unsigned int v58; // edx
  int v59; // ecx
  __int64 Clock; // rax
  __int64 v61; // [rsp+30h] [rbp-98h]
  __int64 v62; // [rsp+40h] [rbp-88h] BYREF
  PVOID v63; // [rsp+48h] [rbp-80h]
  struct _KDPC *v64; // [rsp+50h] [rbp-78h]
  __int64 v65; // [rsp+58h] [rbp-70h]
  void (__fastcall *v66)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-68h]
  void (__fastcall *v67)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp-60h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+70h] [rbp-58h] BYREF

  v63 = SystemArgument2;
  v5 = (const struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 12);
  v64 = Dpc;
  Number = -1;
  PcwDatapathEventMask = v5->PcwDatapathEventMask;
  if ( PcwDatapathEventMask || v5->PcwDatapathCycleMask )
  {
    Buffer = v5->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = v5->Reserved4.Buffer;
    if ( (v5->PcwDatapathCycleMask & 0x1000) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v48 = (char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
      v49 = __rdtsc();
      *((_QWORD *)v48 + 35) += (((unsigned __int64)HIDWORD(v49) << 32) | (unsigned int)v49) - *((_QWORD *)v48 + 50);
      *((_QWORD *)v48 + 50) = 0LL;
    }
    if ( (PcwDatapathEventMask & 1) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData);
    }
  }
  if ( dword_14011D404 == -1 || !MiniportSupportsReceiveThrottle(v5) )
  {
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    v28 = KeQueryDpcWatchdogInformation(&WatchdogInformation);
    v29 = 30 * (WatchdogInformation.DpcWatchdogLimit / 0x64);
    if ( v28 < 0 || !v29 || WatchdogInformation.DpcWatchdogCount >= v29 )
    {
      v30 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 12);
      LOBYTE(PcwDatapathCycleMask) = 0;
      v32 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 3);
      v33 = 0LL;
      v34 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 23);
      v62 = 0LL;
      v65 = 0LL;
      v35 = -1;
      v67 = v32;
      v66 = v34;
      if ( v30->PcwDatapathEventMask || v30->PcwDatapathCycleMask )
      {
        v33 = v30->Reserved4.Buffer;
        PcwDatapathCycleMask = v30->PcwDatapathCycleMask;
        if ( !v33 )
          v33 = v30->Reserved4.Buffer;
      }
      if ( HIBYTE(dword_14011EFA0) )
      {
        v36 = 1;
        ndisTraceDpcStart(v30, 1u);
        Clock = WmiGetClock(0LL, 0LL);
        v34 = v66;
        v32 = v67;
        v65 = Clock;
      }
      else
      {
        v36 = 0;
      }
      if ( DeferredContext[4] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1 )
LABEL_53:
          KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
      }
      else
      {
        if ( byte_14011D401 )
        {
          if ( dword_14011D40C )
          {
            v37 = dword_14011D404;
          }
          else
          {
            v37 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v30->PeriodicReceivesNblCountIndex
                                                                + (KeGetPcr()->Prcb.Number << 12))];
            if ( dword_14011D404 < v37 )
              v37 = dword_14011D404;
          }
        }
        else
        {
          v37 = -1;
        }
        LODWORD(v62) = v37;
        v38 = PcwDatapathCycleMask & 1;
        if ( v38 )
        {
          v35 = KeGetPcr()->Prcb.Number;
          *(_QWORD *)((char *)v33 + ndisPcwPerCpuDataStride * v35 + ndisPcwOffsetToPerCpuData + 304) = __rdtsc();
        }
        v39 = *((_QWORD *)DeferredContext + 1);
        if ( DeferredContext[193] == 1 )
          v34(v39, (unsigned int)SystemArgument1, v63, &v62, 0LL);
        else
          v32(v39, v63, &v62, 0LL);
        if ( v38 )
        {
          if ( v35 == -1 )
            v35 = KeGetPcr()->Prcb.Number;
          v40 = (char *)v33 + ndisPcwPerCpuDataStride * v35 + ndisPcwOffsetToPerCpuData;
          v41 = __rdtsc();
          *((_QWORD *)v40 + 13) += (((unsigned __int64)HIDWORD(v41) << 32) | (unsigned int)v41) - *((_QWORD *)v40 + 38);
          *((_QWORD *)v40 + 38) = 0LL;
        }
        if ( (v62 & 0x100000000LL) != 0 )
        {
          ndisQueueDpcWorkItem(
            (_DWORD)v64,
            (_DWORD)DeferredContext,
            (_DWORD)SystemArgument1,
            (_DWORD)v63,
            byte_14011D401);
        }
        else if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1
               && DeferredContext[4] )
        {
          goto LABEL_53;
        }
      }
      if ( v36 )
      {
        v42 = WmiGetClock(0LL, 0LL);
        ndisTraceDpcEnd(v30, 1u, v42 - v65);
      }
      return;
    }
  }
  v10 = *((_QWORD *)DeferredContext + 12);
  v11 = KeGetPcr()->Prcb.Number;
  v12 = byte_14011D401;
  v13 = *(_DWORD *)(v10 + 48);
  if ( v13 || *(_DWORD *)(v10 + 80) )
  {
    v14 = *(_QWORD *)(v10 + 40);
    if ( !v14 )
      v14 = *(_QWORD *)(v10 + 40);
    if ( (v13 & 0x800000) != 0 )
    {
      v15 = v14 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v15 + 288);
    }
  }
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 4432));
  v17 = *(struct _NDIS_REFCOUNT_BLOCK **)(v10 + 4896);
  v18 = v16;
  if ( v17 )
    NdisReferenceWithTag(v17, 0x4Du);
  v19 = *(_DWORD *)(v10 + 4440) + 1;
  *(_DWORD *)(v10 + 4440) = v19;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xDu,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      v10,
      v19);
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 4432), v18);
  v20 = 0;
  if ( DeferredContext[193] )
    v20 = (int)SystemArgument1;
  v21 = *((_QWORD *)DeferredContext + 27) + 80LL * (v11 + ndisMaxNumberOfProcessors * v20);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v21 + 72));
  if ( (*(_DWORD *)(v21 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v22,
        20,
        25,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        v10);
    }
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 4432));
    v26 = *(_QWORD *)(v10 + 4896);
    v27 = v25;
    if ( v26 && v26 - 2 > 1 )
    {
      if ( v26 == 1 )
        KeBugCheckEx(0x7Cu, 0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(v26 + 2) <= 0x4Du )
        KeBugCheckEx(0x7Cu, 0x1EuLL, 2uLL, v26, 0x4DuLL);
      if ( *(_BYTE *)(v26 + 1) )
      {
        if ( *(_BYTE *)(v26 + 1) == 1 )
        {
          v57 = v26 + 4936;
          v58 = *(_DWORD *)(v26 + 4992);
          v59 = (unsigned __int16)v58 >> 1;
          if ( v58 >> 17 < 0x3FFE && v59 == (v58 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v26 + 4936));
            *(_DWORD *)(v57 + 56) &= 0x10001u;
          }
          else
          {
            if ( v59 == 0 && (v58 & 1) == 0 )
              KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v26, 0x4DuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v26 + 4936), 0);
          }
        }
      }
      else
      {
        v50 = *(_QWORD *)(v26 + 8);
        if ( v50 )
        {
          for ( i = 0; i < *(_BYTE *)(v26 + 3); ++i )
          {
            v52 = (_BYTE *)(v50 + 2LL * i);
            if ( *v52 == 77 )
            {
              v53 = v52[1];
              if ( v53 )
              {
                v52[1] = v53 - 1;
                goto LABEL_80;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)(v26 + 24), 0xDu) )
          KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v26, 0x4DuLL);
      }
    }
LABEL_80:
    v54 = *(_DWORD *)(v10 + 4440) - 1;
    *(_DWORD *)(v10 + 4440) = v54;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v61) = v54;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xEu,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        v10,
        v61);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 4432), v27);
    if ( !v54 )
    {
      v56 = *(struct _KEVENT **)(v10 + 1608);
      if ( v56 )
        KeSetEvent(v56, 0, 0);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v55) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v55,
        20,
        26,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        v10);
    }
  }
  else
  {
    *(_QWORD *)(v21 + 32) = v64;
    *(_DWORD *)(v21 + 68) = 1;
    *(_QWORD *)(v21 + 40) = DeferredContext;
    *(_QWORD *)(v21 + 48) = SystemArgument1;
    *(_QWORD *)(v21 + 56) = SystemArgument2;
    *(_DWORD *)(v21 + 64) = v11;
    if ( v12 )
    {
      if ( HIBYTE(word_14011EFA4) )
        ndisTraceQueueWorkItem();
      *(_DWORD *)(v21 + 68) |= 2u;
      v23 = (char *)qword_14011D440 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v23 + 2);
      v24 = (__int64 *)*((_QWORD *)v23 + 1);
      if ( (char *)*v24 != v23 )
        __fastfail(3u);
      *(_QWORD *)v21 = v23;
      *(_QWORD *)(v21 + 8) = v24;
      *v24 = v21;
      *((_QWORD *)v23 + 1) = v21;
      ++*((_DWORD *)v23 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v23 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v23 + 1, 0, 1, 0);
      LODWORD(v43) = KeGetPcr()->Prcb.Number;
      if ( !_InterlockedExchange((volatile __int32 *)qword_14011D438 + v43, 1) )
      {
        v44.QuadPart = -1LL;
        v45 = (struct _KDPC *)((char *)qword_14011D430 + 128 * (unsigned __int64)KeGetPcr()->Prcb.Number + 64);
        HIDWORD(v46) = DueTime.HighPart;
        if ( DueTime.QuadPart )
          v44 = DueTime;
        LODWORD(v46) = KeGetPcr()->Prcb.Number;
        KeSetTimer((PKTIMER)qword_14011D430 + 2 * v46, v44, v45);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v21, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v21 + 72));
}
