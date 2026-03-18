/*
 * XREFs of ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004BBB4 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x140003348 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000BB50 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x14000BCAC (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x14001606C (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001C9E8 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14001DC14 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     VidSchiRestartQueuedFlip @ 0x1400324EC (VidSchiRestartQueuedFlip.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400341A0 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004BA9C (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  _DWORD *v2; // r14
  unsigned int v3; // r15d
  __int64 v4; // r13
  struct _VIDSCH_QUEUE_PACKET *v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r11
  struct _VIDSCH_GLOBAL *v9; // rsi
  char *v10; // rbx
  struct HwQueueStagingList *v11; // r12
  unsigned int v12; // r8d
  bool v13; // zf
  int v14; // eax
  char v15; // cl
  __int64 v16; // r9
  int v17; // ecx
  int v18; // edx
  __int64 v19; // r9
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  char v26; // cl
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rbx
  __int64 v30; // rax
  bool IsFocusHwContext; // al
  _DWORD *v32; // rdi
  int v33; // r9d
  int v34; // ecx
  int v35; // edx
  __int64 v36; // rax
  int v37; // edx
  int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rdx
  unsigned int v43; // ebx
  __int64 v44; // rdi
  __int64 v45; // rax
  int v46; // ebx
  unsigned int v47; // r14d
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  char *v55; // rdx
  unsigned int v56; // r9d
  __int64 v57; // rcx
  char v58; // dl
  int v59; // eax
  unsigned int v60; // r10d
  unsigned int v61; // r9d
  int v62; // eax
  char v63; // cl
  int v64; // r11d
  unsigned int v65; // ebx
  char v66; // cl
  int v67; // eax
  unsigned int v68; // r12d
  __int64 v69; // r13
  int v70; // edx
  int v71; // ecx
  unsigned int i; // r13d
  __int64 v73; // rcx
  int v74; // r8d
  int v75; // r14d
  unsigned __int64 v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // rcx
  __int64 v81; // rcx
  char v82; // cl
  int v83; // eax
  int v84; // ecx
  int v85; // eax
  int v86; // ecx
  char v87; // cl
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned int v94; // edx
  unsigned int v95; // r8d
  int v96; // eax
  __int64 v97; // r8
  unsigned int v98; // r15d
  __int64 v99; // rax
  __int64 v100; // r9
  unsigned int v101; // eax
  __int64 v102; // rcx
  int v103; // ecx
  int v104; // [rsp+20h] [rbp-C8h]
  int v105; // [rsp+40h] [rbp-A8h]
  unsigned int v106; // [rsp+44h] [rbp-A4h]
  BOOL v107; // [rsp+48h] [rbp-A0h]
  _DWORD *v108; // [rsp+50h] [rbp-98h]
  unsigned int v109; // [rsp+58h] [rbp-90h]
  int v110; // [rsp+5Ch] [rbp-8Ch]
  __int64 v111; // [rsp+60h] [rbp-88h]
  struct VIDSCH_FLIP_QUEUE *v112; // [rsp+68h] [rbp-80h]
  _QWORD *v113; // [rsp+70h] [rbp-78h]
  char *v114; // [rsp+78h] [rbp-70h]
  struct _VIDSCH_GLOBAL *v115; // [rsp+80h] [rbp-68h]
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v116; // [rsp+88h] [rbp-60h]
  struct _VIDSCH_PRESENT_INFO *v117; // [rsp+90h] [rbp-58h]
  struct _VIDSCH_QUEUE_PACKET *v119; // [rsp+F8h] [rbp+10h] BYREF
  char v120; // [rsp+100h] [rbp+18h] BYREF
  unsigned int v121; // [rsp+108h] [rbp+20h]

  v119 = a2;
  v5 = a2;
  v6 = *((_QWORD *)a2 + 12);
  v121 = *((_DWORD *)a2 + 42);
  v4 = v121;
  v7 = *(_QWORD *)(v6 + 40);
  v8 = *(_QWORD *)(v7 + 8);
  v111 = v8;
  v9 = *(struct _VIDSCH_GLOBAL **)(v8 + 40);
  v115 = v9;
  v10 = (char *)v9 + 8 * v121;
  v11 = (struct HwQueueStagingList *)*((_QWORD *)v10 + 431);
  v117 = v11;
  if ( (*((_BYTE *)v9 + 3284) & 1) != 0
    || *((_DWORD *)v9 + 815)
    || *(_BYTE *)(v8 + 212)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 208), 0, 0)
    || (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    v11 = a1;
    goto LABEL_88;
  }
  v113 = (_QWORD *)(v8 + 8 * v4 + 384);
  if ( *((_QWORD *)a2 + 51) - *v113 > (unsigned __int64)(unsigned int)(64 - *((_DWORD *)v11 + 809)) )
  {
    v102 = *((int *)a2 + 12);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v6, a2, v102);
    WdLogGlobalForLineNumber = 916;
LABEL_166:
    g_DxgMmsBugcheckExportIndex = v3;
    WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v15, v4, v9);
    WdLogGlobalForLineNumber = 916;
LABEL_167:
    McTemplateK0qqqqq_EtwWriteTransfer(
      v17,
      (unsigned int)&EventBoostUnboostRefreshRate,
      v12,
      v4,
      *((_DWORD *)v11 + 798),
      v18,
      *((_DWORD *)v5 + 106),
      v17);
    goto LABEL_158;
  }
  v120 = 0;
  v3 = 1;
  v107 = *((_DWORD *)v11 + 1) == 3 || !*((_DWORD *)a2 + 101) && (*((_DWORD *)a2 + 70) & 0x10000000) != 0;
  v2 = (_DWORD *)((char *)a2 + 880);
  v112 = (struct VIDSCH_FLIP_QUEUE *)*((_QWORD *)v11 + 4);
  if ( (*((_DWORD *)a2 + 18) & 0x800000) != 0 )
    v12 = ((unsigned __int16)*v2 | (unsigned __int16)(*v2 >> 10)) & 0x3FF;
  else
    v12 = (1 << *((_DWORD *)v9 + 40)) - 1;
  while ( 1 )
  {
    v13 = !_BitScanForward((unsigned int *)&v14, v12);
    v15 = -1;
    if ( !v13 )
      v15 = v14;
    if ( !v12 )
      break;
    v16 = *(int *)(304LL * (unsigned int)v15 + *((_QWORD *)v9 + v4 + 431) + 188);
    if ( (int)v16 > -1 && *(_DWORD *)(160 * v16 + *((_QWORD *)v9 + 447) + 112) == 2 )
      goto LABEL_166;
    v12 &= ~(1 << v15);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(v8 + 48) + 2632LL) )
    goto LABEL_22;
  v17 = *((_DWORD *)a2 + 108);
  v18 = *((_DWORD *)v11 + 20773);
  if ( v18 == v17 || *(_BYTE *)(*((_QWORD *)v9 + 2) + 3110LL) )
    goto LABEL_22;
  if ( (byte_14008A204 & 0x20) != 0 )
    goto LABEL_167;
LABEL_158:
  *((_DWORD *)v11 + 20773) = *((_DWORD *)v5 + 108);
LABEL_22:
  v110 = *((_DWORD *)v5 + 102) - *(_DWORD *)v113;
  v19 = (*((_BYTE *)v5 + 408) - *(_BYTE *)v113 + (unsigned __int8)*((_DWORD *)v112 + 14)) & 0x3F;
  v109 = (*((_BYTE *)v5 + 408) - *(_BYTE *)v113 + (unsigned __int8)*((_DWORD *)v112 + 14)) & 0x3F;
  v20 = (unsigned __int64)v112 + 1400 * v19;
  v116 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v20 + 120);
  WdLogSingleEntry4(8LL, v5, v112, v19, *(int *)(v20 + 1172));
  v21 = *(_QWORD *)(v7 + 16);
  v22 = *((_QWORD *)v9 + 87);
  WdLogGlobalForLineNumber = 4115;
  v23 = *(unsigned __int16 *)(v21 + 4);
  if ( (unsigned int)v23 < *((_DWORD *)v9 + 192) )
    v22 += 8 * v23;
  v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 6LL);
  v106 = v24;
  if ( *(_DWORD *)(v20 + 1172) == 8 )
  {
    *(_QWORD *)(v20 + 120 + 8LL * *(unsigned int *)(v20 + 1212)) = *((_QWORD *)v5 + 101);
    *(_QWORD *)(v20 + 120 + 8LL * *(unsigned int *)(v20 + 1212) + 512) = *((_QWORD *)v5 + 102);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 101) + 36LL));
    v99 = *(_QWORD *)(v7 + 8);
    v55 = (char *)(v20 + 1160);
    ++*(_DWORD *)(v20 + 1212);
    v32 = (_DWORD *)(v20 + 1272);
    *(_QWORD *)(v20 + 1160) = v99;
    v46 = 1;
    v47 = v24;
    *(_DWORD *)(v20 + 1204) |= 1 << v24;
  }
  else
  {
    ++*((_DWORD *)v9 + 217);
    ++*(_DWORD *)(v111 + 1840);
    ++*((_DWORD *)v11 + 809);
    if ( (*((_DWORD *)v5 + 70) & 0x800000) != 0 )
      v25 = ((unsigned __int16)*v2 | (unsigned __int16)(*v2 >> 10)) & 0x3FF;
    else
      v25 = (1 << *((_DWORD *)v9 + 40)) - 1;
    v26 = -1;
    v13 = !_BitScanForward((unsigned int *)&v27, v25);
    if ( !v13 )
      v26 = v27;
    while ( v25 )
    {
      ++*(_DWORD *)(304LL * v26 + *((_QWORD *)v10 + 431) + 196);
      v28 = 1 << v26;
      v26 = -1;
      v25 &= ~v28;
      v13 = !_BitScanForward((unsigned int *)&v28, v25);
      if ( !v13 )
        v26 = v28;
    }
    v29 = *(_DWORD **)(v20 + 1312);
    memset((void *)(v20 + 120), 0, 0x4A8uLL);
    memset((void *)(v20 + 1320), 0, 0xC8uLL);
    *(_QWORD *)(v20 + 1312) = v29;
    memset(v29 + 6, 0, (unsigned int)(v29[1] * (72 * v29[2] + 224)));
    v30 = *(_QWORD *)(v7 + 8);
    v114 = (char *)(v20 + 1160);
    *(_DWORD *)(v20 + 1272) |= 0x4000u;
    *(_QWORD *)(v20 + 1160) = v30;
    v108 = (_DWORD *)(v20 + 1272);
    IsFocusHwContext = VidSchiIsFocusHwContext((struct VIDSCH_HW_CONTEXT *)v7);
    v32 = (_DWORD *)(v20 + 1272);
    *(_DWORD *)(v20 + 1272) = v33 & 0xFFFF7FFF | (IsFocusHwContext << 15);
    *(_QWORD *)(v20 + 120) = *((_QWORD *)v5 + 101);
    *(_QWORD *)(v20 + 632) = *((_QWORD *)v5 + 102);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 101) + 36LL));
    *(_DWORD *)(v20 + 1168) = *((_DWORD *)v5 + 28);
    *(_DWORD *)(v20 + 1176) = *((_DWORD *)v5 + 98);
    *(_BYTE *)(v20 + 1196) = (*((_DWORD *)v5 + 70) & 0x10) != 0;
    v34 = *(_DWORD *)(v20 + 1272) ^ ((unsigned __int8)*(_DWORD *)(v20 + 1272) ^ (unsigned __int8)(*((_DWORD *)v5 + 18) >> 19)) & 0x10;
    *(_DWORD *)(v20 + 1272) = v34;
    v35 = v34 ^ ((unsigned __int16)v34 ^ (*((_DWORD *)v5 + 70) >> 20)) & 0x400;
    *(_DWORD *)(v20 + 1272) = v35;
    *(_DWORD *)(v20 + 1272) = v35 ^ ((unsigned __int16)v35 ^ (*((_DWORD *)v5 + 70) >> 20)) & 0x800;
    v36 = *((_QWORD *)v5 + 105);
    if ( v36 )
    {
      *(_QWORD *)(v20 + 1472) = v36;
      *(_DWORD *)(v20 + 1480) = *((_DWORD *)v5 + 212);
      *(_QWORD *)(v20 + 1488) = *((_QWORD *)v5 + 107);
      *(_QWORD *)(v20 + 1496) = *((_QWORD *)v5 + 108);
      *(_QWORD *)(v20 + 1504) = *((_QWORD *)v5 + 109);
      v103 = *(_DWORD *)(v20 + 1512) ^ ((unsigned __int8)*(_DWORD *)(v20 + 1512) ^ (unsigned __int8)(*((_DWORD *)v5 + 71) >> 5)) & 1;
      *(_DWORD *)(v20 + 1512) = v103;
      *(_DWORD *)(v20 + 1512) = v103 ^ ((unsigned __int8)v103 ^ (unsigned __int8)(*((_DWORD *)v5 + 71) >> 3)) & 2;
    }
    if ( !v110 )
      *(_QWORD *)(v20 + 1184) = ++*((_QWORD *)v112 + 11);
    v37 = *v32;
    v38 = *((_DWORD *)v5 + 160);
    *(_DWORD *)(v20 + 1320) = v38;
    if ( (v37 & 0x400) != 0 )
    {
      v84 = v38 - 1;
      if ( v84 )
      {
        if ( v84 == 1 )
        {
          *(_OWORD *)(v20 + 1324) = *(_OWORD *)((char *)v5 + 644);
          *(_OWORD *)(v20 + 1340) = *(_OWORD *)((char *)v5 + 660);
          *(_OWORD *)(v20 + 1356) = *(_OWORD *)((char *)v5 + 676);
          *(_OWORD *)(v20 + 1372) = *(_OWORD *)((char *)v5 + 692);
          *(_QWORD *)(v20 + 1388) = *(_QWORD *)((char *)v5 + 708);
        }
      }
      else
      {
        *(_OWORD *)(v20 + 1324) = *(_OWORD *)((char *)v5 + 644);
        *(_QWORD *)(v20 + 1340) = *(_QWORD *)((char *)v5 + 660);
        *(_DWORD *)(v20 + 1348) = *((_DWORD *)v5 + 167);
      }
    }
    if ( (v37 & 0x800) != 0 )
    {
      *(_OWORD *)(v20 + 1396) = *(_OWORD *)((char *)v5 + 716);
      *(_OWORD *)(v20 + 1412) = *(_OWORD *)((char *)v5 + 732);
    }
    memmove(*(void **)(v20 + 1312), v2, (unsigned int)v2[3]);
    v2[4] = 0;
    v39 = 0;
    v40 = *((_DWORD *)v9 + 40);
    v41 = *(_QWORD *)(v20 + 1312);
    if ( v40 )
    {
      do
      {
        v42 = *(_QWORD *)(8 * v39 * (*(_DWORD *)(v41 + 8) + 28) + v41 + 208);
        if ( v42 )
          _InterlockedIncrement((volatile signed __int32 *)(v42 + 12));
        v40 = *((_DWORD *)v9 + 40);
        ++v39;
      }
      while ( v39 < v40 );
    }
    v43 = 0;
    if ( v40 )
    {
      do
      {
        v44 = 2 * v43 * (v2[2] + 28);
        v45 = *(_QWORD *)&v2[v44 + 52];
        if ( v45 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 12), 0xFFFFFFFF) == 1 )
          {
            if ( *(_QWORD *)v45 )
              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v45, (PVOID)v45);
            else
              ExFreePoolWithTag((PVOID)v45, 0);
          }
          *(_QWORD *)&v2[v44 + 52] = 0LL;
        }
        ++v43;
      }
      while ( v43 < *((_DWORD *)v9 + 40) );
      v32 = (_DWORD *)(v20 + 1272);
    }
    VidSchiAcquireFlipFencesReference(v9, *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v20 + 1312));
    v46 = 1;
    v47 = v106;
    *(_DWORD *)(v20 + 1200) = *((_DWORD *)v5 + 104);
    *(_DWORD *)(v20 + 1204) = 1 << v106;
    v48 = *v32 ^ (*v32 ^ (*((_DWORD *)v5 + 70) >> 19)) & 1;
    *v32 = v48;
    v49 = v48 ^ ((unsigned __int8)v48 ^ (unsigned __int8)(*((_DWORD *)v5 + 70) >> 19)) & 2;
    *v32 = v49;
    v50 = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(*((_DWORD *)v5 + 70) >> 19)) & 4;
    *v32 = v50;
    *v32 = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(*((_DWORD *)v5 + 70) >> 19)) & 8;
    *(_QWORD *)(v20 + 1296) = *((_QWORD *)v5 + 38);
    v51 = *((_QWORD *)v5 + 39);
    *(_QWORD *)(v20 + 1304) = v51;
    if ( v51 )
      _InterlockedIncrement((volatile signed __int32 *)(v51 + 12));
    v52 = *((_DWORD *)v5 + 70);
    *(_DWORD *)(v20 + 1212) = 1;
    if ( (v52 & 0x400) != 0 )
    {
      *(_DWORD *)(v20 + 1208) = *((_DWORD *)v5 + 105);
      v53 = *((_DWORD *)v5 + 105);
    }
    else
    {
      *(_DWORD *)(v20 + 1208) = 1;
      v53 = 1;
    }
    *(_DWORD *)(v20 + 1216) = v53;
    if ( *(_BYTE *)(v20 + 1196) || v107 )
    {
      v85 = *v32;
      *(_DWORD *)(v20 + 1192) = 0;
      v86 = v85 ^ ((unsigned __int8)v85 ^ (unsigned __int8)(*((_DWORD *)v5 + 70) >> 21)) & 0x80;
      *v32 = v86;
      *v32 = v86 ^ ((unsigned __int16)v86 ^ (*((_DWORD *)v5 + 70) >> 20)) & 0x100;
    }
    else
    {
      v54 = *((_DWORD *)v5 + 101);
      if ( !v54 )
        goto LABEL_162;
      *(_DWORD *)(v20 + 1192) = v54;
    }
    v55 = (char *)(v20 + 1160);
  }
  v108 = v32;
  while ( 2 )
  {
    v56 = *(_DWORD *)(v20 + 1456);
    if ( !v56 )
    {
      *(_DWORD *)(v20 + 1456) = v46;
      v56 = v46;
    }
    v57 = *(_QWORD *)(*(_QWORD *)v55 + 48LL);
    if ( !*(_BYTE *)(*(_QWORD *)(v57 + 16) + 138LL) )
    {
      v94 = *((_DWORD *)v11 + 20773);
      if ( v56 != v94 && (*v32 & 0x100) == 0 && *((_DWORD *)v11 + 1) != 3 )
      {
        v95 = *(_DWORD *)(v20 + 1192);
        if ( v56 < v94 )
        {
          if ( v95 )
            v94 *= v95;
        }
        else
        {
          v94 = v95 / v56;
        }
        *(_DWORD *)(v20 + 1192) = v94;
        if ( (byte_14008A204 & 0x20) != 0 )
          McTemplateK0qqqq_EtwWriteTransfer(
            v57,
            (unsigned int)&EventVirtualizeFlipSubmissionRate,
            v95,
            v56,
            *((_DWORD *)v11 + 20773),
            v95,
            v94);
      }
    }
    v58 = 0;
    *(_DWORD *)(v20 + 1456) = *((_DWORD *)v11 + 20773);
    if ( (*((_DWORD *)v11 + 20777) & 1) != 0 )
    {
      v93 = *(_QWORD *)(v111 + 48);
      if ( *(_BYTE *)(v93 + 2632) || *(_BYTE *)(*(_QWORD *)(v93 + 16) + 137LL) )
      {
        if ( (*v108 & 0x80u) != 0 || v107 )
        {
          v58 = 0;
          if ( (**(_DWORD **)(v20 + 1312) & 0x3FF) != 0 )
            v58 = v46;
        }
        if ( (*v108 & 0x180) == 0x80 )
          *v108 |= 0x200u;
      }
    }
    v59 = *((_DWORD *)v5 + 106);
    if ( !v59 )
    {
      if ( v58 )
        v59 = -1;
      else
        v59 = *((_DWORD *)v11 + 20774);
    }
    *(_DWORD *)(v20 + 1276) = v59;
    if ( (*((_DWORD *)v5 + 70) & 0x800) != 0 )
      *(_BYTE *)(v20 + 1197) = 1;
    v60 = **(_DWORD **)(v20 + 1312) & 0x3FF;
    if ( *((_BYTE *)v9 + 164) )
      v61 = (**(_DWORD **)(v20 + 1312) >> 10) & 0x3FF;
    else
      v61 = 0;
    v13 = !_BitScanForward((unsigned int *)&v62, v60);
    v63 = -1;
    v64 = 0;
    if ( !v13 )
      v63 = v62;
    v65 = v63;
    v66 = -1;
    v13 = !_BitScanForward((unsigned int *)&v67, v61);
    if ( !v13 )
      v66 = v67;
    v68 = v66;
    while ( v60 || v61 )
    {
      if ( v65 >= v68 )
      {
        v87 = -1;
        v61 &= ~(1 << v68);
        v13 = !_BitScanForward((unsigned int *)&v88, v61);
        if ( !v13 )
          v87 = v88;
        v68 = v87;
      }
      else
      {
        v70 = 0;
        v71 = 1;
        LODWORD(v108) = 0;
        for ( i = 0; ; ++i )
        {
          v105 = v71;
          if ( i > v47 )
            break;
          if ( (v71 & *(_DWORD *)(v20 + 1200)) != 0 )
          {
            v73 = *(_QWORD *)(v20 + 1312);
            v74 = *(_DWORD *)(v73 + 4);
            v75 = *(_DWORD *)(v73 + 8);
            v76 = (unsigned __int64)(unsigned int)(v64 + v74 * v70) << 6;
            v77 = *(_QWORD *)(v76 + v74 * ((8 * v75 + 231) & 0xFFFFFFF8) + v73 + 56);
            if ( ((*(_DWORD *)(v77 + 32) >> 2) & 0x3F) == v106 )
            {
              v78 = *(_QWORD *)(v77 + 96);
              v79 = v73 + v76 + (unsigned int)(8 * v74 * (v75 + 28));
              v80 = *(_QWORD *)(v78 + 32);
              if ( v80 )
              {
                *(_QWORD *)(v79 + 72) = ++*(_QWORD *)(v80 + 16);
                v89 = *(_QWORD *)(*(_QWORD *)(v77 + 96) + 32LL);
                *(_QWORD *)(v79 + 80) = ++*(_QWORD *)(v89 + 24);
                v90 = *(_QWORD *)(*(_QWORD *)(v77 + 96) + 32LL);
                v91 = 2 * (*(unsigned int *)(v90 + 40) + 3LL);
                *(_OWORD *)(v90 + 8 * v91) = 0LL;
                *(_DWORD *)(v90 + 40) = ((unsigned __int8)*(_DWORD *)(v90 + 40) + 1) & 7;
                *(_DWORD *)(v90 + 8 * v91) = 0;
                v92 = *(_QWORD *)(v79 + 80);
                v47 = v106;
                *(_QWORD *)(v90 + 8 * v91 + 8) = v92;
              }
              else
              {
                v81 = *(_QWORD *)(v78 + 24);
                v47 = v106;
                if ( v81 )
                  _InterlockedIncrement((volatile signed __int32 *)(v81 + 8));
              }
              break;
            }
            v71 = v105;
            v70 = (_DWORD)v108 + 1;
            v47 = v106;
            LODWORD(v108) = (_DWORD)v108 + 1;
          }
          v71 *= 2;
        }
        v82 = -1;
        v60 &= ~(1 << v65);
        v13 = !_BitScanForward((unsigned int *)&v83, v60);
        if ( !v13 )
          v82 = v83;
        v65 = v82;
      }
      ++v64;
    }
    v9 = v115;
    v5 = v119;
    v11 = a1;
    if ( *(_DWORD *)(v20 + 1208) > *(_DWORD *)(v20 + 1212) )
    {
      *(_DWORD *)(v20 + 1172) = 8;
    }
    else
    {
      if ( !v110 )
      {
        v69 = (__int64)v116;
        v46 = (int)v117;
        v32 = (_DWORD *)v111;
        v47 = (unsigned int)v112;
        v20 = v109;
        while ( 1 )
        {
          *((_DWORD *)v112 + 14) = ((_BYTE)v20 + 1) & 0x3F;
          ++*v113;
          _InterlockedIncrement((volatile signed __int32 *)v115 + 218);
          _InterlockedIncrement((volatile signed __int32 *)v117 + 810);
          if ( *(_DWORD *)(v69 + 1052) == 7 )
            *(_QWORD *)(v69 + 1064) = ++*((_QWORD *)v112 + 11);
          if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v69) && *((_BYTE *)v117 + 78948) )
            break;
          *(_DWORD *)(v69 + 1052) = 16;
LABEL_85:
          v20 = *((unsigned int *)v112 + 14);
          v69 = (__int64)v112 + 1400 * v20 + 120;
          if ( *(_DWORD *)(v69 + 1052) != 7 )
            goto LABEL_86;
        }
        *(_DWORD *)(v69 + 1052) = 2;
        v96 = *((_DWORD *)v112 + 16);
        if ( v107 )
        {
          if ( (_DWORD)v20 == v96 )
          {
            if ( *((_BYTE *)v115 + 164)
              && VidSchiCheckPendingFlipsForThisEntry(v115, v117, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v69, v112) )
            {
              v98 = v121;
              if ( *((_BYTE *)v115 + 67) )
                goto LABEL_146;
              *(_QWORD *)(v69 + 1104) = MEMORY[0xFFFFF78000000320];
LABEL_140:
              if ( !*((_BYTE *)v115 + 67) )
              {
LABEL_141:
                if ( *((_DWORD *)v112 + 350 * *((unsigned int *)v112 + 15) + 293) != 16 )
                  *((_DWORD *)v112 + 15) = *((_DWORD *)v112 + 14);
                goto LABEL_85;
              }
LABEL_146:
              if ( *(_DWORD *)(v69 + 1052) == 2 )
                VidSchiUpdateInterruptTargetsForAllPlanes(v115, v98);
              goto LABEL_141;
            }
            goto LABEL_138;
          }
        }
        else
        {
          if ( (_DWORD)v20 != v96 && !*(_BYTE *)(v69 + 1076) )
          {
            v100 = ((_BYTE)v20 - 1) & 0x3F;
            if ( (*((_DWORD *)v112 + 350 * v100 + 318) & 0x20) != 0 )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v100, v112, v115);
              WdLogGlobalForLineNumber = 916;
LABEL_162:
              v55 = v114;
              v101 = *v32 & 0xFFFFFE7F | 0x80;
              *(_DWORD *)(v20 + 1192) = 0;
              *v32 = v101;
              continue;
            }
            goto LABEL_145;
          }
          if ( !*((_BYTE *)v115 + 67) )
            *(_QWORD *)(v69 + 1104) = MEMORY[0xFFFFF78000000320];
          if ( !VidSchiCheckPendingFlipsForThisEntry(v115, v117, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v69, v112) )
          {
            if ( *(_BYTE *)(v69 + 1076) )
              VidSchiRestartQueuedFlip(a1, v111, v121, v112, v20);
            if ( !*((_DWORD *)v112 + 28) )
            {
LABEL_138:
              v97 = v121;
              LOBYTE(v119) = 0;
              *(_DWORD *)(v69 + 1052) = 4;
              VidSchiExecuteMmIoFlip(a1, v115, v97, v112, v20, &v120, &v119);
              if ( (_BYTE)v119 )
              {
                v104 = v20;
                v98 = v121;
                VidSchiExecuteMmIoFlip(a1, v115, v121, v112, v104, &v120, &v119);
                goto LABEL_140;
              }
              goto LABEL_145;
            }
            *(_DWORD *)(v69 + 1052) = 3;
          }
        }
LABEL_145:
        v98 = v121;
        goto LABEL_140;
      }
      *(_DWORD *)(v20 + 1172) = 7;
    }
    break;
  }
LABEL_86:
  *((_DWORD *)v5 + 16) |= 2u;
  if ( v120 )
    VidSchiCompletePendingFlipOnPlane((__int64)a1, (__int64)v115, v121, (__int64)v112, 9);
LABEL_88:
  VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)v11, v5, 0);
}
