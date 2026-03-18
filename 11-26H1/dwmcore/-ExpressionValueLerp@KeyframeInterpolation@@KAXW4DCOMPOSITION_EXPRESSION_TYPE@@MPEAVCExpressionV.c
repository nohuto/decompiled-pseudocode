/*
 * XREFs of ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18004EE50
 * Callers:
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E1C0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E350 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E560 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004ECC0 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___ @ 0x18028A18C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_2___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetPathValue@CExpressionValue@@QEBAPEBVCPathData@@XZ @ 0x18004F358 (-GetPathValue@CExpressionValue@@QEBAPEBVCPathData@@XZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyframeInterpolation::ExpressionValueLerp(
        int a1,
        float a2,
        __m128 *a3,
        float *a4,
        CExpressionValue *a5)
{
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  __m128 v10; // xmm2
  __m128 v11; // xmm6
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm8_4
  float v18; // xmm6_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  const struct CPathData *PathValue; // rbx
  const struct CPathData *v23; // rax
  int v24; // eax
  struct CPathData *v25; // rbx
  float v26; // xmm6_4
  __m128 v27; // xmm9
  float v28; // xmm8_4
  float v29; // xmm7_4
  float v30; // xmm6_4
  __m128 v31; // xmm9
  __m128 v32; // xmm9
  __m128 v33; // xmm9
  float v34; // xmm9_4
  float v35; // xmm8_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  struct CPathData *v38[2]; // [rsp+30h] [rbp-78h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  if ( a1 != a3[4].m128_i32[0] || a1 != *((_DWORD *)a4 + 16) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( a1 == 18 )
  {
    v6 = a3->m128_f32[0];
    v7 = *a4;
    if ( *((_DWORD *)a5 + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a5 + 16LL))(*(_QWORD *)a5);
    *((_DWORD *)a5 + 16) = 18;
    *(float *)a5 = (float)((float)(v7 - v6) * a2) + v6;
  }
  else if ( a1 == 35 )
  {
    v8 = (float)((float)(*a4 - a3->m128_f32[0]) * a2) + a3->m128_f32[0];
    v9 = (float)((float)(a4[1] - a3->m128_f32[1]) * a2) + a3->m128_f32[1];
    if ( *((_DWORD *)a5 + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a5 + 16LL))(*(_QWORD *)a5);
    *(float *)a5 = v8;
    *((float *)a5 + 1) = v9;
    *((_DWORD *)a5 + 16) = 35;
  }
  else
  {
    switch ( a1 )
    {
      case 11:
        v38[0] = 0LL;
        PathValue = CExpressionValue::GetPathValue((CExpressionValue *)a4);
        v23 = CExpressionValue::GetPathValue((CExpressionValue *)a3);
        v24 = CInterpolatePathsOperation::Interpolate((CInterpolatePathsOperation *)v38, v23, PathValue, a2, v38);
        if ( v24 < 0 )
          ModuleFailFastForHRESULT(v24, retaddr);
        CExpressionValue::DestroyCurrent(a5);
        v25 = v38[0];
        if ( v38[0] )
        {
          *((_DWORD *)a5 + 16) = 11;
          *(_QWORD *)a5 = v25;
          (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v25 + 8LL))(v25);
          (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v25 + 16LL))(v25);
        }
        else
        {
          *((_DWORD *)a5 + 16) = 0;
        }
        break;
      case 42:
        v26 = (float)((float)(*a4 - a3->m128_f32[0]) * a2) + a3->m128_f32[0];
        CExpressionValue::DestroyCurrent(a5);
        *((_DWORD *)a5 + 16) = 42;
        *(float *)a5 = v26;
        break;
      case 52:
        v19 = (float)((float)(*a4 - a3->m128_f32[0]) * a2) + a3->m128_f32[0];
        v20 = (float)((float)(a4[1] - a3->m128_f32[1]) * a2) + a3->m128_f32[1];
        v21 = (float)((float)(a4[2] - a3->m128_f32[2]) * a2) + a3->m128_f32[2];
        if ( *((_DWORD *)a5 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a5 + 16LL))(*(_QWORD *)a5);
        *((_DWORD *)a5 + 16) = 52;
        *(float *)a5 = v19;
        *((float *)a5 + 1) = v20;
        *((float *)a5 + 2) = v21;
        break;
      case 69:
        v27 = (__m128)*(unsigned int *)a4;
        v27.m128_f32[0] = (float)((float)(v27.m128_f32[0] - a3->m128_f32[0]) * a2) + a3->m128_f32[0];
        v28 = (float)((float)(a4[1] - a3->m128_f32[1]) * a2) + a3->m128_f32[1];
        v29 = (float)((float)(a4[2] - a3->m128_f32[2]) * a2) + a3->m128_f32[2];
        v30 = (float)((float)(a4[3] - a3->m128_f32[3]) * a2) + a3->m128_f32[3];
        CExpressionValue::DestroyCurrent(a5);
        v31 = _mm_shuffle_ps(v27, v27, 225);
        v31.m128_f32[0] = v28;
        *((_DWORD *)a5 + 16) = 69;
        v32 = _mm_shuffle_ps(v31, v31, 198);
        v32.m128_f32[0] = v29;
        v33 = _mm_shuffle_ps(v32, v32, 39);
        v33.m128_f32[0] = v30;
        *(__m128 *)a5 = _mm_shuffle_ps(v33, v33, 57);
        break;
      case 70:
        v10 = *a3;
        v11 = *(__m128 *)a4;
        v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
        v13 = fmaxf(0.0, fminf(a2, 1.0));
        v14 = (float)((float)(COERCE_FLOAT(*(_OWORD *)a4) - COERCE_FLOAT(*a3)) * v13) + COERCE_FLOAT(*a3);
        v15 = (float)((float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0] - v12) * v13) + v12;
        v16 = _mm_shuffle_ps(*a3, *a3, 170).m128_f32[0];
        v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 255).m128_f32[0];
        v17 = (float)((float)(_mm_shuffle_ps(*(__m128 *)a4, *(__m128 *)a4, 170).m128_f32[0] - v16) * v13) + v16;
        v18 = (float)((float)(_mm_shuffle_ps(v11, v11, 255).m128_f32[0] - v10.m128_f32[0]) * v13) + v10.m128_f32[0];
        if ( *((_DWORD *)a5 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a5 + 16LL))(*(_QWORD *)a5);
        *((_DWORD *)a5 + 16) = 70;
        *(float *)a5 = v14;
        *((float *)a5 + 1) = v15;
        *((float *)a5 + 2) = v17;
        *((float *)a5 + 3) = v18;
        break;
      case 71:
        v34 = (float)((float)(*a4 - a3->m128_f32[0]) * a2) + a3->m128_f32[0];
        v35 = (float)((float)(a4[1] - a3->m128_f32[1]) * a2) + a3->m128_f32[1];
        v36 = (float)((float)(a4[2] - a3->m128_f32[2]) * a2) + a3->m128_f32[2];
        v37 = (float)((float)(a4[3] - a3->m128_f32[3]) * a2) + a3->m128_f32[3];
        CExpressionValue::DestroyCurrent(a5);
        *((_DWORD *)a5 + 16) = 71;
        *(float *)a5 = v34;
        *((float *)a5 + 1) = v35;
        *((float *)a5 + 2) = v36;
        *((float *)a5 + 3) = v37;
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
}
