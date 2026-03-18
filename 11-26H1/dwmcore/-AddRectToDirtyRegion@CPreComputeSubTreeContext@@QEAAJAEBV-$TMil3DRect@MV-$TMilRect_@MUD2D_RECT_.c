/*
 * XREFs of ?AddRectToDirtyRegion@CPreComputeSubTreeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180059D08
 * Callers:
 *     ?AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z @ 0x1802651D0 (-AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A2A4 (-Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPreComputeSubTreeContext::AddRectToDirtyRegion(__int64 a1, float *a2, __int64 a3)
{
  int v3; // eax
  void *v6; // rcx
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  __m128 v14; // xmm1
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  int v19; // eax
  unsigned int v20; // ebx
  __m128 v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v3 = *(_DWORD *)(a1 + 280);
  v23 = 0LL;
  v22 = 0LL;
  if ( v3 )
    v6 = (void *)(*(_QWORD *)(a1 + 272) + 68LL * (unsigned int)(v3 - 1));
  else
    v6 = &CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v6, a2, v22.m128_f32);
  v7 = v22.m128_f32[2];
  v8 = v22.m128_f32[0];
  v9 = v22.m128_f32[3];
  v10 = v22.m128_f32[1];
  if ( v22.m128_f32[2] > v22.m128_f32[0] && v22.m128_f32[3] > v22.m128_f32[1] )
  {
    v11 = *(_DWORD *)(a3 + 96);
    if ( *(_DWORD *)(a1 + 336) || (v11 & 0x200) != 0 )
    {
      v12 = FLOAT_4_0;
    }
    else if ( (v11 & 0x400) != 0 )
    {
      v12 = FLOAT_0_5;
    }
    else
    {
      v12 = 0.0;
    }
    if ( (v11 & 0x800) != 0 )
      v12 = v12 + 0.5;
    if ( v12 != 0.0 )
    {
      v8 = v22.m128_f32[0] - v12;
      v10 = v22.m128_f32[1] - v12;
      v7 = v22.m128_f32[2] + v12;
      v9 = v22.m128_f32[3] + v12;
      v22.m128_f32[0] = v22.m128_f32[0] - v12;
      v22.m128_f32[1] = v22.m128_f32[1] - v12;
      v22.m128_f32[2] = v22.m128_f32[2] + v12;
      v22.m128_f32[3] = v22.m128_f32[3] + v12;
    }
  }
  v13 = *(_DWORD *)(a1 + 304);
  if ( !v13 )
    goto LABEL_23;
  v14 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 296) + 16LL * (unsigned int)(v13 - 1)));
  v22 = v14;
  v15 = v14.m128_f32[0];
  if ( v8 > v14.m128_f32[0] )
  {
    v22.m128_f32[0] = v8;
    v15 = v8;
    v14 = v22;
  }
  v16 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  if ( v10 > v16 )
  {
    v22.m128_f32[1] = v10;
    v16 = v10;
    v14 = v22;
  }
  v17 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
  if ( v17 > v7 )
  {
    v22.m128_f32[2] = v7;
    v17 = v7;
    v14 = v22;
  }
  v18 = _mm_shuffle_ps(v14, v14, 255).m128_f32[0];
  if ( v18 > v9 )
  {
    v22.m128_f32[3] = v9;
    v18 = v9;
    v14 = v22;
  }
  if ( v17 <= v15 || v18 <= v16 )
  {
    v22 = 0uLL;
LABEL_23:
    v14 = v22;
  }
  v22 = v14;
  if ( _mm_shuffle_ps(v14, v14, 170).m128_f32[0] <= v14.m128_f32[0] )
    return 0LL;
  if ( _mm_shuffle_ps(v14, v14, 255).m128_f32[0] <= _mm_shuffle_ps(v14, v14, 85).m128_f32[0] )
    return 0LL;
  v19 = CTreeDirty::Add(*(CTreeDirty **)(a1 + 320));
  v20 = v19;
  if ( v19 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D3,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v19,
    v22.m128_i32[0]);
  return v20;
}
