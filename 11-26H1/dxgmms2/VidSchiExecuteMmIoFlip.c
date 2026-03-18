/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x140032CC4
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140032608 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400329BC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1400177B0 (VidSchiPropagatePresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140017A5C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x140017FD0 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14001DCBC (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14001E054 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14001E3B4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x14001F524 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x140031E60 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140032470 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400341A0 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x140034DE8 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x140037FB0 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14003B9B8 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x14003E5D0 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     McTemplateK0pqqpxqqqq_EtwWriteTransfer @ 0x1400419D4 (McTemplateK0pqqpxqqqq_EtwWriteTransfer.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x1400472D8 (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x14004B17C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005976C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        _BYTE *a7)
{
  __int64 v7; // rdi
  __int64 v9; // r12
  unsigned int v10; // r13d
  unsigned int v11; // esi
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v12; // rbx
  struct _VIDSCH_PRESENT_INFO *v14; // rdx
  char v15; // al
  enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE v16; // edx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rcx
  char v23; // r8
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // r8d
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // edi
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // ebx
  int v38; // eax
  char v39; // cl
  unsigned int v40; // r8d
  char v41; // cl
  int v42; // eax
  unsigned int v43; // r13d
  int v44; // eax
  unsigned __int8 v45; // dl
  int v46; // eax
  unsigned int v47; // eax
  _QWORD *v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int8 (__fastcall *v52)(void *); // rdx
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  struct _VIDSCH_GLOBAL *v58; // rcx
  bool v59; // zf
  struct _VIDSCH_GLOBAL *v60; // rdx
  struct _VIDSCH_GLOBAL *v61; // rax
  struct _VIDSCH_PRESENT_INFO *v62; // r8
  struct HwQueueStagingList *v63; // rcx
  __int64 v64; // rbx
  int v65; // eax
  int v66; // r9d
  unsigned int v67; // edx
  __int64 v68; // r8
  _DWORD *v69; // rax
  LARGE_INTEGER v70; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v72; // rax
  unsigned int v73; // edx
  unsigned int v74; // ebx
  __int64 v75; // r11
  unsigned __int64 v76; // r9
  int v77; // ecx
  unsigned int v78; // eax
  int v79; // ecx
  int v80; // edx
  int v81; // eax
  unsigned int v82; // edx
  unsigned int v83; // eax
  char v84; // cl
  int v85; // eax
  char v86; // cl
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rdx
  int v94; // eax
  int v95; // r10d
  __int64 v96; // rdx
  __int64 v97; // r9
  __int64 v98; // r8
  int v99; // eax
  __int64 v100; // rcx
  int v101; // eax
  unsigned int i; // r8d
  unsigned int v103; // edx
  _DWORD *v104; // rbx
  int v105; // r8d
  int v106; // r9d
  int v107; // r10d
  __int64 v108; // rcx
  __int64 v109; // rax
  unsigned int v110; // edx
  int v111; // eax
  int v112; // ecx
  __int64 v113; // rax
  void *v114; // rcx
  __int64 v115; // r9
  int v116; // edx
  __int64 v117; // rax
  __int64 v118; // rcx
  int v119; // eax
  int v120; // eax
  unsigned int j; // edi
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // r8
  struct _VIDSCH_PRESENT_INFO *v125; // r11
  _BYTE *v126; // rax
  enum _VIDSCH_FLIP_STATUS *v127; // [rsp+20h] [rbp-150h]
  unsigned int v128[2]; // [rsp+28h] [rbp-148h]
  char v129; // [rsp+F0h] [rbp-80h] BYREF
  _BYTE v130[3]; // [rsp+F1h] [rbp-7Fh] BYREF
  unsigned int v131; // [rsp+F4h] [rbp-7Ch]
  unsigned int v132; // [rsp+F8h] [rbp-78h] BYREF
  __int64 v133; // [rsp+100h] [rbp-70h]
  unsigned int v134; // [rsp+108h] [rbp-68h]
  int v135; // [rsp+10Ch] [rbp-64h] BYREF
  unsigned int v136; // [rsp+110h] [rbp-60h]
  struct _VIDSCH_PRESENT_INFO *v137; // [rsp+118h] [rbp-58h]
  unsigned int v138; // [rsp+120h] [rbp-50h]
  __int64 v139; // [rsp+128h] [rbp-48h] BYREF
  unsigned int v140; // [rsp+130h] [rbp-40h]
  struct HwQueueStagingList *v141; // [rsp+138h] [rbp-38h]
  unsigned __int64 v142; // [rsp+140h] [rbp-30h]
  _BYTE *v143; // [rsp+148h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+150h] [rbp-20h] BYREF
  _QWORD v145[2]; // [rsp+170h] [rbp+0h] BYREF
  unsigned int v146; // [rsp+180h] [rbp+10h]
  int v147; // [rsp+184h] [rbp+14h]
  __int64 v148; // [rsp+188h] [rbp+18h]
  int v149; // [rsp+190h] [rbp+20h]
  int v150; // [rsp+194h] [rbp+24h]
  __int64 v151; // [rsp+198h] [rbp+28h]
  __int64 v152; // [rsp+1A0h] [rbp+30h]
  __int64 v153; // [rsp+1A8h] [rbp+38h]
  __int64 v154; // [rsp+1B0h] [rbp+40h]
  __int64 v155; // [rsp+1B8h] [rbp+48h]
  _QWORD v156[270]; // [rsp+1C0h] [rbp+50h] BYREF

  LODWORD(v7) = a5;
  v9 = 1400LL * a5;
  v10 = a3;
  v11 = 0;
  v141 = a1;
  v12 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v9 + a4 + 120);
  LODWORD(v139) = a3;
  v14 = *(struct _VIDSCH_PRESENT_INFO **)(a2 + 8LL * a3 + 3448);
  v134 = a5;
  *a7 = 0;
  v142 = (unsigned __int64)a6;
  v143 = a7;
  v137 = v14;
  if ( *(_BYTE *)(a2 + 67) )
  {
    v70 = *(LARGE_INTEGER *)(v9 + a4 + 1432);
    if ( !v70.QuadPart )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v14 = v137;
      v70 = PerformanceCounter;
      *(LARGE_INTEGER *)(v9 + a4 + 1432) = PerformanceCounter;
    }
    if ( (*(_DWORD *)(v9 + a4 + 1272) & 0x100) == 0 )
    {
      if ( v70.QuadPart <= *(_QWORD *)(a4 + 104) )
        v70 = *(LARGE_INTEGER *)(a4 + 104);
      *(LARGE_INTEGER *)(v9 + a4 + 1432) = v70;
    }
  }
  if ( *((_DWORD *)v14 + 1) == 3 || (v15 = 0, (*(_DWORD *)(v9 + a4 + 1272) & 0x100) != 0) )
    v15 = 1;
  v129 = v15;
  v135 = v15 != 0 ? 11 : 5;
  v132 = v135;
  memset(v156, 0, sizeof(v156));
  if ( VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)a2, v137, v12, (struct VIDSCH_FLIP_QUEUE *)a4) )
    goto LABEL_27;
  if ( *(_DWORD *)(a2 + 3260)
    || (v22 = *(_QWORD *)(v9 + a4 + 1160), *(_BYTE *)(v22 + 212))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 208), 0, 0) )
  {
    *(_BYTE *)v142 = 1;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a2 + 164) )
  {
    VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
      (struct _VIDSCH_GLOBAL *)a2,
      v10,
      (struct VIDSCH_FLIP_QUEUE *)a4,
      (struct _VIDSCH_CALL_EXECUTE_FLIP *)v156,
      (enum _VIDSCH_FLIP_STATUS *)&v132,
      a5);
    v16 = v156[265];
    v135 = v132;
    goto LABEL_23;
  }
  v24 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v9 + a4 + 1312);
  if ( (*(_DWORD *)(v9 + a4 + 1272) & 0x10) != 0 )
  {
    v7 = 0LL;
    v36 = *(_DWORD *)v24 & 0x3FF;
    v37 = (*(_DWORD *)v24 >> 10) & 0x3FF;
    v132 = v36;
    v59 = !_BitScanForward((unsigned int *)&v38, v36);
    v140 = v37;
    v39 = -1;
    v136 = 0;
    if ( !v59 )
      v39 = v38;
    LODWORD(v133) = 0;
    v40 = v39;
    v41 = -1;
    v59 = !_BitScanForward((unsigned int *)&v42, v37);
    v138 = v40;
    if ( !v59 )
      v41 = v42;
    v43 = v41;
    while ( 1 )
    {
      LODWORD(v133) = 0;
      v131 = v7;
      if ( !v36 && !v37 )
        break;
      v142 = (unsigned int)v7;
      v133 = 120LL * (unsigned int)v7;
      memset((void *)(v133 + a2 + 3832), 0, 0x70uLL);
      v72 = v133;
      if ( v138 >= v43 )
      {
        v36 = v132;
        *(_DWORD *)(v133 + a2 + 3824) = v43;
        *(_DWORD *)(v72 + a2 + 3828) = 0;
        v86 = -1;
        v37 &= ~(1 << v43);
        v59 = !_BitScanForward((unsigned int *)&v72, v37);
        v140 = v37;
        if ( !v59 )
          v86 = v72;
        v43 = v86;
      }
      else
      {
        v73 = v136;
        *(_DWORD *)(v133 + a2 + 3824) = v138;
        *(_DWORD *)(v72 + a2 + 3828) = 1;
        v7 = *(_QWORD *)(v9 + a4 + 1312);
        v74 = 8 * v136 * (*(_DWORD *)(v7 + 8) + 28);
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v7, v73, 0);
        v75 = v133;
        v76 = (unsigned __int64)v136 << 6;
        *(_DWORD *)(v133 + a2 + 3832) = *(unsigned __int16 *)(v76
                                                            + *(_DWORD *)(*(_QWORD *)(v9 + a4 + 1312) + 4LL)
                                                            * ((8 * *(_DWORD *)(*(_QWORD *)(v9 + a4 + 1312) + 8LL) + 231) & 0xFFFFFFF8)
                                                            + *(_QWORD *)(v9 + a4 + 1312)
                                                            + 40);
        *(_QWORD *)(120 * (v142 + 32) + a2) = *(_QWORD *)(v76
                                                        + *(_DWORD *)(*(_QWORD *)(v9 + a4 + 1312) + 4LL)
                                                        * ((8 * *(_DWORD *)(*(_QWORD *)(v9 + a4 + 1312) + 8LL) + 231) & 0xFFFFFFF8)
                                                        + *(_QWORD *)(v9 + a4 + 1312)
                                                        + 48);
        *(_QWORD *)(v75 + a2 + 3848) = *(_QWORD *)(v76
                                                 + *(_DWORD *)(*(_QWORD *)(v9 + a4 + 1312) + 4LL)
                                                 * ((8 * *(_DWORD *)(*(_QWORD *)(v9 + a4 + 1312) + 8LL) + 231) & 0xFFFFFFF8)
                                                 + *(_QWORD *)(v9 + a4 + 1312)
                                                 + 32);
        v77 = *(_DWORD *)(v75 + a2 + 3856) ^ (*(_DWORD *)(v74 + v7 + 196) ^ *(_DWORD *)(v75 + a2 + 3856)) & 1;
        *(_DWORD *)(v75 + a2 + 3856) = v77;
        *(_DWORD *)(v75 + a2 + 3856) = v77 ^ (*(_DWORD *)(v74 + v7 + 196) ^ v77) & 2;
        *(_DWORD *)(v75 + a2 + 3860) = (unsigned __int16)*(_DWORD *)(v74 + v7 + 168);
        *(_DWORD *)(v75 + a2 + 3864) = (unsigned __int16)*(_DWORD *)(v74 + v7 + 172);
        *(_DWORD *)(v75 + a2 + 3868) = *(unsigned __int16 *)(v74 + v7 + 170);
        *(_DWORD *)(v75 + a2 + 3872) = *(unsigned __int16 *)(v74 + v7 + 174);
        *(_DWORD *)(v75 + a2 + 3876) = *(__int16 *)(v74 + v7 + 176);
        *(_DWORD *)(v75 + a2 + 3880) = *(__int16 *)(v74 + v7 + 180);
        *(_DWORD *)(v75 + a2 + 3884) = *(unsigned __int16 *)(v74 + v7 + 178);
        *(_DWORD *)(v75 + a2 + 3888) = *(unsigned __int16 *)(v74 + v7 + 182);
        *(_DWORD *)(v75 + a2 + 3892) = (unsigned __int16)*(_DWORD *)(v74 + v7 + 184);
        *(_DWORD *)(v75 + a2 + 3896) = (unsigned __int16)*(_DWORD *)(v74 + v7 + 188);
        *(_DWORD *)(v75 + a2 + 3900) = *(unsigned __int16 *)(v74 + v7 + 186);
        *(_DWORD *)(v75 + a2 + 3904) = *(unsigned __int16 *)(v74 + v7 + 190);
        v78 = *(_DWORD *)(v74 + v7 + 196);
        ++v136;
        *(_DWORD *)(v75 + a2 + 3908) = ((v78 >> 3) & 3) + 1;
        *(_DWORD *)(v75 + a2 + 3912) ^= ((unsigned __int8)*(_DWORD *)(v75 + a2 + 3912) ^ (unsigned __int8)(*(_DWORD *)(v74 + v7 + 196) >> 2)) & 1;
        *(_DWORD *)(v75 + a2 + 3916) = (*(_DWORD *)(v74 + v7 + 196) >> 5) & 3;
        v79 = *(_DWORD *)(v75 + a2 + 3920) ^ ((unsigned __int8)*(_DWORD *)(v75 + a2 + 3920) ^ (unsigned __int8)(*(_DWORD *)(v74 + v7 + 196) >> 7)) & 1;
        *(_DWORD *)(v75 + a2 + 3920) = v79;
        v80 = v79 ^ ((unsigned __int8)v79 ^ (unsigned __int8)(*(_DWORD *)(v74 + v7 + 196) >> 7)) & 2;
        LOBYTE(v79) = v138;
        *(_DWORD *)(v75 + a2 + 3920) = v80;
        v81 = v80 ^ ((unsigned __int8)v80 ^ (unsigned __int8)(*(_DWORD *)(v74 + v7 + 196) >> 7)) & 4;
        v82 = v132;
        *(_DWORD *)(v75 + a2 + 3920) = v81;
        *(_DWORD *)(v75 + a2 + 3924) = (*(_DWORD *)(v74 + v7 + 196) >> 10) & 7;
        *(_DWORD *)(v75 + a2 + 3928) = (*(_DWORD *)(v74 + v7 + 196) >> 13) & 1;
        *(_DWORD *)(v75 + a2 + 3932) = (*(_DWORD *)(v74 + v7 + 196) >> 14) & 1;
        v83 = *(_DWORD *)(v74 + v7 + 196);
        LODWORD(v7) = v131;
        v37 = v140;
        *(_DWORD *)(v75 + a2 + 3936) = (v83 >> 15) & 3;
        v85 = 1 << v79;
        v84 = -1;
        v36 = ~v85 & v82;
        v59 = !_BitScanForward((unsigned int *)&v85, v36);
        v132 = v36;
        if ( !v59 )
          v84 = v85;
        v138 = v84;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    v44 = *(_DWORD *)(v9 + a4 + 1272);
    v12 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v9 + a4 + 120);
    v10 = v139;
    v156[0] = a2;
    v45 = 8 * v44;
    HIDWORD(v156[67]) = v139;
    LODWORD(v156[265]) = -1073741823;
    v46 = (LODWORD(v156[67]) | 4) ^ ((unsigned __int8)(8 * v44) ^ (LOBYTE(v156[67]) | 4)) & 8;
    LODWORD(v156[67]) = v46 ^ (v45 ^ (unsigned __int8)v46) & 0x10 ^ (v45 ^ (unsigned __int8)(v46 ^ (v45 ^ v46) & 0x10)) & 0x20;
    LODWORD(v156[70]) = *(_DWORD *)(v9 + a4 + 1276);
    v47 = *(_DWORD *)(v9 + a4 + 1208);
    v131 = v47;
    LODWORD(v156[1]) = v47;
    if ( v47 )
    {
      v48 = &v156[2];
      v49 = v47;
      do
      {
        *v48 = *(_QWORD *)(*(_QWORD *)((char *)v48 + v12 - (struct _VIDSCH_FLIP_QUEUE_ENTRY *)&v156[2]) + 64LL);
        ++v48;
        --v49;
      }
      while ( v49 );
      v131 = v156[1];
    }
    v50 = *(_QWORD *)(a2 + 16);
    v129 = 0;
    if ( *(_BYTE *)(v50 + 3058) )
    {
      memset((void *)(a2 + 5024), 0, 112LL * (unsigned int)v7);
      if ( (_DWORD)v7 )
      {
        v87 = a2 + 5028;
        v88 = (unsigned int)v7;
        v89 = a2 + 3828;
        do
        {
          *(_DWORD *)(v87 - 4) = *(_DWORD *)(v89 - 4);
          v90 = *(_DWORD *)v89;
          *(_DWORD *)v87 = *(_DWORD *)v89;
          if ( v90 )
          {
            *(_DWORD *)(v87 + 4) = *(_DWORD *)(v89 + 4);
            *(_QWORD *)(v87 + 12) = *(_QWORD *)(v89 + 12);
            *(_QWORD *)(v87 + 20) = *(_QWORD *)(v89 + 20);
            *(_DWORD *)(v87 + 28) = *(_DWORD *)(v89 + 28);
            *(_OWORD *)(v87 + 32) = *(_OWORD *)(v89 + 32);
            *(_OWORD *)(v87 + 48) = *(_OWORD *)(v89 + 48);
            *(_DWORD *)(v87 + 64) = *(_DWORD *)(v89 + 80);
            *(_DWORD *)(v87 + 68) = *(_DWORD *)(v89 + 84);
            *(_DWORD *)(v87 + 72) = 0;
            *(_QWORD *)(v87 + 76) = 0LL;
            *(_DWORD *)(v87 + 84) = *(_DWORD *)(v89 + 88);
            *(_DWORD *)(v87 + 88) = *(_DWORD *)(v89 + 92);
            *(_DWORD *)(v87 + 92) = *(_DWORD *)(v89 + 96);
            *(_DWORD *)(v87 + 96) = *(_DWORD *)(v89 + 100);
            *(_DWORD *)(v87 + 100) = *(_DWORD *)(v89 + 104);
            *(_DWORD *)(v87 + 104) = *(_DWORD *)(v89 + 108);
          }
          v89 += 120LL;
          v87 += 112LL;
          --v88;
        }
        while ( v88 );
      }
    }
    else
    {
      if ( !*(_BYTE *)(v50 + 3059) )
      {
        if ( *(_BYTE *)(v50 + 3060) && *(_QWORD *)(v50 + 1000) )
        {
          memset((void *)(a2 + 5024), 0, (unsigned __int64)(unsigned int)v7 << 7);
          v95 = 0;
          if ( (_DWORD)v7 )
          {
            v96 = a2 + 5028;
            v97 = (unsigned int)v7;
            v98 = a2 + 3828;
            do
            {
              *(_DWORD *)(v96 - 4) = *(_DWORD *)(v98 - 4);
              v99 = *(_DWORD *)v98;
              *(_DWORD *)v96 = *(_DWORD *)v98;
              if ( v99 )
              {
                *(_DWORD *)(v96 + 4) = *(_DWORD *)(v98 + 4);
                *(_QWORD *)(v96 + 12) = *(_QWORD *)(v98 + 12);
                *(_QWORD *)(v96 + 20) = *(_QWORD *)(v98 + 20);
                *(_DWORD *)(v96 + 28) = *(_DWORD *)(v98 + 28);
                *(_OWORD *)(v96 + 32) = *(_OWORD *)(v98 + 32);
                *(_OWORD *)(v96 + 48) = *(_OWORD *)(v98 + 48);
                *(_OWORD *)(v96 + 64) = *(_OWORD *)(v98 + 64);
                *(_DWORD *)(v96 + 80) = *(_DWORD *)(v98 + 80);
                *(_DWORD *)(v96 + 84) = *(_DWORD *)(v98 + 84);
                *(_DWORD *)(v96 + 88) = *(_DWORD *)(v98 + 88);
                *(_DWORD *)(v96 + 96) = *(_DWORD *)(v98 + 96);
                *(_DWORD *)(v96 + 100) = *(_DWORD *)(v98 + 100);
                *(_DWORD *)(v96 + 104) = *(_DWORD *)(v98 + 104);
                *(_DWORD *)(v96 + 108) = *(_DWORD *)(v98 + 108);
                *(_DWORD *)(v96 + 112) = *(_DWORD *)(v98 + 112);
                *(_DWORD *)(v96 + 116) = 0;
                v100 = *(_QWORD *)(v9 + a4 + 1312);
                v101 = v95 * (*(_DWORD *)(v100 + 8) + 28);
                ++v95;
                *(_DWORD *)(v96 + 92) = *(_DWORD *)((unsigned int)(8 * v101) + v100 + 192);
              }
              v98 += 120LL;
              v96 += 128LL;
              --v97;
            }
            while ( v97 );
          }
          for ( i = 0; i < v131; ++i )
            ;
          v51 = a2 + 5024;
          v52 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
LABEL_58:
          v53 = *(unsigned int *)(a2 + 40);
          v54 = *(_QWORD *)(a2 + 32);
          v156[69] = v51;
          LODWORD(v156[68]) = v7;
          DpSynchronizeExecution(v54, v52, v156, v53, &v129);
          if ( bTracingEnabled )
          {
            v103 = 0;
            v131 = 0;
            if ( (_DWORD)v7 )
            {
              v104 = (_DWORD *)(a2 + 3904);
              do
              {
                v105 = *(v104 - 19);
                LOBYTE(v106) = 0;
                LOBYTE(v107) = 0;
                if ( v105 )
                {
                  v108 = *(_QWORD *)(v9 + a4 + 1312);
                  v109 = 8 * v103 * (*(_DWORD *)(v108 + 8) + 28);
                  v131 = v103 + 1;
                  v106 = *(_DWORD *)(v109 + v108 + 192);
                  v107 = *(_DWORD *)(v109 + v108 + 200);
                }
                if ( (*(_DWORD *)(v9 + a4 + 1272) & 0x10) != 0 )
                  v110 = ((unsigned __int16)**(_DWORD **)(v9 + a4 + 1312) | (unsigned __int16)(**(_DWORD **)(v9 + a4 + 1312) >> 10)) & 0x3FF;
                else
                  v110 = (1 << *(_DWORD *)(a2 + 160)) - 1;
                v59 = !_BitScanForward((unsigned int *)&v111, v110);
                v112 = -1;
                LODWORD(v139) = 0;
                if ( !v59 )
                  v112 = v111;
                HIDWORD(v133) = *(_DWORD *)(v9 + a4 + 1168);
                LODWORD(v133) = (char)v112;
                if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
                  McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
                    v112,
                    v110,
                    v105,
                    *(_QWORD *)(a2 + 16),
                    v10,
                    *(v104 - 20),
                    v133,
                    *((_QWORD *)v104 - 7),
                    *((_QWORD *)v104 - 8),
                    *(v104 - 18),
                    *(_DWORD *)(v9 + a4 + 1176),
                    *(_DWORD *)(v9 + a4 + 1200),
                    *(v104 - 11),
                    *(v104 - 9),
                    *(v104 - 10),
                    *(v104 - 8),
                    *(v104 - 7),
                    *(v104 - 5),
                    *(v104 - 6),
                    *(v104 - 4),
                    *(v104 - 3),
                    *(v104 - 1),
                    *(v104 - 2),
                    *v104,
                    v106,
                    5,
                    v105,
                    v107,
                    0);
                v103 = v131;
                v104 += 30;
                --v7;
              }
              while ( v7 );
              v12 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v9 + a4 + 120);
            }
          }
          v16 = v156[265];
          if ( LODWORD(v156[265]) )
          {
            v55 = *(_QWORD *)(a2 + 16);
            g_DxgMmsBugcheckExportIndex = 1;
            v20 = WdLogSingleEntry5(0LL, 281LL, 11LL, SLODWORD(v156[265]), v156, v55);
            WdLogGlobalForLineNumber = 916;
LABEL_61:
            if ( v20 != 5 )
              *(_DWORD *)(a4 + 68) = v7;
LABEL_17:
            *(_DWORD *)(a4 + 64) = ((_BYTE)v7 + 1) & 0x3F;
            VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(a2 + 8) + 768LL));
LABEL_18:
            VidSchiUpdateFlipQueueHistory(1LL, a2, v10, a4, v7);
            return v11;
          }
          goto LABEL_38;
        }
        v51 = a2 + 3824;
