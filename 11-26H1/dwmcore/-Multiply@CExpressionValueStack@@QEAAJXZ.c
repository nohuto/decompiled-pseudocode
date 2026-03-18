/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18010A690
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x180108964 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18010AA80 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18010AE9C (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ @ 0x18010B120 (-PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 result; // rax
  unsigned int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  const struct D2DQuaternion *v7; // rdx
  int v8; // ecx
  float v9; // xmm0_4
  float v10; // xmm9_4
  float v11; // xmm5_4
  float v12; // xmm8_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm7_4
  float v17; // xmm4_4
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned int v21; // ebx
  float v22; // xmm7_4
  float v23; // xmm6_4
  __int128 v24; // xmm0
  float v25; // xmm8_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  __m128 v28; // xmm9
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  __m128 v32; // xmm9
  __m128 v33; // xmm9
  __m128 v34; // xmm9
  __int128 v35; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD v36[4]; // [rsp+40h] [rbp-B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 < 2 )
  {
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
      0x237u,
      0LL);
    return 2147483659LL;
  }
  v4 = v1 - 1;
  *((_DWORD *)this + 24) = v4;
  v5 = *(_QWORD *)this + 72LL * (v4 - 1);
  v6 = *(_DWORD *)(v5 + 64);
  v7 = (const struct D2DQuaternion *)(v5 + 72);
  v8 = *(_DWORD *)(v5 + 136);
  if ( v6 == v8 )
  {
    switch ( v6 )
    {
      case 18:
        v9 = *(float *)v7 * *(float *)v5;
        *(_DWORD *)(v5 + 64) = 18;
        *(float *)v5 = v9;
        break;
      case 104:
        v10 = *(float *)(v5 + 80);
        v11 = *(float *)v5;
        v12 = *(float *)(v5 + 8);
        v13 = *(float *)v7;
        v14 = *(float *)(v5 + 76);
        v15 = *(float *)(v5 + 84);
        v16 = (float)((float)(v10 * *(float *)(v5 + 20)) + (float)(*(float *)v7 * *(float *)(v5 + 16)))
            + *(float *)(v5 + 88);
        v17 = (float)((float)(v15 * *(float *)(v5 + 20)) + (float)(v14 * *(float *)(v5 + 16))) + *(float *)(v5 + 92);
        *(_DWORD *)(v5 + 64) = 104;
        *(float *)v5 = (float)(v10 * *(float *)(v5 + 4)) + (float)(v13 * v11);
        *(float *)(v5 + 4) = (float)(v15 * *(float *)(v5 + 4)) + (float)(v14 * v11);
        *(float *)(v5 + 8) = (float)(v10 * *(float *)(v5 + 12)) + (float)(v13 * v12);
        *(float *)(v5 + 12) = (float)(v15 * *(float *)(v5 + 12)) + (float)(v14 * v12);
        *(float *)(v5 + 16) = v16;
        *(float *)(v5 + 20) = v17;
        break;
      case 265:
        D2DMatrixMultiply((struct D2DMatrix *)v36, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)(v5 + 72));
        CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
        v18 = v36[1];
        *(_OWORD *)v5 = v36[0];
        *(_DWORD *)(v5 + 64) = 265;
        v19 = v36[2];
        *(_OWORD *)(v5 + 16) = v18;
        v20 = v36[3];
        *(_OWORD *)(v5 + 32) = v19;
        *(_OWORD *)(v5 + 48) = v20;
        break;
      case 35:
        v22 = *(float *)v7 * *(float *)v5;
        v23 = *(float *)(v5 + 76) * *(float *)(v5 + 4);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
        *(float *)v5 = v22;
        *(float *)(v5 + 4) = v23;
        *(_DWORD *)(v5 + 64) = 35;
        break;
      case 52:
        v25 = *(float *)v7 * *(float *)v5;
        v26 = *(float *)(v5 + 76) * *(float *)(v5 + 4);
        v27 = *(float *)(v5 + 80) * *(float *)(v5 + 8);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
        *(_DWORD *)(v5 + 64) = 52;
        *(float *)v5 = v25;
        *(float *)(v5 + 4) = v26;
        *(float *)(v5 + 8) = v27;
        break;
      case 71:
        D3DXQuaternionMultiply((struct D2DQuaternion *)&v35, v7, (const struct D2DQuaternion *)v5);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
        v24 = v35;
        *(_DWORD *)(v5 + 64) = 71;
        *(_OWORD *)v5 = v24;
        break;
      case 69:
        v28 = (__m128)*(unsigned int *)v7;
        v28.m128_f32[0] = v28.m128_f32[0] * *(float *)v5;
        v29 = *(float *)(v5 + 4) * *(float *)(v5 + 76);
        v30 = *(float *)(v5 + 8) * *(float *)(v5 + 80);
        v31 = *(float *)(v5 + 12) * *(float *)(v5 + 84);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
        v32 = _mm_shuffle_ps(v28, v28, 225);
        v32.m128_f32[0] = v29;
        *(_DWORD *)(v5 + 64) = 69;
        v33 = _mm_shuffle_ps(v32, v32, 198);
        v33.m128_f32[0] = v30;
        v34 = _mm_shuffle_ps(v33, v33, 39);
        v34.m128_f32[0] = v31;
        *(__m128 *)v5 = _mm_shuffle_ps(v34, v34, 57);
        break;
      default:
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          0x28Du,
          0LL);
        return 2147500037LL;
    }
    return 0LL;
  }
  else if ( v8 == 18 || v6 == 18 )
  {
    CExpressionValueStack::PushStackValue(this);
    result = CExpressionValueStack::Scale(this);
    v21 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        result,
        0x29Au,
        0LL);
      return v21;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x2A4u,
      0LL);
    return 2147500037LL;
  }
  return result;
}
