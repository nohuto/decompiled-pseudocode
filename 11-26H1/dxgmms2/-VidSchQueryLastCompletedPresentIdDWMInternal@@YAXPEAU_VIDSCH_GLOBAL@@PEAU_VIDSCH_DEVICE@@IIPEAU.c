/*
 * XREFs of ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14001A6B0
 * Callers:
 *     VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1400197B0 (VidSchQueryLastCompletedVidPnSourcePresentIdDWM.c)
 *     VidSchQueryLastCompletedPresentIdDWM @ 0x14001A500 (VidSchQueryLastCompletedPresentIdDWM.c)
 * Callees:
 *     ?VidSchiConvertTicksToSchedulerUnitsDelta@@YA_J_J_K@Z @ 0x140019680 (-VidSchiConvertTicksToSchedulerUnitsDelta@@YA_J_J_K@Z.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z @ 0x140019950 (-VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x140019ED0 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001B930 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0qxxxxiq_EtwWriteTransfer @ 0x14001B968 (McTemplateK0qxxxxiq_EtwWriteTransfer.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ?floor@@YANN@Z @ 0x14001C350 (-floor@@YANN@Z.c)
 *     RtlULongLongMult @ 0x1400359C0 (RtlULongLongMult.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchQueryLastCompletedPresentIdDWMInternal(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        ULONGLONG pullResult)
{
  __int64 v6; // r12
  __int64 v8; // rdi
  ULONGLONG v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // r10
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  double v16; // xmm1_8
  int v17; // eax
  unsigned __int64 SmoothenedFrameTimeQpc; // r13
  unsigned __int64 v19; // rcx
  double v20; // xmm0_8
  __int64 v21; // r8
  bool v22; // zf
  __int64 v23; // r10
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // r13
  __int64 v27; // r8
  __int64 v28; // rdx
  double v29; // xmm1_8
  int v30; // eax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  double v33; // xmm0_8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // r13
  ULONGLONG v39; // r8
  unsigned __int64 v40; // rdx
  double v41; // xmm1_8
  int v42; // eax
  double v43; // xmm0_8
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  double v47; // xmm0_8
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r8
  ULONGLONG v50; // r11
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r13
  int v53; // eax
  __int64 v54; // r13
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r11
  ULONGLONG v59; // r11
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r9
  int v62; // eax
  __int64 v63; // r9
  unsigned __int64 v64; // rcx
  int v65; // eax
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r11
  __int64 v68; // r13
  __int64 v69; // r10
  __int64 v70; // r8
  unsigned __int64 v71; // r8
  __int64 v72; // rdx
  unsigned __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // rcx
  double v76; // xmm0_8
  __int64 v77; // rax
  char v78; // al
  char v79; // r10
  unsigned __int64 v80; // r9
  char v81; // r11
  unsigned __int64 v82; // rcx
  int v83; // eax
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // r13
  int v87; // eax
  unsigned __int64 v88; // r9
  int v89; // eax
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // r11
  unsigned __int64 v92; // rcx
  int v93; // eax
  unsigned __int64 v94; // r9
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // r10
  unsigned __int64 v97; // r9
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // r9
  unsigned __int64 v100; // r11
  unsigned __int64 v101; // rcx
  int v102; // eax
  unsigned __int64 v103; // r9
  unsigned __int64 v104; // r8
  unsigned __int64 v105; // rcx
  int v106; // eax
  unsigned __int64 v107; // r9
  unsigned __int64 v108; // r11
  unsigned __int64 v109; // r8
  int v110; // ecx
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // r10
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // [rsp+58h] [rbp-21h]
  char v115; // [rsp+58h] [rbp-21h]
  char v116; // [rsp+60h] [rbp-19h]
  char v117; // [rsp+60h] [rbp-19h]
  __int64 v118; // [rsp+60h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v120; // [rsp+D8h] [rbp+5Fh]
  __int64 v121; // [rsp+D8h] [rbp+5Fh]
  unsigned __int64 v122; // [rsp+D8h] [rbp+5Fh]
  __int64 v123; // [rsp+E0h] [rbp+67h]
  unsigned __int64 v124; // [rsp+E0h] [rbp+67h]
  __int64 v125; // [rsp+E0h] [rbp+67h]
  unsigned int v126; // [rsp+E8h] [rbp+6Fh]

  v6 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *((_QWORD *)a1 + a3 + 431);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 253, &LockHandle);
  v9 = pullResult;
  if ( a2 )
  {
    v10 = *((_QWORD *)a2 + v6 + 73);
    v11 = *((_QWORD *)a2 + v6 + 89);
    *(_DWORD *)(pullResult + 4) = *((_DWORD *)a2 + v6 + 129);
    *(_DWORD *)(v9 + 8) = *((_DWORD *)a2 + 2 * v6 + 146);
    *(_DWORD *)(v9 + 68) = *((_DWORD *)a2 + 2 * v6 + 210);
    v116 = v10;
    v114 = v11;
    if ( !*((_BYTE *)a1 + 7074) )
      goto LABEL_18;
    v12 = *((_QWORD *)a1 + *(unsigned int *)(v8 + 24) + 431);
    if ( *(_DWORD *)(v12 + 3192) != -1 )
    {
      if ( *(_DWORD *)(v12 + 3192) && *(_DWORD *)(v12 + 3192) != *(_DWORD *)(v12 + 83096) )
      {
        v99 = *(unsigned int *)(v12 + 3192);
LABEL_158:
        v100 = *((_QWORD *)a1 + 363);
        pullResult = 0LL;
        v101 = v99 * v100;
        if ( is_mul_ok(v99, v100) )
        {
          v102 = 0;
        }
        else
        {
          v101 = -1LL;
          v102 = -1073741675;
        }
        if ( v102 < 0 )
          v13 = v100 * (v99 / 0x989680) + v100 * (v99 % 0x989680) / 0x989680;
        else
          v13 = v101 / 0x989680;
LABEL_7:
        v14 = *(_QWORD *)(v8 + 44408);
        v123 = v14;
        v120 = v13;
        v15 = 0LL;
        LODWORD(pullResult) = _mm_getcsr();
        _mm_setcsr(pullResult | 1);
        v16 = (double)((int)v10 - *(_DWORD *)(v14 + 40)) * *(double *)(v14 + 24)
            + (double)(int)*(_QWORD *)(v14 + 48)
            + *(double *)(v14 + 16)
            + 0.5;
        v17 = (int)v16;
        if ( v16 < 0.0 )
          v17 = (int)((double)(1 - v17) + v16) - (1 - v17);
        SmoothenedFrameTimeQpc = (unsigned int)(int)(double)v17;
        v19 = SmoothenedFrameTimeQpc - v11;
        if ( (__int64)(SmoothenedFrameTimeQpc - v11) < 0 )
          v19 = v11 - SmoothenedFrameTimeQpc;
        if ( v19 > v13 >> 1 )
        {
          if ( (byte_14008A204 & 0x20) != 0 )
          {
            McTemplateK0pp_EtwWriteTransfer(v19, &EventResetSmoother, v13, v13, v13);
            v13 = v120;
            v14 = v123;
          }
          if ( (v13 & 0x8000000000000000uLL) != 0LL )
            v20 = (double)(int)(v13 & 1 | (v13 >> 1)) + (double)(int)(v13 & 1 | (v13 >> 1));
          else
            v20 = (double)(int)v13;
          *(double *)(v14 + 32) = v20;
          LinearFitT<256>::Reset(v14, v15);
          v11 = v114;
          LODWORD(v15) = -1073741823;
          SmoothenedFrameTimeQpc = 0LL;
        }
        _mm_setcsr(pullResult);
        if ( (int)v15 >= 0 )
        {
          if ( (byte_14008A204 & 0x20) != 0 )
          {
            v59 = *((_QWORD *)a1 + 363);
            v60 = SmoothenedFrameTimeQpc - v11;
            pullResult = 0LL;
            if ( (__int64)(SmoothenedFrameTimeQpc - v11) < 0 )
            {
              v88 = 10000000 * (v11 - SmoothenedFrameTimeQpc);
              if ( is_mul_ok(v11 - SmoothenedFrameTimeQpc, 0x989680uLL) )
              {
                v89 = 0;
              }
              else
              {
                v89 = -1073741675;
                v88 = -1LL;
              }
              v63 = v89 < 0
                  ? -(__int64)(10000000 * ((v11 - SmoothenedFrameTimeQpc) / v59)
                             + 10000000 * ((v11 - SmoothenedFrameTimeQpc) % v59) / v59)
                  : -(__int64)(v88 / v59);
            }
            else
            {
              v61 = 10000000 * v60;
              if ( is_mul_ok(v60, 0x989680uLL) )
              {
                v62 = 0;
              }
              else
              {
                v62 = -1073741675;
                v61 = -1LL;
              }
              if ( v62 < 0 )
                LOBYTE(v63) = ((unsigned __int8)(v60 / v59) << 7)
                            + 10000000 * ((SmoothenedFrameTimeQpc - v11) % v59) / v59;
              else
                v63 = v61 / v59;
            }
            pullResult = v59;
            v64 = 10000000 * SmoothenedFrameTimeQpc;
            if ( is_mul_ok(SmoothenedFrameTimeQpc, 0x989680uLL) )
            {
              v65 = 0;
            }
            else
            {
              v64 = -1LL;
              v65 = -1073741675;
            }
            if ( v65 < 0 )
            {
              v66 = SmoothenedFrameTimeQpc % pullResult;
              v67 = 10000000 * (SmoothenedFrameTimeQpc / pullResult) + 10000000 * (SmoothenedFrameTimeQpc % v59) / v59;
            }
            else
            {
              v66 = v64 % v59;
              v67 = v64 / v59;
            }
            if ( (byte_14008A204 & 0x20) != 0 )
              McTemplateK0qxxxxiq_EtwWriteTransfer(
                *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL),
                v66,
                (unsigned __int8)byte_14008A204,
                *(_DWORD *)(v8 + 24),
                v116,
                v11,
                SmoothenedFrameTimeQpc,
                v67,
                v63,
                *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL));
          }
          goto LABEL_19;
        }
LABEL_18:
        SmoothenedFrameTimeQpc = v11;
LABEL_19:
        v21 = *((_QWORD *)a2 + v6 + 121);
        *(_QWORD *)(v9 + 16) = SmoothenedFrameTimeQpc;
        if ( *((_QWORD *)a2 + v6 + 89) != v21 )
          SmoothenedFrameTimeQpc = VidSchiGetSmoothenedFrameTimeQpc(
                                     (struct _VIDSCH_PRESENT_INFO *)v8,
                                     a1,
                                     v21,
                                     *((_QWORD *)a2 + v6 + 105));
        goto LABEL_21;
      }
      if ( *(_DWORD *)(v12 + 83096) )
      {
        v99 = *(unsigned int *)(v12 + 83096);
        goto LABEL_158;
      }
    }
    v13 = *(_QWORD *)(v12 + 83112);
    goto LABEL_7;
  }
  v68 = *(_QWORD *)(v8 + 44352);
  v69 = *(_QWORD *)(v8 + 44368);
  *(_DWORD *)(pullResult + 4) = *(_DWORD *)(v8 + 44400);
  *(_DWORD *)(v9 + 8) = *(_DWORD *)(v8 + 44352);
  *(_DWORD *)(v9 + 68) = *(_DWORD *)(v8 + 44360);
  v115 = v68;
  v118 = v69;
  if ( !*((_BYTE *)a1 + 7074) )
    goto LABEL_110;
  v70 = *((_QWORD *)a1 + *(unsigned int *)(v8 + 24) + 431);
  if ( *(_DWORD *)(v70 + 3192) == -1 )
    goto LABEL_100;
  if ( !*(_DWORD *)(v70 + 3192) || *(_DWORD *)(v70 + 3192) == *(_DWORD *)(v70 + 83096) )
  {
    if ( *(_DWORD *)(v70 + 83096) )
    {
      v107 = *(unsigned int *)(v70 + 83096);
      goto LABEL_181;
    }
LABEL_100:
    v71 = *(_QWORD *)(v70 + 83112);
    goto LABEL_101;
  }
  v107 = *(unsigned int *)(v70 + 3192);
LABEL_181:
  v108 = *((_QWORD *)a1 + 363);
  pullResult = 0LL;
  v109 = v107 * v108;
  if ( is_mul_ok(v107, v108) )
  {
    v110 = 0;
  }
  else
  {
    v110 = -1073741675;
    v109 = -1LL;
  }
  if ( v110 < 0 )
    v71 = v108 * (v107 / 0x989680) + v108 * (v107 % 0x989680) / 0x989680;
  else
    v71 = v109 / 0x989680;
LABEL_101:
  v125 = *(_QWORD *)(v8 + 44408);
  v122 = v71;
  LODWORD(pullResult) = _mm_getcsr();
  _mm_setcsr(pullResult | 1);
  SmoothenedFrameTimeQpc = (unsigned int)(int)floor(
                                                (double)((int)v68 - *(_DWORD *)(v125 + 40)) * *(double *)(v125 + 24)
                                              + (double)(int)*(_QWORD *)(v125 + 48)
                                              + *(double *)(v125 + 16)
                                              + 0.5);
  v75 = SmoothenedFrameTimeQpc - v69;
  if ( (__int64)(SmoothenedFrameTimeQpc - v69) < 0 )
    v75 = v69 - SmoothenedFrameTimeQpc;
  if ( v75 > v73 >> 1 )
  {
    if ( (byte_14008A204 & 0x20) != 0 )
    {
      McTemplateK0pp_EtwWriteTransfer(v75, &EventResetSmoother, v73, v73, v73);
      v73 = v122;
      v74 = v125;
    }
    if ( (v73 & 0x8000000000000000uLL) != 0LL )
      v76 = (double)(int)(v73 & 1 | (v73 >> 1)) + (double)(int)(v73 & 1 | (v73 >> 1));
    else
      v76 = (double)(int)v73;
    *(double *)(v74 + 32) = v76;
    LinearFitT<256>::Reset(v74, v72);
    v69 = v118;
    LODWORD(v72) = -1073741823;
    SmoothenedFrameTimeQpc = 0LL;
  }
  _mm_setcsr(pullResult);
  if ( (int)v72 >= 0 )
  {
    if ( (byte_14008A204 & 0x20) != 0 )
    {
      v78 = VidSchiConvertTicksToSchedulerUnitsDelta(SmoothenedFrameTimeQpc - v69, *((_QWORD *)a1 + 363));
      v80 = *((_QWORD *)a1 + 363);
      v81 = v78;
      pullResult = 0LL;
      v82 = 10000000 * SmoothenedFrameTimeQpc;
      if ( is_mul_ok(SmoothenedFrameTimeQpc, 0x989680uLL) )
      {
        v83 = 0;
      }
      else
      {
        v82 = -1LL;
        v83 = -1073741675;
      }
      if ( v83 < 0 )
      {
        v84 = SmoothenedFrameTimeQpc % v80;
        v85 = 10000000 * (SmoothenedFrameTimeQpc / v80) + 10000000 * (SmoothenedFrameTimeQpc % v80) / v80;
      }
      else
      {
        v84 = v82 % v80;
        v85 = v82 / v80;
      }
      if ( (byte_14008A204 & 0x20) != 0 )
        McTemplateK0qxxxxiq_EtwWriteTransfer(
          *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL),
          v84,
          v85,
          *(_DWORD *)(v8 + 24),
          v115,
          v79,
          SmoothenedFrameTimeQpc,
          v85,
          v81,
          *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL));
    }
    goto LABEL_111;
  }
LABEL_110:
  SmoothenedFrameTimeQpc = v69;
LABEL_111:
  v77 = *(_QWORD *)(v8 + 44376);
  *(_QWORD *)(v9 + 16) = SmoothenedFrameTimeQpc;
  if ( *(_QWORD *)(v8 + 44368) != v77 )
    SmoothenedFrameTimeQpc = VidSchiGetSmoothenedFrameTimeQpc(
                               (struct _VIDSCH_PRESENT_INFO *)v8,
                               a1,
                               v77,
                               *(_QWORD *)(v8 + 44360));
LABEL_21:
  *(_QWORD *)(v9 + 72) = SmoothenedFrameTimeQpc;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v22 = *((_BYTE *)a1 + 7074) == 0;
  v23 = *(_QWORD *)(v8 + 44352);
  v24 = *(_QWORD *)(v8 + 44368);
  *(_DWORD *)(v9 + 24) = *(_DWORD *)(v8 + 44352);
  *(_DWORD *)(v9 + 44) = *(_DWORD *)(v8 + 44360);
  v117 = v23;
  v124 = v24;
  if ( v22 )
  {
LABEL_37:
    v31 = v24;
    goto LABEL_38;
  }
  v25 = *((_QWORD *)a1 + *(unsigned int *)(v8 + 24) + 431);
  if ( *(_DWORD *)(v25 + 3192) == -1 )
    goto LABEL_25;
  if ( !*(_DWORD *)(v25 + 3192) || *(_DWORD *)(v25 + 3192) == *(_DWORD *)(v25 + 83096) )
  {
    if ( *(_DWORD *)(v25 + 83096) )
    {
      v90 = *(unsigned int *)(v25 + 83096);
      goto LABEL_138;
    }
LABEL_25:
    v26 = *(_QWORD *)(v25 + 83112);
    goto LABEL_26;
  }
  v90 = *(unsigned int *)(v25 + 3192);
LABEL_138:
  v91 = *((_QWORD *)a1 + 363);
  pullResult = 0LL;
  v92 = v90 * v91;
  if ( is_mul_ok(v90, v91) )
  {
    v93 = 0;
  }
  else
  {
    v92 = -1LL;
    v93 = -1073741675;
  }
  if ( v93 < 0 )
    v26 = v91 * (v90 / 0x989680) + v91 * (v90 % 0x989680) / 0x989680;
  else
    v26 = v92 / 0x989680;
LABEL_26:
  v27 = *(_QWORD *)(v8 + 44408);
  v121 = v27;
  v28 = 0LL;
  LODWORD(pullResult) = _mm_getcsr();
  _mm_setcsr(pullResult | 1);
  v29 = (double)((int)v23 - *(_DWORD *)(v27 + 40)) * *(double *)(v27 + 24)
      + (double)(int)*(_QWORD *)(v27 + 48)
      + *(double *)(v27 + 16)
      + 0.5;
  v30 = (int)v29;
  if ( v29 < 0.0 )
    v30 = (int)((double)(1 - v30) + v29) - (1 - v30);
  v31 = (unsigned int)(int)(double)v30;
  v32 = v31 - v24;
  if ( (__int64)(v31 - v24) < 0 )
    v32 = v24 - v31;
  if ( v32 > v26 >> 1 )
  {
    if ( (byte_14008A204 & 0x20) != 0 )
    {
      McTemplateK0pp_EtwWriteTransfer(v32, &EventResetSmoother, v27, v26, v26);
      v27 = v121;
    }
    if ( (v26 & 0x8000000000000000uLL) != 0LL )
      v33 = (double)(int)(v26 & 1 | (v26 >> 1)) + (double)(int)(v26 & 1 | (v26 >> 1));
    else
      v33 = (double)(int)v26;
    *(double *)(v27 + 32) = v33;
    LinearFitT<256>::Reset(v27, v28);
    v24 = v124;
    LODWORD(v28) = -1073741823;
    LOBYTE(v23) = v117;
    v31 = 0LL;
  }
  _mm_setcsr(pullResult);
  if ( (int)v28 < 0 )
    goto LABEL_37;
  if ( (byte_14008A204 & 0x20) != 0 )
  {
    v50 = *((_QWORD *)a1 + 363);
    v51 = v31 - v24;
    pullResult = 0LL;
    if ( (__int64)(v31 - v24) < 0 )
    {
      v86 = 10000000 * (v24 - v31);
      if ( is_mul_ok(v24 - v31, 0x989680uLL) )
      {
        v87 = 0;
      }
      else
      {
        v87 = -1073741675;
        v86 = -1LL;
      }
      v54 = v87 < 0
          ? -(__int64)(10000000 * ((v24 - v31) / v50) + 10000000 * ((v24 - v31) % v50) / v50)
          : -(__int64)(v86 / v50);
    }
    else
    {
      v52 = 10000000 * v51;
      if ( is_mul_ok(v51, 0x989680uLL) )
      {
        v53 = 0;
      }
      else
      {
        v53 = -1073741675;
        v52 = -1LL;
      }
      if ( v53 < 0 )
        LOBYTE(v54) = ((unsigned __int8)(v51 / v50) << 7) + 10000000 * ((v31 - v24) % v50) / v50;
      else
        v54 = v52 / v50;
    }
    pullResult = v50;
    v55 = 10000000 * v31;
    if ( is_mul_ok(v31, 0x989680uLL) )
    {
      v56 = 0;
    }
    else
    {
      v55 = -1LL;
      v56 = -1073741675;
    }
    if ( v56 < 0 )
    {
      v57 = v31 % pullResult;
      v58 = 10000000 * (v31 / pullResult) + 10000000 * (v31 % v50) / v50;
    }
    else
    {
      v57 = v55 % v50;
      v58 = v55 / v50;
    }
    if ( (byte_14008A204 & 0x20) != 0 )
      McTemplateK0qxxxxiq_EtwWriteTransfer(
        *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL),
        v57,
        (unsigned __int8)byte_14008A204,
        *(_DWORD *)(v8 + 24),
        v23,
        v24,
        v31,
        v58,
        v54,
        *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL));
  }
LABEL_38:
  v34 = *(_QWORD *)(v8 + 44376);
  *(_QWORD *)(v9 + 32) = v31;
  if ( *(_QWORD *)(v8 + 44368) != v34 )
    v31 = VidSchiGetSmoothenedFrameTimeQpc((struct _VIDSCH_PRESENT_INFO *)v8, a1, v34, *(_QWORD *)(v8 + 44360));
  v35 = 304LL * a4;
  *(_QWORD *)(v9 + 48) = v31;
  v36 = *((_QWORD *)a1 + v6 + 431);
  if ( *(int *)(v35 + v36 + 188) <= -1 )
    v37 = 0LL;
  else
    v37 = *((_QWORD *)a1 + 447) + 160LL * *(int *)(v35 + v36 + 188);
  if ( v37 )
    *(_DWORD *)(v9 + 40) = *(_DWORD *)(v37 + 100);
  else
    *(_DWORD *)(v9 + 40) = 0;
  if ( *(_DWORD *)(v8 + 3192) == -1 )
  {
    v45 = 0xFFFFFFFFLL;
  }
  else if ( *(_DWORD *)(v36 + 3192) == -1 )
  {
    v45 = *(_QWORD *)(v36 + 83112);
  }
  else if ( !*(_DWORD *)(v36 + 3192) || *(_DWORD *)(v36 + 3192) == *(_DWORD *)(v36 + 83096) )
  {
    if ( *(_DWORD *)(v36 + 83096) )
    {
      v103 = *((_QWORD *)a1 + 363);
      v104 = *(unsigned int *)(v36 + 83096);
      pullResult = 0LL;
      v105 = v104 * v103;
      if ( is_mul_ok(v104, v103) )
      {
        v106 = 0;
      }
      else
      {
        v105 = -1LL;
        v106 = -1073741675;
      }
      if ( v106 < 0 )
        v38 = v103 * (v104 / 0x989680) + v103 * (v104 % 0x989680) / 0x989680;
      else
        v38 = v105 / 0x989680;
    }
    else
    {
      v38 = *(_QWORD *)(v36 + 83112);
    }
    if ( !*((_BYTE *)a1 + 7074) )
      goto LABEL_121;
    v39 = *(_QWORD *)(v36 + 44408);
    pullResult = v39;
    v40 = 0LL;
    v126 = _mm_getcsr();
    _mm_setcsr(v126 | 1);
    v41 = *(double *)(v39 + 24) + 0.5;
    v42 = (int)v41;
    if ( v41 < 0.0 )
      v42 = (int)((double)(1 - v42) + v41) - (1 - v42);
    v43 = (double)v42;
    v44 = 0LL;
    if ( v43 >= 9.223372036854776e18 )
    {
      v43 = v43 - 9.223372036854776e18;
      if ( v43 < 9.223372036854776e18 )
        v44 = 0x8000000000000000uLL;
    }
    v45 = v44 + (unsigned int)(int)v43;
    v46 = v45 - v38;
    if ( (__int64)(v45 - v38) < 0 )
      v46 = v38 - v45;
    if ( v46 > v38 >> 1 )
    {
      if ( (byte_14008A204 & 0x20) != 0 )
      {
        McTemplateK0pp_EtwWriteTransfer(v46, &EventResetSmoother, v39, v45, v38);
        v39 = pullResult;
      }
      if ( (v38 & 0x8000000000000000uLL) != 0LL )
      {
        v40 = v38 & 1 | (v38 >> 1);
        v47 = (double)(int)v40 + (double)(int)v40;
      }
      else
      {
        v47 = (double)(int)v38;
      }
      *(double *)(v39 + 32) = v47;
      LinearFitT<256>::Reset(v39, v40);
      LODWORD(v40) = -1073741823;
      v45 = 0LL;
    }
    _mm_setcsr(v126);
    if ( (v40 & 0x80000000) == 0LL )
    {
      if ( (byte_14008A204 & 0x20) != 0 )
      {
        v96 = *((_QWORD *)a1 + 363);
        v97 = *(unsigned int *)(v36 + 3192);
        pullResult = 0LL;
        v98 = is_mul_ok(v97, v96) ? v97 * v96 / 0x989680 : v96 * (v97 / 0x989680) + v96 * (v97 % 0x989680) / 0x989680;
        if ( (byte_14008A204 & 0x20) != 0 )
          McTemplateK0qxxx_EtwWriteTransfer(
            v98,
            &EventVSyncSmoothenedPeriod,
            (unsigned __int8)byte_14008A204,
            v6,
            v45,
            *(_QWORD *)(v36 + 83112),
            v98);
      }
    }
    else
    {
LABEL_121:
      v45 = v38;
    }
  }
  else
  {
    v94 = *((_QWORD *)a1 + 363);
    v95 = *(unsigned int *)(v36 + 3192);
    pullResult = 0LL;
    if ( is_mul_ok(v95, v94) )
      v45 = v95 * v94 / 0x989680;
    else
      v45 = v94 * (v95 / 0x989680) + v94 * (v95 % 0x989680) / 0x989680;
    v22 = *((_BYTE *)a1 + 7074) == 0;
    pullResult = 0LL;
    if ( !v22
      && (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(
                *(VIDSCH_VSYNC_SMOOTHER **)(v36 + 44408),
                v45,
                &pullResult) >= 0 )
    {
      if ( (byte_14008A204 & 0x20) != 0
        && (!is_mul_ok(*(unsigned int *)(v36 + 3192), *((_QWORD *)a1 + 363))
          ? (v111 = *((_QWORD *)a1 + 363) * (*(unsigned int *)(v36 + 3192) / 0x989680uLL)
                  + *((_QWORD *)a1 + 363) * (*(unsigned int *)(v36 + 3192) % 0x989680uLL) / 0x989680)
          : (v111 = (unsigned __int64)*(unsigned int *)(v36 + 3192) * *((_QWORD *)a1 + 363) / 0x989680),
            (byte_14008A204 & 0x20) != 0) )
      {
        v45 = pullResult;
        McTemplateK0qxxx_EtwWriteTransfer(
          v111,
          &EventVSyncSmoothenedPeriod,
          (unsigned __int8)byte_14008A204,
          v6,
          pullResult,
          *(_QWORD *)(v36 + 83112),
          v111);
      }
      else
      {
        v45 = pullResult;
      }
    }
  }
  v22 = *((_BYTE *)a1 + 7080) == 0;
  *(_QWORD *)(v9 + 56) = v45;
  if ( !v22 && v45 != 0xFFFFFFFF )
  {
    v48 = *((_QWORD *)a1 + 363);
    pullResult = 0LL;
    v49 = is_mul_ok(v45, 0x989680uLL)
        ? v45 * (unsigned __int128)0x989680uLL / v48
        : 10000000 * (v45 / v48) + 10000000 * (v45 % v48) / v48;
    if ( v49 > 0x989680 )
    {
      pullResult = 0LL;
      if ( RtlULongLongMult(v45, 0x989680uLL, &pullResult) >= 0 )
        v113 = pullResult / v112;
      else
        v113 = 10000000 * (v45 / v112) + 10000000 * (v45 % v112) / v112;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 260LL, v113, 0LL, 0LL);
      WdLogGlobalForLineNumber = 916;
      JUMPOUT(0x14001B927LL);
    }
  }
  *(_DWORD *)(v9 + 64) = *(_DWORD *)(*((_QWORD *)a1 + v6 + 431) + 83092LL);
}
