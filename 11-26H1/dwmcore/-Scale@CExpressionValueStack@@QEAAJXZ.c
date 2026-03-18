/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18010AE9C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18010A690 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x180292BE4 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // esi
  int v3; // r9d
  unsigned int v5; // eax
  __int64 v6; // rdi
  float *v7; // rdx
  __m128 *v8; // rax
  _DWORD *v9; // rbx
  __int32 v10; // ecx
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  _OWORD *v16; // rbx
  __m128 v17; // xmm11
  __m128 v18; // xmm10
  float v19; // xmm6_4
  __m128 v20; // xmm6
  unsigned int v21; // [rsp+20h] [rbp-B8h]
  _BYTE v22[160]; // [rsp+30h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v5 = v1 - 1;
    v2 = 0;
    *((_DWORD *)this + 24) = v5;
    v6 = *(_QWORD *)this + 72LL * (v5 - 1);
    v7 = (float *)(v6 + 72);
    v8 = (__m128 *)v6;
    v9 = (_DWORD *)(v6 + 64);
    if ( *(_DWORD *)(v6 + 136) != 18 )
    {
      if ( *v9 != 18 )
      {
        v21 = 1943;
        goto LABEL_15;
      }
      v8 = (__m128 *)(v6 + 72);
      v7 = (float *)v6;
    }
    v10 = v8[4].m128_i32[0];
    switch ( v10 )
    {
      case 35:
        v11 = *v7 * v8->m128_f32[1];
        v12 = *v7 * v8->m128_f32[0];
        CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
        *(float *)(v6 + 4) = v11;
        *v9 = 35;
LABEL_10:
        *(float *)v6 = v12;
        return v2;
      case 52:
        v13 = *v7 * v8->m128_f32[0];
        v14 = *v7 * v8->m128_f32[1];
        v15 = *v7 * v8->m128_f32[2];
        CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
        *v9 = 52;
        *(float *)v6 = v13;
        *(float *)(v6 + 4) = v14;
        *(float *)(v6 + 8) = v15;
        return v2;
      case 18:
        v12 = *v7 * v8->m128_f32[0];
        CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
        *v9 = 18;
        goto LABEL_10;
      case 69:
        v20 = _mm_mul_ps(_mm_shuffle_ps((__m128)*(unsigned int *)v7, (__m128)*(unsigned int *)v7, 0), *v8);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
        *v9 = 69;
        *(__m128 *)v6 = v20;
        return v2;
      case 104:
        v17 = _mm_shuffle_ps((__m128)*(unsigned int *)v7, (__m128)*(unsigned int *)v7, 0);
        v18 = _mm_mul_ps(*v8, v17);
        v19 = v17.m128_f32[0] * v8[1].m128_f32[0];
        v17.m128_f32[0] = v17.m128_f32[0] * v8[1].m128_f32[1];
        CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
        *(_DWORD *)(v6 + 64) = 104;
        *(__m128 *)v6 = v18;
        *(float *)(v6 + 16) = v19;
        *(_DWORD *)(v6 + 20) = v17.m128_i32[0];
        return v2;
      case 265:
        v16 = (_OWORD *)D2DMatrix::operator*(v8, v22);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
        *(_DWORD *)(v6 + 64) = 265;
        *(_OWORD *)v6 = *v16;
        *(_OWORD *)(v6 + 16) = v16[1];
        *(_OWORD *)(v6 + 32) = v16[2];
        *(_OWORD *)(v6 + 48) = v16[3];
        return v2;
    }
    v21 = 2005;
LABEL_15:
    v3 = -2147467259;
    v2 = -2147467259;
    goto LABEL_3;
  }
  v2 = -2147483637;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
    (const char *)0x8000000BLL);
  v3 = -2147483637;
  v21 = 1917;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v21, 0LL);
  return v2;
}
