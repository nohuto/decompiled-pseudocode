/*
 * XREFs of _CBlurRenderingGraphBuilder::BuildOnePass_::_2_::_lambda_1_::operator() @ 0x180018B84
 * Callers:
 *     std::_Func_impl_no_alloc__CBlurRenderingGraphBuilder::BuildOnePass_::_2_::_lambda_1__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180018A90 (std--_Func_impl_no_alloc__CBlurRenderingGraphBuilder--BuildOnePass_--_2_--_lambda_1__long_CExter.c)
 * Callees:
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18001A314 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x1800E8CE8 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildOnePass_::_2_::_lambda_1_::operator()(_BYTE *a1, __int64 a2)
{
  __int64 v3; // rsi
  __m128i *v5; // r8
  __m128i *p_si128; // rdx
  __m128i *v7; // r8
  __int64 TargetFromSource; // rdx
  float *v9; // r9
  __int64 v10; // r8
  int v11; // ebx
  __int64 v13; // rdx
  __m128i v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h]
  __m128i si128; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __m128i v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v3 = *(unsigned int *)(a2 + 32);
  if ( a1[1] )
  {
    if ( *a1 == 1 )
    {
      v5 = &v14;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      p_si128 = &si128;
      v17 = 0LL;
      v14 = _mm_load_si128((const __m128i *)&_xmm);
      v15 = 0x3E80000000000000LL;
    }
    else
    {
      v5 = &si128;
      v14 = _mm_load_si128((const __m128i *)&_xmm);
      p_si128 = &v14;
      v15 = 0LL;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v17 = 1048576000LL;
    }
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v18,
      (const struct D2D1::Matrix3x2F *)p_si128,
      (const struct D2D1::Matrix3x2F *)v5);
    v7 = &v14;
    v14 = v18;
    v15 = v19;
  }
  else
  {
    v7 = &si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v17 = 0LL;
  }
  TargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
                       (CExternalEffectGraph::CGraphRenderingContext *)a2,
                       v3,
                       (const struct D2D1::Matrix3x2F *)v7);
  *(_BYTE *)(112 * v3 + *(_QWORD *)(a2 + 48) + 104) = 1;
  if ( *a1 == 1 )
  {
    v9 = (float *)(*(_QWORD *)(a2 + 16) + 1560LL);
    if ( *v9 == 0.0 )
    {
      v10 = 3LL;
      v9 = (float *)(a2 + 40);
    }
    else
    {
      v10 = 4LL;
    }
    v11 = CExternalEffectGraph::CGraphRenderingContext::PushTargetInternal(a2, TargetFromSource, v10, v9);
    if ( v11 >= 0 )
      return 0LL;
    v13 = 326LL;
  }
  else
  {
    v11 = CExternalEffectGraph::CGraphRenderingContext::PushTargetInternal(a2, TargetFromSource, 3LL, a2 + 40);
    if ( v11 >= 0 )
      return 0LL;
    v13 = 330LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
    (const char *)(unsigned int)v11,
    v14.m128i_i32[0]);
  return (unsigned int)v11;
}