LABEL_57:
        v52 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
        goto LABEL_58;
      }
      memset((void *)(a2 + 5024), 0, (unsigned __int64)(unsigned int)v7 << 7);
      if ( (_DWORD)v7 )
      {
        v91 = a2 + 5028;
        v92 = (unsigned int)v7;
        v93 = a2 + 3828;
        do
        {
          *(_DWORD *)(v91 - 4) = *(_DWORD *)(v93 - 4);
          v94 = *(_DWORD *)v93;
          *(_DWORD *)v91 = *(_DWORD *)v93;
          if ( v94 )
          {
            *(_DWORD *)(v91 + 4) = *(_DWORD *)(v93 + 4);
            *(_QWORD *)(v91 + 12) = *(_QWORD *)(v93 + 12);
            *(_QWORD *)(v91 + 20) = *(_QWORD *)(v93 + 20);
            *(_DWORD *)(v91 + 28) = *(_DWORD *)(v93 + 28);
            *(_OWORD *)(v91 + 32) = *(_OWORD *)(v93 + 32);
            *(_OWORD *)(v91 + 48) = *(_OWORD *)(v93 + 48);
            *(_OWORD *)(v91 + 64) = *(_OWORD *)(v93 + 64);
            *(_DWORD *)(v91 + 80) = *(_DWORD *)(v93 + 80);
            *(_DWORD *)(v91 + 84) = *(_DWORD *)(v93 + 84);
            *(_DWORD *)(v91 + 88) = 0;
            *(_QWORD *)(v91 + 92) = 0LL;
            *(_DWORD *)(v91 + 100) = *(_DWORD *)(v93 + 88);
            *(_DWORD *)(v91 + 104) = *(_DWORD *)(v93 + 92);
            *(_DWORD *)(v91 + 108) = *(_DWORD *)(v93 + 96);
            *(_DWORD *)(v91 + 112) = *(_DWORD *)(v93 + 100);
            *(_DWORD *)(v91 + 116) = *(_DWORD *)(v93 + 104);
            *(_DWORD *)(v91 + 120) = *(_DWORD *)(v93 + 108);
          }
          v93 += 120LL;
          v91 += 128LL;
          --v92;
        }
        while ( v92 );
      }
    }
    v51 = a2 + 5024;
    goto LABEL_57;
  }
  v156[0] = a2;
  LODWORD(v156[1]) = v10;
  VidSchiBindFlipPhysicalAddress(v24, 0, 0);
  v25 = *(_QWORD *)(v9 + a4 + 1312);
  HIDWORD(v156[1]) = *(unsigned __int16 *)((unsigned int)(8 * *(_DWORD *)(v25 + 4) * (*(_DWORD *)(v25 + 8) + 28))
                                         + v25
                                         + 40);
  v156[2] = *(_QWORD *)((unsigned int)(8 * *(_DWORD *)(v25 + 4) * (*(_DWORD *)(v25 + 8) + 28)) + v25 + 48);
  v26 = *(_DWORD *)(v9 + a4 + 1276);
  v156[3] = *(_QWORD *)((unsigned int)(8 * *(_DWORD *)(v25 + 4) * (*(_DWORD *)(v25 + 8) + 28)) + v25 + 32);
  LODWORD(v28) = *(_DWORD *)(v9 + a4 + 1272);
  v27 = v28 & 0xF;
  LODWORD(v28) = v28 & 0x20;
  LODWORD(v156[265]) = -1073741823;
  v29 = v156[70] & 0xFFFFFF07 | (4 * (v28 | (2 * v27)));
  v156[70] = __PAIR64__(v26, v29);
  v30 = *(_QWORD *)(v25 + 208);
  if ( v30 )
  {
    LODWORD(v156[263]) = *(_DWORD *)(v30 + 8);
    v156[264] = v30 + 16;
  }
  v31 = *(_QWORD *)(v9 + a4 + 1296);
  v139 = v31;
  if ( v31 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v31 + 16), &LockHandle);
    if ( v30 )
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 12));
    v113 = v139;
    v114 = *(void **)(v139 + 8);
    if ( v114 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v114);
      v113 = v139;
    }
    *(_QWORD *)(v113 + 8) = v30;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v29 = v156[70];
  }
  v32 = 0;
  LODWORD(v156[4]) = *(_DWORD *)(v9 + a4 + 1208);
  if ( LODWORD(v156[4]) )
  {
    v115 = *(_QWORD *)(v9 + a4 + 1312);
    do
    {
      v116 = *(_DWORD *)(v115 + 4);
      LODWORD(v28) = v32;
      v117 = v116 * ((8 * *(_DWORD *)(v115 + 8) + 231) & 0xFFFFFFF8);
      v25 = (unsigned __int64)(v32 * v116) << 6;
      v156[v32 + 5] = *(_QWORD *)(v25 + v115 + v117 + 24);
      if ( v32 )
      {
        v156[3 * v32 + 68] = *(_QWORD *)(((unsigned __int64)(*(_DWORD *)(v115 + 4) * v32) << 6)
                                       + v115
                                       + *(_DWORD *)(v115 + 4) * ((8 * *(_DWORD *)(v115 + 8) + 231) & 0xFFFFFFF8)
                                       + 32);
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v115, 0, v32);
        v115 = *(_QWORD *)(v9 + a4 + 1312);
        LOWORD(v156[3 * v32 + 69]) = *(_WORD *)(((unsigned __int64)(v32 * *(_DWORD *)(v115 + 4)) << 6)
                                              + v115
                                              + *(_DWORD *)(v115 + 4) * ((8 * *(_DWORD *)(v115 + 8) + 231) & 0xFFFFFFF8)
                                              + 40);
        v28 = *(_QWORD *)(((unsigned __int64)(v32 * *(_DWORD *)(v115 + 4)) << 6)
                        + v115
                        + *(_DWORD *)(v115 + 4) * ((8 * *(_DWORD *)(v115 + 8) + 231) & 0xFFFFFFF8)
                        + 48);
        v156[3 * v32 + 70] = v28;
      }
      ++v32;
    }
    while ( v32 < *(_DWORD *)(v9 + a4 + 1208) );
    v29 = v156[70];
    v12 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v9 + a4 + 120);
  }
  if ( v129 )
    v33 = v29 | 2;
  else
    v33 = v29 | 4;
  LODWORD(v156[70]) = v33;
  if ( bTracingEnabled && Microsoft_Windows_DxgKrnlEnableBits < 0 )
    McTemplateK0pqqpxqqqq_EtwWriteTransfer(
      v28,
      v25,
      v33,
      *(_QWORD *)(a2 + 16),
      v10,
      *(_DWORD *)(v9 + a4 + 1168),
      v156[3],
      v156[2],
      SBYTE4(v156[1]),
      *(_DWORD *)(v9 + a4 + 1176),
      *(_DWORD *)(v9 + a4 + 1200),
      v33);
  v34 = *(unsigned int *)(a2 + 40);
  v35 = *(_QWORD *)(a2 + 32);
  v130[0] = 0;
  DpSynchronizeExecution(v35, VidSchiExecuteMmIoFlipAtISR, v156, v34, v130);
  v16 = v156[265];
