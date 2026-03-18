/*
 * XREFs of ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C
 * Callers:
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E1C0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E350 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E560 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004ECC0 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18004EE50 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801A0164 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1801ABB68 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18021644C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     acos_0 @ 0x1802B9690 (acos_0.c)
 *     sin_0 @ 0x1802B9768 (sin_0.c)
 */

void __fastcall KeyframeInterpolation::InterpolateSpherical(
        double a1,
        int a2,
        __m128i *a3,
        __m128 *a4,
        CExpressionValue *a5)
{
  __int64 v5; // r14
  float v10; // xmm11_4
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  float v13; // xmm4_4
  float v14; // xmm1_4
  double v15; // xmm0_8
  __m128 v16; // xmm1
  float v17; // xmm2_4
  int v18; // eax
  unsigned __int64 v19; // xmm0_8
  __int32 v20; // eax
  float v21; // xmm0_4
  unsigned __int64 v22; // xmm1_8
  float v23; // xmm1_4
  double v24; // xmm6_8
  float v25; // xmm1_4
  float v26; // xmm1_4
  __int64 v27; // r8
  const char *v28; // r9
  float v29; // xmm7_4
  __m128 v30; // xmm10
  __m128 v31; // xmm10
  double v32; // xmm0_8
  __m128 v33; // xmm8
  __m128 v34; // xmm8
  __int64 i; // rax
  __int64 j; // rax
  __m128 v37; // xmm0
  __m128 v38; // xmm2
  __m128 v39; // xmm0
  __m128 v40; // xmm3
  float v41; // xmm1_4
  float v42; // xmm4_4
  __m128 v43; // xmm2
  float v44; // xmm1_4
  __m128 v45; // xmm6
  float v46; // xmm9_4
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm8_4
  float v50; // xmm6_4
  float v51; // xmm6_4
  float v52; // xmm8_4
  float v53; // xmm8_4
  __m128 v54; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v55; // [rsp+48h] [rbp-C0h] BYREF
  float v56; // [rsp+58h] [rbp-B0h] BYREF
  float v57; // [rsp+5Ch] [rbp-ACh]
  float v58; // [rsp+60h] [rbp-A8h]
  float v59; // [rsp+64h] [rbp-A4h]
  int v60; // [rsp+98h] [rbp-70h]
  void *retaddr; // [rsp+150h] [rbp+48h]

  v5 = 0LL;
  v60 = 0;
  v10 = FLOAT_1_0;
  if ( a2 != 18 )
  {
    if ( a2 == 35 )
    {
      v22 = a4->m128_u64[0];
      v54.m128_u64[0] = a3->m128i_i64[0];
      v55.m128i_i64[0] = v22;
      D3DXVec2Normalize((struct D2DVector2 *)&v54, (const struct D2DVector2 *)&v54);
      D3DXVec2Normalize((struct D2DVector2 *)&v55, (const struct D2DVector2 *)&v55);
      v23 = (float)(*(float *)&v55.m128i_i32[1] * v54.m128_f32[1]) + (float)(*(float *)v55.m128i_i32 * v54.m128_f32[0]);
      v21 = FLOAT_N1_0;
      if ( v23 >= -1.0 )
        v21 = fminf(1.0, v23);
    }
    else
    {
      switch ( a2 )
      {
        case '4':
          v18 = a3->m128i_i32[2];
          v55.m128i_i64[0] = a3->m128i_i64[0];
          v19 = a4->m128_u64[0];
          v55.m128i_i32[2] = v18;
          v20 = a4->m128_i32[2];
          v54.m128_u64[0] = v19;
          v54.m128_i32[2] = v20;
          D3DXVec3Normalize((struct D2DVector3 *)&v55, (const struct D2DVector3 *)&v55);
          D3DXVec3Normalize((struct D2DVector3 *)&v54, (const struct D2DVector3 *)&v54);
          v17 = (float)((float)(v54.m128_f32[0] * *(float *)v55.m128i_i32)
                      + (float)(v54.m128_f32[1] * *(float *)&v55.m128i_i32[1]))
              + (float)(v54.m128_f32[2] * *(float *)&v55.m128i_i32[2]);
          break;
        case 'E':
          v16 = *a4;
          v55 = *a3;
          v54 = v16;
          D3DXVec4Normalize((struct D2DVector4 *)&v55, (const struct D2DVector4 *)&v55);
          D3DXVec4Normalize((struct D2DVector4 *)&v54, (const struct D2DVector4 *)&v54);
          v17 = (float)((float)((float)(v54.m128_f32[1] * *(float *)&v55.m128i_i32[1])
                              + (float)(v54.m128_f32[0] * *(float *)v55.m128i_i32))
                      + (float)(v54.m128_f32[2] * *(float *)&v55.m128i_i32[2]))
              + (float)(v54.m128_f32[3] * *(float *)&v55.m128i_i32[3]);
          break;
        case 'G':
          v11 = (__m128)_mm_loadu_si128(a3);
          v12 = (__m128)_mm_loadu_si128((const __m128i *)a4);
          v10 = FLOAT_N1_0;
          v13 = (float)((float)((float)(_mm_shuffle_ps(v12, v12, 85).m128_f32[0]
                                      * _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
                              + (float)(v12.m128_f32[0] * v11.m128_f32[0]))
                      + (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] * _mm_shuffle_ps(v11, v11, 170).m128_f32[0]))
              + (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] * _mm_shuffle_ps(v11, v11, 255).m128_f32[0]);
          if ( v13 >= -1.0 )
          {
            v14 = fminf(1.0, v13);
            if ( v14 >= 0.0 )
              v10 = FLOAT_1_0;
          }
          else
          {
            v14 = FLOAT_N1_0;
          }
          v15 = v14;
          goto LABEL_19;
        default:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
      v21 = FLOAT_N1_0;
      if ( v17 >= -1.0 )
        v21 = fminf(1.0, v17);
    }
    v15 = v21;
LABEL_19:
    v24 = acos_0(v15);
    goto LABEL_21;
  }
  v24 = 0.0;
LABEL_21:
  v25 = v24;
  if ( COERCE_FLOAT(LODWORD(v25) & _xmm) >= 0.0000011920929 )
  {
    v29 = sin_0(v24);
    v30 = 0LL;
    v30.m128_f32[0] = sin_0(a1 * v24);
    v31 = _mm_shuffle_ps(v30, v30, 0);
    v32 = sin_0((1.0 - a1) * v24);
    v33 = 0LL;
    v33.m128_f32[0] = v32;
    v34 = _mm_shuffle_ps(v33, v33, 0);
    switch ( a2 )
    {
      case 18:
        v53 = (float)((float)((float)(v34.m128_f32[0] * *(float *)a3->m128i_i32) * v10)
                    + (float)(v31.m128_f32[0] * a4->m128_f32[0]))
            / v29;
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v56);
        v60 = 18;
        v56 = v53;
        break;
      case 35:
        v51 = (float)((float)((float)(v34.m128_f32[0] * *(float *)a3->m128i_i32) * v10)
                    + (float)(v31.m128_f32[0] * a4->m128_f32[0]))
            * (float)(1.0 / v29);
        v52 = (float)((float)((float)(v34.m128_f32[0] * *(float *)&a3->m128i_i32[1]) * v10)
                    + (float)(v31.m128_f32[0] * a4->m128_f32[1]))
            * (float)(1.0 / v29);
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v56);
        v56 = v51;
        v57 = v52;
        v60 = 35;
        break;
      case 52:
        v46 = 1.0 / v29;
        v47 = v34.m128_f32[0] * *(float *)&a3->m128i_i32[1];
        v48 = (float)((float)((float)(v34.m128_f32[0] * *(float *)a3->m128i_i32) * v10)
                    + (float)(v31.m128_f32[0] * a4->m128_f32[0]))
            * (float)(1.0 / v29);
        v49 = (float)((float)((float)(v34.m128_f32[0] * *(float *)&a3->m128i_i32[2]) * v10)
                    + (float)(v31.m128_f32[0] * a4->m128_f32[2]))
            * v46;
        v50 = (float)((float)(v47 * v10) + (float)(v31.m128_f32[0] * a4->m128_f32[1])) * v46;
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v56);
        v56 = v48;
        v57 = v50;
        v58 = v49;
        v60 = 52;
        break;
      case 69:
        v37 = _mm_mul_ps(*(__m128 *)a3, v34);
        v54 = v37;
        v38 = v37;
        v54.m128_f32[0] = v37.m128_f32[0] * v10;
        v54.m128_f32[2] = _mm_shuffle_ps(v37, v37, 170).m128_f32[0] * v10;
        v39 = *a4;
        v54.m128_f32[1] = _mm_shuffle_ps(v38, v38, 85).m128_f32[0] * v10;
        v40 = _mm_mul_ps(v39, v31);
        v54.m128_f32[3] = _mm_shuffle_ps(v38, v38, 255).m128_f32[0] * v10;
        v41 = _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
        v38.m128_f32[0] = _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
        v42 = _mm_shuffle_ps(v54, v54, 255).m128_f32[0];
        v54.m128_f32[0] = v54.m128_f32[0] + v40.m128_f32[0];
        v54.m128_f32[1] = v41 + _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
        v54.m128_f32[2] = v38.m128_f32[0] + _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
        v54.m128_f32[3] = v42 + _mm_shuffle_ps(v40, v40, 255).m128_f32[0];
        v43 = v54;
        v44 = _mm_shuffle_ps(v54, v54, 85).m128_f32[0] * (float)(1.0 / v29);
        v54.m128_f32[0] = v54.m128_f32[0] * (float)(1.0 / v29);
        v54.m128_f32[3] = _mm_shuffle_ps(v43, v43, 255).m128_f32[0] * (float)(1.0 / v29);
        v54.m128_f32[1] = v44;
        v54.m128_f32[2] = _mm_shuffle_ps(v43, v43, 170).m128_f32[0] * (float)(1.0 / v29);
        v45 = v54;
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v56);
        v56 = v45.m128_f32[0];
        LODWORD(v59) = _mm_shuffle_ps(v45, v45, 255).m128_u32[0];
        LODWORD(v57) = _mm_shuffle_ps(v45, v45, 85).m128_u32[0];
        LODWORD(v58) = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
        v60 = 69;
        break;
      case 71:
        for ( i = 0LL; i < 4; ++i )
          v54.m128_f32[i] = v34.m128_f32[0] * *(float *)&a3->m128i_i32[i];
        for ( j = 0LL; j < 4; ++j )
          *(float *)&v55.m128i_i32[j] = v10 * v54.m128_f32[j];
        do
        {
          v54.m128_f32[v5] = v31.m128_f32[0] * a4->m128_f32[v5];
          ++v5;
        }
        while ( v5 < 4 );
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v56);
        v60 = 71;
        v56 = (float)(v54.m128_f32[0] + *(float *)v55.m128i_i32) * (float)(1.0 / v29);
        v57 = (float)(v54.m128_f32[1] + *(float *)&v55.m128i_i32[1]) * (float)(1.0 / v29);
        v58 = (float)(v54.m128_f32[2] + *(float *)&v55.m128i_i32[2]) * (float)(1.0 / v29);
        v59 = (float)(v54.m128_f32[3] + *(float *)&v55.m128i_i32[3]) * (float)(1.0 / v29);
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
  else
  {
    v26 = a1;
    KeyframeInterpolation::ExpressionValueLerp(a2, v26, (__m128 *)a3, a4->m128_f32, (CExpressionValue *)&v56);
  }
  CExpressionValue::CopyFrom(a5, (const struct CExpressionValue *)&v56, v27, v28);
  CExpressionValue::DestroyCurrent((CExpressionValue *)&v56);
}
