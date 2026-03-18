/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x140049E60
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x140003348 (VidSchiCompletePendingFlipOnPlane.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001BAA0 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D028 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x14001DA10 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14001E3B4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400329BC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1400389EC (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP.c)
 *     McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer @ 0x14003BAB8 (McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x14003C3F0 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x14003F7F8 (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  int v3; // esi
  __int64 v5; // r13
  bool v6; // di
  __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  __int64 j; // r8
  int v13; // eax
  int v14; // r9d
  struct VIDSCH_FLIP_QUEUE **v15; // rsi
  __int64 v16; // rsi
  struct VIDSCH_FLIP_QUEUE *v17; // rsi
  unsigned int v18; // edx
  _QWORD *v19; // r12
  struct _VIDSCH_PRESENT_INFO *v20; // rdx
  unsigned int v21; // edi
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // edx
  int i; // r8d
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // r15d
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rdx
  bool v37; // zf
  int v38; // eax
  char k; // r9
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // ecx
  __int64 v47; // rcx
  int v48; // edx
  unsigned int v49; // edx
  unsigned int v50; // eax
  unsigned __int64 v51; // rdx
  unsigned int v52; // edi
  void (__fastcall *v53)(_QWORD, _QWORD); // rax
  struct VIDSCH_FLIP_QUEUE *v54; // [rsp+28h] [rbp-E0h]
  __int64 v55; // [rsp+38h] [rbp-D0h]
  __int64 v56; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+48h] [rbp-C0h]
  __int64 v58; // [rsp+58h] [rbp-B0h]
  bool v59[4]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v60; // [rsp+7Ch] [rbp-8Ch]
  int v61; // [rsp+80h] [rbp-88h]
  int v62; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v63; // [rsp+88h] [rbp-80h]
  int v64; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _KEVENT *v65; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v66[2]; // [rsp+98h] [rbp-70h] BYREF
  char v67; // [rsp+A8h] [rbp-60h]
  int v68; // [rsp+ACh] [rbp-5Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-30h]
  __int128 v72; // [rsp+E8h] [rbp-20h]
  __int128 v73; // [rsp+F8h] [rbp-10h]
  __int128 v74; // [rsp+108h] [rbp+0h]
  _OWORD v75[2]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v76; // [rsp+138h] [rbp+30h]
  int v77; // [rsp+140h] [rbp+38h]
  _OWORD v78[5]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v79[5]; // [rsp+198h] [rbp+90h] BYREF

  v1 = *((unsigned int *)a1 + 27);
  v2 = *((_QWORD *)a1 + 6);
  v3 = 0;
  v76 = 0LL;
  v77 = 0;
  v63 = 0;
  v62 = 0;
  v60 = v1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v78, 0, sizeof(v78));
  memset(v75, 0, sizeof(v75));
  if ( (_DWORD)v1 == -1 || (unsigned int)v1 >= *(_DWORD *)(v2 + 48) )
    return;
  _mm_lfence();
  v5 = *(_QWORD *)(v2 + 8 * v1 + 3448);
  v6 = 0;
  v59[1] = 0;
  v7 = (unsigned int)v1;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 2016), &LockHandle);
  v65 = (struct _KEVENT *)v2;
  v67 = 0;
  v66[1] = v66;
  v68 = 2;
  v66[0] = v66;
  VidSchiRecordVSyncTiming(a1, v8, v9, v10);
  j = 1LL;
  if ( *(int *)(v5 + 4) >= 4 || *(_BYTE *)(v2 + 164) )
  {
    v13 = -1;
    v14 = 4672;
    while ( 1 )
    {
      v61 = v13;
      if ( v13 == *(_DWORD *)(v2 + 160) )
      {
        v3 = v62;
        v6 = v59[1];
        goto LABEL_47;
      }
      v11 = *(_QWORD *)(v2 + 8 * v7 + 3448);
      v59[0] = 0;
      if ( v13 == -1 )
      {
        v15 = (struct VIDSCH_FLIP_QUEUE **)(v11 + 32);
      }
      else
      {
        v16 = v13;
        v13 = v61;
        v15 = (struct VIDSCH_FLIP_QUEUE **)(v11 + 8 * (v16 + 5));
      }
      v17 = *v15;
      if ( v17 )
        break;
LABEL_45:
      ++v13;
    }
    v11 = *((unsigned int *)v17 + 28);
    if ( (_DWORD)v11 )
    {
      v11 = (unsigned int)(v11 - 1);
      *((_DWORD *)v17 + 28) = v11;
    }
    v18 = v63;
    v19 = 0LL;
    v64 = 0;
    *((_DWORD *)v75 + v63) = v11;
    v20 = (struct _VIDSCH_PRESENT_INFO *)(v18 + 1);
    v21 = *((_DWORD *)v17 + 18);
    v22 = ((unsigned __int8)*((_DWORD *)v17 + 17) - 1) & 0x3F;
    v63 = (unsigned int)v20;
    if ( v21 != v22 )
    {
      while ( 1 )
      {
        v1 = 1400LL * v21;
        v23 = *(_DWORD *)((char *)v17 + v1 + 1172);
        if ( v23 && (v23 > 0xC || !_bittest(&v14, v23)) )
        {
          if ( v23 != 5 && v23 != 15 )
          {
LABEL_27:
            LODWORD(v1) = v60;
            break;
          }
          if ( !*(_BYTE *)(v2 + 164)
            && !*((_QWORD *)a1 + 16)
            && _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 78944), 3, 2) == 2
            && !_InterlockedExchange((volatile __int32 *)(v2 + 2744), 1) )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 16) + 24LL));
            *(_QWORD *)(v2 + 2704) = -1LL;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 2712), CriticalWorkQueue);
          }
          if ( (unsigned int)VidSchiIsExpectedVSyncCookie(
                               (struct _VIDSCH_GLOBAL *)v2,
                               v20,
                               (struct VIDSCH_FLIP_QUEUE *)((char *)v17 + v1 + 120),
                               a1) )
          {
            v19 = *(_QWORD **)((char *)v17 + v1 + 1160);
            LODWORD(v1) = v60;
            if ( v19 )
            {
              *(_QWORD *)&v70 = v2;
              *((_QWORD *)&v72 + 1) = *(_QWORD *)(v5 + 44352);
              *(_QWORD *)&v73 = *(_QWORD *)(v5 + 44368);
              *((_QWORD *)&v74 + 1) = *(_QWORD *)(v5 + 44384);
              *((_QWORD *)&v73 + 1) = *(_QWORD *)(v5 + 44360);
              *(_QWORD *)&v74 = *(_QWORD *)(v5 + 44376);
              *((_QWORD *)&v70 + 1) = v19;
              *(_QWORD *)&v71 = v60;
              *((_QWORD *)&v71 + 1) = v17;
              *(_QWORD *)&v72 = v21;
              VidSchiProcessVsyncCompletedFlipEntry(
                (struct HwQueueStagingList *)&v65,
                (__int64)&v70,
                (__int64)v78,
                &v62,
                &v64,
                &v59[1]);
            }
            break;
          }
          v14 = 4672;
        }
        v21 = ((_BYTE)v21 - 1) & 0x3F;
        if ( v21 == (((unsigned __int8)*((_DWORD *)v17 + 17) - 1) & 0x3F) )
          goto LABEL_27;
      }
    }
    if ( !*(_DWORD *)(v5 + 3236) )
      goto LABEL_39;
    if ( *(_BYTE *)(v2 + 7086) )
    {
      if ( !*(_BYTE *)(v5 + 78948) )
      {
        v24 = ((unsigned __int8)*((_DWORD *)v17 + 19) + 1) & 0x3F;
        for ( i = ((unsigned __int8)*((_DWORD *)v17 + 14) + 1) & 0x3F; v24 != i; v24 = ((_BYTE)v24 + 1) & 0x3F )
        {
          v11 = 1400LL * v24;
          if ( *(_DWORD *)((char *)v17 + v11 + 1172) == 14 )
            goto LABEL_38;
        }
LABEL_39:
        if ( v19 )
        {
          VidSchiCheckPendingDeviceCommand(v19);
          v26 = v64;
          v27 = *(unsigned int *)(v19[5] + 4LL);
          v28 = v19[6];
          v7 = (unsigned int)v1;
          v11 = (unsigned int)-v64;
          v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 32) + 8 * v27) + 8LL * (unsigned int)v1 + 88);
          _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8LL * (unsigned int)v1 + 6728) + 8LL), v11);
          v30 = *(_DWORD **)(v2 + 8LL * (unsigned int)v1 + 6728);
          *v30 += v26;
          _InterlockedAdd((volatile signed __int32 *)(v29 + 8), v11);
          *(_DWORD *)v29 += v26;
        }
        else
        {
          v7 = (unsigned int)v1;
        }
        if ( v59[0] )
          VidSchiCompletePendingFlipOnPlane((__int64)&v65, v2, v1, (__int64)v17, 9);
        v13 = v61;
        v14 = 4672;
        j = 1LL;
        goto LABEL_45;
      }
    }
    else if ( !*(_BYTE *)(v5 + 78948) )
    {
      goto LABEL_39;
    }
