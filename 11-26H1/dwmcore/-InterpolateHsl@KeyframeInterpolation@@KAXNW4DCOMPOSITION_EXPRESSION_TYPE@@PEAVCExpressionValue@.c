/*
 * XREFs of ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801A9780
 * Callers:
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E1C0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E350 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E560 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004ECC0 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___ @ 0x18028A09C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_1___.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801A9998 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801A9AD4 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1802B9720 (fmodf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyframeInterpolation::InterpolateHsl(
        ColorSpaceHelpers *a1,
        __int64 a2,
        float *a3,
        float *a4,
        CExpressionValue *a5)
{
  double v5; // xmm0_8
  ColorSpaceHelpers *v7; // rcx
  ColorSpaceHelpers *v8; // rcx
  float v9; // xmm6_4
  float v10; // xmm7_4
  __int64 v11; // r8
  const char *v12; // r9
  float v13; // xmm0_4
  float *v14; // [rsp+48h] [rbp-61h] BYREF
  float v15; // [rsp+50h] [rbp-59h] BYREF
  float v16; // [rsp+54h] [rbp-55h] BYREF
  float v17; // [rsp+58h] [rbp-51h] BYREF
  float v18; // [rsp+5Ch] [rbp-4Dh] BYREF
  float v19; // [rsp+60h] [rbp-49h] BYREF
  float v20; // [rsp+64h] [rbp-45h] BYREF
  __int128 v21; // [rsp+68h] [rbp-41h] BYREF
  _OWORD v22[4]; // [rsp+78h] [rbp-31h] BYREF
  int v23; // [rsp+B8h] [rbp+Fh]

  ColorSpaceHelpers::Color_HSLAfromRGBA(a1, a3[1], a3[2], a3[3], COERCE_FLOAT(&v17), &v18, &v19, &v20, v14);
  ColorSpaceHelpers::Color_HSLAfromRGBA(v7, a4[1], a4[2], a4[3], COERCE_FLOAT(&v14), (float *)&v14 + 1, &v15, &v16, v14);
  v9 = v5;
  v10 = 1.0 - v9;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - *(float *)&v14) & _xmm) >= 3.1415927 )
  {
    if ( v17 > *(float *)&v14 )
      v13 = (float)((float)(*(float *)&v14 + 6.2831855) * v9) + (float)(v10 * v17);
    else
      v13 = (float)((float)(v17 + 6.2831855) * v10) + (float)(v9 * *(float *)&v14);
    fmodf_0(v13, 6.2831855);
  }
  v21 = 0LL;
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v8,
    (float)(v9 * *((float *)&v14 + 1)) + (float)(v10 * v18),
    (float)(v9 * v15) + (float)((float)(1.0 - v9) * v19),
    (float)(v9 * v16) + (float)(v10 * v20),
    COERCE_FLOAT(&v21),
    (float *)&v21 + 1,
    (float *)&v21 + 2,
    (float *)&v21 + 3,
    v14);
  v23 = 70;
  v22[0] = v21;
  CExpressionValue::CopyFrom(a5, (const struct CExpressionValue *)v22, v11, v12);
  if ( v23 == 11 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v22[0] + 16LL))(*(_QWORD *)&v22[0]);
}
