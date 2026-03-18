/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x14001E790
 * Callers:
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140003020 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x140003348 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiCancelIndependentFlips @ 0x140003498 (VidSchiCancelIndependentFlips.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14001E3B4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1400324EC (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140032608 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400329BC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140034908 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x14005A564 (-VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVID.c)
 * Callees:
 *     ?IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ @ 0x1400038B0 (-IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ.c)
 *     VidSchiTryEnterIndependentFlip @ 0x140005A2C (VidSchiTryEnterIndependentFlip.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140014EB8 (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1400177B0 (VidSchiPropagatePresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140017A5C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14001DE5C (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     VidSchiSignalFlipEvents @ 0x14001F574 (VidSchiSignalFlipEvents.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x14001FC88 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140031F30 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400359F0 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036240 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3PEAI@Z @ 0x140039DCC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14003B7E0 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14003B9B8 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14003B9E0 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003DA1C (-DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x14003DAC0 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     ?SetMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x140046A74 (-SetMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x140049C10 (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 *     McTemplateK0pxqqpqx_EtwWriteTransfer @ 0x14004B60C (McTemplateK0pxqqpqx_EtwWriteTransfer.c)
 *     McTemplateK0qqt_EtwWriteTransfer @ 0x14004BB34 (McTemplateK0qqt_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        _BYTE *a8)
{
  __int64 v8; // r10
  __int64 v9; // r11
  _BYTE *v10; // r8
  __int64 v13; // r12
  __int64 v14; // r14
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned int v18; // ecx
  unsigned int v19; // r13d
  char v20; // si
  int v21; // r15d
  unsigned int v22; // r11d
  unsigned int updated; // eax
  unsigned int v24; // r8d
  char v25; // cl
  int v26; // eax
  __int64 v27; // rsi
  char v28; // bl
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  char v32; // cl
  __int64 v33; // r8
  unsigned int v34; // r9d
  int v35; // eax
  bool j; // zf
  __int64 v37; // rdx
  __int64 v38; // r9
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v40; // r8
  unsigned int v41; // esi
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **v42; // r15
  __int64 v43; // r13
  struct HwQueueStagingList *v44; // r14
  __int64 v45; // rdx
  void *v46; // rcx
  int v47; // eax
  unsigned int v48; // esi
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v49; // r9
  __int64 i; // rsi
  __int64 v51; // rcx
  unsigned int v52; // edx
  int v53; // eax
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *v54; // rax
  int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // eax
  char v59; // cl
  __int64 v60; // r8
  int v61; // r9d
  bool v62; // r14
  int v63; // eax
  unsigned int v64; // eax
  int v65; // r8d
  __int64 v66; // rcx
  __int64 v67; // r9
  int v68; // eax
  int v69; // eax
  char *v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // edx
  unsigned int v73; // eax
  unsigned int v74; // edx
  char v75; // cl
  unsigned int v76; // r8d
  char v77; // cl
  int v78; // eax
  unsigned int v79; // edx
  unsigned int v80; // r8d
  __int64 v81; // r9
  char v82; // al
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r14
  void *v86; // rcx
  __int64 v87; // rdx
  unsigned int v88; // ecx
  void (__fastcall *v89)(_QWORD, __int64, __int64); // rax
  char v90; // [rsp+60h] [rbp-A0h]
  int v91; // [rsp+64h] [rbp-9Ch]
  unsigned int v92; // [rsp+68h] [rbp-98h]
  unsigned int v93; // [rsp+70h] [rbp-90h]
  unsigned int v94; // [rsp+74h] [rbp-8Ch]
  __int64 v95; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v98; // [rsp+A8h] [rbp-58h]
  unsigned int v99; // [rsp+ACh] [rbp-54h]
  unsigned int v100; // [rsp+B0h] [rbp-50h]
  int v101; // [rsp+B8h] [rbp-48h]
  int v102; // [rsp+BCh] [rbp-44h]
  __int64 v103; // [rsp+C0h] [rbp-40h]
  _BYTE *v104; // [rsp+C8h] [rbp-38h]
  unsigned int v105; // [rsp+D0h] [rbp-30h] BYREF
  int v106; // [rsp+D4h] [rbp-2Ch]
  _QWORD v107[21]; // [rsp+D8h] [rbp-28h] BYREF

  v8 = a3;
  v9 = a4;
  v10 = a8;
  v103 = a4;
  v92 = v8;
  v104 = a8;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 868) )
    return 0LL;
  v13 = *(_QWORD *)(a2 + 8 * v8 + 3448);
  v14 = v8;
  if ( !a4 )
    return 0LL;
  v15 = a5;
  v94 = 0;
  v93 = 0;
  while ( 1 )
  {
    v16 = 0LL;
    v95 = 0LL;
    v17 = 1400LL * v15 + v9 + 120;
    v18 = *(_DWORD *)(v17 + 1052);
    if ( v18 )
    {
      if ( v18 > 0xC || (v31 = 4672, !_bittest(&v31, v18)) )
      {
        v16 = *(_QWORD *)(v17 + 1040);
        v95 = v16;
      }
    }
    v19 = a7;
    v20 = 0;
    v90 = 0;
    v21 = 1;
    v91 = 1;
    switch ( a7 )
    {
      case 0u:
        if ( v18 - 10 > 1 )
          break;
LABEL_37:
        if ( DXGADAPTER::IsMockDriverStateEnabled(*(DXGADAPTER **)(a2 + 16))
          && *(_DWORD *)(v17 + 1052) == 11
          && (*(_DWORD *)(v17 + 1152) & 0x1000) == 0
          && !a7 )
        {
          v106 = 0;
          memset(v107, 0, 0xA0uLL);
          v70 = (char *)v107 + 4;
          v71 = 10LL;
          do
          {
            *((_DWORD *)v70 - 1) = 0;
            *v70 = 0;
            *(_WORD *)(v70 + 1) = 0;
            v70[3] = 0;
            *(_QWORD *)(v70 + 4) = 0LL;
            v70 += 16;
            --v71;
          }
          while ( v71 );
          v105 = v92;
          LockHandle.LockQueue.Lock = *(volatile PKSPIN_LOCK *)(v17 + 1192);
          LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)a2;
          v72 = *(_DWORD *)LockHandle.LockQueue.Lock;
          v73 = *(_DWORD *)LockHandle.LockQueue.Lock & 0x3FF;
          *(_DWORD *)&LockHandle.OldIrql = v73;
          if ( *(_BYTE *)(a2 + 164) )
            v74 = (v72 >> 10) & 0x3FF;
          else
            v74 = 0;
          *((_DWORD *)&LockHandle.OldIrql + 1) = v74;
          j = !_BitScanForward(&v73, v73);
          v98 = 0;
          v75 = -1;
          if ( !j )
            v75 = v73;
          v76 = v75;
          v77 = -1;
          j = !_BitScanForward((unsigned int *)&v78, v74);
          v99 = v76;
          if ( !j )
            v77 = v78;
          v100 = v77;
          if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&LockHandle) )
          {
            while ( 1 )
            {
              if ( v80 >= v79 )
              {
                v82 = 0;
                v80 = v79;
              }
              else
              {
                v82 = 1;
              }
              v83 = 2 * v81;
              LODWORD(v107[v83]) = v80;
              BYTE4(v107[v83]) = v82;
              v84 = v82
                  ? *(_QWORD *)((v81 << 6)
                              + *(_QWORD *)(v17 + 1192)
                              + *(_DWORD *)(*(_QWORD *)(v17 + 1192) + 4LL)
                              * ((8 * *(_DWORD *)(*(_QWORD *)(v17 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                              + 32)
                  : 0LL;
              v107[2 * v81 + 1] = v84;
              ++v106;
              VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&LockHandle);
              if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&LockHandle) )
                break;
              v79 = v100;
              v80 = v99;
              v81 = v98;
            }
          }
          DXGADAPTER::SetMockDriverState(*(_QWORD *)(a2 + 16), 0LL, &v105);
          goto LABEL_41;
        }
        if ( a7 == 9 || (v91 = v21, v90 = v20, a7 == 6) )
        {
          FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v17 + 1344));
          if ( FlipManagerAuxiliaryPresentInfo )
          {
            *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 13) = 1;
            if ( (byte_14008A204 & 0x20) != 0 )
              McTemplateK0dq_EtwWriteTransfer(
                *(unsigned int *)(v17 + 1056),
                &EventFlipManagerIFlipPresentCancel,
                v40,
                *((unsigned int *)FlipManagerAuxiliaryPresentInfo + 2),
                *(_DWORD *)(v17 + 1056));
          }
          if ( a7 != 9 )
            goto LABEL_41;
          goto LABEL_155;
        }
        v91 = v21;
        v90 = v20;
        if ( a7 != 12 )
          goto LABEL_41;
        v54 = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v17 + 1344));
        v91 = v21;
        v90 = v20;
        if ( v54 )
        {
          v91 = v21;
          v90 = v20;
          if ( v20 )
          {
            *((_DWORD *)v54 + 9) = 1;
            *((_DWORD *)v54 + 14) = 1;
            if ( (byte_14008A204 & 0x20) == 0 )
              goto LABEL_155;
            McTemplateK0qqt_EtwWriteTransfer(
              v56,
              v55,
              v57,
              *((_DWORD *)v54 + 2),
              *(_DWORD *)(v17 + 1056),
              (*(_DWORD *)(v17 + 1152) & 0x100000) != 0);
            goto LABEL_154;
          }
          *((_DWORD *)v54 + 13) = 1;
          if ( (byte_14008A204 & 0x20) != 0 )
          {
            McTemplateK0dq_EtwWriteTransfer(
              v56,
              &EventFlipManagerIFlipPresentCancel,
              v57,
              *((unsigned int *)v54 + 2),
              *(_DWORD *)(v17 + 1056));
LABEL_154:
            v91 = v21;
            v90 = v20;
          }
        }
LABEL_155:
        if ( v21 )
        {
          v41 = VidSchiDecrementPendingFlipsForFlipEntry(
                  (struct _VIDSCH_GLOBAL *)a2,
                  (struct _VIDSCH_PRESENT_INFO *)v13,
                  (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v17);
          v42 = (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v17 + 1192);
          goto LABEL_44;
        }
LABEL_41:
        if ( (*(_DWORD *)(v17 + 1152) & 0x10) != 0 )
          v41 = ((unsigned __int16)**(_DWORD **)(v17 + 1192) | (unsigned __int16)(**(_DWORD **)(v17 + 1192) >> 10)) & 0x3FF;
        else
          v41 = (1 << *(_DWORD *)(a2 + 160)) - 1;
        v42 = (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v17 + 1192);
        if ( a7 == 9 && *(_DWORD *)(v17 + 1052) == 13 )
          *(_DWORD *)(v13 + 3252) &= ~v41;
LABEL_44:
        if ( *(_QWORD *)(v13 + 120) == v17 )
          *(_QWORD *)(v13 + 120) = 0LL;
        if ( *(_QWORD *)(a2 + 3800) == v17 )
        {
          *(_QWORD *)(a2 + 3800) = 0LL;
          VidSchiSignalRegisteredEvent(a2, a2 + 1976);
        }
        *(_DWORD *)(v17 + 1052) = a7;
        v43 = *(_QWORD *)(v17 + 1176);
        if ( v43 )
        {
          v85 = *((_QWORD *)*v42 + 26);
          if ( v85 )
          {
            memset(&LockHandle, 0, sizeof(LockHandle));
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v43 + 16), &LockHandle);
            _InterlockedIncrement((volatile signed __int32 *)(v85 + 12));
            v86 = *(void **)(v43 + 8);
            if ( v86 )
              CRefCountedBuffer::RefCountedBufferRelease(v86);
            *(_QWORD *)(v43 + 8) = v85;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          *(_QWORD *)(v17 + 1176) = 0LL;
        }
        v44 = a1;
        v19 = a7;
        VidSchiSignalRuntimeFenceForCompletedFlipEntry(a2, v17, a7, a1);
        VidSchiReleasePrivateDataReference((struct _VIDSCH_GLOBAL *)a2, *v42);
        VidSchiReleaseFlipFencesReference((struct _VIDSCH_GLOBAL *)a2, *v42);
        v46 = *(void **)(v17 + 1184);
        if ( v46 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v46);
          *(_QWORD *)(v17 + 1184) = 0LL;
        }
        if ( !a7 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 2024), &LockHandle);
          *(_DWORD *)(v13 + 44400) = *(_DWORD *)(v17 + 1056);
          if ( (*(_DWORD *)(v17 + 1152) & 0x20) == 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v13 + 16) + 4LL * v92 + 516) = *(_DWORD *)(v17 + 1056);
            *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL * v92 + 584) = *(_QWORD *)(v17 + 1128);
            *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL * v92 + 712) = *(_QWORD *)(v17 + 1112);
            *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL * v92 + 840) = *(_QWORD *)(v17 + 1144);
            *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL * v92 + 968) = *(_QWORD *)(v17 + 1136);
            *(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL * v92 + 1096) = *(_QWORD *)(v17 + 1120);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        v47 = *(_DWORD *)(v17 + 1152);
        if ( (v47 & 0x20) == 0 || !*(_QWORD *)(v17 + 1168) )
          goto LABEL_53;
        v62 = 1;
        switch ( a7 )
        {
          case 0u:
            goto LABEL_88;
          case 9u:
            v62 = v91 != 0;
            if ( v91 )
            {
LABEL_88:
              if ( !v90 )
                UpdateFlipManagerStatsOnFlipCompletion(a2, v17, v13, v92, a7);
            }
            break;
          case 6u:
            if ( (v47 & 0x100000) == 0 )
            {
              SetIndependentFlipStage(
                (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v17,
                (enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE)v45);
              VidSchiPropagatePresentHistoryToken(
                a2,
                *(union _SLIST_HEADER **)(v17 + 1160),
                *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1168),
                1,
                (*(_DWORD *)(v17 + 1152) & 0x40) != 0,
                0,
                0,
                *(_QWORD *)(v17 + 1176),
                *(_QWORD *)(v17 + 1192),
                0LL,
                (v17 + 1352) & -(__int64)(*(_QWORD *)(v17 + 1352) != 0LL),
                1);
            }
            goto LABEL_88;
          default:
            v62 = v90 != 0;
            break;
        }
        VidSchiPropagatePresentHistoryToken(
          a2,
          *(union _SLIST_HEADER **)(v17 + 1160),
          *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1168),
          v62,
          (*(_DWORD *)(v17 + 1152) & 0x40) != 0,
          0,
          0,
          *(_QWORD *)(v17 + 1176),
          *(_QWORD *)(v17 + 1192),
          0LL,
          (v17 + 1352) & -(__int64)(*(_QWORD *)(v17 + 1352) != 0LL),
          0);
        v44 = a1;
