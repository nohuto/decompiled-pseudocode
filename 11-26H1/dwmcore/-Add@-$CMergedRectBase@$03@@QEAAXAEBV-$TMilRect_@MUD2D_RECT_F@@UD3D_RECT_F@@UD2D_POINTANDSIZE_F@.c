/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800227A0
 * Callers:
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     _CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator() @ 0x180256BFC (_CCaptureRenderTarget--RenderCursors_--_18_--_lambda_2_--operator().c)
 * Callees:
 *     ?EnsureWeights@?$CRectangleCollection@$03@@AEAAXXZ @ 0x18001FE14 (-EnsureWeights@-$CRectangleCollection@$03@@AEAAXXZ.c)
 *     ?CalcOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180021EB0 (-CalcOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 *     ?MoveOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180022200 (-MoveOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMergedRectBase<4>::Add(unsigned int *a1, float *a2, __int64 a3, const char *a4)
{
  __int64 result; // rax
  unsigned int v6; // edi
  unsigned int v7; // ebp
  unsigned int i; // esi
  float v9; // xmm0_4
  float *v10; // r8
  unsigned int v11; // r10d
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // ebp
  unsigned int v15; // r14d
  unsigned int v16; // eax
  int v17; // r9d
  float *v18; // rcx
  __m128 v19; // xmm1
  float v20; // xmm6_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  __int64 v23; // rdx
  float v24; // xmm4_4
  int v25; // eax
  unsigned int v26; // esi
  const __m128i *v27; // rcx
  __m128 v28; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return result;
  v6 = 0;
  if ( *((_BYTE *)a1 + 168) == 1 )
    *((_BYTE *)a1 + 168) = 0;
  result = 2LL * *a1;
  *(_OWORD *)&a1[4 * *a1 + 1] = *(_OWORD *)a2;
  v7 = *a1 + 1;
  *a1 = v7;
  if ( v7 <= 4 )
  {
    *((_BYTE *)a1 + 164) = 1;
    return result;
  }
  if ( v7 > 5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3E,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
      a4);
  if ( *((_BYTE *)a1 + 164) )
  {
    CRectangleCollection<4>::EnsureWeights((__int64)a1);
  }
  else
  {
    for ( i = 0; i < 4; ++i )
      CRectangleCollection<4>::CalcOverhead((__int64)a1, i, 4u);
    while ( ++i < v7 )
      CRectangleCollection<4>::CalcOverhead((__int64)a1, 4u, i);
    while ( ++i < *a1 )
      CRectangleCollection<4>::CalcOverhead((__int64)a1, 4u, i);
  }
  CRectangleCollection<4>::EnsureWeights((__int64)a1);
  v9 = *((float *)a1 + 21);
  v10 = (float *)(a1 + 23);
  v11 = 0;
  v12 = 1;
  v13 = 1;
  v14 = 0;
  v15 = 1;
  do
  {
    if ( v9 == 0.0 )
      break;
    v16 = v11 + 1;
    v11 = 0;
    v17 = v12 + 1;
    if ( v16 != v12 )
    {
      v17 = v12;
      v11 = v16;
    }
    if ( v9 > *v10 )
    {
      v9 = *v10;
      v14 = v11;
      v15 = v17;
    }
    ++v13;
    v10 += 2;
    v12 = v17;
  }
  while ( v13 < 0xA );
  v18 = (float *)&a1[4 * v15 + 1];
  v19 = (__m128)_mm_loadu_si128((const __m128i *)&a1[4 * v14 + 1]);
  v20 = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
  v28 = v19;
  LODWORD(v21) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
  LODWORD(v22) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
  if ( v20 <= v19.m128_f32[0] || (v23 = 0LL, v21 <= v22) )
    v23 = 1LL;
  v24 = v18[2];
  if ( v24 <= *v18 || (v25 = 0, v18[3] <= v18[1]) )
    v25 = 1;
  if ( (_DWORD)v23 )
  {
    if ( !v25
      && (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(v18, v23, v10) )
    {
      v19 = (__m128)_mm_loadu_si128(v27);
      goto LABEL_38;
    }
    v28 = 0uLL;
  }
  else
  {
    if ( v25 )
      goto LABEL_38;
    if ( v19.m128_f32[0] > *v18 )
    {
      v28.m128_f32[0] = *v18;
      v19 = v28;
    }
    if ( v22 > v18[1] )
    {
      v28.m128_f32[1] = v18[1];
      v19 = v28;
    }
    if ( v24 > v20 )
    {
      v28.m128_f32[2] = v18[2];
      v19 = v28;
    }
    if ( v18[3] <= v21 )
      goto LABEL_38;
    v28.m128_f32[3] = v18[3];
  }
  v19 = v28;
LABEL_38:
  *(__m128 *)&a1[4 * v14 + 1] = v19;
  v26 = *a1;
  if ( v15 < *a1 )
    v26 = v15;
  if ( v14 )
  {
    do
      CRectangleCollection<4>::CalcOverhead((__int64)a1, v6++, v14);
    while ( v6 < v14 );
  }
  while ( ++v6 < v26 )
    CRectangleCollection<4>::CalcOverhead((__int64)a1, v14, v6);
  while ( ++v6 < *a1 )
    CRectangleCollection<4>::CalcOverhead((__int64)a1, v14, v6);
  result = *a1 - 1;
  *a1 = result;
  if ( v15 < (unsigned int)result )
  {
    *(_OWORD *)&a1[4 * v15 + 1] = *(_OWORD *)&a1[4 * (unsigned int)result + 1];
    return CRectangleCollection<4>::MoveOverhead(a1, v15, *a1);
  }
  return result;
}
