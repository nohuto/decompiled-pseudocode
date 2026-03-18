/*
 * XREFs of ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1401A119C
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403AA144 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403D0C7C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?ScaleAndOffset@@YAGGMM@Z @ 0x1401A4ACC (-ScaleAndOffset@@YAGGMM@Z.c)
 *     ?ScaleAndOffset@@YAMMMMMM@Z @ 0x1401A4B10 (-ScaleAndOffset@@YAMMMMMM@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
        ADAPTER_DISPLAY *this,
        const struct DXGK_GAMMA_RAMP *a2,
        struct DXGK_GAMMA_RAMP *a3,
        struct DXGK_GAMMA_ADJUSTMENT *a4)
{
  __int64 v4; // rax
  float v5; // xmm4_4
  __int64 v6; // rcx
  __int64 v7; // r8
  float v8; // xmm0_4
  float *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  float v12; // xmm4_4
  float v13; // xmm0_4
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  float v17; // xmm4_4
  float v18; // xmm0_4
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // rbx
  __int64 v23; // r8
  unsigned __int16 v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rdi
  float v27; // xmm2_4
  float v28; // xmm1_4
  unsigned __int16 v29; // ax
  __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // r9
  unsigned __int16 v33; // ax
  __int64 v34; // r9
  unsigned __int16 *v35; // rdx
  __int64 v36; // r10
  _WORD *v37; // rsi
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // ax
  __int64 v40; // rdx
  __int64 v41; // r10
  __int64 v42; // r9
  unsigned __int16 v43; // r11
  unsigned __int16 v44; // ax
  __int64 v45; // rdx
  __int64 v46; // r10
  __int64 v47; // r8
  unsigned __int16 v48; // r11
  __int64 v49; // rdx
  __int16 v50; // r11

  if ( *((_DWORD *)a3 + 4) == 2 )
  {
    if ( !a2 || *((_DWORD *)a2 + 4) == 2 )
    {
      v22 = *((_QWORD *)a3 + 4);
      if ( a2 )
        v23 = *((_QWORD *)a2 + 4);
      else
        v23 = 0LL;
      v24 = 0;
      v25 = v23 + 1024;
      v26 = 256LL;
      do
      {
        v27 = *((float *)a4 + 3);
        v28 = *(float *)a4;
        if ( v23 )
        {
          v29 = ScaleAndOffset(*(_WORD *)(v25 - 1024), v28, v27);
          *(_WORD *)(v31 + v30 - 1024) = v29;
          v33 = ScaleAndOffset(*(_WORD *)(v30 - 512), *(float *)(v32 + 4), *(float *)(v32 + 12));
          *(unsigned __int16 *)((char *)v35 + v36 - 512) = v33;
          v37 = (unsigned __int16 *)((char *)v35 + v36);
          v38 = *v35;
        }
        else
        {
          v39 = ScaleAndOffset(v24, v28, v27);
          *(_WORD *)(v41 + v40 - 1024) = v39;
          v44 = ScaleAndOffset(v43, *(float *)(v42 + 4), *(float *)(v42 + 16));
          *(_WORD *)(v46 + v45 - 512) = v44;
          v38 = v48;
          v37 = (_WORD *)(v45 + v22 - v47);
        }
        *v37 = ScaleAndOffset(v38, *(float *)(v34 + 8), *(float *)(v34 + 20));
        v25 = v49 + 2;
        v24 = v50 + 257;
        --v26;
      }
      while ( v26 );
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( *((_DWORD *)a3 + 4) != 3 || !a2 || *((_DWORD *)a2 + 4) != 3 )
    return 3221225485LL;
  v4 = *((_QWORD *)a3 + 4);
  v5 = FLOAT_1_0;
  v6 = *((_QWORD *)a2 + 4) - v4;
  v7 = v4 + 24;
  do
  {
    v8 = ScaleAndOffset(*(float *)(v7 + v6), *(float *)a4, *((float *)a4 + 3), 0.0, v5);
    *v9 = v8;
    v13 = ScaleAndOffset(*(float *)((char *)v9 + v11 + 4), *(float *)(v10 + 4), *(float *)(v10 + 16), 0.0, v12);
    *(float *)(v14 + 4) = v13;
    v18 = ScaleAndOffset(*(float *)(v14 + v16 + 8), *(float *)(v15 + 8), *(float *)(v15 + 20), 0.0, v17);
    *(float *)(v19 + 8) = v18;
    v7 = v19 + 12;
  }
  while ( v20 != 1 );
  return 0LL;
}