LABEL_38:
    VidSchiExecuteNextFlipQueueEntry((struct HwQueueStagingList *)&v65, (struct _VIDSCH_GLOBAL *)v2, v59, v1, v17);
    goto LABEL_39;
  }
LABEL_47:
  if ( bTracingEnabled )
  {
    v31 = *((_QWORD *)a1 + 11);
    if ( v31 > 0xFFFFFFFF )
    {
      WdLogSingleEntry1(3LL, v31);
      WdLogGlobalForLineNumber = 7091;
    }
    v32 = *((_DWORD *)a1 + 22);
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      LODWORD(v54) = *((_DWORD *)a1 + 28);
      McTemplateK0pqxqqipqx_EtwWriteTransfer(
        v11,
        v31,
        j,
        *(_QWORD *)(v2 + 16),
        v54,
        *((_QWORD *)a1 + 16),
        *((_DWORD *)a1 + 27),
        *((_DWORD *)a1 + 22),
        *((_QWORD *)a1 + 7),
        0LL,
        0,
        *(_QWORD *)&v78[0]);
    }
    v33 = *((_DWORD *)a1 + 4);
    v70 = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    memset(v79, 0, sizeof(v79));
    switch ( v33 )
    {
      case 10:
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v2 + 160); j = (unsigned int)(j + 1) )
        {
          v11 = (unsigned int)j;
          v34 = *((_QWORD *)a1 + 2 * (unsigned int)j + 16);
          *((_QWORD *)&v70 + (unsigned int)j) = v34;
          if ( v34 )
          {
            v11 = v5 + 304LL * (unsigned int)j;
            v35 = *(_QWORD *)(v11 + 432);
            if ( v35 )
            {
              v36 = ((unsigned __int8)*(_DWORD *)(v11 + 440) + 1) & 0x3F;
              *(_DWORD *)(v11 + 440) = v36;
              v31 = 2 * v36;
              *(_QWORD *)(v35 + 8 * v31) = *((_QWORD *)a1 + 2 * (unsigned int)j + 16);
              v11 = *(_QWORD *)(v11 + 432);
              *(_QWORD *)(v11 + 8 * v31 + 8) = *(_QWORD *)(v5 + 44368);
            }
          }
        }
        break;
      case 3:
        *(_QWORD *)&v70 = *((_QWORD *)a1 + 16);
        break;
      case 7:
        v31 = *((_DWORD *)a1 + 30) & 0x3FF;
        j = 0xFFFFFFFFLL;
        v37 = !_BitScanForward((unsigned int *)&v38, v31);
        if ( !v37 )
          j = (unsigned __int8)v38;
        for ( k = 0; (_DWORD)v31; ++k )
        {
          *((_QWORD *)&v70 + (char)j) = *((_QWORD *)a1 + 5 * k + 16);
          v11 = (unsigned __int8)j;
          j = 0xFFFFFFFFLL;
          v31 = ~(1 << v11) & (unsigned int)v31;
          v37 = !_BitScanForward((unsigned int *)&v40, v31);
          if ( !v37 )
            j = (unsigned __int8)v40;
        }
        break;
    }
    if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        LODWORD(v57) = v3;
        LODWORD(v56) = v32;
        LODWORD(v55) = *((_DWORD *)a1 + 27);
        LODWORD(v54) = *(_DWORD *)(v2 + 160);
        McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
          v11,
          v31,
          j,
          *(_QWORD *)(v2 + 16),
          v54,
          &v70,
          v55,
          v56,
          v57,
          v78,
          v79);
      }
    }
    else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      LODWORD(v58) = v63;
      LODWORD(v57) = v3;
      LODWORD(v56) = v32;
      LODWORD(v55) = *((_DWORD *)a1 + 27);
      LODWORD(v54) = *(_DWORD *)(v2 + 160);
      McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(
        (__int64)v79,
        v31,
        j,
        *(_QWORD *)(v2 + 16),
        v54,
        &v70,
        v55,
        v56,
        v57,
        v78,
        v58,
        v75,
        *((_BYTE *)a1 + 104) == 0,
        v79);
    }
    LODWORD(v1) = v60;
  }
  if ( *(_BYTE *)(v2 + 2500) )
  {
    if ( v6 )
      goto LABEL_113;
    if ( *(_BYTE *)(v2 + 53) != 1 || !*(_DWORD *)(v2 + 2692) )
      goto LABEL_114;
    if ( _InterlockedExchange((volatile __int32 *)(v2 + 4LL * (unsigned int)v1 + 2560), 0) )
      goto LABEL_113;
    v45 = *(_QWORD *)(v2 + 16);
    v46 = v1;
    if ( (*(_DWORD *)(v45 + 3016) & 0x10) != 0 )
    {
      if ( (unsigned int)v1 >= 0x10 )
      {
LABEL_103:
        if ( !*(_DWORD *)(v2 + 4LL * (unsigned int)v1 + 804)
          && !*(_DWORD *)(v2 + 876)
          && !*(_DWORD *)(v2 + 20LL * (unsigned int)v1 + 2188) )
        {
          if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
          {
            v47 = v2 + 4LL * (unsigned int)v1;
            v48 = *(_DWORD *)(v47 + 2624);
            if ( v48 != -1 )
            {
              v49 = v48 + 1;
              *(_DWORD *)(v47 + 2624) = v49;
              v50 = *(_DWORD *)(v2 + 2692);
              if ( v49 == v50 )
              {
                *(_DWORD *)(v2 + 2556) |= 1 << v1;
                if ( *(_DWORD *)(v2 + 2552) != 1 )
                {
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 2520), CriticalWorkQueue);
                  *(_DWORD *)(v2 + 2552) = 1;
                }
              }
              else if ( v49 > v50 )
              {
                *(_DWORD *)(v47 + 2624) = v50 + 1;
              }
            }
            goto LABEL_114;
          }
          goto LABEL_118;
        }
LABEL_113:
        *(_DWORD *)(v2 + 4LL * (unsigned int)v1 + 2624) = 0;
        goto LABEL_114;
      }
    }
    else
    {
      v46 = 0;
    }
    if ( *(_DWORD *)(v45 + 4LL * v46 + 3192) )
      goto LABEL_113;
    goto LABEL_103;
  }
  if ( v6 )
    goto LABEL_94;
  if ( *(_BYTE *)(v2 + 53) != 1 || !*(_DWORD *)(v2 + 2692) )
    goto LABEL_114;
  if ( _InterlockedExchange((volatile __int32 *)(v2 + 2560), 0)
    || *(_DWORD *)(*(_QWORD *)(v2 + 16) + 3192LL)
    || *(_DWORD *)(v2 + 804)
    || *(_DWORD *)(v2 + 876)
    || *(_DWORD *)(v2 + 2188) )
  {
LABEL_94:
    *(_DWORD *)(v2 + 2688) = -1;
    *(_DWORD *)(v2 + 2624) = 0;
    goto LABEL_114;
  }
  if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
  {
    v41 = *(_DWORD *)(v2 + 2688);
    if ( v41 == -1 )
    {
      *(_DWORD *)(v2 + 2688) = v1;
      goto LABEL_88;
    }
    if ( v41 == (_DWORD)v1 )
    {
LABEL_88:
      v42 = *(_DWORD *)(v2 + 2624);
      if ( v42 != -1 )
      {
        v43 = v42 + 1;
        *(_DWORD *)(v2 + 2624) = v43;
        v44 = *(_DWORD *)(v2 + 2692);
        if ( v43 == v44 )
        {
          if ( !_InterlockedExchange((volatile __int32 *)(v2 + 2552), 1) )
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 2520), CriticalWorkQueue);
        }
        else if ( v43 > v44 )
        {
          *(_DWORD *)(v2 + 2624) = v44 + 1;
        }
      }
    }
LABEL_114:
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
    {
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        *(ADAPTER_DISPLAY **)(*(_QWORD *)(v2 + 16) + 3160LL),
        *(struct DXGADAPTER **)(v2 + 16),
        v1,
        *(_QWORD *)(v5 + 44352),
        *((_BYTE *)a1 + 104) == 0);
      v51 = *(_QWORD *)(v5 + 44352);
      if ( v51 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v51);
        WdLogGlobalForLineNumber = 7091;
      }
      v52 = *(_DWORD *)(v5 + 44352);
      ((void (*)(void))DxgCoreInterface[3])();
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        *(_QWORD *)(*(_QWORD *)(v2 + 16) + 412LL),
        *((unsigned int *)a1 + 28),
        v52,
        *(_QWORD *)(v5 + 44368));
    }
  }
LABEL_118:
  HwQueueStagingList::ProcessHwQueues(&v65, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
  {
    v53 = *(void (__fastcall **)(_QWORD, _QWORD))(v2 + 3352);
    if ( v53 )
      v53(*(_QWORD *)(v2 + 3368), (unsigned int)v1);
  }
  HwQueueStagingList::~HwQueueStagingList(&v65);
}
