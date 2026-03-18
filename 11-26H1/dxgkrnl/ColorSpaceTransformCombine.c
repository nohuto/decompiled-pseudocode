/*
 * XREFs of ColorSpaceTransformCombine @ 0x14004E56C
 * Callers:
 *     ?ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1400455FC (-ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ?ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1400A0748 (-ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402DCE54 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1403AADD0 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall ColorSpaceTransformCombine(const void **a1, int *a2, __int64 a3)
{
  const void *v3; // r10
  int v7; // eax
  char *v8; // rbp
  int v9; // r9d
  unsigned int v10; // edi
  __int64 v11; // r14
  char *v12; // rbp
  int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // r8
  unsigned int v22; // eax
  float v23; // xmm4_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float *v27; // rdx
  __int64 v28; // rcx
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  bool v35; // zf
  _DWORD *v36; // rax
  int v37; // eax
  _DWORD *v38; // rax
  __int64 v39; // [rsp+80h] [rbp+18h]

  v3 = 0LL;
  if ( !a3 )
    return 3221225485LL;
  v7 = *a2;
  if ( *a2 == 1 )
  {
    if ( *((_QWORD *)a2 + 1) || *((_QWORD *)a2 + 2) )
      return 3223192391LL;
  }
  else
  {
    if ( v7 == 2 )
    {
      v35 = *((_QWORD *)a2 + 1) == 1536LL;
    }
    else
    {
      if ( v7 != 3 )
        return 3223192391LL;
      v35 = *((_QWORD *)a2 + 1) == 12324LL;
    }
    if ( !v35 || !*((_QWORD *)a2 + 2) )
      return 3223192391LL;
  }
  if ( *(_DWORD *)a3 == 4 )
  {
    v8 = (char *)(*(_QWORD *)(a3 + 16) + 52LL);
  }
  else
  {
    if ( *(_DWORD *)a3 != 5 )
      return 3223192391LL;
    v36 = *(_DWORD **)(a3 + 16);
    v8 = (char *)(v36 + 1);
    *v36 = 1;
  }
  if ( a1 )
  {
    v37 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == *(_DWORD *)a3 )
    {
      if ( v37 == 4 )
      {
        memmove(*(void **)(a3 + 16), a1[2], 0x30uLL);
        *(_DWORD *)(*(_QWORD *)(a3 + 16) + 48LL) = *((_DWORD *)a1[2] + 12);
        v3 = (char *)a1[2] + 52;
      }
      else if ( v37 == 5 )
      {
        v38 = a1[2];
        if ( *v38 == 1 )
          v3 = v38 + 1;
      }
      goto LABEL_8;
    }
    return 3223192391LL;
  }
LABEL_8:
  if ( *a2 == 1 )
  {
    if ( v3 )
      memmove(v8, v3, 0xC000uLL);
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v11 = 4096LL;
    v12 = v8 + 4;
    v39 = 4096LL;
    do
    {
      v13 = 4095 - v9;
      if ( *a2 == 2 )
      {
        v14 = *((_QWORD *)a2 + 2);
        v15 = v10 + 1;
        if ( v9 )
        {
          v16 = ((v13 * *(unsigned __int16 *)(v14 + 2LL * v10) + v9 * (unsigned int)*(unsigned __int16 *)(v14 + 2 * v15))
               * (unsigned __int128)0x10010010010011uLL) >> 64;
          v17 = (v16
               + (((unsigned __int64)(v13 * *(unsigned __int16 *)(v14 + 2LL * v10)
                                    + v9 * (unsigned int)*(unsigned __int16 *)(v14 + 2 * v15))
                 - v16) >> 1)) >> 15;
          v18 = ((v13 * *(unsigned __int16 *)(v14 + 2LL * v10 + 512)
                + v9 * (unsigned int)*(unsigned __int16 *)(v14 + 2 * v15 + 512))
               * (unsigned __int128)0x10010010010011uLL) >> 64;
          v19 = (v18
               + (((unsigned __int64)(v13 * *(unsigned __int16 *)(v14 + 2LL * v10 + 512)
                                    + v9 * (unsigned int)*(unsigned __int16 *)(v14 + 2 * v15 + 512))
                 - v18) >> 1)) >> 15;
          v20 = (v13 * *(unsigned __int16 *)(v14 + 2LL * v10 + 1024)
               + v9 * (unsigned int)*(unsigned __int16 *)(v14 + 2 * v15 + 1024))
              * (unsigned __int128)0x10010010010011uLL;
          v21 = (*((_QWORD *)&v20 + 1)
               + (((unsigned __int64)(v13 * *(unsigned __int16 *)(v14 + 2LL * v10 + 1024)
                                    + v9 * (unsigned int)*(unsigned __int16 *)(v14 + 2 * v15 + 1024))
                 - *((_QWORD *)&v20 + 1)) >> 1)) >> 15;
        }
        else
        {
          LODWORD(v17) = *(unsigned __int16 *)(v14 + 2LL * v10) >> 4;
          LODWORD(v19) = *(unsigned __int16 *)(v14 + 2LL * v10 + 512) >> 4;
          LODWORD(v21) = *(unsigned __int16 *)(v14 + 2LL * v10 + 1024) >> 4;
        }
        v11 = v39;
        v22 = v9 + 255;
        v9 -= 3840;
        if ( v22 < 0xFFF )
        {
          LODWORD(v15) = v10;
          v9 = v22;
        }
        v10 = v15;
        v23 = (float)(int)v17 / 4095.0;
        v24 = (float)(int)v21 / 4095.0;
        v25 = (float)(int)v19 / 4095.0;
      }
      else
      {
        v27 = (float *)*((_QWORD *)a2 + 2);
        if ( v9 )
        {
          v28 = v10 + 1;
          v29 = (float)((float)((float)v9 * v27[3 * v28 + 6]) + (float)((float)v13 * v27[3 * v10 + 6])) / 4095.0;
          v30 = (float)((float)((float)v13 * v27[3 * v10 + 8]) + (float)((float)v9 * v27[3 * v28 + 8])) / 4095.0;
          v31 = (float)((float)((float)v13 * v27[3 * v10 + 7]) + (float)((float)v9 * v27[3 * v28 + 7])) / 4095.0;
        }
        else
        {
          v29 = v27[3 * v10 + 6];
          v31 = v27[3 * v10 + 7];
          v30 = v27[3 * v10 + 8];
        }
        v23 = (float)(v29 * *v27) + v27[3];
        v25 = (float)(v31 * v27[1]) + v27[4];
        v24 = (float)(v30 * v27[2]) + v27[5];
        if ( v23 < 0.0 )
          v32 = 0.0;
        else
          v32 = fminf(1.0, v23);
        LODWORD(v17) = (int)(float)(v32 * 4095.0);
        if ( v25 < 0.0 )
          v33 = 0.0;
        else
          v33 = fminf(1.0, v25);
        LODWORD(v19) = (int)(float)(v33 * 4095.0);
        if ( v24 < 0.0 )
          v34 = 0.0;
        else
          v34 = fminf(1.0, v24);
        v9 += 1024;
        LODWORD(v21) = (int)(float)(v34 * 4095.0);
        if ( (unsigned int)v9 >= 0xFFF )
        {
          v9 -= 4095;
          ++v10;
        }
      }
      if ( v3 )
      {
        *((_DWORD *)v12 - 1) = *((_DWORD *)v3 + 3 * (unsigned int)v17);
        *(_DWORD *)v12 = *((_DWORD *)v3 + 3 * (unsigned int)v19 + 1);
        v24 = *((float *)v3 + 3 * (unsigned int)v21 + 2);
      }
      else
      {
        *((float *)v12 - 1) = v23;
        *(float *)v12 = v25;
      }
      *((float *)v12 + 1) = v24;
      v12 += 12;
      v39 = --v11;
    }
    while ( v11 );
  }
  return 0LL;
}
