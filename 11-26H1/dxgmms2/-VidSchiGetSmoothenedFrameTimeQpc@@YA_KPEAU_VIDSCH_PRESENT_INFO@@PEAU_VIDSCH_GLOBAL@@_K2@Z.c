/*
 * XREFs of ?VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z @ 0x140019950
 * Callers:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14001A6B0 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140034908 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001B930 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0qxxxxiq_EtwWriteTransfer @ 0x14001B968 (McTemplateK0qxxxxiq_EtwWriteTransfer.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall VidSchiGetSmoothenedFrameTimeQpc(
        struct _VIDSCH_PRESENT_INFO *a1,
        struct _VIDSCH_GLOBAL *a2,
        __int64 a3,
        int a4)
{
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rdx
  double v13; // xmm1_8
  int v14; // eax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  double v17; // xmm0_8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // r10
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  unsigned __int128 v29; // rax

  if ( !*((_BYTE *)a2 + 7074) )
    return a3;
  v8 = *((_QWORD *)a2 + *((unsigned int *)a1 + 6) + 431);
  if ( *(_DWORD *)(v8 + 3192) != -1 )
  {
    if ( *(_DWORD *)(v8 + 3192) && *(_DWORD *)(v8 + 3192) != *(_DWORD *)(v8 + 83096) )
    {
      v24 = *((_QWORD *)a2 + 363);
      v25 = *(unsigned int *)(v8 + 3192);
      v26 = v25 * v24;
      if ( is_mul_ok(v25, v24) )
      {
        v27 = 0;
      }
      else
      {
        v26 = -1LL;
        v27 = -1073741675;
      }
      if ( v27 >= 0 )
      {
LABEL_37:
        v9 = v26 / 0x989680;
        goto LABEL_6;
      }
      v8 = 0xD6BF94D5E57A42BDuLL;
      v29 = v24 * (v25 % 0x989680) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
LABEL_45:
      v9 = v24 * (v25 / 0x989680) + (*((_QWORD *)&v29 + 1) >> 23);
      goto LABEL_6;
    }
    if ( *(_DWORD *)(v8 + 83096) )
    {
      v24 = *((_QWORD *)a2 + 363);
      v25 = *(unsigned int *)(v8 + 83096);
      v26 = v25 * v24;
      if ( is_mul_ok(v25, v24) )
      {
        v28 = 0;
      }
      else
      {
        v26 = -1LL;
        v28 = -1073741675;
      }
      if ( v28 >= 0 )
        goto LABEL_37;
      v8 = 0xD6BF94D5E57A42BDuLL;
      v29 = v24 * (v25 % 0x989680) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      goto LABEL_45;
    }
  }
  v9 = *(_QWORD *)(v8 + 83112);
LABEL_6:
  v10 = *((_QWORD *)a1 + 5551);
  v11 = _mm_getcsr();
  v12 = 0LL;
  _mm_setcsr(v11 | 1);
  v13 = (double)(a4 - *(_DWORD *)(v10 + 40)) * *(double *)(v10 + 24)
      + (double)(int)*(_QWORD *)(v10 + 48)
      + *(double *)(v10 + 16)
      + 0.5;
  v14 = (int)v13;
  if ( v13 < 0.0 )
    v14 = (int)((double)(1 - v14) + v13) - (1 - v14);
  v15 = (unsigned int)(int)(double)v14;
  v16 = v15 - a3;
  if ( (__int64)(v15 - a3) < 0 )
    v16 = a3 - v15;
  if ( v16 > v9 >> 1 )
  {
    if ( (byte_14008A204 & 0x20) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v16, &EventResetSmoother, v8, v9, v9);
    if ( (v9 & 0x8000000000000000uLL) != 0LL )
      v17 = (double)(int)(v9 & 1 | (v9 >> 1)) + (double)(int)(v9 & 1 | (v9 >> 1));
    else
      v17 = (double)(int)v9;
    *(double *)(v10 + 32) = v17;
    LinearFitT<256>::Reset(v10, v12);
    LODWORD(v12) = -1073741823;
    v15 = 0LL;
  }
  _mm_setcsr(v11);
  if ( (int)v12 < 0 )
    return a3;
  if ( (byte_14008A204 & 0x20) != 0 )
  {
    v19 = *((_QWORD *)a2 + 363);
    v20 = v15 - a3;
    if ( (__int64)(v15 - a3) < 0 )
    {
      if ( is_mul_ok(a3 - v15, 0x989680uLL) )
        v22 = (a3 - v15) * (unsigned __int128)0x989680uLL / v19;
      else
        v22 = 10000000 * ((a3 - v15) / v19) + 10000000 * ((a3 - v15) % v19) / v19;
      v21 = -(__int64)v22;
    }
    else if ( is_mul_ok(v20, 0x989680uLL) )
    {
      v21 = v20 * (unsigned __int128)0x989680uLL / v19;
    }
    else
    {
      LOBYTE(v21) = ((unsigned __int8)(v20 / v19) << 7) + 10000000 * (v20 % v19) / v19;
    }
    if ( is_mul_ok(v15, 0x989680uLL) )
    {
      v23 = v15 * (unsigned __int128)0x989680uLL / v19;
    }
    else
    {
      v19 = 10000000 * (v15 % v19) / v19;
      LOBYTE(v23) = v19 + ((unsigned __int8)(v15 / *((_QWORD *)a2 + 363)) << 7);
    }
    if ( (byte_14008A204 & 0x20) != 0 )
      McTemplateK0qxxxxiq_EtwWriteTransfer(
        *((_QWORD *)a1 + 5551),
        *(_DWORD *)(*((_QWORD *)a1 + 5551) + 8LL),
        v19,
        *((_DWORD *)a1 + 6),
        a4,
        a3,
        v15,
        v23,
        v21,
        *(_DWORD *)(*((_QWORD *)a1 + 5551) + 8LL));
  }
  return v15;
}