LABEL_53:
        if ( !bTracingEnabled || !a7 )
          goto LABEL_54;
        j = !_BitScanForward((unsigned int *)&v58, v41);
        v59 = -1;
        if ( !j )
          v59 = v58;
        v101 = v59;
        v102 = *(_DWORD *)(v17 + 1048);
        if ( (byte_14008A201 & 1) != 0 )
        {
          if ( v95 )
          {
            v60 = *(_QWORD *)(v95 + 8);
            v61 = *(_DWORD *)(a2 + 2832);
            if ( !v60 )
              LODWORD(v60) = v95;
          }
          else
          {
            LODWORD(v60) = 0;
            LOBYTE(v61) = 0;
          }
          v87 = *(_QWORD *)(v17 + 1192);
          v48 = v92;
          v88 = 8 * *(_DWORD *)(v87 + 4) * (*(_DWORD *)(v87 + 8) + 28);
          McTemplateK0pxqqpqx_EtwWriteTransfer(
            v88,
            v87,
            v60,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(v88 + v87 + 48),
            v92,
            *(_DWORD *)(v17 + 1056),
            v60,
            v61,
            v101);
        }
        else
        {
LABEL_54:
          v48 = v92;
        }
        v49 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v17 + 1192);
        if ( (*(_DWORD *)v49 & 0x3FF) != 0 )
        {
          VidSchiUnreferencePrimaryAllocations(
            v44,
            (struct _VIDSCH_GLOBAL *)a2,
            v48,
            v49,
            *(_DWORD *)(v17 + 1080),
            *(_DWORD *)(v17 + 1084),
            1,
            a7 != 0,
            (unsigned int *)v49 + 4);
          if ( v95 )
            VidSchiCheckPendingDeviceCommand((_QWORD *)v95);
        }
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v17 + 1092); i = (unsigned int)(i + 1) )
        {
          v51 = *(_QWORD *)(v17 + 8 * i);
          if ( (*(_DWORD *)(v17 + 1152) & 0x4000) != 0 )
          {
            if ( v51 )
            {
              VidSchiReleaseSyncObjectReference((char *)v51, v45);
              *(_QWORD *)(v17 + 8 * i) = 0LL;
            }
          }
          else if ( v51 )
          {
            --*(_DWORD *)(v51 + 800);
          }
        }
        ++v94;
        _InterlockedDecrement((volatile signed __int32 *)(v95 + 1836));
        DecrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)a2, v92);
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 800));
        v14 = v92;
        _InterlockedDecrement((volatile signed __int32 *)(v95 + 4LL * v92 + 1772));
        if ( (*(_DWORD *)(v17 + 1152) & 0x10) != 0 )
          v52 = ((unsigned __int16)**(_DWORD **)(v17 + 1192) | (unsigned __int16)(**(_DWORD **)(v17 + 1192) >> 10)) & 0x3FF;
        else
          v52 = (1 << *(_DWORD *)(a2 + 160)) - 1;
        j = !_BitScanForward((unsigned int *)&v53, v52);
        v33 = 0xFFFFFFFFLL;
        v34 = v52;
        if ( !j )
          v33 = (unsigned __int8)v53;
        for ( j = v52 == 0; !j; j = v34 == 0 )
        {
          --*(_DWORD *)(304LL * (char)v33 + *(_QWORD *)(a2 + 8LL * v92 + 3448) + 196);
          v32 = v33;
          v33 = 0xFFFFFFFFLL;
          v34 &= ~(1 << v32);
          j = !_BitScanForward((unsigned int *)&v35, v34);
          if ( !j )
            v33 = (unsigned __int8)v35;
        }
        v93 |= v52;
        _InterlockedDecrement((volatile signed __int32 *)(v95 + 4LL * v92 + 1708));
        --*(_DWORD *)(v95 + 1840);
        v37 = *(unsigned int *)(*(_QWORD *)(a2 + 8LL * v92 + 3448) + 44488LL);
        if ( (_DWORD)v37 != -1 )
        {
          v89 = *(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 3320);
          if ( v89 )
            v89(*(_QWORD *)(a2 + 3368), v37, v33);
        }
        v38 = v103;
        *(_DWORD *)(v103 + 76) = a5;
        VidSchiUpdateFlipQueueHistory((unsigned int)(a7 != 0) + 3, a2, v92, v38, a5);
        LODWORD(v8) = v92;
        v15 = a5;
        v9 = v103;
        goto LABEL_36;
      case 9u:
      case 6u:
        v65 = 1;
        if ( v18 <= 0xC )
        {
          v69 = 4673;
          if ( _bittest(&v69, v18) )
            v65 = 0;
        }
        if ( a7 == 9 )
        {
          if ( v18 != 5 && v18 != 15 )
            v21 = 0;
          v91 = v21;
        }
        else if ( v18 == 5 || v18 == 15 || v18 == 13 )
        {
          v65 = 0;
        }
        if ( v18 - 7 <= 1 )
        {
          if ( *(_BYTE *)(v17 + 1077) )
            ++*(_QWORD *)(v16 + 8 * v14 + 384);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 872));
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 3240));
          if ( *(_DWORD *)(v17 + 1052) == 8 && !*(_BYTE *)(v17 + 1077) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v14 + 1708));
            v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 32LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v16 + 40) + 4LL))
                            + 8 * v14
                            + 88);
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v14 + 6728) + 8LL));
            _InterlockedIncrement((volatile signed __int32 *)(v66 + 8));
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 800));
            IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)a2, v8);
            _InterlockedIncrement((volatile signed __int32 *)(v67 + 1836));
            _InterlockedIncrement((volatile signed __int32 *)(v67 + 4 * v14 + 1772));
            v15 = a5;
          }
        }