LABEL_38:
  LODWORD(v7) = v134;
LABEL_23:
  if ( v16 >= D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_SUBMITTED )
  {
LABEL_7:
    if ( *((struct _VIDSCH_FLIP_QUEUE_ENTRY **)v137 + 15) == v12 )
      *((_QWORD *)v137 + 15) = 0LL;
    if ( *(struct _VIDSCH_FLIP_QUEUE_ENTRY **)(a2 + 3800) == v12 )
    {
      *(_QWORD *)(a2 + 3800) = 0LL;
      VidSchiSignalRegisteredEvent(a2, (struct _KEVENT **)(a2 + 1976));
    }
    v17 = *(_DWORD *)(v9 + a4 + 1272);
    if ( (v17 & 0x20) != 0 && *(_QWORD *)(v9 + a4 + 1288) && (v17 & 0x100000) == 0 )
    {
      SetIndependentFlipStage(v12, v16);
      VidSchiPropagatePresentHistoryToken(
        a2,
        *(union _SLIST_HEADER **)(v9 + a4 + 1280),
        *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v9 + a4 + 1288),
        1,
        (*(_DWORD *)(v9 + a4 + 1272) & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v9 + a4 + 1296),
        *(_QWORD *)(v9 + a4 + 1312),
        0LL,
        (v9 + a4 + 1472) & -(__int64)(*(_QWORD *)(v9 + a4 + 1472) != 0LL),
        1);
    }
    v18 = v135;
    *(_DWORD *)(v9 + a4 + 1172) = v135;
    if ( v18 == 11 )
    {
      v56 = 1400LL * *(unsigned int *)(a4 + 68);
      v134 = 0;
      v135 = 0;
      v57 = *(_DWORD *)(v56 + a4 + 1172);
      if ( v57 == 5 || v57 == 15 )
      {
        LODWORD(v139) = 0;
        v149 = ((_BYTE)v7 - 1) & 0x3F;
        v151 = v156[266];
        v152 = v156[267];
        v153 = v156[268];
        v154 = v156[269];
        v130[0] = 0;
        v145[1] = 0LL;
        v147 = 0;
        v150 = 0;
        v155 = 0LL;
        v145[0] = a2;
        v146 = v10;
        v148 = a4;
        VidSchiProcessVsyncCompletedFlipEntry(v141, (__int64)v145, (__int64)&v143, &v139, &v135, v130);
        v134 = v135;
      }
      if ( *(_BYTE *)(a2 + 67) )
        VidSchiUpdateHwPresentTimeForImmediateFlip((struct _VIDSCH_GLOBAL *)a2, v12, v10);
      v59 = (*(_DWORD *)(v9 + a4 + 1272) & 0x10) == 0;
      v58 = *(struct _VIDSCH_GLOBAL **)(v9 + a4 + 1440);
      *(_QWORD *)(v9 + a4 + 1248) = v156[266];
      if ( v59 )
      {
        *(_QWORD *)(v9 + a4 + 1264) = 0LL;
        v60 = v58;
        v59 = v58 == 0LL;
      }
      else
      {
        v59 = v58 == 0LL;
        v60 = (struct _VIDSCH_GLOBAL *)v156[269];
        if ( v58 )
          v60 = v58;
        *(_QWORD *)(v9 + a4 + 1264) = v156[268];
      }
      v61 = (struct _VIDSCH_GLOBAL *)v156[267];
      v62 = v137;
      if ( !v59 )
        v61 = v58;
      v63 = v141;
      *(_QWORD *)(v9 + a4 + 1232) = v61;
      *(_QWORD *)(v9 + a4 + 1256) = v60;
      VidSchiUnreferenceDisplayingAllocationsForThisEntry(v63, v60, (__int64)v62, (__int64)v12);
      VidSchiReferenceDisplayingAllocationsForThisEntry(v141, a2, v137, (__int64)v12);
      v64 = *(_QWORD *)(v9 + a4 + 1160);
      v65 = VidSchiCompleteFlipEntry(v141, a2, v10, a4, v7, v7, 0, 0LL);
      v66 = v65 + v134;
      v67 = -(v65 + v134);
      v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 48) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(v64 + 40) + 4LL))
                      + 8LL * v10
                      + 88);
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8LL * v10 + 6728) + 8LL), v67);
      v69 = *(_DWORD **)(a2 + 8LL * v10 + 6728);
      *v69 += v66;
      _InterlockedAdd((volatile signed __int32 *)(v68 + 8), v67);
      *(_DWORD *)v68 += v66;
      v12 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v9 + a4 + 120);
    }
    else
    {
      VidSchiIncrementPendingFlipsForFlipEntry((struct _VIDSCH_GLOBAL *)a2, v137, v12);
    }
    if ( *(_BYTE *)(a2 + 67) )
    {
      VidSchiSetNextFlipEarliestIdealTime((struct _VIDSCH_GLOBAL *)a2, v10, (struct VIDSCH_FLIP_QUEUE *)a4, v12);
    }
    else
    {
      *(_QWORD *)(v9 + a4 + 1224) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(a4 + 112) = *(_DWORD *)(v9 + a4 + 1192);
    }
    v19 = 1400LL * *(unsigned int *)(a4 + 68);
    *(_DWORD *)(a4 + 72) = v7;
    v20 = *(_DWORD *)(v19 + a4 + 1172);
    if ( v20 == 15 )
      goto LABEL_17;
    goto LABEL_61;
  }
  if ( v16 != -1073741811 )
  {
    v23 = v156[2];
    if ( v16 == -2147483631 )
      goto LABEL_144;
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 3089LL) && v16 == -1073741267 )
    {
      if ( (v156[2] & 2) == 0 )
      {
        *(_DWORD *)(v9 + a4 + 1272) |= 0x10000u;
        v11 = 259;
        *(_DWORD *)(v9 + a4 + 1172) = 13;
        goto LABEL_18;
      }
LABEL_144:
      v119 = *(_DWORD *)(v9 + a4 + 1272);
      *(_DWORD *)(v9 + a4 + 1172) = 14;
      *(_DWORD *)(v9 + a4 + 1272) = v119 & 0xFFF8FFFF | ((v23 & 0xC | (2 * (v23 & 1))) << 15);
      VidSchiUpdateFlipQueueHistory(5LL, a2, v10, a4, v7);
      v120 = *(_DWORD *)(v9 + a4 + 1272);
      if ( (v120 & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(a4 + 80) )
        {
          if ( (v120 & 0x40000) != 0 )
          {
            for ( j = 0; j < *(_DWORD *)(a2 + 48); ++j )
            {
              v122 = *(_QWORD *)(a2 + 8LL * j + 3448);
              if ( v122 && *(_DWORD *)(v122 + 3248) )
                VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)a2, j);
            }
          }
          else
          {
            VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)a2, v10);
          }
          if ( VidSchiStallingFlipEntryUnblocked((struct _VIDSCH_GLOBAL *)a2, v137, v12, 0LL) )
          {
            v126 = v143;
            *(_DWORD *)(v9 + a4 + 1172) = 4;
            *v126 = 1;
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
            {
              v128[0] = *(_DWORD *)(v9 + a4 + 1168);
              LODWORD(v127) = v10;
              McTemplateK0pqq_EtwWriteTransfer(
                v123,
                &MmIoFlipResubmit,
                v124,
                *(_QWORD *)(a2 + 16),
                v127,
                *(_QWORD *)v128);
            }
            goto LABEL_161;
          }
        }
        else
        {
          v125 = v137;
        }
        if ( (*(_DWORD *)(v9 + a4 + 1272) & 0x40000) != 0 )
          *(_QWORD *)(a2 + 3800) = v12;
        else
          *((_QWORD *)v125 + 15) = v12;
      }
