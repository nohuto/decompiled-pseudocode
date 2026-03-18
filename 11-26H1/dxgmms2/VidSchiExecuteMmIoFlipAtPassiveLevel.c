/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1400177B0 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x1400185B4 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x140018B30 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14001DCBC (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14001E054 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14001E3B4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140032470 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x140034DE8 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x140035820 (-VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VI.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14003B9B8 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x14003E5D0 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x14004B17C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     McTemplateK0pqqtq_EtwWriteTransfer @ 0x140054888 (McTemplateK0pqqtq_EtwWriteTransfer.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005976C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  __int64 v3; // r12
  char v4; // r15
  bool v5; // zf
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r8d
  int v11; // edx
  enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE v12; // edx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r13d
  __int64 v16; // rax
  _DWORD *v17; // rcx
  unsigned int v18; // r13d
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  AcquireSpinLock *v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  struct _VIDSCH_GLOBAL *v27; // r8
  struct _VIDSCH_GLOBAL *v28; // rdx
  struct _VIDSCH_GLOBAL *v29; // rcx
  struct _VIDSCH_GLOBAL *v30; // rax
  int v31; // eax
  __int16 v32; // r9
  _DWORD *v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // r8d
  unsigned int v36; // edx
  int v37; // eax
  char v38; // cl
  int v39; // r11d
  unsigned int v40; // r9d
  char v41; // cl
  int v42; // eax
  unsigned int v43; // r10d
  _DWORD *v44; // rcx
  int v45; // eax
  int v46; // edx
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v49; // edx
  int v50; // eax
  __int64 i; // r14
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // [rsp+68h] [rbp-A0h] BYREF
  int v55; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h] BYREF
  struct _KEVENT *v57; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v58; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v59; // [rsp+88h] [rbp-80h]
  int v60; // [rsp+90h] [rbp-78h]
  int v61; // [rsp+94h] [rbp-74h]
  unsigned int v62; // [rsp+98h] [rbp-70h]
  int v63; // [rsp+A0h] [rbp-68h] BYREF
  struct _KEVENT *v64; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v65[2]; // [rsp+B0h] [rbp-58h] BYREF
  char v66; // [rsp+C0h] [rbp-48h]
  int v67; // [rsp+C4h] [rbp-44h]
  _QWORD v68[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v69; // [rsp+D8h] [rbp-30h]
  int v70; // [rsp+DCh] [rbp-2Ch]
  __int64 v71; // [rsp+E0h] [rbp-28h]
  int v72; // [rsp+E8h] [rbp-20h]
  int v73; // [rsp+ECh] [rbp-1Ch]
  __int64 v74; // [rsp+F0h] [rbp-18h]
  __int64 v75; // [rsp+F8h] [rbp-10h]
  __int64 v76; // [rsp+100h] [rbp-8h]
  __int64 v77; // [rsp+108h] [rbp+0h]
  __int64 v78; // [rsp+110h] [rbp+8h]
  __int64 v79[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v80[4]; // [rsp+128h] [rbp+20h] BYREF
  __int16 v81; // [rsp+148h] [rbp+40h]
  LARGE_INTEGER v82[270]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v83[2]; // [rsp+9C8h] [rbp+8C0h] BYREF
  __int128 v84; // [rsp+9D8h] [rbp+8D0h]
  __int64 v85; // [rsp+9E8h] [rbp+8E0h]
  __int64 v86[10]; // [rsp+9F8h] [rbp+8F0h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 12);
  v4 = *(_BYTE *)(a1 + 24);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 3260LL) == 0;
  LODWORD(v56) = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v1 + 8 * v3 + 3448);
    v8 = 1400 * v2 + v6 + 120;
    memset(v82, 0, sizeof(v82));
    memset(v86, 0, sizeof(v86));
    LOWORD(v62) = 0;
    v85 = 0LL;
    v57 = (struct _KEVENT *)(v1 + 2016);
    *(_OWORD *)v79 = 0LL;
    *(_OWORD *)v83 = 0LL;
    v84 = 0LL;
    AcquireSpinLock::Acquire((Acquire *)&v57);
    if ( *(_DWORD *)(v8 + 1052) == 13 )
    {
      *(_DWORD *)(v8 + 1152) |= 0x200000u;
      VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        (struct _VIDSCH_GLOBAL *)v1,
        1400 * v2 + v6 + 120,
        v3,
        (__int64)v82,
        v4,
        (__int64)v86,
        (__int64)v79,
        (__int64)v83);
      AcquireSpinLock::Release((AcquireSpinLock *)&v57);
      v82[1].HighPart |= 8u;
      v9 = ((__int64 (__fastcall *)(_QWORD, LARGE_INTEGER *))DxgCoreInterface[66])(
             *(_QWORD *)(*(_QWORD *)(v82[0].QuadPart + 16) + 3160LL),
             &v82[1]);
      if ( v9 != -1073741267 )
      {
        v2 = 0LL;
        if ( !v9 )
        {
          v81 = 0;
          v80[0] = v1 + 2016;
          AcquireSpinLock::Acquire((Acquire *)v80);
          v64 = (struct _KEVENT *)v1;
          v66 = 0;
          v65[1] = v65;
          v67 = 2;
          v65[0] = v65;
          if ( (*(_DWORD *)(v8 + 1152) & 0x1000) == 0 )
          {
            v33 = *(_DWORD **)(v8 + 1192);
            v57 = (struct _KEVENT *)v1;
            v58 = v33;
            v34 = *v33;
            v35 = *v33 & 0x3FF;
            LODWORD(v59) = v35;
            if ( *(_BYTE *)(v1 + 164) )
              v36 = (v34 >> 10) & 0x3FF;
            else
              v36 = 0;
            v5 = !_BitScanForward((unsigned int *)&v37, v35);
            v38 = -1;
            v55 = 0;
            HIDWORD(v59) = v36;
            v39 = 0;
            if ( !v5 )
              v38 = v37;
            v60 = 0;
            v40 = v38;
            v41 = -1;
            v5 = !_BitScanForward((unsigned int *)&v42, v36);
            v61 = v40;
            v55 = 0;
            if ( !v5 )
              v41 = v42;
            v43 = v41;
            v62 = v41;
            while ( v35 || v36 )
            {
              if ( v40 < v43 )
                v43 = v40;
              *(_QWORD *)(304LL * v43 + *(_QWORD *)(v1 + 8 * v3 + 3448) + 392) = *(_QWORD *)((unsigned int)(8 * v39 * (*(_DWORD *)(*(_QWORD *)(v8 + 1192) + 8LL) + 28))
                                                                                           + *(_QWORD *)(v8 + 1192)
                                                                                           + 32LL);
              VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v57);
              v36 = HIDWORD(v59);
              v35 = (unsigned int)v59;
              v43 = v62;
              v40 = v61;
              v39 = v60;
            }
          }
          if ( !*(_BYTE *)(v1 + 67) )
          {
LABEL_7:
            if ( (*(_DWORD *)(v8 + 1152) & 0x10) != 0 )
              v11 = (**(_DWORD **)(v8 + 1192) | (**(_DWORD **)(v8 + 1192) >> 10)) & 0x3FF;
            else
              v11 = (1 << *(_DWORD *)(v1 + 160)) - 1;
            v12 = ~v11;
            *(_DWORD *)(v7 + 3252) &= v12;
            v13 = *(_DWORD *)(v8 + 1152);
            if ( (v13 & 0x20) != 0 && *(_QWORD *)(v8 + 1168) != v2 && (v13 & 0x100000) == 0 )
            {
              SetIndependentFlipStage((struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8, v12);
              VidSchiPropagatePresentHistoryToken(
                v1,
                *(union _SLIST_HEADER **)(v8 + 1160),
                *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v8 + 1168),
                1,
                (*(_DWORD *)(v8 + 1152) & 0x40) != 0,
                v2,
                v2,
                *(_QWORD *)(v8 + 1176),
                *(_QWORD *)(v8 + 1192),
                v2,
                (v8 + 1352) & -(__int64)(*(_QWORD *)(v8 + 1352) != 0LL),
                v2);
            }
            *(_DWORD *)(v8 + 1152) &= ~0x200000u;
            v14 = 0LL;
            v15 = 11;
            while ( (unsigned int)v14 < v82[2].HighPart )
            {
              v16 = *(_QWORD *)(v82[3].QuadPart + 8 * v14);
              v17 = (_DWORD *)(v16 + 20);
              if ( (*(_DWORD *)(v16 + 16) & 4) != 0 && (*v17 & 1) == 0 )
              {
                v15 = 5;
                break;
              }
              if ( (*(_BYTE *)v17 & 4) != 0 )
                v15 = 15;
              v14 = (unsigned int)(v14 + 1);
            }
            VidSchiUpdateFlipTelemetryStats(
              *(struct _VIDSCH_PROCESS **)(*(_QWORD *)(v8 + 1040) + 48LL),
              (struct _VIDSCH_CALL_EXECUTE_FLIP *)v82,
              (struct _VIDSCH_PRESENT_INFO *)v7);
            VidSchiLogMmIoFlipMultiPlaneOverlay3(
              v1,
              (_DWORD *)v8,
              v82,
              v15,
              *(_DWORD *)(v8 + 1072),
              *(_QWORD *)(v8 + 1312));
            *(_DWORD *)(v8 + 1052) = v15;
            if ( v15 == 11 )
            {
              v24 = 1400LL * *(unsigned int *)(v6 + 68);
              v63 = 0;
              v25 = *(_DWORD *)(v24 + v6 + 1172);
              if ( v25 == 5 || v25 == 15 )
              {
                v18 = v56;
                v55 = 0;
                LOBYTE(v54) = 0;
                v68[1] = 0LL;
                v70 = 0;
                v73 = 0;
                v72 = ((_BYTE)v56 - 1) & 0x3F;
                v74 = *(_QWORD *)(v7 + 44352);
                v75 = *(_QWORD *)(v7 + 44368);
                v76 = *(_QWORD *)(v7 + 44360);
                v77 = *(_QWORD *)(v7 + 44376);
                v78 = 0LL;
                v68[0] = v1;
                v69 = v3;
                v71 = v6;
                VidSchiProcessVsyncCompletedFlipEntry(
                  (struct HwQueueStagingList *)&v64,
                  (__int64)v68,
                  (__int64)&v56,
                  &v55,
                  &v63,
                  &v54);
              }
              else
              {
                v18 = v56;
              }
              if ( *(_BYTE *)(v1 + 67) )
                VidSchiUpdateHwPresentTimeForImmediateFlip(
                  (struct _VIDSCH_GLOBAL *)v1,
                  (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8,
                  v3);
              v26 = *(_QWORD *)(v7 + 44360);
              v27 = *(struct _VIDSCH_GLOBAL **)(v7 + 44376);
              v28 = *(struct _VIDSCH_GLOBAL **)(v7 + 44368);
              *(_QWORD *)(v8 + 1128) = *(_QWORD *)(v7 + 44352);
              *(_QWORD *)(v8 + 1144) = v26;
              v29 = *(struct _VIDSCH_GLOBAL **)(v8 + 1320);
              v30 = v29;
              if ( !v29 )
              {
                v30 = v28;
                v29 = v27;
              }
              *(_QWORD *)(v8 + 1112) = v30;
              v31 = *(_DWORD *)(v8 + 1152);
              *(_QWORD *)(v8 + 1136) = v29;
              if ( (v31 & 0x10) != 0 )
                v32 = *(_WORD *)(v7 + 44296) & (**(_WORD **)(v8 + 1192) | (**(_DWORD **)(v8 + 1192) >> 10)) & 0x3FF;
              else
                v32 = *(_WORD *)(v7 + 44296);
              VidSchiUnreferenceDisplayingAllocations(
                (struct HwQueueStagingList *)&v64,
                v28,
                (struct _VIDSCH_PRESENT_INFO *)v7,
                v32);
              VidSchiReferenceDisplayingAllocationsForThisEntry((struct HwQueueStagingList *)&v64, v1, (_WORD *)v7, v8);
              VidSchiCompleteFlipEntry((struct HwQueueStagingList *)&v64, v1, v3, v6, v18, v18, 0, 0LL);
            }
            else
            {
              VidSchiIncrementPendingFlipsForFlipEntry(
                (struct _VIDSCH_GLOBAL *)v1,
                (struct _VIDSCH_PRESENT_INFO *)v7,
                (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8);
              v18 = v56;
              if ( !*(_BYTE *)(v1 + 67) )
                *(_QWORD *)(v8 + 1104) = MEMORY[0xFFFFF78000000320];
            }
            v19 = 1400LL * *(unsigned int *)(v6 + 68);
            *(_DWORD *)(v6 + 72) = v18;
            v20 = *(_DWORD *)(v19 + v6 + 1172);
            if ( v20 != 15 && v20 != 5 )
              *(_DWORD *)(v6 + 68) = v18;
            *(_DWORD *)(v6 + 64) = ((_BYTE)v18 + 1) & 0x3F;
            VidSchiUpdateFlipQueueHistory(6, v1, v3, v6, ((_BYTE)v18 + 1) & 0x3F);
            if ( *(_BYTE *)(v1 + 67) )
              VidSchiSetNextFlipEarliestIdealTime(
                (struct _VIDSCH_GLOBAL *)v1,
                v3,
                (struct VIDSCH_FLIP_QUEUE *)v6,
                (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8);
            else
              *(_DWORD *)(v6 + 112) = *(_DWORD *)(v8 + 1072);
            VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 768LL), v21, v22);
            --*(_DWORD *)(*(_QWORD *)(v1 + 272) + 816LL);
            VidSchiUpdateFlipQueueHistory(1, v1, v3, v6, v18);
            HwQueueStagingList::~HwQueueStagingList(&v64);
            v23 = (AcquireSpinLock *)v80;
            goto LABEL_22;
          }
LABEL_79:
          *(LARGE_INTEGER *)(v8 + 1328) = KeQueryPerformanceCounter(0LL);
          goto LABEL_7;
        }
LABEL_78:
        v53 = *(_QWORD *)(v1 + 16);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 11LL, v9, v82, v53);
        WdLogGlobalForLineNumber = 916;
        goto LABEL_79;
      }
      if ( ((v82[2].LowPart >> 1) & 1) == 0 )
        goto LABEL_78;
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0pqqtq_EtwWriteTransfer(
          (v82[2].LowPart >> 1) & 1,
          v9,
          v10,
          *(_QWORD *)(v1 + 16),
          v3,
          *(_DWORD *)(v8 + 1048),
          (v82[2].LowPart & 2) != 0,
          45);
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v68, (unsigned __int64 *)(v1 + 2016), 1, 0);
      v44 = *(_DWORD **)(v8 + 1192);
      v57 = (struct _KEVENT *)v1;
      v59 = &v58;
      v58 = &v58;
      v45 = *(_DWORD *)(v8 + 1152);
      LOBYTE(v60) = 0;
      v61 = 2;
      if ( (v45 & 0x10) != 0 )
        v46 = (*v44 | (*v44 >> 10)) & 0x3FF;
      else
        v46 = (1 << *(_DWORD *)(v1 + 160)) - 1;
      *(_DWORD *)(v7 + 3252) &= ~v46;
      *(_DWORD *)(v8 + 1152) &= ~0x200000u;
      v47 = *(_DWORD *)(v8 + 1152) & 0xFFFEFFFF;
      *(_DWORD *)(v8 + 1052) = 14;
      v48 = v47 | ((v82[2].LowPart & 1) << 16);
      *(_DWORD *)(v8 + 1152) = v48;
      v49 = v48 & 0xFFFDFFFF | ((v82[2].LowPart & 4) << 15);
      *(_DWORD *)(v8 + 1152) = v49;
      *(_DWORD *)(v8 + 1152) = v49 & 0xFFFBFFFF | ((v82[2].LowPart & 8) << 15);
      VidSchiUpdateFlipQueueHistory(5, v1, v3, v6, v2);
      v50 = *(_DWORD *)(v8 + 1152);
      if ( (v50 & 0x20000) != 0 )
      {
        if ( (v50 & 0x40000) != 0 )
          *(_QWORD *)(v1 + 3800) = v8;
        else
          *(_QWORD *)(v7 + 120) = v8;
        if ( *(_BYTE *)(v6 + 80) )
        {
          if ( _bittest((const signed __int32 *)(v8 + 1152), 0x12u) )
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 48); i = (unsigned int)(i + 1) )
            {
              v52 = *(_QWORD *)(v1 + 8 * i + 3448);
              if ( v52 && *(_DWORD *)(v52 + 3248) )
                VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)v1, i);
            }
          }
          else
          {
            VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)v1, v3);
          }
        }
      }
      VidSchiKeepInterruptTargetEnabledForFlip(
        (struct _VIDSCH_GLOBAL *)v1,
        (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8,
        (struct _VIDSCH_PRESENT_INFO *)v7);
      HwQueueStagingList::~HwQueueStagingList(&v57);
      v23 = (AcquireSpinLock *)v68;
    }
    else
    {
      v23 = (AcquireSpinLock *)&v57;
    }
LABEL_22:
    AcquireSpinLock::Release(v23);
    return;
  }
  WdLogSingleEntry2(3LL, v1, v3);
  WdLogGlobalForLineNumber = 4178;
}