LABEL_111:
        if ( v65 )
        {
LABEL_112:
          v68 = ((_BYTE)v15 + 1) & 0x3F;
          *(_DWORD *)(v9 + 64) = v68;
          VidSchiUpdateFlipQueueHistory(6LL, a2, (unsigned int)v8, v9, v68);
          goto LABEL_37;
        }
LABEL_36:
        v10 = v104;
        break;
      case 0xCu:
        if ( v18 - 2 <= 1 || v18 == 14 )
        {
          v64 = *(_DWORD *)(v17 + 1152);
          v65 = (v64 >> 5) & 1;
          v21 = 0;
          v91 = 0;
          if ( !*(_BYTE *)(a2 + 67) )
          {
            v90 = 0;
            goto LABEL_111;
          }
          if ( v65 )
          {
            if ( (v64 & 0x102000) == 0x102000 )
            {
              v20 = 1;
              v90 = 1;
            }
            goto LABEL_112;
          }
          goto LABEL_36;
        }
        if ( v18 == 5 || v18 == 15 )
        {
          v63 = *(_DWORD *)(v17 + 1152);
          if ( (v63 & 0x20) != 0 )
          {
            if ( (v63 & 0x2000) != 0 && *(_BYTE *)(a2 + 67) )
            {
              v20 = 1;
              v90 = 1;
              goto LABEL_112;
            }
            if ( v10 )
              *v10 = 1;
          }
        }
        break;
    }
    if ( v15 == a6 )
      break;
    v15 = ((_BYTE)v15 + 1) & 0x3F;
    a5 = v15;
  }
  v22 = v94;
  if ( v94 )
  {
    v24 = v93;
    v25 = -1;
    j = !_BitScanForward((unsigned int *)&v26, v93);
    if ( !j )
      v25 = v26;
    if ( v93 )
    {
      v27 = (unsigned int)v8;
      do
      {
        v28 = v25;
        v29 = *(int *)(304LL * (unsigned int)v25 + *(_QWORD *)(a2 + 8 * v27 + 3448) + 188);
        if ( (int)v29 > -1 && *(_DWORD *)(160 * v29 + *(_QWORD *)(a2 + 3576) + 112) == 1 )
        {
          VidSchiTryEnterIndependentFlip(a1, (struct _VIDSCH_GLOBAL *)a2, v8, v25);
          LODWORD(v8) = v92;
          v24 = v93;
        }
        v25 = -1;
        v24 &= ~(1 << v28);
        j = !_BitScanForward((unsigned int *)&v30, v24);
        v93 = v24;
        if ( !j )
          v25 = v30;
      }
      while ( v24 );
      v22 = v94;
    }
  }
  *(_DWORD *)(a2 + 868) -= v22;
  *(_DWORD *)(v13 + 3236) -= v22;
  _InterlockedAdd((volatile signed __int32 *)(a2 + 872), -v22);
  _InterlockedAdd((volatile signed __int32 *)(v13 + 3240), -v22);
  if ( !v19 )
    VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v13, (struct _VIDSCH_GLOBAL *)a2);
  updated = VidSchiUpdateFlipDeviceStatus(a1, v13);
  VidSchiSignalFlipEvents(v13, updated, 0LL);
  return v94;
}
