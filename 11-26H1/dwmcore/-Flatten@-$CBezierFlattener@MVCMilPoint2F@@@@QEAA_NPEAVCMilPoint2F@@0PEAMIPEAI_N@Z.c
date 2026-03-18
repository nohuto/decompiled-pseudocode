/*
 * XREFs of ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180054480
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x180053FD4 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180054E8C (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 * Callees:
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800543D4 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::Flatten(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        char a7)
{
  unsigned int v7; // r10d
  __int64 v8; // r8
  __int64 v9; // r11
  unsigned __int32 v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  int v16; // eax
  char result; // al
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm0_4

  v7 = a5;
  v8 = 0LL;
  v9 = a2;
  if ( *(int *)(a1 + 80) > 1 )
  {
    v10 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    while ( (unsigned int)v8 < v7 )
    {
      *(float *)(a1 + 48) = *(float *)(a1 + 56) + *(float *)(a1 + 48);
      *(float *)(a1 + 52) = *(float *)(a1 + 60) + *(float *)(a1 + 52);
      v11 = *(float *)(a1 + 68);
      v12 = *(float *)(a1 + 64);
      v13 = v11 + *(float *)(a1 + 60);
      *(float *)(a1 + 56) = v12 + *(float *)(a1 + 56);
      *(float *)(a1 + 60) = v13;
      v14 = v11 + *(float *)(a1 + 68);
      *(float *)(a1 + 64) = v12 + v12;
      *(float *)(a1 + 68) = v14;
      *(float *)(a1 + 64) = (float)(v12 + v12) - *(float *)(a1 + 72);
      *(float *)(a1 + 68) = v14 - *(float *)(a1 + 76);
      *(float *)(a1 + 72) = v12;
      *(float *)(a1 + 76) = v11;
      v15 = *(float *)(a1 + 88) + *(float *)(a1 + 84);
      --*(_DWORD *)(a1 + 80);
      *(float *)(a1 + 84) = v15;
      *(_QWORD *)(v9 + 8 * v8) = *(_QWORD *)(a1 + 48);
      if ( a4 )
        *(_DWORD *)(a4 + 4 * v8) = *(_DWORD *)(a1 + 84);
      v8 = (unsigned int)(v8 + 1);
      if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(a1 + 64) & v10), COERCE_FLOAT(*(_DWORD *)(a1 + 68) & v10)) <= *(float *)(a1 + 32)
        || *(float *)(a1 + 88) <= 0.001 )
      {
        while ( 1 )
        {
          v16 = *(_DWORD *)(a1 + 80);
          if ( (v16 & 1) != 0 )
            break;
          v18 = *(float *)(a1 + 64);
          v19 = *(float *)(a1 + 68);
          v20 = *(float *)(a1 + 72);
          v21 = *(float *)(a1 + 40);
          v22 = *(float *)(a1 + 76);
          v23 = (float)(v18 + v18) - v20;
          v24 = (float)(v19 + v19) - v22;
          if ( v21 < COERCE_FLOAT(LODWORD(v20) & v10)
            || v21 < COERCE_FLOAT(LODWORD(v22) & v10)
            || v21 < COERCE_FLOAT(LODWORD(v23) & v10)
            || v21 < COERCE_FLOAT(LODWORD(v24) & v10) )
          {
            break;
          }
          v25 = (float)(*(float *)(a1 + 60) + *(float *)(a1 + 60)) + v19;
          *(float *)(a1 + 56) = (float)(*(float *)(a1 + 56) + *(float *)(a1 + 56)) + v18;
          *(float *)(a1 + 60) = v25;
          v26 = *(float *)(a1 + 76) * 4.0;
          *(float *)(a1 + 72) = *(float *)(a1 + 72) * 4.0;
          *(float *)(a1 + 76) = v26;
          *(float *)(a1 + 64) = v23 * 4.0;
          *(float *)(a1 + 68) = v24 * 4.0;
          v27 = *(float *)(a1 + 88) + *(float *)(a1 + 88);
          *(_DWORD *)(a1 + 80) = v16 / 2;
          *(float *)(a1 + 88) = v27;
        }
      }
      else
      {
        CBezierFlattener<float,CMilPoint2F>::HalveTheStep(a1);
      }
      if ( *(int *)(a1 + 80) <= 1 )
        goto LABEL_9;
    }
    *a6 = v8;
    return 1;
  }
LABEL_9:
  if ( (unsigned int)v8 >= v7 )
  {
    *a6 = v8;
    return 1;
  }
  if ( a7 )
  {
    *(_QWORD *)(v9 + 8 * v8) = *(_QWORD *)(a1 + 24);
    if ( a4 )
      *(_DWORD *)(a4 + 4 * v8) = 1065353216;
    LODWORD(v8) = v8 + 1;
  }
  result = 0;
  *a6 = v8;
  return result;
}
