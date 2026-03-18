/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40
 * Callers:
 *     VidSchiProcessCompletedQueuePacket @ 0x14000C1AC (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x14000D7DC (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x14000DC50 (VidSchiSubmitSignalCommand.c)
 * Callees:
 *     VidSchiFlushPendingTokenList @ 0x140004A88 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x140005A84 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000B434 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140012B50 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140014EB8 (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?AddHistoryEntry@InterlockedCounterWithHistoryRelease@@AEAAXJ_K@Z @ 0x140016110 (-AddHistoryEntry@InterlockedCounterWithHistoryRelease@@AEAAXJ_K@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140016178 (VidSchiSubmitPresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140017A5C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D028 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiFreeQueuePacket @ 0x14002E4FC (VidSchiFreeQueuePacket.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400359F0 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3PEAI@Z @ 0x140039DCC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14003B500 (Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003DA1C (-DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x140044C6C (McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer.c)
 *     ?VidMmIncrementPeriodicTrimUniqueness@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x14004E9A4 (-VidMmIncrementPeriodicTrimUniqueness@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PROCESS_ADAPTER_INF.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  int v4; // eax
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  int v11; // eax
  struct _VIDSCH_QUEUE_PACKET **v12; // rdx
  struct _VIDSCH_QUEUE_PACKET **v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  unsigned int v21; // r10d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  void *v25; // rcx
  void (__fastcall *v26)(_QWORD); // rax
  unsigned int v27; // r15d
  __int64 v28; // rcx
  volatile signed __int32 *v29; // rcx
  int v30; // edx
  int v31; // eax
  struct _KEVENT *v32; // r12
  struct _KEVENT *v33; // r13
  int Flink; // ecx
  BOOL v35; // eax
  struct _KEVENT *v36; // r12
  KIRQL v37; // r13
  struct _KEVENT *v38; // r15
  int v39; // ecx
  BOOL v40; // eax
  int v41; // eax
  int v42; // eax
  void *v43; // rcx
  struct _KEVENT *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // rdx
  __int64 v49; // r11
  unsigned int v50; // r10d
  bool v51; // zf
  int v52; // eax
  char v53; // cl
  int v54; // eax
  unsigned int v55; // r11d
  int v56; // eax
  char v57; // cl
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  int v64; // ecx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  _DWORD *v68; // rax
  struct _KEVENT *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  struct _KLOCK_QUEUE_HANDLE v74; // [rsp+60h] [rbp-59h] BYREF
  __int64 v75; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v76[2]; // [rsp+80h] [rbp-39h] BYREF
  char v77; // [rsp+90h] [rbp-29h]
  int v78; // [rsp+94h] [rbp-25h]
  __int64 v79; // [rsp+98h] [rbp-21h]
  __int64 v80; // [rsp+A0h] [rbp-19h]
  __int64 v81; // [rsp+A8h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-9h] BYREF
  int v83; // [rsp+120h] [rbp+67h]
  KIRQL v84; // [rsp+120h] [rbp+67h]
  KIRQL v85; // [rsp+128h] [rbp+6Fh]
  __int64 v86; // [rsp+128h] [rbp+6Fh]
  unsigned int v87; // [rsp+130h] [rbp+77h]
  struct VIDMM_WORKER_THREAD **v88; // [rsp+130h] [rbp+77h]
  unsigned int v89; // [rsp+130h] [rbp+77h]
  int v90; // [rsp+138h] [rbp+7Fh]
  unsigned int v91; // [rsp+138h] [rbp+7Fh]

  v3 = *((_QWORD *)a1 + 11);
  v79 = v3;
  v4 = *((_DWORD *)a1 + 16);
  v83 = 0;
  v6 = 0;
  v80 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = *(_QWORD *)(v3 + 96);
  v8 = *(_QWORD *)(v3 + 104);
  v9 = *(_QWORD *)(v7 + 24);
  if ( (v4 & 0x20) != 0 && (byte_14008A201 & 1) != 0 )
  {
    v70 = *(_QWORD *)(v3 + 56);
    if ( !v70 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v70 = v3;
    McTemplateK0pp_EtwWriteTransfer(v70, &AbortQueuePacket, a3, a1, v70);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v25 = (void *)*((_QWORD *)a1 + 37);
    if ( v25 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v25);
      *((_QWORD *)a1 + 37) = 0LL;
    }
    if ( (unsigned int)Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      v86 = *(_QWORD *)(v8 + 16);
      if ( v86 )
      {
        v88 = *(struct VIDMM_WORKER_THREAD ***)(v9 + 24);
        if ( (unsigned int)Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline() )
          VidMmIncrementPeriodicTrimUniqueness(*v88, *(struct VIDMM_PROCESS_ADAPTER_INFO **)(v86 + 16));
      }
    }
  }
  v85 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2016), &LockHandle);
  v75 = v9;
  v77 = 0;
  v76[1] = v76;
  v76[0] = v76;
  v11 = *((_DWORD *)a1 + 20);
  v78 = 2;
  if ( (v11 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v11 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL) + 16520LL) != -1 )
    {
      v26 = *(void (__fastcall **)(_QWORD))(v9 + 3336);
      if ( v26 )
        v26(*(_QWORD *)(v9 + 3368));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 512LL, v9, v3, a1);
    WdLogGlobalForLineNumber = 916;
    JUMPOUT(0x14000ECDELL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId((struct HwQueueStagingList *)&v75, a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v12 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v12[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || (v13 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5),
        *v13 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)) )
  {
    __fastfail(3u);
  }
  *v13 = (struct _VIDSCH_QUEUE_PACKET *)v12;
  v12[1] = (struct _VIDSCH_QUEUE_PACKET *)v13;
  v14 = *(_QWORD *)(v3 + 672);
  if ( v14 == v3 + 672 )
  {
    if ( (*(_DWORD *)(v3 + 192) & 0x200) != 0 )
    {
      v24 = 13982LL;
LABEL_165:
      v23 = 10LL;
      goto LABEL_39;
    }
    if ( (*(_DWORD *)(v3 + 192) & 0x10) == 0
      && (*(_DWORD *)(v3 + 192) & 0x40) == 0
      && (*(_DWORD *)(v3 + 192) & 0x100) == 0 )
    {
      v23 = 0LL;
      v24 = 14015LL;
LABEL_39:
      VidSchiUpdateContextStatus(v3, v23, v24);
    }
  }
  else
  {
    v15 = v14 - 32;
    v16 = *(_DWORD *)(v14 + 48);
    if ( (v16 & 3) == 1 )
    {
      v80 = v15;
      *(_DWORD *)(v15 + 80) = v16 | 2;
    }
    if ( (*(_DWORD *)(v3 + 192) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 192) >> 9) | *(_BYTE *)(v3 + 192)) & 2) == 0 )
    {
      v24 = 13963LL;
      goto LABEL_165;
    }
  }
  v17 = *((_DWORD *)a1 + 12);
  if ( v17 == 5 )
  {
    if ( (*((_DWORD *)a1 + 20) & 4) == 0 )
    {
      if ( (byte_14008A204 & 4) != 0 )
      {
        v64 = *((_DWORD *)a1 + 70);
        if ( (v64 & 0x10) != 0 )
        {
          v65 = *((_QWORD *)a1 + 11);
          if ( v65 )
          {
            v66 = *(_QWORD *)(v65 + 56);
            if ( !v66 || (*(_DWORD *)(v65 + 112) & 0x40) != 0 )
              LODWORD(v66) = *((_QWORD *)a1 + 11);
          }
          else
          {
            v66 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 48LL);
            if ( !v66 )
              v66 = *((_QWORD *)a1 + 12);
          }
          McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
            v64,
            v66,
            v65,
            1,
            v66,
            *((_DWORD *)a1 + 28),
            v64,
            *((_DWORD *)a1 + 71),
            (__int64)a1 + 288,
            (__int64)a1 + 544,
            (char)a1);
        }
      }
      LOBYTE(v10) = 1;
      VidSchiCompleteSignalCommmand(&v75, a1, v10);
    }
  }
  else if ( v17 == 3 )
  {
    VidSchiReleaseFlipFencesReference((struct _VIDSCH_GLOBAL *)v9, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 880));
  }
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 1044));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 3000));
      RtlSetBitEx(v9 + 552, *(unsigned __int16 *)(v7 + 4));
    }
    if ( *((_DWORD *)a1 + 120) )
    {
      v27 = 0;
      do
      {
        if ( v27 >= 0x10 )
          break;
        v28 = *((_QWORD *)a1 + v27 + 61);
        *((_QWORD *)a1 + v27 + 61) = 0LL;
        if ( v28 )
        {
          v29 = (volatile signed __int32 *)(v28 + 104);
          v30 = _InterlockedDecrement(v29);
          if ( a1 != (struct _VIDSCH_QUEUE_PACKET *)-616LL )
            --*((_DWORD *)a1 + 154);
          InterlockedCounterWithHistoryRelease::AddHistoryEntry((InterlockedCounterWithHistoryRelease *)v29, v30, v10);
        }
        ++v27;
      }
      while ( v27 < *((_DWORD *)a1 + 120) );
      v3 = v79;
    }
  }
  v18 = *((unsigned int *)a1 + 18);
  v19 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) == 0x40000 || v19 )
  {
    if ( (v18 & 0x400) == 0 || (v20 = 0, (v18 & 0x800) != 0) )
      v20 = 1;
    v21 = *((_DWORD *)a1 + 42);
    v87 = v21;
    v90 = v20;
    if ( (v18 & 0x40000) != 0 )
    {
      v22 = v20;
      if ( !v19 )
        v22 = 0;
    }
    else
    {
      if ( (v18 & 4) != 0 )
      {
        if ( *((_DWORD *)a1 + 100) != 1 )
        {
          if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
          {
            v22 = 0;
            goto LABEL_64;
          }
          if ( v20 )
          {
            v6 = 1;
            v83 = 1;
            VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), 1LL, 0);
            v21 = v87;
          }
          if ( (*((_DWORD *)a1 + 220) & 0x3FF) != 0 )
          {
            v71 = *(unsigned int *)(v3 + 88);
            v72 = *(_QWORD *)(v9 + 696);
            if ( (unsigned int)v71 < *(_DWORD *)(v9 + 768) )
              v72 += 8 * v71;
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)&v75,
              (struct _VIDSCH_GLOBAL *)v9,
              v21,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 880),
              *((_DWORD *)a1 + 104),
              1 << *(_BYTE *)(*(_QWORD *)v72 + 6LL),
              0,
              0,
              (unsigned int *)a1 + 224);
            v21 = v87;
          }
          v22 = v83;
          if ( !v83 )
          {
LABEL_64:
            v83 = v22;
            if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 19) && *((_QWORD *)a1 + 20) && v90 )
              VidSchiSubmitPresentHistoryToken((unsigned int)&v75, (_DWORD)a1, 0, 0, 0LL);
            if ( v6 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v9 + 800));
              DecrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v9, v87);
              _InterlockedDecrement((volatile signed __int32 *)(v8 + 1836));
              _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v73 + 1772));
            }
            VidSchiSignalRegisteredEvent(v9, v9 + 1960);
            if ( v83 )
              goto LABEL_76;
            goto LABEL_74;
          }
