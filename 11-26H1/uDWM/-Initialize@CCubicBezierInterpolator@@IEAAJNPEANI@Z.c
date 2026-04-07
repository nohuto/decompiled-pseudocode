/*
 * XREFs of ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x1800A98C0
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x180085EC8 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x1800A97D0 (-Cleanup@CCubicBezierInterpolator@@IEAAXXZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::Initialize(
        CCubicBezierInterpolator *this,
        double a2,
        double *a3,
        unsigned int a4)
{
  unsigned __int64 v7; // rbp
  unsigned int v8; // esi
  void *v9; // rax
  unsigned int v10; // eax
  void *v11; // rax
  void *v12; // rax
  const struct std::nothrow_t *v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // edx
  __int64 v16; // r8
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm11_4
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm3_4

  v7 = a4;
  v8 = 0;
  v9 = operator new(saturated_mul(a4, 8uLL));
  *((_QWORD *)this + 2) = v9;
  if ( !v9 )
  {
    v10 = 219;
LABEL_7:
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v10, 0LL);
    CCubicBezierInterpolator::Cleanup(this, v13);
    return v8;
  }
  v11 = operator new(saturated_mul(v7, 8uLL));
  *((_QWORD *)this + 3) = v11;
  if ( !v11 )
  {
    v10 = 222;
    goto LABEL_7;
  }
  v12 = operator new(0x320uLL);
  *((_QWORD *)this + 8) = v12;
  if ( !v12 )
  {
    v10 = 225;
    goto LABEL_7;
  }
  if ( a4 )
  {
    v14 = 0LL;
    do
    {
      *(double *)(v14 * 8 + *((_QWORD *)this + 3)) = a3[v14];
      ++v14;
      --v7;
    }
    while ( v7 );
  }
  v15 = 1;
  v16 = 8LL;
  **((_DWORD **)this + 8) = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 792LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 8) + 796LL) = 1065353216;
  v17 = *((double *)this + 4);
  v18 = *((double *)this + 5);
  v19 = *((double *)this + 6);
  v20 = *((double *)this + 7);
  do
  {
    v21 = v15++;
    v22 = (float)v21 / 99.0;
    v23 = (float)((float)(1.0 - v22) * 3.0) * (float)(v22 * v22);
    v24 = (float)(v22 * v22) * v22;
    v25 = (float)((float)((float)(1.0 - v22) * (float)(1.0 - v22)) * 3.0) * v22;
    *(float *)(v16 + *((_QWORD *)this + 8)) = (float)((float)(v23 * v19) + (float)(v25 * v17))
                                            + (float)(v24 * *(float *)(*((_QWORD *)this + 8) + 792LL));
    *(float *)(v16 + *((_QWORD *)this + 8) + 4) = (float)((float)(v23 * v20) + (float)(v25 * v18))
                                                + (float)(v24 * *(float *)(*((_QWORD *)this + 8) + 796LL));
    v16 += 8LL;
  }
  while ( v15 < 0x63 );
  *((double *)this + 1) = a2;
  *((_DWORD *)this + 18) = a4;
  return v8;
}
