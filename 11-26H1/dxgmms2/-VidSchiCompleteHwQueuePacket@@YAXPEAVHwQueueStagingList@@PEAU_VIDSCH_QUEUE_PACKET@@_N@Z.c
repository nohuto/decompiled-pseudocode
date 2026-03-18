/*
 * XREFs of ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A798 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x140013918 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140049444 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004BBB4 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiFlushPendingTokenList @ 0x140004A88 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140014EB8 (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x14001606C (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?AddHistoryEntry@InterlockedCounterWithHistoryRelease@@AEAAXJ_K@Z @ 0x140016110 (-AddHistoryEntry@InterlockedCounterWithHistoryRelease@@AEAAXJ_K@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140016178 (VidSchiSubmitPresentHistoryToken.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039708 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3PEAI@Z @ 0x140039DCC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidMmUnreferenceDmaBuffer @ 0x14003AE50 (VidMmUnreferenceDmaBuffer.c)
 *     ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x1400411B4 (-DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiCompleteHwQueuePacket(struct HwQueueStagingList ***a1, struct _VIDSCH_QUEUE_PACKET *a2, char a3)
{
  struct _VIDSCH_QUEUE_PACKET *v3; // r13
  unsigned __int64 v4; // r8
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r14
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _KEVENT *v16; // rdi
  struct _KEVENT *v17; // rsi
  int Flink; // ecx
  BOOL v19; // eax
  int v20; // eax
  unsigned int i; // edi
  __int64 v22; // rdi
  struct _KEVENT *v23; // rdi
  KIRQL v24; // r12
  struct _KEVENT *v25; // rsi
  int v26; // eax
  int v27; // eax
  unsigned int k; // edi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // ecx
  BOOL v33; // eax
  struct HwQueueStagingList *v34; // rax
  struct HwQueueStagingList **v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r10
  unsigned int v39; // r9d
  bool v40; // zf
  int v41; // eax
  char v42; // cl
  int v43; // eax
  unsigned int v44; // edi
  int v45; // eax
  char v46; // cl
  __int64 v47; // r8
  char v48; // r9
  __int64 v49; // r11
  __int64 v50; // r10
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  _QWORD *v54; // rax
  volatile signed __int32 *v55; // rcx
  int v56; // edx
  LARGE_INTEGER PerformanceCounter; // rcx
  signed __int64 v58; // rax
  __int64 v59; // r10
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  char v64; // al
  __int64 v65; // rcx
  int v66; // eax
  volatile PKSPIN_LOCK Lock; // rcx
  __int64 v68; // r9
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // rcx
  struct _KEVENT **v72; // rdi
  KIRQL v73; // r12
  struct _KEVENT *j; // rsi
  int v75; // ecx
  BOOL v76; // eax
  struct _KEVENT *v77; // rdi
  KIRQL v78; // r12
  struct _KEVENT *v79; // rsi
  int v80; // ecx
  BOOL v81; // eax
  struct _KEVENT *v82; // rdi
  KIRQL v83; // r12
  struct _KEVENT *v84; // rsi
  int v85; // ecx
  BOOL v86; // eax
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // rax
  KIRQL v91; // [rsp+50h] [rbp-59h]
  int v92; // [rsp+54h] [rbp-55h]
  __int64 v93; // [rsp+58h] [rbp-51h]
  int v94; // [rsp+58h] [rbp-51h]
  char v95; // [rsp+58h] [rbp-51h]
  int v96; // [rsp+60h] [rbp-49h]
  __int64 v97; // [rsp+68h] [rbp-41h]
  int v98; // [rsp+70h] [rbp-39h]
  unsigned __int64 v99; // [rsp+78h] [rbp-31h]
  __int64 v101; // [rsp+88h] [rbp-21h]
  __int64 v102; // [rsp+90h] [rbp-19h]
  _QWORD *v103; // [rsp+98h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-9h] BYREF
  int v105; // [rsp+B8h] [rbp+Fh]

  v3 = a2;
  v4 = *((_QWORD *)a2 + 12);
  v99 = v4;
  v96 = 0;
  v5 = *(_QWORD *)(v4 + 40);
  v101 = v5;
  v92 = 0;
  v98 = 0;
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v5 + 16);
  v97 = v7;
  v102 = v6;
  v8 = *(_QWORD *)(v6 + 48);
  v9 = *(_QWORD *)(v6 + 40);
  v93 = v8;
  if ( (*((_DWORD *)a2 + 16) & 0x20) != 0 && (byte_14008A201 & 1) != 0 )
  {
    v69 = *((_QWORD *)a2 + 11);
    if ( v69 )
    {
      v70 = *(_QWORD *)(v69 + 56);
      if ( !v70 || (*(_DWORD *)(v69 + 112) & 0x40) != 0 )
        v70 = v69;
    }
    else
    {
      v70 = *(_QWORD *)(v4 + 48);
      if ( !v70 )
        v70 = v4;
    }
    McTemplateK0pp_EtwWriteTransfer(v70, &AbortQueuePacket, v4, v3, v70);
    v4 = v99;
    v7 = v97;
  }
  v10 = *((_DWORD *)v3 + 12);
  if ( v10 )
  {
    if ( v10 == 8 )
    {
      if ( (byte_14008A201 & 1) != 0 )
      {
        v87 = *(_QWORD *)(*((_QWORD *)v3 + 12) + 48LL);
        if ( !v87 )
          v87 = *((_QWORD *)v3 + 12);
        McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)v3 + 37), &EventDmaCompleteByGpu, v4, v87, *((_QWORD *)v3 + 37));
      }
      --*(_DWORD *)(v99 + 152);
      _InterlockedIncrement64((volatile signed __int64 *)(v97 + 1744));
      if ( (*((_DWORD *)v3 + 70) & 0x100) != 0 )
        VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)v3 + 36), 1);
    }
    else if ( v10 == 3 )
    {
      VidSchiReleaseFlipFencesReference((struct _VIDSCH_GLOBAL *)v9, (struct _VIDSCH_QUEUE_PACKET *)((char *)v3 + 880));
    }
  }
  else
  {
    if ( (byte_14008A201 & 1) != 0 )
    {
      v68 = *(_QWORD *)(*((_QWORD *)v3 + 12) + 48LL);
      if ( !v68 )
        v68 = *((_QWORD *)v3 + 12);
      McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)v3 + 97), &EventDmaCompleteByGpu, v4, v68, *((_QWORD *)v3 + 97));
      v4 = v99;
      v7 = v97;
    }
    --*(_DWORD *)(v4 + 152);
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1744));
    v7 = *((_QWORD *)v3 + 36);
    if ( v7 )
    {
      VidMmUnreferenceDmaBuffer(v7, 0LL);
      if ( (*((_DWORD *)v3 + 18) & 0x100) != 0 )
        VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)v3 + 36), 0);
    }
    for ( i = 0; i < *((_DWORD *)v3 + 120); *v54 = 0LL )
    {
      if ( i >= 0x10 )
        break;
      v54 = (_QWORD *)((char *)v3 + 8 * i + 488);
      v103 = v54;
      v7 = *v54;
      if ( *v54 )
      {
        v55 = (volatile signed __int32 *)(v7 + 104);
        v56 = _InterlockedDecrement(v55);
        if ( v3 != (struct _VIDSCH_QUEUE_PACKET *)-616LL )
          --*((_DWORD *)v3 + 154);
        InterlockedCounterWithHistoryRelease::AddHistoryEntry((InterlockedCounterWithHistoryRelease *)v55, v56, v4);
        v54 = v103;
      }
      ++i;
    }
    if ( (*((_DWORD *)v3 + 20) & 0x80u) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 876));
      v22 = *(_QWORD *)(v9 + 8LL * *((unsigned int *)v3 + 42) + 3448);
      if ( _InterlockedExchange((volatile __int32 *)(v22 + 44420), 0) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 44432), 0LL, 0LL);
        v59 = *(_QWORD *)(v22 + 44304);
        v60 = v58;
        v61 = PerformanceCounter.QuadPart - v59;
        if ( v60 )
        {
          if ( v61 > v60 )
          {
            v62 = v61 / v60;
            v4 = v62;
            if ( (_DWORD)v62 )
            {
              v63 = v59 + v60 * v62;
              ++*(_DWORD *)(v22 + 44416);
              *(_QWORD *)(v22 + 44312) += (unsigned int)v62;
              if ( *(_DWORD *)(v22 + 44416) < *(_DWORD *)(v22 + 83092) )
              {
                v64 = 1;
              }
              else
              {
                *(_DWORD *)(v22 + 44328) += v62;
                v64 = 0;
                *(_DWORD *)(v22 + 44416) = 0;
                *(_QWORD *)(v22 + 44320) = v63;
              }
              *(_BYTE *)(v22 + 44344) = v64;
              *(_QWORD *)(v22 + 44304) = v63;
              if ( *(_BYTE *)(v22 + 8) )
              {
                if ( !*(_BYTE *)(v9 + 164) )
                {
                  v65 = *(_QWORD *)(v9 + 8);
                  v105 = 0;
                  memset(&LockHandle, 0, sizeof(LockHandle));
                  v66 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, struct _KLOCK_QUEUE_HANDLE *))DxgCoreInterface[64])(
                          v65,
                          0LL,
                          0LL,
                          &LockHandle);
                  Lock = 0LL;
                  if ( v66 >= 0 )
                    Lock = LockHandle.LockQueue.Lock;
                  *(_QWORD *)(v22 + 44336) = Lock;
                }
              }
            }
          }
        }
      }
      a2 = (struct _VIDSCH_QUEUE_PACKET *)(v9 + 8LL * *((unsigned int *)v3 + 42));
      *((_QWORD *)v3 + 18) = *(_QWORD *)(*((_QWORD *)a2 + 431) + 44304LL);
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 431) + 44312LL);
      *((_QWORD *)v3 + 17) = v7;
    }
    v8 = v93;
  }
  if ( a3 )
  {
    v20 = *((_DWORD *)v3 + 12);
    if ( !v20 || v20 == 8 )
    {
      ++*(_QWORD *)(v8 + 2848);
      if ( bTracingEnabled )
      {
        if ( (byte_14008A204 & 0x40) != 0
          && *(_BYTE *)(((__int64 (__fastcall *)(__int64, struct _VIDSCH_QUEUE_PACKET *, unsigned __int64, __int64))DxgCoreInterface[3])(
                          v7,
                          a2,
                          v4,
                          1LL)
                      + 305736)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v97 + 3072), 1, 0) )
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v97 + 3040), NormalWorkQueue);
        }
      }
    }
  }
  v11 = *((_DWORD *)v3 + 18);
  *((_QWORD *)v3 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v3 + 13) = 16;
  if ( (v11 & 0x40020) == 0x40000 || (v11 & 0x4000) != 0 )
  {
    if ( (v11 & 0x400) == 0 || (v12 = 0, (v11 & 0x800) != 0) )
      v12 = 1;
    v13 = *((unsigned int *)v3 + 42);
    v94 = v12;
    if ( (v11 & 0x40000) != 0 )
    {
      if ( (v11 & 0x4000) == 0 )
        v12 = 0;
    }
    else if ( (v11 & 4) != 0 )
    {
      if ( *((_DWORD *)v3 + 100) != 1 )
      {
        if ( (*((_DWORD *)v3 + 16) & 2) != 0 )
          goto LABEL_14;
        if ( !v12 )
        {
LABEL_194:
          if ( (*((_DWORD *)v3 + 220) & 0x3FF) != 0 )
          {
            v88 = *(_QWORD *)(v9 + 696);
            v89 = *(unsigned __int16 *)(v97 + 4);
            if ( (unsigned int)v89 < *(_DWORD *)(v9 + 768) )
              v88 += 8 * v89;
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)a1,
              (struct _VIDSCH_GLOBAL *)v9,
              v13,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)v3 + 880),
              *((_DWORD *)v3 + 104),
              1 << *(_BYTE *)(*(_QWORD *)v88 + 6LL),
              0,
              0,
              (unsigned int *)v3 + 224);
          }
LABEL_148:
          if ( (_DWORD)v13 != -1 && v92 && (*((_DWORD *)v3 + 18) & 0x40000) == 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v6 + 4 * v13 + 1708));
            v71 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 40) + 4LL))
                            + 8 * v13
                            + 88);
            if ( (*((_DWORD *)v3 + 18) & 0x80u) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v13 + 6728) + 8LL));
              ++**(_DWORD **)(v9 + 8 * v13 + 6728);
            }
            _InterlockedDecrement((volatile signed __int32 *)(v71 + 8));
            ++*(_DWORD *)v71;
            if ( (*((_DWORD *)v3 + 18) & 0x20000) != 0 )
            {
              memset(&LockHandle, 0, sizeof(LockHandle));
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2024), &LockHandle);
              *(_DWORD *)(v6 + 4 * v13 + 516) = *((_DWORD *)v3 + 98);
              *(_QWORD *)(v6 + 8 * v13 + 584) = *((_QWORD *)v3 + 17);
              *(_QWORD *)(v6 + 8 * v13 + 712) = *((_QWORD *)v3 + 18);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
          }
LABEL_14:
          if ( (*((_DWORD *)v3 + 18) & 0x40080) != 0 && v94 && *((_QWORD *)v3 + 19) && *((_QWORD *)v3 + 20) )
            VidSchiSubmitPresentHistoryToken((_DWORD)a1, (_DWORD)v3, 0, 0, 0LL);
          if ( v96 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 800));
            v14 = 4 * v13;
            if ( *(_BYTE *)(v9 + 2500) )
              v15 = v9 + v14;
            else
              v15 = v9;
            _InterlockedDecrement((volatile signed __int32 *)(v15 + 804));
            _InterlockedDecrement((volatile signed __int32 *)(v6 + 1836));
            _InterlockedDecrement((volatile signed __int32 *)(v14 + v6 + 1772));
          }
          v16 = (struct _KEVENT *)(v9 + 1960);
          memset(&LockHandle, 0, sizeof(LockHandle));
          v91 = KfRaiseIrql(2u);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2032), &LockHandle);
          v17 = *(struct _KEVENT **)(v9 + 1960);
          if ( *(struct _KEVENT **)&v16->Header.Lock == v16 )
          {
LABEL_30:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            KeLowerIrql(v91);
            v6 = v102;
            goto LABEL_45;
          }
          while ( 1 )
          {
            if ( LODWORD(v17->Header.WaitListHead.Blink) == 4 )
            {
              v19 = *(_DWORD *)(*(_QWORD *)&v17[1].Header.Lock + 4LL * LODWORD(v17[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&v17[1].Header.Lock + 252LL);
            }
            else
            {
              if ( ((__int64)v17[1].Header.WaitListHead.Flink & 0x10) == 0 )
                goto LABEL_28;
              Flink = (int)v17[1].Header.WaitListHead.Blink->Flink;
              HIDWORD(v17[5].Header.WaitListHead.Blink) = Flink;
              v19 = Flink == 0;
            }
            if ( v19 )
            {
LABEL_28:
              ++v17[5].Header.LockNV;
              KeSetEvent(v17 + 4, 0, 0);
            }
            v17 = *(struct _KEVENT **)&v17->Header.Lock;
            if ( v17 == v16 )
              goto LABEL_30;
          }
        }
        v96 = 1;
        v92 = 1;
        v98 = 1;
LABEL_145:
        if ( VidSchiIsFocusHwContext((struct VIDSCH_HW_CONTEXT *)v5) )
          ADAPTER_RENDER::DdiNotifyFocusPresent(*(ADAPTER_RENDER **)(*(_QWORD *)(v6 + 40) + 8LL));
        if ( !v98 )
          goto LABEL_148;
        goto LABEL_194;
      }
      v96 = v12;
    }
    v92 = v12;
    if ( !v12 )
      goto LABEL_14;
    goto LABEL_145;
  }
LABEL_45:
  if ( *((_DWORD *)v3 + 12) == 3 && *((_DWORD *)v3 + 42) != -1 )
  {
    v36 = *((_QWORD *)v3 + 11);
    if ( v36 )
      v37 = *(_QWORD *)(v36 + 104);
    else
      v37 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 12) + 40LL) + 8LL);
    v38 = *(_QWORD *)(v37 + 40);
    if ( (*((_DWORD *)v3 + 18) & 0x800000) != 0 )
      v39 = ((unsigned __int16)*((_DWORD *)v3 + 220) | (unsigned __int16)(*((_DWORD *)v3 + 220) >> 10)) & 0x3FF;
    else
      v39 = (1 << *(_DWORD *)(v38 + 160)) - 1;
    v40 = !_BitScanForward((unsigned int *)&v41, v39);
    v42 = -1;
    if ( !v40 )
      v42 = v41;
    while ( v39 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v38 + 8LL * *((unsigned int *)v3 + 42) + 3448)
                                                      + 304LL * v42
                                                      + 192));
      v43 = 1 << v42;
      v42 = -1;
      v39 &= ~v43;
      v40 = !_BitScanForward((unsigned int *)&v43, v39);
      if ( !v40 )
        v42 = v43;
    }
    if ( (*((_DWORD *)v3 + 18) & 0x800000) != 0 )
      v44 = ((unsigned __int16)*((_DWORD *)v3 + 220) | (unsigned __int16)(*((_DWORD *)v3 + 220) >> 10)) & 0x3FF;
    else
      v44 = (1 << *(_DWORD *)(v9 + 160)) - 1;
    v40 = !_BitScanForward((unsigned int *)&v45, v44);
    v46 = -1;
    if ( !v40 )
      v46 = v45;
    while ( v44 )
    {
      v47 = *((unsigned int *)v3 + 42);
      v48 = v46;
      v49 = 304LL * (unsigned int)v46;
      v50 = *(_QWORD *)(v9 + 8 * v47 + 3448);
      v95 = v46;
      v51 = *(int *)(v49 + v50 + 188);
      if ( (int)v51 > -1 )
      {
        v52 = *(_QWORD *)(v9 + 3576) + 160 * v51;
        if ( *(_DWORD *)(v52 + 112) == 1
          && (_DWORD)v47 != -1
          && (!v52
           || *(_BYTE *)(v52 + 98)
           && !*(_DWORD *)(v50 + v49 + 192)
           && *(_BYTE *)(v52 + 96)
           && !*(_DWORD *)(304LL * (unsigned int)v46 + v50 + 196)) )
        {
          VidSchiFlushPendingTokenList((struct HwQueueStagingList *)a1, (struct _VIDSCH_GLOBAL *)v9, v47, v46);
          v48 = v95;
        }
      }
      v46 = -1;
      v44 &= ~(1 << v48);
      v40 = !_BitScanForward((unsigned int *)&v53, v44);
      if ( !v40 )
        v46 = v53;
    }
  }
  if ( (unsigned int)(*((_DWORD *)v3 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 1848));
  if ( v92 )
  {
    v23 = (struct _KEVENT *)(v6 + 128);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v24 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2032), &LockHandle);
    v25 = *(struct _KEVENT **)(v6 + 128);
    if ( *(struct _KEVENT **)&v23->Header.Lock == v23 )
    {
LABEL_50:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeLowerIrql(v24);
      v5 = v101;
      goto LABEL_51;
    }
    while ( 1 )
    {
      if ( LODWORD(v25->Header.WaitListHead.Blink) == 4 )
      {
        v33 = *(_DWORD *)(*(_QWORD *)&v25[1].Header.Lock + 4LL * LODWORD(v25[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&v25[1].Header.Lock + 252LL);
      }
      else
      {
        if ( ((__int64)v25[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_73;
        v32 = (int)v25[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v25[5].Header.WaitListHead.Blink) = v32;
        v33 = v32 == 0;
      }
      if ( v33 )
      {
LABEL_73:
        ++v25[5].Header.LockNV;
        KeSetEvent(v25 + 4, 0, 0);
      }
      v25 = *(struct _KEVENT **)&v25->Header.Lock;
      if ( v25 == v23 )
        goto LABEL_50;
    }
  }
LABEL_51:
  if ( v96 )
  {
    VidSchiSignalRegisteredEvent(v9, v102 + 144);
    VidSchiSignalRegisteredEvent(v9, v9 + 1944);
    *(_QWORD *)(v9 + 1888) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1856), 0, 0);
  }
  v26 = *((_DWORD *)v3 + 12);
  if ( !v26 || v26 == 8 )
  {
    v34 = (struct HwQueueStagingList *)(v99 + 176);
    if ( !*(_QWORD *)(v99 + 176) )
    {
      v35 = a1[2];
      if ( *v35 != (struct HwQueueStagingList *)(a1 + 1) )
        __fastfail(3u);
      *(_QWORD *)v34 = a1 + 1;
      *(_QWORD *)(v99 + 184) = v35;
      *v35 = v34;
      a1[2] = (struct HwQueueStagingList **)v34;
      *((_BYTE *)a1 + 24) = 0;
    }
    v72 = (struct _KEVENT **)(v5 + 400);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v73 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2032), &LockHandle);
    for ( j = *v72; j != (struct _KEVENT *)v72; j = *(struct _KEVENT **)&j->Header.Lock )
    {
      if ( LODWORD(j->Header.WaitListHead.Blink) == 4 )
      {
        v76 = *(_DWORD *)(*(_QWORD *)&j[1].Header.Lock + 4LL * LODWORD(j[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&j[1].Header.Lock + 252LL);
      }
      else
      {
        if ( ((__int64)j[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_161;
        v75 = (int)j[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(j[5].Header.WaitListHead.Blink) = v75;
        v76 = v75 == 0;
      }
      if ( v76 )
      {
LABEL_161:
        ++j[5].Header.LockNV;
        KeSetEvent(j + 4, 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v73);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v77 = (struct _KEVENT *)(v97 + 408);
    v78 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2032), &LockHandle);
    v79 = *(struct _KEVENT **)(v97 + 408);
    if ( *(struct _KEVENT **)&v77->Header.Lock != v77 )
    {
      do
      {
        if ( LODWORD(v79->Header.WaitListHead.Blink) == 4 )
        {
          v81 = *(_DWORD *)(*(_QWORD *)&v79[1].Header.Lock + 4LL * LODWORD(v79[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&v79[1].Header.Lock + 252LL);
        }
        else
        {
          if ( ((__int64)v79[1].Header.WaitListHead.Flink & 0x10) == 0 )
            goto LABEL_168;
          v80 = (int)v79[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v79[5].Header.WaitListHead.Blink) = v80;
          v81 = v80 == 0;
        }
        if ( v81 )
        {
LABEL_168:
          ++v79[5].Header.LockNV;
          KeSetEvent(v79 + 4, 0, 0);
        }
        v79 = *(struct _KEVENT **)&v79->Header.Lock;
      }
      while ( v79 != v77 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v78);
    v82 = (struct _KEVENT *)(v9 + 1912);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v83 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 2032), &LockHandle);
    v84 = *(struct _KEVENT **)(v9 + 1912);
    if ( *(struct _KEVENT **)&v82->Header.Lock == v82 )
    {
LABEL_177:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeLowerIrql(v83);
      v5 = v101;
      *(_QWORD *)(v101 + 376) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v101 + 344), 0, 0);
      *(_QWORD *)(v97 + 272) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v97 + 240), 0, 0);
      *(_QWORD *)(v9 + 1720) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v9 + 1688), 0, 0);
      goto LABEL_55;
    }
    while ( 1 )
    {
      if ( LODWORD(v84->Header.WaitListHead.Blink) == 4 )
      {
        v86 = *(_DWORD *)(*(_QWORD *)&v84[1].Header.Lock + 4LL * LODWORD(v84[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&v84[1].Header.Lock + 252LL);
      }
      else
      {
        if ( ((__int64)v84[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_175;
        v85 = (int)v84[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v84[5].Header.WaitListHead.Blink) = v85;
        v86 = v85 == 0;
      }
      if ( v86 )
      {
LABEL_175:
        ++v84[5].Header.LockNV;
        KeSetEvent(v84 + 4, 0, 0);
      }
      v84 = *(struct _KEVENT **)&v84->Header.Lock;
      if ( v84 == v82 )
        goto LABEL_177;
    }
  }
LABEL_55:
  v27 = *((_DWORD *)v3 + 12);
  if ( !v27 || ((v27 - 3) & 0xFFFFFFFB) == 0 )
  {
    if ( !*(_BYTE *)(v5 + 149) )
    {
      for ( k = 0; k < *(_DWORD *)(v9 + 160); ++k )
      {
        v29 = 8 * k * (*((_DWORD *)v3 + 222) + 28);
        v30 = *(_QWORD *)((char *)v3 + v29 + 1088);
        if ( v30 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 12), 0xFFFFFFFF) == 1 )
          {
            if ( *(_QWORD *)v30 )
              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v30, (PVOID)v30);
            else
              ExFreePoolWithTag((PVOID)v30, 0);
          }
          *(_QWORD *)((char *)v3 + v29 + 1088) = 0LL;
        }
      }
    }
    v31 = *((_QWORD *)v3 + 39);
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 12), 0xFFFFFFFF) == 1 )
      {
        if ( *(_QWORD *)v31 )
          ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v31, (PVOID)v31);
        else
          ExFreePoolWithTag((PVOID)v31, 0);
      }
      *((_QWORD *)v3 + 39) = 0LL;
    }
  }
  VidSchiFreeCompletedHwQueuePacket(v3);
}
