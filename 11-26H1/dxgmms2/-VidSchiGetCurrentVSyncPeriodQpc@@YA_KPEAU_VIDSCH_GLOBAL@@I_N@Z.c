/*
 * XREFs of ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14001A020
 * Callers:
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x140018B30 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140032470 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140034908 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14003B7E0 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1400445F4 (-VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x140019ED0 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001B930 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall VidSchiGetCurrentVSyncPeriodQpc(struct _VIDSCH_GLOBAL *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  double v11; // xmm1_8
  int v12; // eax
  double v13; // xmm0_8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  double v16; // xmm0_8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  int v23; // ecx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+88h] [rbp+10h]

  v5 = *((_QWORD *)a1 + a2 + 431);
  if ( *(_DWORD *)(v5 + 3192) == -1 )
    return *(_QWORD *)(v5 + 83112);
  if ( !*(_DWORD *)(v5 + 3192) || *(_DWORD *)(v5 + 3192) == *(_DWORD *)(v5 + 83096) )
  {
    if ( *(_DWORD *)(v5 + 83096) )
    {
      v20 = *((_QWORD *)a1 + 363);
      v21 = *(unsigned int *)(v5 + 83096);
      v25 = 0LL;
      v22 = v21 * v20;
      if ( is_mul_ok(v21, v20) )
      {
        v23 = 0;
      }
      else
      {
        v23 = -1073741675;
        v22 = -1LL;
      }
      if ( v23 < 0 )
        v6 = v20 * (v21 / 0x989680) + v20 * (v21 % 0x989680) / 0x989680;
      else
        v6 = v22 / 0x989680;
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 83112);
    }
    if ( !(_BYTE)a3 || !*((_BYTE *)a1 + 7074) )
      return v6;
    v9 = *(_QWORD *)(v5 + 44408);
    v10 = 0LL;
    LODWORD(v25) = _mm_getcsr();
    v26 = v25 | 1;
    _mm_setcsr(v25 | 1);
    v11 = *(double *)(v9 + 24) + 0.5;
    v12 = (int)v11;
    if ( v11 < 0.0 )
      v12 = (int)((double)(1 - v12) + v11) - (1 - v12);
    v13 = (double)v12;
    v14 = 0LL;
    if ( v13 >= 9.223372036854776e18 )
    {
      v13 = v13 - 9.223372036854776e18;
      if ( v13 < 9.223372036854776e18 )
        v14 = 0x8000000000000000uLL;
    }
    v7 = v14 + (unsigned int)(int)v13;
    v15 = v7 - v6;
    if ( (__int64)(v7 - v6) < 0 )
      v15 = v6 - v7;
    if ( v15 > v6 >> 1 )
    {
      if ( (byte_14008A204 & 0x20) != 0 )
        McTemplateK0pp_EtwWriteTransfer(v15, &EventResetSmoother, a3, v7, v6);
      if ( (v6 & 0x8000000000000000uLL) != 0LL )
      {
        v10 = v6 & 1 | (v6 >> 1);
        v16 = (double)(int)v10 + (double)(int)v10;
      }
      else
      {
        v16 = (double)(int)v6;
      }
      *(double *)(v9 + 32) = v16;
      LinearFitT<256>::Reset(v9, v10);
      LODWORD(v10) = -1073741823;
      v7 = 0LL;
    }
    v26 = v25;
    _mm_setcsr(v25);
    if ( (v10 & 0x80000000) == 0LL )
    {
      if ( (byte_14008A204 & 0x20) != 0 )
      {
        if ( is_mul_ok(*(unsigned int *)(v5 + 3192), *((_QWORD *)a1 + 363)) )
          v17 = (unsigned __int64)*(unsigned int *)(v5 + 3192) * *((_QWORD *)a1 + 363) / 0x989680;
        else
          v17 = *((_QWORD *)a1 + 363) * (*(unsigned int *)(v5 + 3192) / 0x989680uLL)
              + *((_QWORD *)a1 + 363) * (*(unsigned int *)(v5 + 3192) % 0x989680uLL) / 0x989680;
        if ( (byte_14008A204 & 0x20) != 0 )
          McTemplateK0qxxx_EtwWriteTransfer(
            v17,
            &EventVSyncSmoothenedPeriod,
            (unsigned __int8)byte_14008A204,
            a2,
            v7,
            *(_QWORD *)(v5 + 83112),
            v17);
      }
    }
    else
    {
      return v6;
    }
  }
  else
  {
    v18 = *((_QWORD *)a1 + 363);
    v19 = *(unsigned int *)(v5 + 3192);
    v25 = 0LL;
    if ( is_mul_ok(v19, v18) )
      v7 = v19 * v18 / 0x989680;
    else
      v7 = v18 * (v19 / 0x989680) + v18 * (v19 % 0x989680) / 0x989680;
    v25 = 0LL;
    if ( (_BYTE)a3
      && *((_BYTE *)a1 + 7074)
      && (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(v5 + 44408), v7, &v25) >= 0 )
    {
      if ( (byte_14008A204 & 0x20) != 0
        && (!is_mul_ok(*(unsigned int *)(v5 + 3192), *((_QWORD *)a1 + 363))
          ? (v24 = *((_QWORD *)a1 + 363) * (*(unsigned int *)(v5 + 3192) / 0x989680uLL)
                 + *((_QWORD *)a1 + 363) * (*(unsigned int *)(v5 + 3192) % 0x989680uLL) / 0x989680)
          : (v24 = (unsigned __int64)*(unsigned int *)(v5 + 3192) * *((_QWORD *)a1 + 363) / 0x989680),
            (byte_14008A204 & 0x20) != 0) )
      {
        v7 = v25;
        McTemplateK0qxxx_EtwWriteTransfer(
          v24,
          &EventVSyncSmoothenedPeriod,
          (unsigned __int8)byte_14008A204,
          a2,
          v25,
          *(_QWORD *)(v5 + 83112),
          v24);
      }
      else
      {
        return v25;
      }
    }
  }
  return v7;
}
