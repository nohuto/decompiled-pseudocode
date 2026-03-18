/*
 * XREFs of VidSchiProcessIsrVSync @ 0x14002A6D0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1400297B0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002B9C4 (-VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        int a3,
        LARGE_INTEGER a4)
{
  LARGE_INTEGER v4; // rbx
  bool v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r12d
  __int64 v15; // rsi
  LARGE_INTEGER *v16; // rdi
  union _LARGE_INTEGER *v17; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v19; // rdx
  LARGE_INTEGER *v20; // r8
  LARGE_INTEGER v21; // rcx
  char v22; // al
  ULONGLONG Region; // rcx
  int v24; // eax
  __int64 v25; // rcx
  PSLIST_ENTRY v26; // rax
  int v27; // r11d
  struct _SLIST_ENTRY *v28; // r10
  DXGK_INTERRUPT_TYPE InterruptType; // ecx
  unsigned int v30; // eax
  DXGK_INTERRUPT_TYPE v31; // ecx
  __int64 Alignment_low; // rcx
  __int64 EngineOrdinal; // rdx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rax
  LARGE_INTEGER PhysicalAddress; // rax
  __int64 v37; // rdx
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // r9
  __int64 v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rcx
  DWORD v42; // eax
  UINT v43; // ecx
  ULONGLONG Alignment; // rax
  unsigned int v45; // r10d
  char v46; // dl
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *v47; // r8
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r11
  int *v52; // rbp
  int v53; // edx
  unsigned int Rotation; // eax
  unsigned int v55; // edx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // ecx
  DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode; // eax
  int v65; // r8d
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r11
  int v69; // edx
  unsigned int v70; // eax
  unsigned int v71; // edx
  int v72; // eax
  int v73; // ecx
  int v74; // eax
  int v75; // ecx
  int v76; // eax
  int v77; // ecx
  int v78; // eax
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r11
  int v82; // edx
  unsigned int v83; // eax
  unsigned int v84; // edx
  int v85; // eax
  int v86; // ecx
  int v87; // eax
  int v88; // ecx
  int v89; // eax
  int v90; // ecx
  int v91; // eax
  __int64 SubmissionFenceId; // [rsp+28h] [rbp-C0h]
  __int64 v93; // [rsp+30h] [rbp-B8h]
  char v94; // [rsp+50h] [rbp-98h]
  int v95; // [rsp+54h] [rbp-94h]
  struct _SLIST_ENTRY *v97; // [rsp+60h] [rbp-88h]
  DWORD LowPart; // [rsp+68h] [rbp-80h]
  __int64 v100; // [rsp+78h] [rbp-70h]
  __int128 v101; // [rsp+80h] [rbp-68h] BYREF
  __int64 v102; // [rsp+90h] [rbp-58h]
  int v103; // [rsp+98h] [rbp-50h]

  v4 = a4;
  LowPart = 0;
  v7 = 0;
  if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2
    || a2->InterruptType == (DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT|DXGK_INTERRUPT_DMA_PREEMPTED) )
  {
    v7 = (a2->Flags.Value & 2) != 0;
  }
  v8 = 0;
  LODWORD(v9) = a2->DmaCompleted.SubmissionFenceId;
  v10 = v9;
  v95 = v9;
  v11 = *(_QWORD *)(a1[1].Alignment + 3160);
  v12 = *(_DWORD *)(v11 + 96);
  while ( 1 )
  {
    if ( v8 >= v12 )
    {
      v13 = -1;
      goto LABEL_9;
    }
    v9 = 4024LL * v8;
    if ( *(_DWORD *)(v9 + *(_QWORD *)(v11 + 128) + 1072) == v10 )
      break;
    ++v8;
  }
  v13 = v8;
  if ( v8 != -1 && v8 < LODWORD(a1[3].Alignment) )
  {
    _mm_lfence();
    v15 = *(&a1[215].Region + v8);
    v100 = v15;
    if ( v7 )
      goto LABEL_28;
    v16 = (LARGE_INTEGER *)(v15 + 44304);
    v17 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v15 + 44420), 0) )
      goto LABEL_32;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    LODWORD(v19) = 1;
    v20 = (LARGE_INTEGER *)(v15 + 44304);
    v21 = PerformanceCounter;
LABEL_19:
    ++*(_DWORD *)(v15 + 44416);
    *(_QWORD *)(v15 + 44312) += (unsigned int)v19;
    if ( *(_DWORD *)(v15 + 44416) < *(_DWORD *)(v15 + 83092) )
    {
      v22 = 1;
    }
    else
    {
      *(_DWORD *)(v15 + 44328) += v19;
      v22 = 0;
      *(_DWORD *)(v15 + 44416) = 0;
      *(LARGE_INTEGER *)(v15 + 44320) = v21;
    }
    *(_BYTE *)(v15 + 44344) = v22;
    *v20 = v21;
    if ( *(_BYTE *)(v15 + 8) && !*((_BYTE *)&a1[10].HeaderX64 + 4) )
    {
      Region = a1->Region;
      v102 = 0LL;
      v103 = 0;
      v101 = 0LL;
      v24 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int128 *))DxgCoreInterface[64])(
              Region,
              0LL,
              0LL,
              &v101);
      v25 = 0LL;
      if ( v24 >= 0 )
        v25 = *((_QWORD *)&v101 + 1);
      *(_QWORD *)(v15 + 44336) = v25;
    }
    while ( 1 )
    {
LABEL_28:
      v26 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v15 + 44848));
      v27 = 0;
      v97 = v26;
      v13 = v8;
      v28 = v26;
      if ( !v26 )
        goto LABEL_9;
      InterruptType = a2->InterruptType;
      v16 = (LARGE_INTEGER *)&v26[-1];
      *((_BYTE *)&v26[6].Next + 12) &= ~1u;
      LODWORD(v26->Next) = InterruptType;
      HIDWORD(v26[6].Next) = a3;
      LODWORD(v26[6].Next) = v95;
      v30 = *(_DWORD *)(&v26[6].Next + 1) & 0xFFFFFC00;
      v16[6].QuadPart = (LONGLONG)a1;
      v16[15].LowPart = v30;
      v16[13].HighPart = v8;
      v31 = a2->InterruptType;
      if ( a2->InterruptType != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
        break;
      Alignment_low = LODWORD(a1[10].Alignment);
      EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
      if ( (unsigned int)EngineOrdinal <= (unsigned int)Alignment_low )
      {
        *(_QWORD *)(v15 + 44336) = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
        BYTE4(v16[15].QuadPart) = BYTE4(v16[15].QuadPart) & 0xFE | ((a2->Flags.Value & 2) != 0);
        memset(&v16[16], 0, 0xA0uLL);
        v37 = 0LL;
        while ( (unsigned int)v37 < a2->DmaCompleted.EngineOrdinal )
        {
          pMultiPlaneOverlayVsyncInfo = a2->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
          v39 = LODWORD(a1[10].Alignment);
          v40 = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 6 * v37);
          if ( (unsigned int)v40 >= (unsigned int)v39 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            v48 = WdLogSingleEntry5(0LL, 281LL, 14LL, a1, v40, v39);
            WdLogGlobalForLineNumber = 916;
LABEL_63:
            v66 = 96 * v48;
            if ( *(&v47->Enabled + 24 * v48) != v27 )
            {
              v16[15].LowPart = v16[15].LowPart & 0xFFFFFC00 ^ ((unsigned __int16)v16[15].LowPart | (unsigned __int16)(1 << *(ULONG *)((char *)&v47->LayerIndex + v66))) & 0x3FF;
              v67 = 5LL * v4.LowPart;
              v16[v67 + 16] = *(LARGE_INTEGER *)((char *)&v47->PhysicalAddress + v66);
              LOWORD(v16[v67 + 17].LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.SrcRect.left + v66);
              WORD2(v16[v67 + 17].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.SrcRect.top + v66);
              HIWORD(v16[v67 + 17].u.LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.SrcRect.right + v66);
              HIWORD(v16[v67 + 17].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.SrcRect.bottom + v66);
              LOWORD(v16[v67 + 18].LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.left + v66);
              WORD2(v16[v67 + 18].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.top + v66);
              HIWORD(v16[v67 + 18].u.LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.right + v66);
              HIWORD(v16[v67 + 18].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.bottom + v66);
              LOWORD(v16[v67 + 19].LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.left + v66);
              WORD2(v16[v67 + 19].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.top + v66);
              HIWORD(v16[v67 + 19].u.LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.right + v66);
              HIWORD(v16[v67 + 19].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.bottom + v66);
              v68 = 40LL * v4.LowPart + 160;
              v52 = (int *)((char *)v16 + v68);
              LODWORD(v67) = *(DWORD *)((char *)&v16->LowPart + v68) ^ (*(UINT *)((char *)&v47->PlaneAttributes.Flags.Value
                                                                                + v66) ^ *(DWORD *)((char *)&v16->LowPart
                                                                                                  + v68)) & 1;
              *v52 = v67;
              v69 = v67 ^ (*(UINT *)((char *)&v47->PlaneAttributes.Flags.Value + v66) ^ v67) & 2;
              *v52 = v69;
              v70 = *(LONG *)((char *)&v47->PlaneAttributes.ClipRect.left + v66);
              if ( v70 > 1 )
                v71 = ((unsigned __int8)v69 ^ (unsigned __int8)(8 * v70 - 8)) & 0x18 ^ v69;
              else
                v71 = v69 & 0xFFFFFFE7;
              *(DWORD *)((char *)&v16->LowPart + v68) = v71;
              v72 = v71 ^ ((unsigned __int8)v71 ^ (unsigned __int8)(4
                                                                  * *(LONG *)((char *)&v47->PlaneAttributes.ClipRect.top
                                                                            + v66))) & 4;
              *v52 = v72;
              v73 = v72 ^ ((unsigned __int8)v72 ^ (unsigned __int8)(32
                                                                  * *(UINT *)((char *)&v47->PlaneAttributes.Blend.Value
                                                                            + v66))) & 0x60;
              *v52 = v73;
              v74 = v73 ^ ((unsigned __int8)v73 ^ (unsigned __int8)((unsigned __int8)*(DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT *)((char *)&v47->PlaneAttributes.VideoFrameFormat + v66) << 7)) & 0x80;
              *v52 = v74;
              v75 = v74 ^ ((unsigned __int16)v74 ^ (unsigned __int16)((unsigned __int16)*(DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT *)((char *)&v47->PlaneAttributes.VideoFrameFormat + v66) << 7)) & 0x100;
              *v52 = v75;
              v76 = v75 ^ ((unsigned __int16)v75 ^ (unsigned __int16)((unsigned __int16)*(DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT *)((char *)&v47->PlaneAttributes.VideoFrameFormat + v66) << 7)) & 0x200;
              *v52 = v76;
              v77 = v76 ^ ((unsigned __int16)v76 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)((char *)&v47->PlaneAttributes.YCbCrFlags.0
                                                                                                  + v66) << 10)) & 0x1C00;
              *v52 = v77;
              v78 = v77 ^ ((unsigned __int16)v77 ^ (unsigned __int16)((unsigned __int16)*(DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT *)((char *)&v47->PlaneAttributes.StereoFormat + v66) << 13)) & 0x2000;
              *v52 = v78;
              v63 = v78 ^ ((unsigned __int16)v78 ^ (*(BOOL *)((char *)&v47->PlaneAttributes.StereoLeftViewFrame0 + v66) << 14)) & 0x4000;
              *v52 = v63;
              StereoFlipMode = *(BOOL *)((char *)&v47->PlaneAttributes.StereoBaseViewFrame0 + v66);
              goto LABEL_57;
            }
            while ( ++v45 < a2->DmaCompleted.EngineOrdinal )
            {
LABEL_51:
              v47 = a2->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
              v48 = v45;
              if ( v46 )
                goto LABEL_63;
              if ( (_BYTE)v15 )
              {
                v79 = 112LL * v45;
                if ( *(BOOL *)((char *)&v47->Enabled + v79) != v27 )
                {
                  v16[15].LowPart = v16[15].LowPart & 0xFFFFFC00 ^ ((unsigned __int16)v16[15].LowPart | (unsigned __int16)(1 << *(ULONG *)((char *)&v47->LayerIndex + v79))) & 0x3FF;
                  v80 = 5LL * v4.LowPart;
                  v16[v80 + 16] = *(LARGE_INTEGER *)((char *)&v47->PhysicalAddress + v79);
                  LOWORD(v16[v80 + 17].LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.SrcRect.left + v79);
                  WORD2(v16[v80 + 17].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.SrcRect.top + v79);
                  HIWORD(v16[v80 + 17].u.LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.SrcRect.right + v79);
                  HIWORD(v16[v80 + 17].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.SrcRect.bottom + v79);
                  LOWORD(v16[v80 + 18].LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.left + v79);
                  WORD2(v16[v80 + 18].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.top + v79);
                  HIWORD(v16[v80 + 18].u.LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.right + v79);
                  HIWORD(v16[v80 + 18].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.DstRect.bottom + v79);
                  LOWORD(v16[v80 + 19].LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.ClipRect.left + v79);
                  WORD2(v16[v80 + 19].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.ClipRect.top + v79);
                  HIWORD(v16[v80 + 19].u.LowPart) = *(_WORD *)((char *)&v47->PlaneAttributes.ClipRect.right + v79);
                  HIWORD(v16[v80 + 19].QuadPart) = *(_WORD *)((char *)&v47->PlaneAttributes.ClipRect.bottom + v79);
                  v81 = 40LL * v4.LowPart + 160;
                  v52 = (int *)((char *)v16 + v81);
                  LODWORD(v80) = *(DWORD *)((char *)&v16->LowPart + v81) ^ (*(UINT *)((char *)&v47->PlaneAttributes.Flags.Value
                                                                                    + v79) ^ *(DWORD *)((char *)&v16->LowPart + v81)) & 1;
                  *v52 = v80;
                  v82 = v80 ^ (*(UINT *)((char *)&v47->PlaneAttributes.Flags.Value + v79) ^ v80) & 2;
                  *v52 = v82;
                  v83 = *(D3DDDI_ROTATION *)((char *)&v47->PlaneAttributes.Rotation + v79);
                  if ( v83 > 1 )
                    v84 = ((unsigned __int8)v82 ^ (unsigned __int8)(8 * v83 - 8)) & 0x18 ^ v82;
                  else
                    v84 = v82 & 0xFFFFFFE7;
                  *(DWORD *)((char *)&v16->LowPart + v81) = v84;
                  v85 = v84 ^ ((unsigned __int8)v84 ^ (unsigned __int8)(4
                                                                      * *(UINT *)((char *)&v47->PlaneAttributes.Blend.Value
                                                                                + v79))) & 4;
                  *v52 = v85;
                  v86 = v85 ^ ((unsigned __int8)v85 ^ (unsigned __int8)(32
                                                                      * *(BOOL *)((char *)&v47->PlaneAttributes.StereoLeftViewFrame0
                                                                                + v79))) & 0x60;
                  *v52 = v86;
                  v87 = v86 ^ ((unsigned __int8)v86 ^ (*(BOOL *)((char *)&v47->PlaneAttributes.StereoBaseViewFrame0 + v79) << 7)) & 0x80;
                  *v52 = v87;
                  v88 = v87 ^ ((unsigned __int16)v87 ^ (*(BOOL *)((char *)&v47->PlaneAttributes.StereoBaseViewFrame0
                                                                + v79) << 7)) & 0x100;
                  *v52 = v88;
                  v89 = v88 ^ ((unsigned __int16)v88 ^ (*(BOOL *)((char *)&v47->PlaneAttributes.StereoBaseViewFrame0
                                                                + v79) << 7)) & 0x200;
                  *v52 = v89;
                  v90 = v89 ^ ((unsigned __int16)v89 ^ (unsigned __int16)((unsigned __int16)*(DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE *)((char *)&v47->PlaneAttributes.StereoFlipMode + v79) << 10)) & 0x1C00;
                  *v52 = v90;
                  v91 = v90 ^ ((unsigned __int16)v90 ^ (unsigned __int16)((unsigned __int16)*(DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY *)((char *)&v47->PlaneAttributes.StretchQuality + v79) << 13)) & 0x2000;
                  *v52 = v91;
                  v63 = v91 ^ ((unsigned __int16)v91 ^ (unsigned __int16)((unsigned __int16)*(ULONG *)((char *)&v47[1].LayerIndex + v79) << 14)) & 0x4000;
                  *v52 = v63;
                  StereoFlipMode = *(BOOL *)((char *)&v47[1].Enabled + v79);
                  goto LABEL_57;
                }
              }
              else
              {
                v49 = v45;
                if ( v47[v49].Enabled != v27 )
                {
                  v16[15].LowPart = v16[15].LowPart & 0xFFFFFC00 ^ ((unsigned __int16)v16[15].LowPart | (unsigned __int16)(1 << v47[v49].LayerIndex)) & 0x3FF;
                  v50 = 5LL * v4.LowPart;
                  v16[v50 + 16] = v47[v49].PhysicalAddress;
                  LOWORD(v16[v50 + 17].LowPart) = v47[v49].PlaneAttributes.SrcRect.left;
                  WORD2(v16[v50 + 17].QuadPart) = v47[v49].PlaneAttributes.SrcRect.top;
                  HIWORD(v16[v50 + 17].u.LowPart) = v47[v49].PlaneAttributes.SrcRect.right;
                  HIWORD(v16[v50 + 17].QuadPart) = v47[v49].PlaneAttributes.SrcRect.bottom;
                  LOWORD(v16[v50 + 18].LowPart) = v47[v49].PlaneAttributes.DstRect.left;
                  WORD2(v16[v50 + 18].QuadPart) = v47[v49].PlaneAttributes.DstRect.top;
                  HIWORD(v16[v50 + 18].u.LowPart) = v47[v49].PlaneAttributes.DstRect.right;
                  HIWORD(v16[v50 + 18].QuadPart) = v47[v49].PlaneAttributes.DstRect.bottom;
                  LOWORD(v16[v50 + 19].LowPart) = v47[v49].PlaneAttributes.ClipRect.left;
                  WORD2(v16[v50 + 19].QuadPart) = v47[v49].PlaneAttributes.ClipRect.top;
                  HIWORD(v16[v50 + 19].u.LowPart) = v47[v49].PlaneAttributes.ClipRect.right;
                  HIWORD(v16[v50 + 19].QuadPart) = v47[v49].PlaneAttributes.ClipRect.bottom;
                  v51 = 40LL * v4.LowPart + 160;
                  v52 = (int *)((char *)v16 + v51);
                  LODWORD(v50) = *(DWORD *)((char *)&v16->LowPart + v51) ^ (v47[v49].PlaneAttributes.Flags.Value ^ *(DWORD *)((char *)&v16->LowPart + v51)) & 1;
                  *v52 = v50;
                  v53 = v50 ^ (v47[v49].PlaneAttributes.Flags.Value ^ v50) & 2;
                  *v52 = v53;
                  Rotation = v47[v49].PlaneAttributes.Rotation;
                  if ( Rotation > 1 )
                    v55 = ((unsigned __int8)v53 ^ (unsigned __int8)(8 * Rotation - 8)) & 0x18 ^ v53;
                  else
                    v55 = v53 & 0xFFFFFFE7;
                  *(DWORD *)((char *)&v16->LowPart + v51) = v55;
                  v56 = v55 ^ ((unsigned __int8)v55 ^ (unsigned __int8)(4 * v47[v49].PlaneAttributes.Blend.Value)) & 4;
                  *v52 = v56;
                  v57 = v56 ^ ((unsigned __int8)v56 ^ (unsigned __int8)(32 * v47[v49].PlaneAttributes.VideoFrameFormat)) & 0x60;
                  *v52 = v57;
                  v58 = v57 ^ ((unsigned __int8)v57 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)&v47[v49].PlaneAttributes.YCbCrFlags.0 << 7)) & 0x80;
                  *v52 = v58;
                  v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v47[v49].PlaneAttributes.YCbCrFlags.0 << 7)) & 0x100;
                  *v52 = v59;
                  v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v47[v49].PlaneAttributes.YCbCrFlags.0 << 7)) & 0x200;
                  *v52 = v60;
                  v61 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)v47[v49].PlaneAttributes.StereoFormat << 10)) & 0x1C00;
                  *v52 = v61;
                  v62 = v61 ^ ((unsigned __int16)v61 ^ (v47[v49].PlaneAttributes.StereoLeftViewFrame0 << 13)) & 0x2000;
                  *v52 = v62;
                  v63 = v62 ^ ((unsigned __int16)v62 ^ (v47[v49].PlaneAttributes.StereoBaseViewFrame0 << 14)) & 0x4000;
                  *v52 = v63;
                  StereoFlipMode = v47[v49].PlaneAttributes.StereoFlipMode;
LABEL_57:
                  v46 = v94;
                  ++v4.LowPart;
                  *v52 = v63 ^ (v63 ^ (StereoFlipMode << 15)) & 0x18000;
                  v27 = 0;
                  continue;
                }
              }
            }
            v4 = a4;
            v15 = v100;
            break;
          }
          v16[2 * v40 + 16] = *(&pMultiPlaneOverlayVsyncInfo->PhysicalAddress + 3 * v37);
          v41 = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 6 * v37);
          v42 = *(&pMultiPlaneOverlayVsyncInfo->PlaneAttributes.Flags.Value + 6 * v37);
          v37 = (unsigned int)(v37 + 1);
          v16[2 * v41 + 17].LowPart = v42;
        }
LABEL_39:
        v28 = v97;
        goto LABEL_40;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 14LL, a1, EngineOrdinal, Alignment_low);
      WdLogGlobalForLineNumber = 916;
LABEL_32:
      v21 = KeQueryPerformanceCounter(v17);
      v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 44432), 0LL, 0LL);
      LODWORD(v19) = 1;
      v35 = v21.QuadPart - v16->QuadPart;
      v20 = v16;
      if ( v34 )
      {
        if ( v35 > v34 )
        {
          v19 = v35 / v34;
          if ( !(unsigned int)(v35 / v34) )
            continue;
        }
      }
      goto LABEL_19;
    }
    if ( v31 == (DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT|DXGK_INTERRUPT_DMA_PREEMPTED) )
    {
      VidSchiProcessIsrVSyncMultiPlaneOverlay3(
        (struct _VIDSCH_GLOBAL *)a1,
        (struct _VIDSCH_PRESENT_INFO *)v15,
        a2,
        (struct _VIDSCH_VSYNC_COOKIE *)v16);
      goto LABEL_39;
    }
    if ( v31 == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
    {
      v43 = a2->DmaCompleted.EngineOrdinal;
      if ( v43 >= 0xA )
      {
        WdLogSingleEntry3(1LL, a1, a2->DmaCompleted.SubmissionFenceId, a2->DmaCompleted.EngineOrdinal);
        v93 = a2->DmaCompleted.EngineOrdinal;
        SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
        WdLogGlobalForLineNumber = 8619;
        DxgkLogInternalTriageEvent(
          SubmissionFenceId,
          0x40000,
          v65,
          (unsigned int)L"Driver reports out of range layer count: pVidSchGlobal = 0x%I64x, VidPnTargetId = 0x%I64x, Repor"
                         "ted Layers = 0x%I64x",
          (__int64)a1,
          SubmissionFenceId,
          v93,
          0LL);
      }
      else
      {
        Alignment = a1[1].Alignment;
        v45 = 0;
        v46 = *(_BYTE *)(Alignment + 3058);
        v94 = v46;
        if ( v43 )
        {
          v4.LowPart = 0;
          LOBYTE(v15) = *(_BYTE *)(Alignment + 3059);
          goto LABEL_51;
        }
      }
      goto LABEL_39;
    }
    v16[15].LowPart = v30 | 1;
    PhysicalAddress = a2->CrtcVsync.PhysicalAddress;
    v16[16] = PhysicalAddress;
    LowPart = PhysicalAddress.LowPart;
LABEL_40:
    if ( !v7 )
    {
      v16[11] = *(LARGE_INTEGER *)(v15 + 44312);
      v16[12].QuadPart = *(unsigned int *)(v15 + 44328);
      LOBYTE(v16[13].LowPart) = *(_BYTE *)(v15 + 44344);
      v16[7] = *(LARGE_INTEGER *)(v15 + 44304);
      v16[8] = *(LARGE_INTEGER *)(v15 + 44320);
      v16[9] = *(LARGE_INTEGER *)(v15 + 44336);
    }
    v16[10] = v4;
    ExpInterlockedPushEntrySList(a1 + 129, v28 + 1);
  }
LABEL_9:
  if ( bTracingEnabled )
  {
    if ( v7 )
    {
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0pqx_EtwWriteTransfer(v9, (unsigned int)&EventHSyncInterrupt, v12, a1[1].Alignment, v95, LowPart);
    }
    else if ( (byte_14008A201 & 1) != 0 )
    {
      McTemplateK0pqx_EtwWriteTransfer(LowPart, (unsigned int)&EventVSyncInterrupt, v12, a1[1].Alignment, v95, LowPart);
    }
  }
  return v13;
}
