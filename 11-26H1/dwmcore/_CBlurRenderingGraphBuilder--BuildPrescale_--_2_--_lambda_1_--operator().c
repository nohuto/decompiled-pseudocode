/*
 * XREFs of _CBlurRenderingGraphBuilder::BuildPrescale_::_2_::_lambda_1_::operator() @ 0x1800180A8
 * Callers:
 *     std::_Func_impl_no_alloc__CBlurRenderingGraphBuilder::BuildPrescale_::_2_::_lambda_1__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180017F50 (std--_Func_impl_no_alloc__CBlurRenderingGraphBuilder--BuildPrescale_--_2_--_lambda_1__long_CExte.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18001A314 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x18001CA4C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x1800E8CE8 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildPrescale_::_2_::_lambda_1_::operator()(__int64 a1, __int64 a2)
{
  int *v2; // rax
  __int32 v5; // xmm2_4
  int v6; // xmm4_4
  __int64 v7; // rbx
  unsigned int TargetFromSource; // eax
  int v9; // ebx
  CDrawingContext *v10; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+24h] [rbp-24h]
  float v15; // [rsp+2Ch] [rbp-1Ch]
  float v16; // [rsp+30h] [rbp-18h]
  float v17; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(int **)a1;
  COERCE_FLOAT(v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v6 = **(int **)a1;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v6 - 1.0) & v5) < 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 1) - 1.0) & v5) < 0.0000011920929 )
  {
    return 0LL;
  }
  v7 = *(unsigned int *)(a2 + 32);
  v15 = *((float *)v2 + 1);
  v13 = v6;
  v14 = 0LL;
  v16 = 0.0 - (float)(*(float *)&v6 * 0.0);
  v17 = 0.0 - (float)(v15 * 0.0);
  TargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
                       (CExternalEffectGraph::CGraphRenderingContext *)a2,
                       v7,
                       (const struct D2D1::Matrix3x2F *)&v13);
  *(_BYTE *)(112 * v7 + *(_QWORD *)(a2 + 48) + 104) = *(_BYTE *)(a1 + 8);
  v9 = CExternalEffectGraph::CGraphRenderingContext::PushTargetInternal(a2, TargetFromSource, 3LL, a2 + 40);
  if ( v9 < 0 )
  {
    v12 = 280LL;
  }
  else
  {
    v9 = CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
           (CExternalEffectGraph::CGraphRenderingContext *)a2,
           *(_DWORD *)(a1 + 12),
           1u);
    if ( v9 >= 0 )
    {
      v10 = *(CDrawingContext **)a2;
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 36) = -1;
      CDrawingContext::PopLayer(v10);
      return 0LL;
    }
    v12 = 281LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
    (const char *)(unsigned int)v9,
    v13);
  return (unsigned int)v9;
}