LABEL_28:
          if ( v21 != -1 )
          {
            if ( (*((_DWORD *)a1 + 18) & 0x40000) != 0 )
              goto LABEL_30;
            _InterlockedDecrement((volatile signed __int32 *)(v8 + 4LL * v21 + 1708));
            v67 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v8 + 40) + 4LL))
                            + 8LL * v21
                            + 88);
            if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8LL * v21 + 6728) + 8LL));
              v68 = *(_DWORD **)(v9 + 8LL * v21 + 6728);
              ++*v68;
            }
            _InterlockedDecrement((volatile signed __int32 *)(v67 + 8));
            ++*(_DWORD *)v67;
            if ( (*((_DWORD *)a1 + 18) & 0x20000) == 0 )
            {
LABEL_30:
              v22 = v83;
            }
            else
            {
              memset(&v74, 0, sizeof(v74));
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2024), &v74);
              *(_DWORD *)(v8 + 4LL * v87 + 516) = *((_DWORD *)a1 + 98);
              *(_QWORD *)(v8 + 8LL * v87 + 584) = *((_QWORD *)a1 + 17);
              *(_QWORD *)(v8 + 8LL * v87 + 712) = *((_QWORD *)a1 + 18);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v74);
              v22 = v83;
            }
          }
          goto LABEL_64;
        }
        v6 = v20;
      }
      v22 = v20;
    }
    v83 = v22;
    if ( !v22 )
      goto LABEL_64;
    LOBYTE(v18) = 1;
    VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v18, 0);
    v22 = v83;
    v21 = v87;
    goto LABEL_28;
  }