LABEL_161:
      VidSchiKeepInterruptTargetEnabledForFlip((struct _VIDSCH_GLOBAL *)a2, v12, v137);
      return 3221226029LL;
    }
LABEL_27:
    VidSchiUpdateFlipQueueHistory(2LL, a2, v10, a4, v7);
    return 259LL;
  }
  if ( (*(_DWORD *)(v9 + a4 + 1272) & 0x10) != 0 || (v156[70] & 0x40) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v118 = 22464LL;
    WdLogGlobalForLineNumber = 22464;
  }
  else
  {
    WdLogSingleEntry2(
      1LL,
      *(_QWORD *)((unsigned int)(8
                               * *(_DWORD *)(*(_QWORD *)(v9 + a4 + 1312) + 4LL)
                               * (*(_DWORD *)(*(_QWORD *)(v9 + a4 + 1312) + 8LL) + 28))
                + *(_QWORD *)(v9 + a4 + 1312)
                + 32LL),
      v10);
    v118 = *(_QWORD *)(v9 + a4 + 1312);
    WdLogGlobalForLineNumber = 22460;
  }
  DxgkLogInternalTriageEvent(v118, 0x40000LL);
  VidSchiUpdateFlipQueueHistory(2LL, a2, v10, a4, v7);
  return 3221225485LL;
}
