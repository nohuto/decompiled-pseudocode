/*
 * XREFs of ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z @ 0x180059AC0
 * Callers:
 *     ?AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z @ 0x1802651D0 (-AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A2A4 (-Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisual::AddBoundsToDirtyRegion(CVisual *this, struct CPreComputeSubTreeContext *a2)
{
  __int64 v3; // rcx
  float *v5; // rdx
  int v6; // eax
  void *v7; // rcx
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  int v12; // eax
  float v13; // xmm0_4
  int v14; // eax
  __m128 v15; // xmm1
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  int v20; // eax
  unsigned int v21; // ebx
  __m128 v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v3 = *((_QWORD *)a2 + 41);
  v24 = 0LL;
  v23 = 0LL;
  v5 = (float *)(v3 + 80);
  if ( this != *(CVisual **)(v3 + 72) )
    v5 = (float *)((char *)this + 148);
  v6 = *((_DWORD *)a2 + 70);
  if ( v6 )
    v7 = (void *)(*((_QWORD *)a2 + 34) + 68LL * (unsigned int)(v6 - 1));
  else
    v7 = &CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v7, v5, v23.m128_f32);
  v8 = v23.m128_f32[2];
  v9 = v23.m128_f32[0];
  v10 = v23.m128_f32[3];
  v11 = v23.m128_f32[1];
  if ( v23.m128_f32[2] > v23.m128_f32[0] && v23.m128_f32[3] > v23.m128_f32[1] )
  {
    v12 = *((_DWORD *)this + 24);
    if ( *((_DWORD *)a2 + 84) || (v12 & 0x200) != 0 )
    {
      v13 = FLOAT_4_0;
    }
    else if ( (v12 & 0x400) != 0 )
    {
      v13 = FLOAT_0_5;
    }
    else
    {
      v13 = 0.0;
    }
    if ( (v12 & 0x800) != 0 )
      v13 = v13 + 0.5;
    if ( v13 != 0.0 )
    {
      v9 = v23.m128_f32[0] - v13;
      v11 = v23.m128_f32[1] - v13;
      v8 = v23.m128_f32[2] + v13;
      v10 = v23.m128_f32[3] + v13;
      v23.m128_f32[0] = v23.m128_f32[0] - v13;
      v23.m128_f32[1] = v23.m128_f32[1] - v13;
      v23.m128_f32[2] = v23.m128_f32[2] + v13;
      v23.m128_f32[3] = v23.m128_f32[3] + v13;
    }
  }
  v14 = *((_DWORD *)a2 + 76);
  if ( !v14 )
    goto LABEL_25;
  v15 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)a2 + 37) + 16LL * (unsigned int)(v14 - 1)));
  v23 = v15;
  v16 = v15.m128_f32[0];
  if ( v9 > v15.m128_f32[0] )
  {
    v23.m128_f32[0] = v9;
    v16 = v9;
    v15 = v23;
  }
  v17 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
  if ( v11 > v17 )
  {
    v23.m128_f32[1] = v11;
    v17 = v11;
    v15 = v23;
  }
  v18 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
  if ( v18 > v8 )
  {
    v23.m128_f32[2] = v8;
    v18 = v8;
    v15 = v23;
  }
  v19 = _mm_shuffle_ps(v15, v15, 255).m128_f32[0];
  if ( v19 > v10 )
  {
    v23.m128_f32[3] = v10;
    v19 = v10;
    v15 = v23;
  }
  if ( v18 <= v16 || v19 <= v17 )
  {
    v23 = 0uLL;
LABEL_25:
    v15 = v23;
  }
  v23 = v15;
  if ( _mm_shuffle_ps(v15, v15, 170).m128_f32[0] <= v15.m128_f32[0] )
    return 0LL;
  if ( _mm_shuffle_ps(v15, v15, 255).m128_f32[0] <= _mm_shuffle_ps(v15, v15, 85).m128_f32[0] )
    return 0LL;
  v20 = CTreeDirty::Add(*((CTreeDirty **)a2 + 40));
  v21 = v20;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D3,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v20,
    v23.m128_i32[0]);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1752,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
    (const char *)v21,
    v23.m128_i32[0]);
  return v21;
}