LABEL_74:
  if ( !*((_DWORD *)a1 + 12) )
    VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0);
LABEL_76:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 42) != -1 )
  {
    v46 = *((_QWORD *)a1 + 11);
    if ( v46 )
      v47 = *(_QWORD *)(v46 + 104);
    else
      v47 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40LL) + 8LL);
    v48 = (_DWORD *)((char *)a1 + 880);
    v49 = *(_QWORD *)(v47 + 40);
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v50 = ((unsigned __int16)*v48 | (unsigned __int16)(*v48 >> 10)) & 0x3FF;
    else
      v50 = (1 << *(_DWORD *)(v49 + 160)) - 1;
    v51 = !_BitScanForward((unsigned int *)&v52, v50);
    v53 = -1;
    if ( !v51 )
      v53 = v52;
    if ( v50 )
    {
      do
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v49 + 8LL * *((unsigned int *)a1 + 42) + 3448)
                                                        + 304LL * v53
                                                        + 192));
        v54 = 1 << v53;
        v53 = -1;
        v50 &= ~v54;
        v51 = !_BitScanForward((unsigned int *)&v54, v50);
        if ( !v51 )
          v53 = v54;
      }
      while ( v50 );
      v48 = (_DWORD *)((char *)a1 + 880);
    }
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v55 = ((unsigned __int16)*v48 | (unsigned __int16)(*v48 >> 10)) & 0x3FF;
    else
      v55 = (1 << *(_DWORD *)(v9 + 160)) - 1;
    v51 = !_BitScanForward((unsigned int *)&v56, v55);
    v57 = -1;
    v91 = v55;
    if ( !v51 )
      v57 = v56;
    while ( v55 )
    {
      v58 = *((unsigned int *)a1 + 42);
      v59 = (unsigned int)v57;
      v60 = 304 * v59;
      v89 = v59;
      v61 = *(_QWORD *)(v9 + 8 * v58 + 3448);
      v81 = v58;
      v62 = *(int *)(v61 + v60 + 188);
      if ( (int)v62 > -1
        && *(_DWORD *)(160 * v62 + *(_QWORD *)(v9 + 3576) + 112) == 1
        && VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v9, v58, v89) )
      {
        VidSchiFlushPendingTokenList((struct HwQueueStagingList *)&v75, (struct _VIDSCH_GLOBAL *)v9, v81, v89);
        v55 = v91;
      }
      v57 = -1;
      v55 &= ~(1 << v89);
      v51 = !_BitScanForward((unsigned int *)&v63, v55);
      v91 = v55;
      if ( !v51 )
        v57 = v63;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 788));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 3012));
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 1844));
  v31 = *((_DWORD *)a1 + 12);
  if ( v31 != 4 && v31 != 5 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1848));
  if ( !*((_DWORD *)a1 + 12) && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8LL * *((unsigned int *)a1 + 42) + 3448) + 3244LL));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 792));
  VidSchiProfilePerformanceTick(9, v9, v7, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand(v8);
  if ( v83 )
    VidSchiSignalRegisteredEvent(v9, v8 + 128);
  if ( v6 )
  {
    VidSchiSignalRegisteredEvent(v9, v8 + 144);
    VidSchiSignalRegisteredEvent(v9, v9 + 1944);
    *(_QWORD *)(v9 + 1888) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1856), 0, 0);
  }
  v32 = (struct _KEVENT *)(v7 + 424);
  memset(&v74, 0, sizeof(v74));
  v84 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2032), &v74);
  v33 = *(struct _KEVENT **)(v7 + 424);
  if ( *(struct _KEVENT **)&v32->Header.Lock != v32 )
  {
    do
    {
      if ( LODWORD(v33->Header.WaitListHead.Blink) == 4 )
      {
        v35 = *(_DWORD *)(*(_QWORD *)&v33[1].Header.Lock + 4LL * LODWORD(v33[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&v33[1].Header.Lock + 252LL);
      }
      else
      {
        if ( ((__int64)v33[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_88;
        Flink = (int)v33[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v33[5].Header.WaitListHead.Blink) = Flink;
        v35 = Flink == 0;
      }
      if ( v35 )
      {
LABEL_88:
        ++v33[5].Header.LockNV;
        KeSetEvent(v33 + 4, 0, 0);
      }
      v33 = *(struct _KEVENT **)&v33->Header.Lock;
    }
    while ( v33 != v32 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v74);
  KeLowerIrql(v84);
  v36 = (struct _KEVENT *)(v9 + 1928);
  memset(&v74, 0, sizeof(v74));
  v37 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2032), &v74);
  if ( *(struct _KEVENT **)&v36->Header.Lock == v36 )
    goto LABEL_99;
  v38 = *(struct _KEVENT **)&v36->Header.Lock;
  do
  {
    if ( LODWORD(v38->Header.WaitListHead.Blink) == 4 )
    {
      v40 = *(_DWORD *)(*(_QWORD *)&v38[1].Header.Lock + 4LL * LODWORD(v38[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&v38[1].Header.Lock + 252LL);
LABEL_95:
      if ( !v40 )
        goto LABEL_97;
      goto LABEL_96;
    }
    if ( ((__int64)v38[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v39 = (int)v38[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v38[5].Header.WaitListHead.Blink) = v39;
      v40 = v39 == 0;
      goto LABEL_95;
    }
LABEL_96:
    ++v38[5].Header.LockNV;
    KeSetEvent(v38 + 4, 0, 0);
LABEL_97:
    v38 = *(struct _KEVENT **)&v38->Header.Lock;
  }
  while ( v38 != v36 );
  v3 = v79;
LABEL_99:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v74);
  KeLowerIrql(v37);
  *(_QWORD *)(v7 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v7 + 296), 0, 0);
  *(_QWORD *)(v9 + 1776) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v9 + 1744), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v41 = *((_DWORD *)a1 + 12);
    if ( !v41 || v41 == 7 )
    {
      v45 = (struct _KEVENT *)*((_QWORD *)a1 + 46);
      if ( v45 )
      {
        KeSetEvent(v45, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 46));
      }
    }
    else if ( v41 == 6 )
    {
      v69 = (struct _KEVENT *)*((_QWORD *)a1 + 39);
      if ( v69 )
        KeSetEvent(v69, 0, 0);
    }
  }
  v42 = *((_DWORD *)a1 + 12);
  if ( !v42 || ((v42 - 3) & 0xFFFFFFFB) == 0 )
  {
    if ( !*(_BYTE *)(v3 + 917) )
      VidSchiReleasePrivateDataReference((struct _VIDSCH_GLOBAL *)v9, (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 880));
    v43 = (void *)*((_QWORD *)a1 + 39);
    if ( v43 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v43);
      *((_QWORD *)a1 + 39) = 0LL;
    }
  }
  VidSchiFreeQueuePacket(v3, a1);
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v75, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v85);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v75);
  return (struct _VIDSCH_QUEUE_PACKET *)v80;
}
