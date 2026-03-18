/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180141F30
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18009E5C8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1801422E8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180143020 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801431C0 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18018DF00 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v2; // rcx
  char v3; // al
  char v4; // al
  const struct D2D_MATRIX_3X2_F *v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  float v8; // xmm8_4
  __m128 *v9; // rbx
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  D2DMatrixHelper *v13; // rcx
  float *v14; // r9
  __int32 v15; // xmm1_4
  __m128 v16; // xmm2
  float m11; // xmm6_4
  unsigned __int64 v18; // xmm12_8
  float left; // xmm7_4
  bool v20; // cc
  int v21; // eax
  unsigned int v22; // r14d
  __int128 *v23; // rdi
  __int128 *v24; // rbx
  _OWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int128 v28; // xmm0
  bool v29; // zf
  __int128 v30; // xmm0
  struct D2D_RECT_F v31; // xmm0
  __int64 v32; // r8
  __int128 v34; // xmm0
  __int64 v35; // rax
  float v36; // xmm7_4
  __m128 v37; // xmm12
  FLOAT v38; // xmm0_4
  FLOAT v39; // xmm2_4
  char v40; // [rsp+38h] [rbp-D0h]
  struct D2D_MATRIX_3X2_F v41; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v42; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD *v43; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v44; // [rsp+80h] [rbp-88h]
  __int64 *v45; // [rsp+88h] [rbp-80h]
  _BYTE v46[16]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-68h] BYREF

  v2 = *((_QWORD *)this + 9);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v2 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v2 + 24);
  v3 = *(_BYTE *)(v2 + 52);
  *((_BYTE *)this + 52) = v3;
  if ( v3 )
  {
    *((_OWORD *)this + 2) = *(_OWORD *)(v2 + 32);
    *((_DWORD *)this + 12) = *(_DWORD *)(v2 + 48);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 2LL);
  v6 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    if ( *(_BYTE *)(v6 + 147) )
      *((_QWORD *)this + 7) = *(_QWORD *)(v6 + 136);
    v7 = *(_BYTE *)(v6 + 147);
LABEL_7:
    *((_BYTE *)this + 64) = v7;
    goto LABEL_8;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL) )
  {
    v35 = *((_QWORD *)this + 9);
    if ( *(_BYTE *)(v35 + 64) )
      *((_QWORD *)this + 7) = *(_QWORD *)(v35 + 56);
    v7 = *(_BYTE *)(v35 + 64);
    goto LABEL_7;
  }
LABEL_8:
  v8 = *((float *)this + 8);
  v9 = (__m128 *)((char *)this + 8);
  v10 = *((float *)this + 9);
  v11 = *((float *)this + 10);
  v12 = *((float *)this + 11);
  v41.m11 = 0.0;
  v42.left = 0.0;
  if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((CNineGridDrawListBrush *)((char *)this + 8), v5) )
  {
    COERCE_FLOAT(v15 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v16 = *v9;
    LODWORD(m11) = v9->m128_i32[0] & v15;
    v18 = *((_QWORD *)this + 3);
    *(__m128 *)&v41.m[1][0] = *v9;
    if ( m11 >= 0.000081380211 || COERCE_FLOAT(*((_DWORD *)this + 5) & v15) >= 0.000081380211 )
    {
      v41.m21 = -1.0;
      LODWORD(left) = *((_DWORD *)this + 5) & v15;
      if ( v16.m128_f32[0] >= 0.0 )
        v41.m21 = 1.0;
      v20 = v41.dy >= 0.0;
      v41.dy = -1.0;
      if ( v20 )
        v41.dy = 1.0;
    }
    else
    {
      LODWORD(m11) = *((_DWORD *)this + 3) & v15;
      LODWORD(left) = *((_DWORD *)this + 4) & v15;
      v41.m22 = -1.0;
      if ( _mm_shuffle_ps(v16, v16, 85).m128_f32[0] >= 0.0 )
        v41.m22 = 1.0;
      if ( v41.dx >= 0.0 )
        v41.dx = 1.0;
      else
        v41.dx = -1.0;
    }
  }
  else
  {
    D2DMatrixHelper::GetScaleDimensions(v13, &v41, &v42.left, v14);
    m11 = v41.m11;
    left = v42.left;
    v37 = (__m128)*((unsigned int *)this + 6);
    v38 = (float)(1.0 / v41.m11) * v9->m128_f32[0];
    v41.m22 = (float)(1.0 / v41.m11) * *((float *)this + 3);
    v41.m21 = v38;
    v39 = (float)(1.0 / v42.left) * *((float *)this + 5);
    v41.dx = (float)(1.0 / v42.left) * *((float *)this + 4);
    v18 = _mm_unpacklo_ps(v37, (__m128)*((unsigned int *)this + 7)).m128_u64[0];
    v41.dy = v39;
  }
  v40 = *((_BYTE *)this + 568);
  v42.left = v8 * m11;
  v42.top = v10 * left;
  v42.right = v11 * m11;
  v42.bottom = v12 * left;
  v21 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 112),
          (int)this + 80,
          &v42,
          (CNineGridDrawListBrush *)((char *)this + 96),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 80),
          v40);
  v22 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x62u, 0LL);
  }
  else if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v23 = (__int128 *)*((_QWORD *)this + 61);
    v24 = (__int128 *)*((_QWORD *)this + 60);
    v43 = v46;
    v44 = v46;
    v45 = &v47;
    v25 = (_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
                      &v43,
                      0LL,
                      v23 - v24);
    while ( v24 != v23 )
    {
      v34 = *v24++;
      *v25++ = v34;
    }
    v26 = (__int64)v43;
    v27 = (v44 - (_BYTE *)v43) >> 4;
    if ( v27 )
    {
      v28 = *v43;
      *((_BYTE *)this + 569) = 1;
      *(_OWORD *)((char *)this + 552) = v28;
    }
    v29 = *((_BYTE *)this + 64) == 0;
    v30 = *(_OWORD *)&v41.m[1][0];
    *((_BYTE *)this + 52) = 1;
    *(_OWORD *)((char *)this + 8) = v30;
    v31 = v42;
    *((_QWORD *)this + 3) = v18;
    *((struct D2D_RECT_F *)this + 2) = v31;
    if ( !v29 )
    {
      v36 = left * *((float *)this + 15);
      *((float *)this + 14) = m11 * *((float *)this + 14);
      *((float *)this + 15) = v36;
    }
    if ( v27 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v41.m[1], v26, v27);
      v44 -= 16 * v32;
    }
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v43);
  }
  return v22;
}
