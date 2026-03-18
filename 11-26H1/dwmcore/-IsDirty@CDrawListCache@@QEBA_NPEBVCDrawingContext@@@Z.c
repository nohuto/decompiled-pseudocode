/*
 * XREFs of ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258
 * Callers:
 *     ?GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z @ 0x18020284C (-GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z.c)
 *     ?GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z @ 0x180205E10 (-GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180261E50 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@.c)
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18026D570 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ??0CCpuClip@@QEAA@XZ @ 0x180007CF8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?size@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18000E770 (-size@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurf.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x180064CE0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x1800D1CD0 (-GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18013F6F0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x180185E80 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z @ 0x180202B9C (-GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z.c)
 */

char __fastcall CDrawListCache::IsDirty(__m128 *this, const struct CDrawingContext *a2)
{
  __int64 v4; // rdx
  struct CVisual *CurrentVisual; // rsi
  __int64 **TreeData; // rax
  unsigned __int64 v7; // rdx
  __int32 v8; // xmm1_4
  CVisual *v9; // rax
  __m128 v11; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v13[48]; // [rsp+48h] [rbp-9h] BYREF
  int v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+B8h] [rbp+67h] BYREF

  if ( !this[1].m128_u64[1] || this[5].m128_i32[0] != (*((_DWORD *)a2 + 59) != 0) )
    return 1;
  if ( (this[4].m128_i32[2] & 0x238) != 0 )
  {
    if ( (this[4].m128_i32[2] & 0x200) != 0 )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
      TreeData = CVisual::FindTreeData(CurrentVisual, *(const struct CVisualTree **)(v4 + 7944));
      v7 = this[1].m128_u64[1];
      if ( v7 < (unsigned __int64)TreeData[28]
        || (*((_BYTE *)CurrentVisual + 103) & 1) != 0 && v7 < *((_QWORD *)g_pComposition + 87) )
      {
        return 1;
      }
    }
    v14 = 0;
    CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 280), (struct CMILMatrix *)v12);
    if ( (this[4].m128_i8[8] & 8) != 0 && !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v12) )
      return 1;
    if ( (this[4].m128_i8[8] & 0x10) != 0 )
    {
      if ( !CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)v12) )
        return 1;
      v15 = 0LL;
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v12, (float *)&v15, (float *)&v15 + 1);
      COERCE_FLOAT(v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v15 - this[4].m128_f32[0]) & v8) > 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v15 + 1) - this[4].m128_f32[1]) & v8) > 0.000081380211 )
      {
        return 1;
      }
    }
    if ( (this[4].m128_i8[8] & 0x20) != 0 && !CMILMatrix::ProducesUniformZ<1>((__int64)v12) )
      return 1;
  }
  if ( (this[4].m128_i8[12] & 4) != 0 )
  {
    v9 = CDrawingContext::GetCurrentVisual(a2);
    if ( this[2].m128_u64[0] < (unsigned __int64)CVisual::GetCpuClippingData(
                                                   v9,
                                                   *((const struct CVisualTree **)a2 + 993))[3] )
    {
      if ( !detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::size(&this[2].m128_i64[1])
        || this[5].m128_i8[4] )
      {
        return 1;
      }
      CCpuClip::CCpuClip((CCpuClip *)v12);
      CDrawingContext::GetCpuClip(a2, (struct CCpuClip *)v12);
      if ( CCpuClip::HasClip((CCpuClip *)v12) )
      {
        v11 = this[3];
        if ( !CCpuClip::FullyContains(v12, &v11, 0LL) )
        {
          CShapePtr::~CShapePtr((CShapePtr *)v13);
          return 1;
        }
      }
      CShapePtr::~CShapePtr((CShapePtr *)v13);
    }
  }
  return 0;
}
