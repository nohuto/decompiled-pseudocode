/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1801B0790
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  float v7; // xmm1_4
  __m128 v8; // xmm6
  __m128 v9; // xmm7
  float v11; // xmm6_4
  int v12; // eax
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  float v16; // xmm2_4
  __int128 v17; // [rsp+30h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v3 = *((_DWORD *)this + 24);
  if ( a2 > v3 || !v3 )
  {
    v4 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147483637,
      0x11EFu,
      0LL);
    return v4;
  }
  if ( a2 > 1 )
  {
    v3 = v3 - a2 + 1;
    *((_DWORD *)this + 24) = v3;
  }
  v5 = 9LL * (v3 - 1);
  v6 = *(_QWORD *)this + 72LL * (v3 - 1);
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      if ( *(_DWORD *)(v6 + 64) == 18 )
      {
        v12 = *(_DWORD *)(v6 + 136);
        if ( v12 == 18 )
        {
          v7 = *(float *)(v6 + 72);
          goto LABEL_11;
        }
        if ( v12 == 35 )
        {
          v13 = *(float *)v6;
          v14 = (float)(1.0 - *(float *)v6) * *(float *)(v6 + 76);
          v15 = (float)(1.0 - *(float *)v6) * *(float *)(v6 + 72);
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)this + 8 * v5));
          *(_DWORD *)(v6 + 64) = 104;
          *(float *)v6 = v13;
          *(_QWORD *)(v6 + 4) = 0LL;
          *(float *)(v6 + 12) = v13;
          *(float *)(v6 + 16) = v15;
          *(float *)(v6 + 20) = v14;
          return 0;
        }
LABEL_15:
        v4 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          0x1241u,
          0LL);
        return v4;
      }
      if ( *(_DWORD *)(v6 + 64) != 35 || *(_DWORD *)(v6 + 136) != 35 )
        goto LABEL_15;
      v8 = (__m128)*(unsigned int *)(v6 + 72);
      v9 = (__m128)*(unsigned int *)(v6 + 76);
      v16 = *(float *)(v6 + 4);
    }
    else
    {
      if ( a2 != 3 || *(_DWORD *)(v6 + 64) != 18 || *(_DWORD *)(v6 + 136) != 18 || *(_DWORD *)(v6 + 208) != 35 )
        goto LABEL_15;
      v8 = (__m128)*(unsigned int *)(v6 + 144);
      v9 = (__m128)*(unsigned int *)(v6 + 148);
      v16 = *(float *)(v6 + 72);
    }
    LODWORD(v17) = *(_DWORD *)v6;
    *((float *)&v17 + 3) = v16;
    v8.m128_f32[0] = v8.m128_f32[0] - (float)(*(float *)v6 * v8.m128_f32[0]);
    v9.m128_f32[0] = v9.m128_f32[0] - (float)(v16 * v9.m128_f32[0]);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v6 + 64) == 18 )
  {
    v11 = *(float *)v6;
    CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)this + 72LL * (v3 - 1)));
    *(_DWORD *)(v6 + 64) = 104;
    *(float *)v6 = v11;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(float *)(v6 + 12) = v11;
    *(_QWORD *)(v6 + 16) = 0LL;
    return 0;
  }
  if ( *(_DWORD *)(v6 + 64) != 35 )
    goto LABEL_15;
  v7 = *(float *)(v6 + 4);
LABEL_11:
  v9 = 0LL;
  LODWORD(v17) = *(_DWORD *)v6;
  v8 = 0LL;
  *((float *)&v17 + 3) = v7;
  v8.m128_f32[0] = 0.0 - (float)(*(float *)v6 * 0.0);
  v9.m128_f32[0] = 0.0 - (float)(v7 * 0.0);
LABEL_12:
  *(_QWORD *)((char *)&v17 + 4) = 0LL;
  CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
  *(_DWORD *)(v6 + 64) = 104;
  *(_OWORD *)v6 = v17;
  *(_QWORD *)(v6 + 16) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
  return 0;
}
