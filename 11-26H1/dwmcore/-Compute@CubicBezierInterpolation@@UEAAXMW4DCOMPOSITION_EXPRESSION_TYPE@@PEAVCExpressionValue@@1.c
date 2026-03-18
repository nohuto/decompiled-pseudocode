/*
 * XREFs of ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E560
 * Callers:
 *     <none>
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18004EE50 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___ @ 0x18028A09C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_1___.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___ @ 0x18028A18C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_2___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CubicBezierInterpolation::Compute(
        __int64 a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        CExpressionValue *a6)
{
  int v6; // eax
  unsigned __int32 v7; // xmm12_4
  double v8; // xmm9_8
  double v9; // xmm15_8
  __int128 v10; // xmm7
  __int128 v11; // xmm4
  double v12; // xmm10_8
  double v13; // xmm11_8
  double v14; // xmm6_8
  double v15; // xmm2_8
  double v16; // xmm6_8
  double v17; // xmm5_8
  float v18; // xmm0_4
  double v19; // xmm6_8
  __int128 v20; // xmm5
  double v21; // xmm0_8
  float v22; // xmm1_4
  double v23; // xmm0_8
  double v24; // xmm1_8
  double v25; // xmm5_8
  double v26; // xmm0_8
  float v27; // xmm1_4
  double v28; // xmm0_8
  double v29; // xmm1_8
  double v30; // xmm5_8
  double v31; // xmm0_8
  float v32; // xmm1_4
  double v33; // xmm0_8
  double v34; // xmm1_8
  double v35; // xmm5_8
  double v36; // xmm0_8
  float v37; // xmm1_4
  double v38; // xmm0_8
  double v39; // xmm1_8
  double v40; // xmm0_8
  float v41; // xmm1_4
  double v42; // xmm0_8
  double v43; // xmm2_8
  double v44; // xmm6_8
  double v45; // xmm0_8
  float v46; // xmm1_4
  __int64 result; // rax
  char r_low; // di
  void *retaddr; // [rsp+F8h] [rbp+0h]
  double v50; // [rsp+100h] [rbp+8h]

  v10 = 0LL;
  v6 = 0;
  v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v8 = *(float *)(a1 + 32);
  v9 = *(float *)(a1 + 24);
  *(double *)&v10 = a2;
  v11 = v10;
  v12 = v8 - v9;
  v13 = 1.0 - v8;
  do
  {
    v14 = (1.0 - *(double *)&v11) * 3.0;
    v15 = v14 * (1.0 - *(double *)&v11) * v9;
    v16 = v14 * (*(double *)&v11 * *(double *)&v11) * v8
        + v15 * *(double *)&v11
        + *(double *)&v11 * *(double *)&v11 * *(double *)&v11;
    v17 = (1.0 - *(double *)&v11) * 6.0 * *(double *)&v11 * v12 + v15 + *(double *)&v11 * *(double *)&v11 * 3.0 * v13;
    v18 = v17;
    if ( COERCE_FLOAT(LODWORD(v18) & v7) < 0.0000011920929 )
      break;
    v19 = (v16 - *(double *)&v10) / v17;
    *((_QWORD *)&v20 + 1) = *((_QWORD *)&v11 + 1);
    *(double *)&v20 = *(double *)&v11 - v19;
    v21 = *(double *)&v11 - (*(double *)&v11 - v19);
    *(double *)&v11 = *(double *)&v11 - v19;
    v22 = v21;
    if ( COERCE_FLOAT(LODWORD(v22) & v7) < 0.0000011920929 )
      break;
    v23 = (1.0 - *(double *)&v20) * 3.0;
    v24 = (1.0 - *(double *)&v20) * 6.0 * *(double *)&v20 * v12
        + (1.0 - *(double *)&v20) * v23 * v9
        + *(double *)&v20 * *(double *)&v20 * 3.0 * v13;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v24) & v7) < 0.0000011920929 )
      break;
    v25 = *(double *)&v20
        - (*(double *)&v20 * *(double *)&v20 * v23 * v8
         + (1.0 - *(double *)&v20) * v23 * v9 * *(double *)&v20
         + *(double *)&v20 * *(double *)&v20 * *(double *)&v20
         - *(double *)&v10)
        / v24;
    v26 = *(double *)&v11 - v25;
    *(double *)&v11 = v25;
    v27 = v26;
    if ( COERCE_FLOAT(LODWORD(v27) & v7) < 0.0000011920929 )
      break;
    v28 = (1.0 - v25) * 3.0;
    v29 = (1.0 - v25) * 6.0 * v25 * v12 + (1.0 - v25) * v28 * v9 + v25 * v25 * 3.0 * v13;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v29) & v7) < 0.0000011920929 )
      break;
    v30 = v25 - (v25 * v25 * v28 * v8 + (1.0 - v25) * v28 * v9 * v25 + v25 * v25 * v25 - *(double *)&v10) / v29;
    v31 = *(double *)&v11 - v30;
    *(double *)&v11 = v30;
    v32 = v31;
    if ( COERCE_FLOAT(LODWORD(v32) & v7) < 0.0000011920929 )
      break;
    v33 = (1.0 - v30) * 3.0;
    v34 = (1.0 - v30) * 6.0 * v30 * v12 + (1.0 - v30) * v33 * v9 + v30 * v30 * 3.0 * v13;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v34) & v7) < 0.0000011920929 )
      break;
    v35 = v30 - (v30 * v30 * v33 * v8 + (1.0 - v30) * v33 * v9 * v30 + v30 * v30 * v30 - *(double *)&v10) / v34;
    v36 = *(double *)&v11 - v35;
    *(double *)&v11 = v35;
    v37 = v36;
    if ( COERCE_FLOAT(LODWORD(v37) & v7) < 0.0000011920929 )
      break;
    v38 = (1.0 - v35) * 3.0;
    v39 = (1.0 - v35) * 6.0 * v35 * v12 + (1.0 - v35) * v38 * v9 + v35 * v35 * 3.0 * v13;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v39) & v7) < 0.0000011920929 )
      break;
    *(double *)&v20 = v35
                    - (v35 * v35 * v38 * v8 + (1.0 - v35) * v38 * v9 * v35 + v35 * v35 * v35 - *(double *)&v10) / v39;
    v40 = *(double *)&v11 - *(double *)&v20;
    *(_QWORD *)&v11 = v20;
    v41 = v40;
    if ( COERCE_FLOAT(LODWORD(v41) & v7) < 0.0000011920929 )
      break;
    v42 = (1.0 - *(double *)&v20) * 3.0;
    v43 = (1.0 - *(double *)&v20) * v42 * v9;
    v44 = (1.0 - *(double *)&v20) * 6.0 * *(double *)&v20 * v12 + v43 + *(double *)&v20 * *(double *)&v20 * 3.0 * v13;
    v50 = *(double *)&v20 * *(double *)&v20 * v42 * v8
        + v43 * *(double *)&v20
        + *(double *)&v20 * *(double *)&v20 * *(double *)&v20;
    *(float *)&v42 = v44;
    if ( COERCE_FLOAT(LODWORD(v42) & v7) < 0.0000011920929 )
      break;
    *(double *)&v20 = *(double *)&v20 - (v50 - *(double *)&v10) / v44;
    v45 = *(double *)&v11 - *(double *)&v20;
    v11 = v20;
    v46 = v45;
    if ( COERCE_FLOAT(LODWORD(v46) & v7) < 0.0000011920929 )
      break;
    v6 += 6;
  }
  while ( v6 < 30 );
  result = *(int *)(a1 + 16);
  if ( (_DWORD)result == 4 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, a3, a4, a5, a6);
  switch ( (int)result )
  {
    case 0:
      return KeyframeInterpolation::ExpressionValueLerp(a3, a3, a4, a5, a6);
    case 1:
      return KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
    case 2:
      return KeyframeInterpolation::InterpolateHsl(a1, a3, a4, a5, a6);
    case 3:
      return InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___(a4, a5, a6);
    case 5:
      return InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___(a4, a5, a6);
    case 6:
      if ( (1.0 - *(double *)&v11) * 3.0 * (1.0 - *(double *)&v11) * *(float *)(a1 + 28) * *(double *)&v11
         + (1.0 - *(double *)&v11) * 3.0 * (*(double *)&v11 * *(double *)&v11) * *(float *)(a1 + 36)
         + *(double *)&v11 * *(double *)&v11 * *(double *)&v11 >= 1.0 )
      {
        result = (__int64)a5;
        r_low = LOBYTE(a5->r);
        if ( *((_DWORD *)a6 + 16) != 11 )
          goto LABEL_20;
      }
      else
      {
        r_low = LOBYTE(a4->r);
        if ( *((_DWORD *)a6 + 16) != 11 )
          goto LABEL_20;
      }
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a6 + 16LL))(*(_QWORD *)a6, a3);
LABEL_20:
      *((_DWORD *)a6 + 16) = 17;
      *(_BYTE *)a6 = r_low;
      break;
    default:
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  return result;
}
